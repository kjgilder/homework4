% Load the ROS bag file
bag = rosbag('homework4_2024-11-29-14-57-24.bag');

% Display all available topics
disp('Available Topics:');
topicNames = bag.AvailableTopics.Properties.RowNames;
disp(topicNames);

% Define a list of cars to process, including lead and ego cars
cars = {'egocar', 'leadcar', 'car2', 'car3', 'car4', 'car5', 'car6', 'car7'}; % Add more cars as needed

% Initialize containers for plotting
colors = lines(length(cars)); % Use distinct colors for each car
markers = {'-', '--', ':', '-.', '-', '--', ':', '-.'}; % Line styles for each car

% 1. Compare Velocities
figure;
hold on;
for i = 1:length(cars)
    car = cars{i};
    velocityTopic = ['/', car, '/vel_x']; % Velocity topic for the car
    
    try
        % Extract velocity data
        velBag = select(bag, 'Topic', velocityTopic);
        if velBag.NumMessages > 0
            velTS = timeseries(velBag);
            time = velTS.Time - velTS.Time(1); % Normalize time
            plot(time, velTS.Data, 'Color', colors(i, :), 'LineStyle', markers{i}, 'LineWidth', 1.5, ...
                'DisplayName', [car, ' Velocity']);
        else
            disp(['No velocity data for ', car]);
        end
    catch
        disp(['Could not process velocity for ', car]);
    end
end
xlabel('Time (s)');
ylabel('Velocity (m/s)');
title('Car Velocities');
legend show;
grid on;
saveas(gcf, 'compare_velocities_with_egolead.png'); % Save the figure
disp('Saved velocity comparison to compare_velocities_with_egolead.png.');

% 2. Compare Relative Velocities
figure;
hold on;
for i = 1:length(cars)
    car = cars{i};
    relVelTopic = ['/', car, '/rel_vel']; % Relative velocity topic for the car
    
    try
        % Extract relative velocity data
        relVelBag = select(bag, 'Topic', relVelTopic);
        if relVelBag.NumMessages > 0
            relVelTS = timeseries(relVelBag);
            time = relVelTS.Time - relVelTS.Time(1); % Normalize time
            plot(time, relVelTS.Data, 'Color', colors(i, :), 'LineStyle', markers{i}, 'LineWidth', 1.5, ...
                'DisplayName', [car, ' Relative Velocity']);
        else
            disp(['No relative velocity data for ', car]);
        end
    catch
        disp(['Could not process relative velocity for ', car]);
    end
end
xlabel('Time (s)');
ylabel('Relative Velocity (m/s)');
title('Car Relative Velocities');
legend show;
grid on;
saveas(gcf, 'compare_relative_velocities_with_egolead.png'); % Save the figure
disp('Saved relative velocity comparison to compare_relative_velocities_with_egolead.png.');

% 3. Compare Lead Distances
figure;
hold on;
for i = 1:length(cars)
    car = cars{i};
    leadDistTopic = ['/', car, '/lead_dist']; % Lead distance topic for the car
    
    try
        % Extract lead distance data
        leadDistBag = select(bag, 'Topic', leadDistTopic);
        if leadDistBag.NumMessages > 0
            leadDistTS = timeseries(leadDistBag);
            time = leadDistTS.Time - leadDistTS.Time(1); % Normalize time
            plot(time, leadDistTS.Data, 'Color', colors(i, :), 'LineStyle', markers{i}, 'LineWidth', 1.5, ...
                'DisplayName', [car, ' Lead Distance']);
        else
            disp(['No lead distance data for ', car]);
        end
    catch
        disp(['Could not process lead distance for ', car]);
    end
end
xlabel('Time (s)');
ylabel('Lead Distance (m)');
title('Car Lead Distances');
legend show;
grid on;
saveas(gcf, 'compare_lead_distances_with_egolead.png'); % Save the figure
disp('Saved lead distance comparison to compare_lead_distances_with_egolead.png.');

disp('All car comparisons completed.');
