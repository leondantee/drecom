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

// Function: entry_0025ca9c
// Address: 0x25ca9c - 0x25cb08
void entry_0025ca9c_0x25ca9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ca9c_0x25ca9c");
#endif

    switch (ctx->pc) {
        case 0x25caacu: goto label_25caac;
        case 0x25cac4u: goto label_25cac4;
        case 0x25cadcu: goto label_25cadc;
        case 0x25cb00u: goto label_25cb00;
        default: break;
    }

    ctx->pc = 0x25ca9cu;

    // 0x25ca9c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25ca9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25caa0: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25caa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25caa4: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x25CAA4u;
    SET_GPR_U32(ctx, 31, 0x25CAACu);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25CAA4u, 0x25CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CAACu;
label_25caac:
    // 0x25caac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25caacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25cab0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25cab0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cab4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25cab4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cab8: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25cabc: 0xc067808  jal         func_19E020
    ctx->pc = 0x25CABCu;
    SET_GPR_U32(ctx, 31, 0x25CAC4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25CABCu, 0x25CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CAC4u;
label_25cac4:
    // 0x25cac4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25cac4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25cac8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25cac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cacc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25caccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25cad0: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25cad4: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25CAD4u;
    SET_GPR_U32(ctx, 31, 0x25CADCu);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25CAD4u, 0x25CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CADCu;
label_25cadc:
    // 0x25cadc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25cadcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25cae0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cae4: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x25cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x25cae8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x25cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x25caec: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x25caecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25caf0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25caf4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25caf4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25caf8: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25CAF8u;
    SET_GPR_U32(ctx, 31, 0x25CB00u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25CAF8u, 0x25CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB00u;
label_25cb00:
    // 0x25cb00: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x25CB00u;
    {
        const bool branch_taken_0x25cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb00) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CB08u;
}
