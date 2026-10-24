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

// Function: entry_001c34e8
// Address: 0x1c34e8 - 0x1c3518
void entry_001c34e8_0x1c34e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c34e8_0x1c34e8");
#endif

    ctx->pc = 0x1c34e8u;

    // 0x1c34e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c34e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c34ec: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c34ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c34f0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C34F0u;
    {
        const bool branch_taken_0x1c34f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34f0) {
            ctx->pc = 0x1C3530u;
            return;
        }
    }
    ctx->pc = 0x1C34F8u;
    // 0x1c34f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c34f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c34fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3500: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3504: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3508: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c350c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c350cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3510u;
    {
        const bool branch_taken_0x1c3510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3510) {
            ctx->pc = 0x1C3530u;
            return;
        }
    }
    ctx->pc = 0x1C3518u;
}
