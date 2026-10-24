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

// Function: entry_0016ee48
// Address: 0x16ee48 - 0x16ee6c
void entry_0016ee48_0x16ee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ee48_0x16ee48");
#endif

    ctx->pc = 0x16ee48u;

    // 0x16ee48: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x16ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x16ee4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16EE4Cu;
    {
        const bool branch_taken_0x16ee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee4c) {
            ctx->pc = 0x16EE6Cu;
            return;
        }
    }
    ctx->pc = 0x16EE54u;
    // 0x16ee54: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x16ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x16ee58: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x16ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ee5c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x16ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x16ee60: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x16ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x16ee64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EE64u;
    {
        const bool branch_taken_0x16ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee64) {
            ctx->pc = 0x16EE78u;
            return;
        }
    }
    ctx->pc = 0x16EE6Cu;
}
