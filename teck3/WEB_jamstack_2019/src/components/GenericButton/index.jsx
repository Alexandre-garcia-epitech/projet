import * as React from 'react';
import { BaseButton } from 'office-ui-fabric-react/lib/Button';
import "./styles.css";

class GenericButton extends React.Component {
    render() {
        let { children, className, text, onClick, secondaryText, disabled, href, menuProps } = this.props;

        return (
            <div className="gnButton-container">
                <BaseButton
                    className={className}
                    text={text}
                    onClick={onClick}
                    secondaryText={secondaryText}
                    disabled={disabled}
                    href={href}
                    menuProps={menuProps}
                >
                    {children && (
                        children
                    )}
                </BaseButton>
            </div>
        );
    }
}

export default GenericButton;
