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

// Function: entry_001c2d88
// Address: 0x1c2d88 - 0x1c2db8
void entry_001c2d88_0x1c2d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2d88_0x1c2d88");
#endif

    ctx->pc = 0x1c2d88u;

    // 0x1c2d88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d8c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c2d90: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C2D90u;
    {
        const bool branch_taken_0x1c2d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d90) {
            ctx->pc = 0x1C2DD0u;
            return;
        }
    }
    ctx->pc = 0x1C2D98u;
    // 0x1c2d98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2da0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2da8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2dac: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c2dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2db0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2DB0u;
    {
        const bool branch_taken_0x1c2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2db0) {
            ctx->pc = 0x1C2DD0u;
            return;
        }
    }
    ctx->pc = 0x1C2DB8u;
}
