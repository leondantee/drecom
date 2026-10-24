#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00383CC0
// Address: 0x383cc0 - 0x383e50
void sub_00383CC0_0x383cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383CC0_0x383cc0");
#endif

    ctx->pc = 0x383cc0u;

    // 0x383cc0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
    ctx->pc = 0x383CC0u;
    {
        const bool branch_taken_0x383cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x383CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CC0u;
        // 0x383cc4: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x383CC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cc0) {
            ctx->pc = 0x387D04u;
            return;
        }
    }
    ctx->pc = 0x383CC8u;
    // 0x383cc8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
    ctx->pc = 0x383CC8u;
    {
        const bool branch_taken_0x383cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x383CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CC8u;
        // 0x383ccc: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x383CCC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cc8) {
            ctx->pc = 0x387D0Cu;
            return;
        }
    }
    ctx->pc = 0x383CD0u;
    // 0x383cd0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
    ctx->pc = 0x383CD0u;
    {
        const bool branch_taken_0x383cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x383CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CD0u;
        // 0x383cd4: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x383CD4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cd0) {
            ctx->pc = 0x387D14u;
            return;
        }
    }
    ctx->pc = 0x383CD8u;
    // 0x383cd8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
    ctx->pc = 0x383CD8u;
    {
        const bool branch_taken_0x383cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x383CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CD8u;
        // 0x383cdc: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x383CDC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cd8) {
            ctx->pc = 0x387D1Cu;
            return;
        }
    }
    ctx->pc = 0x383CE0u;
    // 0x383ce0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
    ctx->pc = 0x383CE0u;
    {
        const bool branch_taken_0x383ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x383CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CE0u;
        // 0x383ce4: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x383CE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ce0) {
            ctx->pc = 0x387D24u;
            return;
        }
    }
    ctx->pc = 0x383CE8u;
    // 0x383ce8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
    ctx->pc = 0x383CE8u;
    {
        const bool branch_taken_0x383ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x383CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CE8u;
        // 0x383cec: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x383CEC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ce8) {
            ctx->pc = 0x387D2Cu;
            return;
        }
    }
    ctx->pc = 0x383CF0u;
    // 0x383cf0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
    ctx->pc = 0x383CF0u;
    {
        const bool branch_taken_0x383cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x383CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CF0u;
        // 0x383cf4: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x383CF4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cf0) {
            ctx->pc = 0x387D34u;
            return;
        }
    }
    ctx->pc = 0x383CF8u;
    // 0x383cf8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
    ctx->pc = 0x383CF8u;
    {
        const bool branch_taken_0x383cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x383CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CF8u;
        // 0x383cfc: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x383CFC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cf8) {
            ctx->pc = 0x387D3Cu;
            return;
        }
    }
    ctx->pc = 0x383D00u;
    // 0x383d00: 0x0  nop
    ctx->pc = 0x383d00u;
    // NOP
    // 0x383d04: 0x0  nop
    ctx->pc = 0x383d04u;
    // NOP
    // 0x383d08: 0x0  nop
    ctx->pc = 0x383d08u;
    // NOP
    // 0x383d0c: 0x0  nop
    ctx->pc = 0x383d0cu;
    // NOP
    // 0x383d10: 0x0  nop
    ctx->pc = 0x383d10u;
    // NOP
    // 0x383d14: 0x0  nop
    ctx->pc = 0x383d14u;
    // NOP
    // 0x383d18: 0x0  nop
    ctx->pc = 0x383d18u;
    // NOP
    // 0x383d1c: 0x0  nop
    ctx->pc = 0x383d1cu;
    // NOP
    // 0x383d20: 0x0  nop
    ctx->pc = 0x383d20u;
    // NOP
    // 0x383d24: 0x0  nop
    ctx->pc = 0x383d24u;
    // NOP
    // 0x383d28: 0x0  nop
    ctx->pc = 0x383d28u;
    // NOP
    // 0x383d2c: 0x0  nop
    ctx->pc = 0x383d2cu;
    // NOP
    // 0x383d30: 0x0  nop
    ctx->pc = 0x383d30u;
    // NOP
    // 0x383d34: 0x0  nop
    ctx->pc = 0x383d34u;
    // NOP
    // 0x383d38: 0x0  nop
    ctx->pc = 0x383d38u;
    // NOP
    // 0x383d3c: 0x0  nop
    ctx->pc = 0x383d3cu;
    // NOP
    // 0x383d40: 0x0  nop
    ctx->pc = 0x383d40u;
    // NOP
    // 0x383d44: 0x0  nop
    ctx->pc = 0x383d44u;
    // NOP
    // 0x383d48: 0x0  nop
    ctx->pc = 0x383d48u;
    // NOP
    // 0x383d4c: 0x0  nop
    ctx->pc = 0x383d4cu;
    // NOP
    // 0x383d50: 0x0  nop
    ctx->pc = 0x383d50u;
    // NOP
    // 0x383d54: 0x0  nop
    ctx->pc = 0x383d54u;
    // NOP
    // 0x383d58: 0x0  nop
    ctx->pc = 0x383d58u;
    // NOP
    // 0x383d5c: 0x0  nop
    ctx->pc = 0x383d5cu;
    // NOP
    // 0x383d60: 0x0  nop
    ctx->pc = 0x383d60u;
    // NOP
    // 0x383d64: 0x0  nop
    ctx->pc = 0x383d64u;
    // NOP
    // 0x383d68: 0x0  nop
    ctx->pc = 0x383d68u;
    // NOP
    // 0x383d6c: 0x0  nop
    ctx->pc = 0x383d6cu;
    // NOP
    // 0x383d70: 0x0  nop
    ctx->pc = 0x383d70u;
    // NOP
    // 0x383d74: 0x0  nop
    ctx->pc = 0x383d74u;
    // NOP
    // 0x383d78: 0x0  nop
    ctx->pc = 0x383d78u;
    // NOP
    // 0x383d7c: 0x0  nop
    ctx->pc = 0x383d7cu;
    // NOP
    // 0x383d80: 0x0  nop
    ctx->pc = 0x383d80u;
    // NOP
    // 0x383d84: 0x0  nop
    ctx->pc = 0x383d84u;
    // NOP
    // 0x383d88: 0x0  nop
    ctx->pc = 0x383d88u;
    // NOP
    // 0x383d8c: 0x0  nop
    ctx->pc = 0x383d8cu;
    // NOP
    // 0x383d90: 0x0  nop
    ctx->pc = 0x383d90u;
    // NOP
    // 0x383d94: 0x0  nop
    ctx->pc = 0x383d94u;
    // NOP
    // 0x383d98: 0x0  nop
    ctx->pc = 0x383d98u;
    // NOP
    // 0x383d9c: 0x0  nop
    ctx->pc = 0x383d9cu;
    // NOP
    // 0x383da0: 0x0  nop
    ctx->pc = 0x383da0u;
    // NOP
    // 0x383da4: 0x0  nop
    ctx->pc = 0x383da4u;
    // NOP
    // 0x383da8: 0x0  nop
    ctx->pc = 0x383da8u;
    // NOP
    // 0x383dac: 0x0  nop
    ctx->pc = 0x383dacu;
    // NOP
    // 0x383db0: 0x0  nop
    ctx->pc = 0x383db0u;
    // NOP
    // 0x383db4: 0x0  nop
    ctx->pc = 0x383db4u;
    // NOP
    // 0x383db8: 0x0  nop
    ctx->pc = 0x383db8u;
    // NOP
    // 0x383dbc: 0x0  nop
    ctx->pc = 0x383dbcu;
    // NOP
    // 0x383dc0: 0x0  nop
    ctx->pc = 0x383dc0u;
    // NOP
    // 0x383dc4: 0x0  nop
    ctx->pc = 0x383dc4u;
    // NOP
    // 0x383dc8: 0x0  nop
    ctx->pc = 0x383dc8u;
    // NOP
    // 0x383dcc: 0x0  nop
    ctx->pc = 0x383dccu;
    // NOP
    // 0x383dd0: 0x0  nop
    ctx->pc = 0x383dd0u;
    // NOP
    // 0x383dd4: 0x0  nop
    ctx->pc = 0x383dd4u;
    // NOP
    // 0x383dd8: 0x0  nop
    ctx->pc = 0x383dd8u;
    // NOP
    // 0x383ddc: 0x0  nop
    ctx->pc = 0x383ddcu;
    // NOP
    // 0x383de0: 0x0  nop
    ctx->pc = 0x383de0u;
    // NOP
    // 0x383de4: 0x0  nop
    ctx->pc = 0x383de4u;
    // NOP
    // 0x383de8: 0x0  nop
    ctx->pc = 0x383de8u;
    // NOP
    // 0x383dec: 0x0  nop
    ctx->pc = 0x383decu;
    // NOP
    // 0x383df0: 0x0  nop
    ctx->pc = 0x383df0u;
    // NOP
    // 0x383df4: 0x0  nop
    ctx->pc = 0x383df4u;
    // NOP
    // 0x383df8: 0x0  nop
    ctx->pc = 0x383df8u;
    // NOP
    // 0x383dfc: 0x0  nop
    ctx->pc = 0x383dfcu;
    // NOP
    // 0x383e00: 0x0  nop
    ctx->pc = 0x383e00u;
    // NOP
    // 0x383e04: 0x0  nop
    ctx->pc = 0x383e04u;
    // NOP
    // 0x383e08: 0x0  nop
    ctx->pc = 0x383e08u;
    // NOP
    // 0x383e0c: 0x0  nop
    ctx->pc = 0x383e0cu;
    // NOP
    // 0x383e10: 0x0  nop
    ctx->pc = 0x383e10u;
    // NOP
    // 0x383e14: 0x0  nop
    ctx->pc = 0x383e14u;
    // NOP
    // 0x383e18: 0x0  nop
    ctx->pc = 0x383e18u;
    // NOP
    // 0x383e1c: 0x0  nop
    ctx->pc = 0x383e1cu;
    // NOP
    // 0x383e20: 0x0  nop
    ctx->pc = 0x383e20u;
    // NOP
    // 0x383e24: 0x0  nop
    ctx->pc = 0x383e24u;
    // NOP
    // 0x383e28: 0x0  nop
    ctx->pc = 0x383e28u;
    // NOP
    // 0x383e2c: 0x0  nop
    ctx->pc = 0x383e2cu;
    // NOP
    // 0x383e30: 0x0  nop
    ctx->pc = 0x383e30u;
    // NOP
    // 0x383e34: 0x0  nop
    ctx->pc = 0x383e34u;
    // NOP
    // 0x383e38: 0x0  nop
    ctx->pc = 0x383e38u;
    // NOP
    // 0x383e3c: 0x0  nop
    ctx->pc = 0x383e3cu;
    // NOP
    // 0x383e40: 0x0  nop
    ctx->pc = 0x383e40u;
    // NOP
    // 0x383e44: 0x0  nop
    ctx->pc = 0x383e44u;
    // NOP
    // 0x383e48: 0x0  nop
    ctx->pc = 0x383e48u;
    // NOP
    // 0x383e4c: 0x0  nop
    ctx->pc = 0x383e4cu;
    // NOP
    ctx->pc = 0x383e50u;
}
