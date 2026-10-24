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

// Function: entry_00167c80
// Address: 0x167c80 - 0x167cac
void entry_00167c80_0x167c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167c80_0x167c80");
#endif

    ctx->pc = 0x167c80u;

    // 0x167c80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c84: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x167c88: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x167C88u;
    {
        const bool branch_taken_0x167c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c88) {
            ctx->pc = 0x167CACu;
            return;
        }
    }
    ctx->pc = 0x167C90u;
    // 0x167c90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x167c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c98: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x167c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x167c9c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167ca0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x167ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x167ca4: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x167CA4u;
    {
        const bool branch_taken_0x167ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ca4) {
            ctx->pc = 0x167AD4u;
            return;
        }
    }
    ctx->pc = 0x167CACu;
}
