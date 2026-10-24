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

// Function: entry_00290b10
// Address: 0x290b10 - 0x290c98
void entry_00290b10_0x290b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290b10_0x290b10");
#endif

    switch (ctx->pc) {
        case 0x290b50u: goto label_290b50;
        case 0x290b90u: goto label_290b90;
        case 0x290bacu: goto label_290bac;
        case 0x290bbcu: goto label_290bbc;
        case 0x290bccu: goto label_290bcc;
        case 0x290bd8u: goto label_290bd8;
        case 0x290c2cu: goto label_290c2c;
        case 0x290c4cu: goto label_290c4c;
        case 0x290c5cu: goto label_290c5c;
        case 0x290c6cu: goto label_290c6c;
        case 0x290c78u: goto label_290c78;
        default: break;
    }

    ctx->pc = 0x290b10u;

    // 0x290b10: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290b14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x290b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x290b18: 0x244229b0  addiu       $v0, $v0, 0x29B0
    ctx->pc = 0x290b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10672));
    // 0x290b1c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x290b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290b20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290b24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x290b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x290b28: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x290b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x290b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290b30: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x290b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b34: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b38: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x290b38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290b3c: 0x0  nop
    ctx->pc = 0x290b3cu;
    // NOP
    // 0x290b40: 0x0  nop
    ctx->pc = 0x290b40u;
    // NOP
    // 0x290b44: 0x0  nop
    ctx->pc = 0x290b44u;
    // NOP
    // 0x290b48: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x290B48u;
    SET_GPR_U32(ctx, 31, 0x290B50u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x290B48u, 0x290B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B50u;
label_290b50:
    // 0x290b50: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x290b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x290b54: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x290b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x290b58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290b5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x290b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x290b60: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x290b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x290b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290b68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290b6c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x290b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290b70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290b74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x290b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x290b78: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x290b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
    // 0x290b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290b80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290b84: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x290b84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290b88: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x290B88u;
    SET_GPR_U32(ctx, 31, 0x290B90u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x290B88u, 0x290B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B90u;
label_290b90:
    // 0x290b90: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x290b90u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290b94: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290b98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x290b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290b9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290ba0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x290ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290ba4: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x290BA4u;
    SET_GPR_U32(ctx, 31, 0x290BACu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x290BA4u, 0x290BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BACu;
label_290bac:
    // 0x290bac: 0xdfa40038  ld          $a0, 0x38($sp)
    ctx->pc = 0x290bacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x290bb0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290bb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290bb4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x290BB4u;
    SET_GPR_U32(ctx, 31, 0x290BBCu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x290BB4u, 0x290BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BBCu;
label_290bbc:
    // 0x290bbc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x290bbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x290bc0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290bc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290bc4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x290BC4u;
    SET_GPR_U32(ctx, 31, 0x290BCCu);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x290BC4u, 0x290BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BCCu;
label_290bcc:
    // 0x290bcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290bccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290bd0: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x290BD0u;
    SET_GPR_U32(ctx, 31, 0x290BD8u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x290BD0u, 0x290BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BD8u;
label_290bd8:
    // 0x290bd8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x290bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290bdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290be0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x290be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290be8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x290be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x290bec: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x290becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x290bf0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290bf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x290bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290bfc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x290bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290c04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x290c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290c0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x290c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290c10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290c10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290c14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x290c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x290c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290c1c: 0x0  nop
    ctx->pc = 0x290c1cu;
    // NOP
    // 0x290c20: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x290c20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290c24: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x290C24u;
    SET_GPR_U32(ctx, 31, 0x290C2Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x290C24u, 0x290C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C2Cu;
label_290c2c:
    // 0x290c2c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x290c2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290c30: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x290c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290c34: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x290c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x290c38: 0x244229b0  addiu       $v0, $v0, 0x29B0
    ctx->pc = 0x290c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10672));
    // 0x290c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290c40: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x290c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290c44: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x290C44u;
    SET_GPR_U32(ctx, 31, 0x290C4Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x290C44u, 0x290C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C4Cu;
label_290c4c:
    // 0x290c4c: 0xdfa40038  ld          $a0, 0x38($sp)
    ctx->pc = 0x290c4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x290c50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290c50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290c54: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x290C54u;
    SET_GPR_U32(ctx, 31, 0x290C5Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x290C54u, 0x290C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C5Cu;
label_290c5c:
    // 0x290c5c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x290c5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x290c60: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290c60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290c64: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x290C64u;
    SET_GPR_U32(ctx, 31, 0x290C6Cu);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x290C64u, 0x290C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C6Cu;
label_290c6c:
    // 0x290c6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290c6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290c70: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x290C70u;
    SET_GPR_U32(ctx, 31, 0x290C78u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x290C70u, 0x290C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C78u;
label_290c78:
    // 0x290c78: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x290c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290c7c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x290c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x290c80: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x290c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x290c84: 0x24632a00  addiu       $v1, $v1, 0x2A00
    ctx->pc = 0x290c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x290c88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x290c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x290c8c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x290c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290c90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x290c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290c94: 0x0  nop
    ctx->pc = 0x290c94u;
    // NOP
    ctx->pc = 0x290c98u;
}
