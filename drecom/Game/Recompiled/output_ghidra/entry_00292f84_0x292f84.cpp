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

// Function: entry_00292f84
// Address: 0x292f84 - 0x292ff8
void entry_00292f84_0x292f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292f84_0x292f84");
#endif

    switch (ctx->pc) {
        case 0x292facu: goto label_292fac;
        case 0x292fc4u: goto label_292fc4;
        case 0x292fdcu: goto label_292fdc;
        case 0x292ff0u: goto label_292ff0;
        default: break;
    }

    ctx->pc = 0x292f84u;

    // 0x292f84: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x292f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x292f88: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x292f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x292f8c: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x292f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x292f90: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x292f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x292f94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x292f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292f98: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x292f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x292f9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292fa0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292fa0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292fa4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x292FA4u;
    SET_GPR_U32(ctx, 31, 0x292FACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x292FA4u, 0x292FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FACu;
label_292fac:
    // 0x292fac: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fb0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fb4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fb8: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x292fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x292fbc: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292FBCu;
    SET_GPR_U32(ctx, 31, 0x292FC4u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292FBCu, 0x292FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FC4u;
label_292fc4:
    // 0x292fc4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fc8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fcc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292fd0: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x292fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x292fd4: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292FD4u;
    SET_GPR_U32(ctx, 31, 0x292FDCu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292FD4u, 0x292FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FDCu;
label_292fdc:
    // 0x292fdc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x292fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292fe0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292fe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292fe4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292fe4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292fe8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x292FE8u;
    SET_GPR_U32(ctx, 31, 0x292FF0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x292FE8u, 0x292FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FF0u;
label_292ff0:
    // 0x292ff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x292ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292ff4: 0xae035dc0  sw          $v1, 0x5DC0($s0)
    ctx->pc = 0x292ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 3));
    ctx->pc = 0x292ff8u;
}
