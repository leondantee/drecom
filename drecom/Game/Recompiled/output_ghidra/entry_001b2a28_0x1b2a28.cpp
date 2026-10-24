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

// Function: entry_001b2a28
// Address: 0x1b2a28 - 0x1b2a54
void entry_001b2a28_0x1b2a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2a28_0x1b2a28");
#endif

    ctx->pc = 0x1b2a28u;

    // 0x1b2a28: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x1b2a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1b2a2c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B2A2Cu;
    {
        const bool branch_taken_0x1b2a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a2c) {
            ctx->pc = 0x1B29D4u;
            return;
        }
    }
    ctx->pc = 0x1B2A34u;
    // 0x1b2a34: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2A34u;
    {
        const bool branch_taken_0x1b2a34 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a34) {
            ctx->pc = 0x1B2A54u;
            return;
        }
    }
    ctx->pc = 0x1B2A3Cu;
    // 0x1b2a3c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1b2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b2a40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2A40u;
    {
        const bool branch_taken_0x1b2a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a40) {
            ctx->pc = 0x1B2A54u;
            return;
        }
    }
    ctx->pc = 0x1B2A48u;
    // 0x1b2a48: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b2a4c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1B2A4Cu;
    {
        const bool branch_taken_0x1b2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a4c) {
            ctx->pc = 0x1B2CF8u;
            return;
        }
    }
    ctx->pc = 0x1B2A54u;
}
