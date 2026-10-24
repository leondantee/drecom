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

// Function: entry_0025cbe8
// Address: 0x25cbe8 - 0x25ccb0
void entry_0025cbe8_0x25cbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025cbe8_0x25cbe8");
#endif

    switch (ctx->pc) {
        case 0x25cc58u: goto label_25cc58;
        case 0x25cc6cu: goto label_25cc6c;
        case 0x25cc80u: goto label_25cc80;
        case 0x25cca8u: goto label_25cca8;
        default: break;
    }

    ctx->pc = 0x25cbe8u;

    // 0x25cbe8: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cbec: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25cbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25cbf0: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25cbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cbf4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25cbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25cbf8: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cbfc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25cbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x25cc00: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cc04: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cc08: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x25cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x25cc0c: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25cc10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25cc14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25cc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25cc18: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25cc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cc1c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cc20: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x25cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x25cc24: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25cc28: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x25cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25cc2c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x25cc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x25cc30: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cc34: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cc38: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x25cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x25cc3c: 0x8c640330  lw          $a0, 0x330($v1)
    ctx->pc = 0x25cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x25cc40: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x25cc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25cc44: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x25cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x25cc48: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25cc48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cc4c: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25cc50: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x25CC50u;
    SET_GPR_U32(ctx, 31, 0x25CC58u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25CC50u, 0x25CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC58u;
label_25cc58:
    // 0x25cc58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25cc58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cc5c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25cc5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cc60: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25cc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25cc64: 0xc067808  jal         func_19E020
    ctx->pc = 0x25CC64u;
    SET_GPR_U32(ctx, 31, 0x25CC6Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25CC64u, 0x25CC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC6Cu;
label_25cc6c:
    // 0x25cc6c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25cc6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cc70: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25cc70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cc74: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25cc78: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25CC78u;
    SET_GPR_U32(ctx, 31, 0x25CC80u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25CC78u, 0x25CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC80u;
label_25cc80:
    // 0x25cc80: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25cc80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25cc84: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cc88: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x25cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x25cc8c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x25cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x25cc90: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x25cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25cc94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25cc94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25cc98: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25cc9c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25cc9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cca0: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25CCA0u;
    SET_GPR_U32(ctx, 31, 0x25CCA8u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25CCA0u, 0x25CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCA8u;
label_25cca8:
    // 0x25cca8: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x25CCA8u;
    {
        const bool branch_taken_0x25cca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cca8) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CCB0u;
}
