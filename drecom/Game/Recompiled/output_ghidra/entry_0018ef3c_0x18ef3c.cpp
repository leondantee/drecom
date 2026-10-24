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

// Function: entry_0018ef3c
// Address: 0x18ef3c - 0x18ef68
void entry_0018ef3c_0x18ef3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef3c_0x18ef3c");
#endif

    ctx->pc = 0x18ef3cu;

    // 0x18ef3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef40: 0xac400b2c  sw          $zero, 0xB2C($v0)
    ctx->pc = 0x18ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2860), GPR_U32(ctx, 0));
    // 0x18ef44: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x18ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x18ef48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EF48u;
    {
        const bool branch_taken_0x18ef48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ef48) {
            ctx->pc = 0x18EF68u;
            return;
        }
    }
    ctx->pc = 0x18EF50u;
    // 0x18ef50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef54: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x18ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x18ef58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ef5c: 0xac400b28  sw          $zero, 0xB28($v0)
    ctx->pc = 0x18ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2856), GPR_U32(ctx, 0));
    // 0x18ef60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18EF60u;
    {
        const bool branch_taken_0x18ef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef60) {
            ctx->pc = 0x18EF80u;
            return;
        }
    }
    ctx->pc = 0x18EF68u;
}
