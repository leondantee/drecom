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

// Function: entry_00169d70
// Address: 0x169d70 - 0x169d9c
void entry_00169d70_0x169d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169d70_0x169d70");
#endif

    ctx->pc = 0x169d70u;

    // 0x169d70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d74: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x169d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x169d78: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x169D78u;
    {
        const bool branch_taken_0x169d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d78) {
            ctx->pc = 0x169D9Cu;
            return;
        }
    }
    ctx->pc = 0x169D80u;
    // 0x169d80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x169d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d88: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x169d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x169d8c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x169d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169d90: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x169d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x169d94: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
    ctx->pc = 0x169D94u;
    {
        const bool branch_taken_0x169d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d94) {
            ctx->pc = 0x169B94u;
            return;
        }
    }
    ctx->pc = 0x169D9Cu;
}
