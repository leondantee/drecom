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

// Function: entry_0017d6b0
// Address: 0x17d6b0 - 0x17d7e4
void entry_0017d6b0_0x17d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d6b0_0x17d6b0");
#endif

    switch (ctx->pc) {
        case 0x17d6d4u: goto label_17d6d4;
        case 0x17d708u: goto label_17d708;
        case 0x17d720u: goto label_17d720;
        case 0x17d748u: goto label_17d748;
        case 0x17d774u: goto label_17d774;
        case 0x17d780u: goto label_17d780;
        case 0x17d7a8u: goto label_17d7a8;
        case 0x17d7b4u: goto label_17d7b4;
        case 0x17d7dcu: goto label_17d7dc;
        default: break;
    }

    ctx->pc = 0x17d6b0u;

    // 0x17d6b0: 0x938280a8  lbu         $v0, -0x7F58($gp)
    ctx->pc = 0x17d6b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934696)));
    // 0x17d6b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17d6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17d6b8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x17d6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d6c0: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x17D6C0u;
    {
        const bool branch_taken_0x17d6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17d6c0) {
            ctx->pc = 0x17D7E4u;
            return;
        }
    }
    ctx->pc = 0x17D6C8u;
    // 0x17d6c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17d6cc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x17D6CCu;
    SET_GPR_U32(ctx, 31, 0x17D6D4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x17D6D4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17D6D4u) { return; }
    ctx->pc = 0x17D6D4u;
label_17d6d4:
    // 0x17d6d4: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x17d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d6d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x17d6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17d6dc: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x17d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d6e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x17d6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17d6e4: 0xc60001a8  lwc1        $f0, 0x1A8($s0)
    ctx->pc = 0x17d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d6e8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x17d6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17d6ec: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x17d6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d6f0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17d6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17d6f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17d6f8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17d6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17d6fc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17d6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17d700: 0xc040c92  jal         func_103248
    ctx->pc = 0x17D700u;
    SET_GPR_U32(ctx, 31, 0x17D708u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x17D708u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17D708u) { return; }
    ctx->pc = 0x17D708u;
label_17d708:
    // 0x17d708: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x17d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x17d70c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17d70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d710: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d710u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d714: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17d714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17d718: 0xc05ea30  jal         func_17A8C0
    ctx->pc = 0x17D718u;
    SET_GPR_U32(ctx, 31, 0x17D720u);
    ctx->pc = 0x17A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8C0u, 0x17D718u, 0x17D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D720u;
label_17d720:
    // 0x17d720: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d724: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d728: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d72c: 0x34420218  ori         $v0, $v0, 0x218
    ctx->pc = 0x17d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)536);
    // 0x17d730: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d734: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d738: 0x2445eca0  addiu       $a1, $v0, -0x1360
    ctx->pc = 0x17d738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962336));
    // 0x17d73c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x17d73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x17d740: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D740u;
    SET_GPR_U32(ctx, 31, 0x17D748u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D740u, 0x17D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D748u;
label_17d748:
    // 0x17d748: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d74c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x17d74cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d750: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d754: 0x34420219  ori         $v0, $v0, 0x219
    ctx->pc = 0x17d754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)537);
    // 0x17d758: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x17d758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x17d75c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d760: 0x2445ecb0  addiu       $a1, $v0, -0x1350
    ctx->pc = 0x17d760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
    // 0x17d764: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x17d764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x17d768: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17d768u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17d76c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D76Cu;
    SET_GPR_U32(ctx, 31, 0x17D774u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D76Cu, 0x17D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D774u;
label_17d774:
    // 0x17d774: 0xc60c01b8  lwc1        $f12, 0x1B8($s0)
    ctx->pc = 0x17d774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17d778: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x17D778u;
    SET_GPR_U32(ctx, 31, 0x17D780u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x17D778u, 0x17D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D780u;
label_17d780:
    // 0x17d780: 0x24050808  addiu       $a1, $zero, 0x808
    ctx->pc = 0x17d780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d784: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x17d784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x17d788: 0x3c030d00  lui         $v1, 0xD00
    ctx->pc = 0x17d788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3328 << 16));
    // 0x17d78c: 0x3463021a  ori         $v1, $v1, 0x21A
    ctx->pc = 0x17d78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)538);
    // 0x17d790: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17d790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17d794: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x17d794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x17d798: 0x2465ecc0  addiu       $a1, $v1, -0x1340
    ctx->pc = 0x17d798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962368));
    // 0x17d79c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17d79cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17d7a0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D7A0u;
    SET_GPR_U32(ctx, 31, 0x17D7A8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D7A0u, 0x17D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7A8u;
label_17d7a8:
    // 0x17d7a8: 0xc60c01b0  lwc1        $f12, 0x1B0($s0)
    ctx->pc = 0x17d7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17d7ac: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x17D7ACu;
    SET_GPR_U32(ctx, 31, 0x17D7B4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x17D7ACu, 0x17D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7B4u;
label_17d7b4:
    // 0x17d7b4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17d7b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17d7b8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d7bc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x17d7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d7c0: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d7c4: 0x3442111a  ori         $v0, $v0, 0x111A
    ctx->pc = 0x17d7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4378);
    // 0x17d7c8: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x17d7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x17d7cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d7d0: 0x2445ecd0  addiu       $a1, $v0, -0x1330
    ctx->pc = 0x17d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x17d7d4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D7D4u;
    SET_GPR_U32(ctx, 31, 0x17D7DCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D7D4u, 0x17D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7DCu;
label_17d7dc:
    // 0x17d7dc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17D7DCu;
    {
        const bool branch_taken_0x17d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d7dc) {
            ctx->pc = 0x17D854u;
            return;
        }
    }
    ctx->pc = 0x17D7E4u;
}
