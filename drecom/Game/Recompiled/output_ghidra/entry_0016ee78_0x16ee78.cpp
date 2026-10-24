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

// Function: entry_0016ee78
// Address: 0x16ee78 - 0x16ee9c
void entry_0016ee78_0x16ee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ee78_0x16ee78");
#endif

    ctx->pc = 0x16ee78u;

    // 0x16ee78: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x16ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x16ee7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16EE7Cu;
    {
        const bool branch_taken_0x16ee7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee7c) {
            ctx->pc = 0x16EE9Cu;
            return;
        }
    }
    ctx->pc = 0x16EE84u;
    // 0x16ee84: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x16ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x16ee88: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ee8c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x16ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x16ee90: 0xae021320  sw          $v0, 0x1320($s0)
    ctx->pc = 0x16ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4896), GPR_U32(ctx, 2));
    // 0x16ee94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EE94u;
    {
        const bool branch_taken_0x16ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee94) {
            ctx->pc = 0x16EEA8u;
            return;
        }
    }
    ctx->pc = 0x16EE9Cu;
}
