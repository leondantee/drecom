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

// Function: Em1b_R1_atk_wave
// Address: 0x36bee0 - 0x36c068
void Em1b_R1_atk_wave_0x36bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_atk_wave_0x36bee0");
#endif

    switch (ctx->pc) {
        case 0x36bf34u: goto label_36bf34;
        case 0x36bf68u: goto label_36bf68;
        case 0x36bf84u: goto label_36bf84;
        case 0x36bfa0u: goto label_36bfa0;
        case 0x36bff0u: goto label_36bff0;
        case 0x36c000u: goto label_36c000;
        case 0x36c00cu: goto label_36c00c;
        case 0x36c018u: goto label_36c018;
        default: break;
    }

    ctx->pc = 0x36bee0u;

    // 0x36bee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36bee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36bee4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36bee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36bee8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x36bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x36beec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bef0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36bef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36bef4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36bef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36bef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36befc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36BEFCu;
    {
        const bool branch_taken_0x36befc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36befc) {
            ctx->pc = 0x36BF44u;
            goto label_36bf44;
        }
    }
    ctx->pc = 0x36BF04u;
    // 0x36bf04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BF04u;
    {
        const bool branch_taken_0x36bf04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bf04) {
            ctx->pc = 0x36BF14u;
            goto label_36bf14;
        }
    }
    ctx->pc = 0x36BF0Cu;
    // 0x36bf0c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x36BF0Cu;
    {
        const bool branch_taken_0x36bf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bf0c) {
            ctx->pc = 0x36C058u;
            goto label_36c058;
        }
    }
    ctx->pc = 0x36BF14u;
label_36bf14:
    // 0x36bf14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bf18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bf1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36bf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36bf20: 0x24065a04  addiu       $a2, $zero, 0x5A04
    ctx->pc = 0x36bf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23044));
    // 0x36bf24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36bf24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bf28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36bf28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36bf2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36BF2Cu;
    SET_GPR_U32(ctx, 31, 0x36BF34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36BF2Cu, 0x36BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF34u;
label_36bf34:
    // 0x36bf34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bf38: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36bf38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36bf3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36bf40: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36bf40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36bf44:
    // 0x36bf44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bf48: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36bf48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36bf4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36bf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bf50: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36bf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36bf54: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x36BF54u;
    {
        const bool branch_taken_0x36bf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bf54) {
            ctx->pc = 0x36BFF0u;
            goto label_36bff0;
        }
    }
    ctx->pc = 0x36BF5Cu;
    // 0x36bf5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x36bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36bf60: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36BF60u;
    SET_GPR_U32(ctx, 31, 0x36BF68u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36BF60u, 0x36BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF68u;
label_36bf68:
    // 0x36bf68: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x36bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x36bf6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36bf6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bf70: 0x0  nop
    ctx->pc = 0x36bf70u;
    // NOP
    // 0x36bf74: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36bf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36bf78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36bf7c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36BF7Cu;
    SET_GPR_U32(ctx, 31, 0x36BF84u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36BF7Cu, 0x36BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF84u;
label_36bf84:
    // 0x36bf84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bf88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36bf8c: 0x244404b0  addiu       $a0, $v0, 0x4B0
    ctx->pc = 0x36bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36bf90: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36bf94: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36bf98: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36BF98u;
    SET_GPR_U32(ctx, 31, 0x36BFA0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36BF98u, 0x36BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFA0u;
label_36bfa0:
    // 0x36bfa0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36bfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36bfa4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36bfa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bfac: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x36bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x36bfb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36bfb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36bfb8: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36bfbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bfc0: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x36bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36bfc4: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x36bfc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x36bfc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bfcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bfd0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36bfd4: 0x8c641348  lw          $a0, 0x1348($v1)
    ctx->pc = 0x36bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x36bfd8: 0x244504b0  addiu       $a1, $v0, 0x4B0
    ctx->pc = 0x36bfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36bfdc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x36bfdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bfe0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x36bfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36bfe4: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x36bfe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36bfe8: 0xc0df26c  jal         func_37C9B0
    ctx->pc = 0x36BFE8u;
    SET_GPR_U32(ctx, 31, 0x36BFF0u);
    ctx->pc = 0x37C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C9B0u, 0x36BFE8u, 0x36BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFF0u;
label_36bff0:
    // 0x36bff0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bff4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36bff4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bff8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36BFF8u;
    SET_GPR_U32(ctx, 31, 0x36C000u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36BFF8u, 0x36C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C000u;
label_36c000:
    // 0x36c000: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c004: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36C004u;
    SET_GPR_U32(ctx, 31, 0x36C00Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36C004u, 0x36C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C00Cu;
label_36c00c:
    // 0x36c00c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c010: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36C010u;
    SET_GPR_U32(ctx, 31, 0x36C018u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36C010u, 0x36C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C018u;
label_36c018:
    // 0x36c018: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c01c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36c01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36c020: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36C020u;
    {
        const bool branch_taken_0x36c020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c020) {
            ctx->pc = 0x36C058u;
            goto label_36c058;
        }
    }
    ctx->pc = 0x36C028u;
    // 0x36c028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c02c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c030: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36c030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c034: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36c034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36c038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c03c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36c03cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c040: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c044: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36c044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c04c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36c04cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c050: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c054: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36c054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36c058:
    // 0x36c058: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36c058u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c05c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36c05cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36c060: 0x3e00008  jr          $ra
    ctx->pc = 0x36C060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C068u;
}
