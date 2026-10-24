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

// Function: entry_0027cb8c
// Address: 0x27cb8c - 0x27cbd8
void entry_0027cb8c_0x27cb8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027cb8c_0x27cb8c");
#endif

    switch (ctx->pc) {
        case 0x27cba4u: goto label_27cba4;
        case 0x27cbbcu: goto label_27cbbc;
        case 0x27cbd4u: goto label_27cbd4;
        default: break;
    }

    ctx->pc = 0x27cb8cu;

    // 0x27cb8c: 0x2404040f  addiu       $a0, $zero, 0x40F
    ctx->pc = 0x27cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x27cb90: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cb94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cb98: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cb9c: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CB9Cu;
    SET_GPR_U32(ctx, 31, 0x27CBA4u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CB9Cu, 0x27CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBA4u;
label_27cba4:
    // 0x27cba4: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x27cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x27cba8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cbac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cbb0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cbb4: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CBB4u;
    SET_GPR_U32(ctx, 31, 0x27CBBCu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CBB4u, 0x27CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBBCu;
label_27cbbc:
    // 0x27cbbc: 0x24040411  addiu       $a0, $zero, 0x411
    ctx->pc = 0x27cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x27cbc0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cbc4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cbc8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cbcc: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CBCCu;
    SET_GPR_U32(ctx, 31, 0x27CBD4u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CBCCu, 0x27CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CBD4u;
label_27cbd4:
    // 0x27cbd4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27cbd4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x27cbd8u;
}
