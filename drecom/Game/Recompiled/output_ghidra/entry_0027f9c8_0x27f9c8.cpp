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

// Function: entry_0027f9c8
// Address: 0x27f9c8 - 0x27fa48
void entry_0027f9c8_0x27f9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f9c8_0x27f9c8");
#endif

    switch (ctx->pc) {
        case 0x27f9d0u: goto label_27f9d0;
        case 0x27fa00u: goto label_27fa00;
        case 0x27fa08u: goto label_27fa08;
        case 0x27fa38u: goto label_27fa38;
        case 0x27fa44u: goto label_27fa44;
        default: break;
    }

    ctx->pc = 0x27f9c8u;

    // 0x27f9c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27F9C8u;
    SET_GPR_U32(ctx, 31, 0x27F9D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27F9C8u, 0x27F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9D0u;
label_27f9d0:
    // 0x27f9d0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x27f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x27f9d4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27f9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27f9d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27f9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27f9dc: 0x0  nop
    ctx->pc = 0x27f9dcu;
    // NOP
    // 0x27f9e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27f9e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27f9e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f9e8: 0xc4201b7c  lwc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f9e8u;
    { uint32_t bits = FAST_READ32(0x621B7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f9ec: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x27f9ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27f9f0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27f9f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f9f4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27f9f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f9f8: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F9F8u;
    SET_GPR_U32(ctx, 31, 0x27FA00u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F9F8u, 0x27FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA00u;
label_27fa00:
    // 0x27fa00: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27FA00u;
    SET_GPR_U32(ctx, 31, 0x27FA08u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27FA00u, 0x27FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA08u;
label_27fa08:
    // 0x27fa08: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x27fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x27fa0c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27fa10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27fa10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fa14: 0x0  nop
    ctx->pc = 0x27fa14u;
    // NOP
    // 0x27fa18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27fa18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27fa1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fa20: 0xc4201b7c  lwc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27fa20u;
    { uint32_t bits = FAST_READ32(0x621B7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fa24: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x27fa24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27fa28: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27fa28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fa2c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27fa2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fa30: 0xc067808  jal         func_19E020
    ctx->pc = 0x27FA30u;
    SET_GPR_U32(ctx, 31, 0x27FA38u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27FA30u, 0x27FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA38u;
label_27fa38:
    // 0x27fa38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fa3c: 0xc084964  jal         func_212590
    ctx->pc = 0x27FA3Cu;
    SET_GPR_U32(ctx, 31, 0x27FA44u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27FA3Cu, 0x27FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA44u;
label_27fa44:
    // 0x27fa44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27fa44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x27fa48u;
}
