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

// Function: entry_00340944
// Address: 0x340944 - 0x340980
void entry_00340944_0x340944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340944_0x340944");
#endif

    switch (ctx->pc) {
        case 0x340968u: goto label_340968;
        case 0x340978u: goto label_340978;
        default: break;
    }

    ctx->pc = 0x340944u;

    // 0x340944: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340948: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34094c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34094cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340950: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340950u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340954: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x340954u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340958: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x340958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x34095c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x34095cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x340960: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340960u;
    SET_GPR_U32(ctx, 31, 0x340968u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340960u, 0x340968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340968u;
label_340968:
    // 0x340968: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34096c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x34096cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340970: 0xc0cfcbc  jal         func_33F2F0
    ctx->pc = 0x340970u;
    SET_GPR_U32(ctx, 31, 0x340978u);
    ctx->pc = 0x33F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F2F0u, 0x340970u, 0x340978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340978u;
label_340978:
    // 0x340978: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x340978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34097c: 0x0  nop
    ctx->pc = 0x34097cu;
    // NOP
    ctx->pc = 0x340980u;
}
