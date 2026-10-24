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

// Function: entry_0016ae10
// Address: 0x16ae10 - 0x16ae3c
void entry_0016ae10_0x16ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ae10_0x16ae10");
#endif

    ctx->pc = 0x16ae10u;

    // 0x16ae10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ae14: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x16ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16ae18: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16AE18u;
    {
        const bool branch_taken_0x16ae18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae18) {
            ctx->pc = 0x16AE3Cu;
            return;
        }
    }
    ctx->pc = 0x16AE20u;
    // 0x16ae20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x16ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ae24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ae28: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x16ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16ae2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ae30: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x16ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x16ae34: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x16AE34u;
    {
        const bool branch_taken_0x16ae34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae34) {
            ctx->pc = 0x16AC64u;
            return;
        }
    }
    ctx->pc = 0x16AE3Cu;
}
