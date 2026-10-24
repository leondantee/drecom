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

// Function: entry_0027fac8
// Address: 0x27fac8 - 0x27fb48
void entry_0027fac8_0x27fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027fac8_0x27fac8");
#endif

    switch (ctx->pc) {
        case 0x27fad0u: goto label_27fad0;
        case 0x27fb00u: goto label_27fb00;
        case 0x27fb08u: goto label_27fb08;
        case 0x27fb38u: goto label_27fb38;
        case 0x27fb44u: goto label_27fb44;
        default: break;
    }

    ctx->pc = 0x27fac8u;

    // 0x27fac8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x27FAC8u;
    SET_GPR_U32(ctx, 31, 0x27FAD0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x27FAC8u, 0x27FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAD0u;
label_27fad0:
    // 0x27fad0: 0x3c02bc8e  lui         $v0, 0xBC8E
    ctx->pc = 0x27fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48270 << 16));
    // 0x27fad4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27fad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27fad8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27fad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fadc: 0x0  nop
    ctx->pc = 0x27fadcu;
    // NOP
    // 0x27fae0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27fae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27fae4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fae8: 0xc4201b7c  lwc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27fae8u;
    { uint32_t bits = FAST_READ32(0x621B7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27faec: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x27faecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27faf0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27faf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27faf4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27faf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27faf8: 0xc067808  jal         func_19E020
    ctx->pc = 0x27FAF8u;
    SET_GPR_U32(ctx, 31, 0x27FB00u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27FAF8u, 0x27FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB00u;
label_27fb00:
    // 0x27fb00: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x27FB00u;
    SET_GPR_U32(ctx, 31, 0x27FB08u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x27FB00u, 0x27FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB08u;
label_27fb08:
    // 0x27fb08: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x27fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x27fb0c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27fb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27fb10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27fb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fb14: 0x0  nop
    ctx->pc = 0x27fb14u;
    // NOP
    // 0x27fb18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27fb18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27fb1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fb20: 0xc4201b7c  lwc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27fb20u;
    { uint32_t bits = FAST_READ32(0x621B7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fb24: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x27fb24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27fb28: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27fb28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fb2c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27fb2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fb30: 0xc067808  jal         func_19E020
    ctx->pc = 0x27FB30u;
    SET_GPR_U32(ctx, 31, 0x27FB38u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27FB30u, 0x27FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB38u;
label_27fb38:
    // 0x27fb38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fb3c: 0xc084964  jal         func_212590
    ctx->pc = 0x27FB3Cu;
    SET_GPR_U32(ctx, 31, 0x27FB44u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27FB3Cu, 0x27FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB44u;
label_27fb44:
    // 0x27fb44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27fb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x27fb48u;
}
