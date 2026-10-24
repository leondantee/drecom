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

// Function: entry_001bf970
// Address: 0x1bf970 - 0x1bf9a0
void entry_001bf970_0x1bf970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf970_0x1bf970");
#endif

    ctx->pc = 0x1bf970u;

    // 0x1bf970: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf974: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1bf974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1bf978: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF978u;
    {
        const bool branch_taken_0x1bf978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf978) {
            ctx->pc = 0x1BF9B8u;
            return;
        }
    }
    ctx->pc = 0x1BF980u;
    // 0x1bf980: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf984: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf988: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf98c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf990: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf994: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF998u;
    {
        const bool branch_taken_0x1bf998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf998) {
            ctx->pc = 0x1BF9B8u;
            return;
        }
    }
    ctx->pc = 0x1BF9A0u;
}
