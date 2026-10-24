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

// Function: entry_0025bc10
// Address: 0x25bc10 - 0x25bce4
void entry_0025bc10_0x25bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025bc10_0x25bc10");
#endif

    switch (ctx->pc) {
        case 0x25bc80u: goto label_25bc80;
        case 0x25bc98u: goto label_25bc98;
        case 0x25bcb0u: goto label_25bcb0;
        case 0x25bcd8u: goto label_25bcd8;
        default: break;
    }

    ctx->pc = 0x25bc10u;

    // 0x25bc10: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc14: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25bc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25bc18: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc1c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25bc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25bc20: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc24: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25bc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x25bc28: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc2c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bc30: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x25bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x25bc34: 0x8c430330  lw          $v1, 0x330($v0)
    ctx->pc = 0x25bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25bc38: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x25bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25bc3c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25bc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25bc40: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc44: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bc48: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x25bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x25bc4c: 0x8ca40330  lw          $a0, 0x330($a1)
    ctx->pc = 0x25bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x25bc50: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25bc54: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25bc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25bc58: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc5c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bc60: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x25bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x25bc64: 0x8c450330  lw          $a1, 0x330($v0)
    ctx->pc = 0x25bc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25bc68: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x25bc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25bc6c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x25bc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x25bc70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25bc70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25bc74: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bc78: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x25BC78u;
    SET_GPR_U32(ctx, 31, 0x25BC80u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25BC78u, 0x25BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC80u;
label_25bc80:
    // 0x25bc80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25bc80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25bc84: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25bc84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25bc88: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25bc88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25bc8c: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bc90: 0xc067808  jal         func_19E020
    ctx->pc = 0x25BC90u;
    SET_GPR_U32(ctx, 31, 0x25BC98u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25BC90u, 0x25BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC98u;
label_25bc98:
    // 0x25bc98: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25bc98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25bc9c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25bc9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25bca0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25bca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25bca4: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bca8: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25BCA8u;
    SET_GPR_U32(ctx, 31, 0x25BCB0u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25BCA8u, 0x25BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BCB0u;
label_25bcb0:
    // 0x25bcb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25bcb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25bcb4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bcb8: 0x142980  sll         $a1, $s4, 6
    ctx->pc = 0x25bcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25bcbc: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x25bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x25bcc0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25bcc4: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x25bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25bcc8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x25bcc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25bccc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25bcccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25bcd0: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25BCD0u;
    SET_GPR_U32(ctx, 31, 0x25BCD8u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25BCD0u, 0x25BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BCD8u;
label_25bcd8:
    // 0x25bcd8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25bcd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25bcdc: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x25BCDCu;
    {
        const bool branch_taken_0x25bcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcdc) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25BCE4u;
}
