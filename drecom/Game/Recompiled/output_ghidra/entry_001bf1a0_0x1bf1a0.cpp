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

// Function: entry_001bf1a0
// Address: 0x1bf1a0 - 0x1bf1d0
void entry_001bf1a0_0x1bf1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf1a0_0x1bf1a0");
#endif

    ctx->pc = 0x1bf1a0u;

    // 0x1bf1a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf1a4: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1bf1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1bf1a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF1A8u;
    {
        const bool branch_taken_0x1bf1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf1a8) {
            ctx->pc = 0x1BF1E8u;
            return;
        }
    }
    ctx->pc = 0x1BF1B0u;
    // 0x1bf1b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf1b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf1b8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf1bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf1c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf1c4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf1c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF1C8u;
    {
        const bool branch_taken_0x1bf1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf1c8) {
            ctx->pc = 0x1BF1E8u;
            return;
        }
    }
    ctx->pc = 0x1BF1D0u;
}
