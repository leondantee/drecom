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

// Function: Em10_R1_shot_gun
// Address: 0x12ef90 - 0x12f13c
void Em10_R1_shot_gun_0x12ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_shot_gun_0x12ef90");
#endif

    switch (ctx->pc) {
        case 0x12f000u: goto label_12f000;
        case 0x12f058u: goto label_12f058;
        case 0x12f070u: goto label_12f070;
        case 0x12f09cu: goto label_12f09c;
        case 0x12f0b4u: goto label_12f0b4;
        case 0x12f0c0u: goto label_12f0c0;
        case 0x12f0d0u: goto label_12f0d0;
        case 0x12f0dcu: goto label_12f0dc;
        default: break;
    }

    ctx->pc = 0x12ef90u;

    // 0x12ef90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ef94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x12ef94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x12ef98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ef98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ef9c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x12ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x12efa0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12efa4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12efa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12efa8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12efac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12efacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12efb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12efb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12efb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12efb8: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12EFB8u;
    {
        const bool branch_taken_0x12efb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12efb8) {
            ctx->pc = 0x12F010u;
            goto label_12f010;
        }
    }
    ctx->pc = 0x12EFC0u;
    // 0x12efc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EFC0u;
    {
        const bool branch_taken_0x12efc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12efc0) {
            ctx->pc = 0x12EFD0u;
            goto label_12efd0;
        }
    }
    ctx->pc = 0x12EFC8u;
    // 0x12efc8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x12EFC8u;
    {
        const bool branch_taken_0x12efc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12efc8) {
            ctx->pc = 0x12F128u;
            goto label_12f128;
        }
    }
    ctx->pc = 0x12EFD0u;
label_12efd0:
    // 0x12efd0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12efd4: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x12efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x12efd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12efd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12efdc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x12efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x12efe0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12efe4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12efe8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12efec: 0x24063c26  addiu       $a2, $zero, 0x3C26
    ctx->pc = 0x12efecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15398));
    // 0x12eff0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12eff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eff4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12eff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12eff8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12EFF8u;
    SET_GPR_U32(ctx, 31, 0x12F000u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12EFF8u, 0x12F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F000u;
label_12f000:
    // 0x12f000: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f004: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12f004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12f008: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f00c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12f00cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12f010:
    // 0x12f010: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f014: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12f018: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x12f018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x12f01c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12f01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f020: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F020u;
    {
        const bool branch_taken_0x12f020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f020) {
            ctx->pc = 0x12F034u;
            goto label_12f034;
        }
    }
    ctx->pc = 0x12F028u;
    // 0x12f028: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x12f028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12f02c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f030: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x12f030u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
label_12f034:
    // 0x12f034: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f038: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12f038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12f03c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12f03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12f040: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x12f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x12f044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F044u;
    {
        const bool branch_taken_0x12f044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f044) {
            ctx->pc = 0x12F058u;
            goto label_12f058;
        }
    }
    ctx->pc = 0x12F04Cu;
    // 0x12f04c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f050: 0xc04ba40  jal         func_12E900
    ctx->pc = 0x12F050u;
    SET_GPR_U32(ctx, 31, 0x12F058u);
    ctx->pc = 0x12E900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E900u, 0x12F050u, 0x12F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F058u;
label_12f058:
    // 0x12f058: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f05c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12f060: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12f064: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12f064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12f068: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12F068u;
    SET_GPR_U32(ctx, 31, 0x12F070u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12F068u, 0x12F070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F070u;
label_12f070:
    // 0x12f070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f074: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12f074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12f078: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12f078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12f07c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f080: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12f080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12f084: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f088: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f08c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f090: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12f094: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12F094u;
    SET_GPR_U32(ctx, 31, 0x12F09Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12F094u, 0x12F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F09Cu;
label_12f09c:
    // 0x12f09c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12f0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12f0a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f0a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f0ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12F0ACu;
    SET_GPR_U32(ctx, 31, 0x12F0B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12F0ACu, 0x12F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0B4u;
label_12f0b4:
    // 0x12f0b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0b8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12F0B8u;
    SET_GPR_U32(ctx, 31, 0x12F0C0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12F0B8u, 0x12F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0C0u;
label_12f0c0:
    // 0x12f0c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f0c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f0c8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12F0C8u;
    SET_GPR_U32(ctx, 31, 0x12F0D0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12F0C8u, 0x12F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0D0u;
label_12f0d0:
    // 0x12f0d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0d4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12F0D4u;
    SET_GPR_U32(ctx, 31, 0x12F0DCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12F0D4u, 0x12F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0DCu;
label_12f0dc:
    // 0x12f0dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12f0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12f0e4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12F0E4u;
    {
        const bool branch_taken_0x12f0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f0e4) {
            ctx->pc = 0x12F128u;
            goto label_12f128;
        }
    }
    ctx->pc = 0x12F0ECu;
    // 0x12f0ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f0f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f0f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12f0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f0f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f0fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f100: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12f100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f104: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f108: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12f108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f10c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f110: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12f110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f114: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f118: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12f118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12f11c: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12f11cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f120: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12F120u;
    {
        const bool branch_taken_0x12f120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f120) {
            ctx->pc = 0x12F128u;
            goto label_12f128;
        }
    }
    ctx->pc = 0x12F128u;
label_12f128:
    // 0x12f128: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x12f128u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f130: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f134: 0x3e00008  jr          $ra
    ctx->pc = 0x12F134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F13Cu;
}
