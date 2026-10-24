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

// Function: entry_001c50a8
// Address: 0x1c50a8 - 0x1c50d8
void entry_001c50a8_0x1c50a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c50a8_0x1c50a8");
#endif

    ctx->pc = 0x1c50a8u;

    // 0x1c50a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c50ac: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c50acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c50b0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C50B0u;
    {
        const bool branch_taken_0x1c50b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c50b0) {
            ctx->pc = 0x1C50F0u;
            return;
        }
    }
    ctx->pc = 0x1C50B8u;
    // 0x1c50b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c50b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c50c0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c50c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c50c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c50c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c50cc: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c50ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c50d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C50D0u;
    {
        const bool branch_taken_0x1c50d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c50d0) {
            ctx->pc = 0x1C50F0u;
            return;
        }
    }
    ctx->pc = 0x1C50D8u;
}
