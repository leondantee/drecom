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

// Function: entry_0020776c
// Address: 0x20776c - 0x207810
void entry_0020776c_0x20776c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020776c_0x20776c");
#endif

    switch (ctx->pc) {
        case 0x207778u: goto label_207778;
        case 0x20778cu: goto label_20778c;
        case 0x20779cu: goto label_20779c;
        default: break;
    }

    ctx->pc = 0x20776cu;

    // 0x20776c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x20776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207770: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x207770u;
    SET_GPR_U32(ctx, 31, 0x207778u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x207770u, 0x207778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207778u;
label_207778:
    // 0x207778: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x207778u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20777c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x20777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207780: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x207780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207784: 0xc080f60  jal         func_203D80
    ctx->pc = 0x207784u;
    SET_GPR_U32(ctx, 31, 0x20778Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x207784u, 0x20778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20778Cu;
label_20778c:
    // 0x20778c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20778cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x207790: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207794: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x207794u;
    SET_GPR_U32(ctx, 31, 0x20779Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x207794u, 0x20779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20779Cu;
label_20779c:
    // 0x20779c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20779cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2077a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2077a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2077a4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2077a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2077a8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2077a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2077ac: 0x24831358  addiu       $v1, $a0, 0x1358
    ctx->pc = 0x2077acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4952));
    // 0x2077b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2077b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2077b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2077b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2077b8: 0x0  nop
    ctx->pc = 0x2077b8u;
    // NOP
    // 0x2077bc: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x2077BCu;
    {
        const bool branch_taken_0x2077bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2077bc) {
            ctx->pc = 0x207810u;
            return;
        }
    }
    ctx->pc = 0x2077C4u;
    // 0x2077c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2077c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2077c8: 0x24631358  addiu       $v1, $v1, 0x1358
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4952));
    // 0x2077cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2077ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2077d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2077d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2077d4: 0x0  nop
    ctx->pc = 0x2077d4u;
    // NOP
    // 0x2077d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2077d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2077dc: 0x0  nop
    ctx->pc = 0x2077dcu;
    // NOP
    // 0x2077e0: 0x4500008b  bc1f        . + 4 + (0x8B << 2)
    ctx->pc = 0x2077E0u;
    {
        const bool branch_taken_0x2077e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2077e0) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x2077E8u;
    // 0x2077e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2077e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2077ec: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2077ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2077f0: 0x3c0445bb  lui         $a0, 0x45BB
    ctx->pc = 0x2077f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17851 << 16));
    // 0x2077f4: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x2077f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2077f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2077f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2077fc: 0x0  nop
    ctx->pc = 0x2077fcu;
    // NOP
    // 0x207800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207804: 0x0  nop
    ctx->pc = 0x207804u;
    // NOP
    // 0x207808: 0x45000081  bc1f        . + 4 + (0x81 << 2)
    ctx->pc = 0x207808u;
    {
        const bool branch_taken_0x207808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207808) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x207810u;
}
