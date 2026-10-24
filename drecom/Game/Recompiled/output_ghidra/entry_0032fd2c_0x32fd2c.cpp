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

// Function: entry_0032fd2c
// Address: 0x32fd2c - 0x32fd54
void entry_0032fd2c_0x32fd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fd2c_0x32fd2c");
#endif

    switch (ctx->pc) {
        case 0x32fd50u: goto label_32fd50;
        default: break;
    }

    ctx->pc = 0x32fd2cu;

    // 0x32fd2c: 0x240700a1  addiu       $a3, $zero, 0xA1
    ctx->pc = 0x32fd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x32fd30: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x32fd30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x32fd34: 0x26680520  addiu       $t0, $s3, 0x520
    ctx->pc = 0x32fd34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
    // 0x32fd38: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x32fd38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x32fd3c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32fd40: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x32fd40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fd44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fd48: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32FD48u;
    SET_GPR_U32(ctx, 31, 0x32FD50u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FD48u, 0x32FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD50u;
label_32fd50:
    // 0x32fd50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32fd50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x32fd54u;
}
