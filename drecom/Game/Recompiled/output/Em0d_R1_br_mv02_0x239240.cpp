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

// Function: Em0d_R1_br_mv02
// Address: 0x239240 - 0x239530
void Em0d_R1_br_mv02_0x239240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_br_mv02_0x239240");
#endif

    switch (ctx->pc) {
        case 0x2392d0u: goto label_2392d0;
        case 0x239310u: goto label_239310;
        case 0x23936cu: goto label_23936c;
        case 0x23939cu: goto label_23939c;
        case 0x2393dcu: goto label_2393dc;
        case 0x239420u: goto label_239420;
        case 0x2394dcu: goto label_2394dc;
        default: break;
    }

    ctx->pc = 0x239240u;

    // 0x239240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239244: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x239244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x239248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23924c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x23924cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x239250: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x239250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x239254: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x239254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x239258: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x239258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23925c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239260: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x239260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239264: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x239264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x239268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x239268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23926c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239270: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x239270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239274: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x239274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x239278: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x239278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23927c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239280: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x239280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239284: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x239284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x239288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x239288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23928c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23928cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239290: 0x0  nop
    ctx->pc = 0x239290u;
    // NOP
    // 0x239294: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x239294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x239298: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x239298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23929c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x23929cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2392a0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2392A0u;
    {
        const bool branch_taken_0x2392a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2392a0) {
            ctx->pc = 0x239334u;
            goto label_239334;
        }
    }
    ctx->pc = 0x2392A8u;
    // 0x2392a8: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2392a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2392ac: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2392acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2392b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2392b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2392b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2392b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2392b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2392b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2392bc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2392bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2392c0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2392c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2392c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2392c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2392c8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2392C8u;
    SET_GPR_U32(ctx, 31, 0x2392D0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2392C8u, 0x2392D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392D0u;
label_2392d0:
    // 0x2392d0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2392D0u;
    {
        const bool branch_taken_0x2392d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2392d0) {
            ctx->pc = 0x239344u;
            goto label_239344;
        }
    }
    ctx->pc = 0x2392D8u;
    // 0x2392d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2392d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2392dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2392dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2392e0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2392e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2392e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2392e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2392e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2392ec: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2392ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2392f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2392f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2392f4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2392f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2392f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2392f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2392fc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2392fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x239300: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x239300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239304: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x239304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x239308: 0xc067694  jal         func_19DA50
    ctx->pc = 0x239308u;
    SET_GPR_U32(ctx, 31, 0x239310u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x239308u, 0x239310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239310u;
label_239310:
    // 0x239310: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x239310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x239314: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x239314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x239318: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x239318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x23931c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23931cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x239320: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x239320u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x239324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x239324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239328: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x239328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23932c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23932Cu;
    {
        const bool branch_taken_0x23932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23932c) {
            ctx->pc = 0x239344u;
            goto label_239344;
        }
    }
    ctx->pc = 0x239334u;
label_239334:
    // 0x239334: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239338: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x239338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x23933c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239340: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x239340u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_239344:
    // 0x239344: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x239344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x239348: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x239348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23934c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23934cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x239350: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239354: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239358: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x239358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23935c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239360: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x239360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x239364: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x239364u;
    SET_GPR_U32(ctx, 31, 0x23936Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x239364u, 0x23936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23936Cu;
label_23936c:
    // 0x23936c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x23936Cu;
    {
        const bool branch_taken_0x23936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23936c) {
            ctx->pc = 0x2393F8u;
            goto label_2393f8;
        }
    }
    ctx->pc = 0x239374u;
    // 0x239374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x239374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239378: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23937c: 0x3c02403d  lui         $v0, 0x403D
    ctx->pc = 0x23937cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16445 << 16));
    // 0x239380: 0x3442e44e  ori         $v0, $v0, 0xE44E
    ctx->pc = 0x239380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58446);
    // 0x239384: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x239384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x239388: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x239388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23938c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239390: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x239390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x239394: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x239394u;
    SET_GPR_U32(ctx, 31, 0x23939Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x239394u, 0x23939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23939Cu;
label_23939c:
    // 0x23939c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23939Cu;
    {
        const bool branch_taken_0x23939c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23939c) {
            ctx->pc = 0x2393F8u;
            goto label_2393f8;
        }
    }
    ctx->pc = 0x2393A4u;
    // 0x2393a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2393a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2393a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393ac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2393acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2393b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2393b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2393b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393b8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2393b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2393bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393c0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2393c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2393c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393c8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2393c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2393cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2393d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2393d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2393D4u;
    SET_GPR_U32(ctx, 31, 0x2393DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2393D4u, 0x2393DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393DCu;
label_2393dc:
    // 0x2393dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2393dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2393e0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2393e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2393e4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2393e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2393e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2393e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2393ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2393ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2393f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393f4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2393f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2393f8:
    // 0x2393f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2393f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2393fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239400: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x239400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x239404: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x239404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x239408: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x239408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23940c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x239410: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x239410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239414: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x239414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x239418: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x239418u;
    SET_GPR_U32(ctx, 31, 0x239420u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x239418u, 0x239420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239420u;
label_239420:
    // 0x239420: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x239420u;
    {
        const bool branch_taken_0x239420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239420) {
            ctx->pc = 0x23946Cu;
            goto label_23946c;
        }
    }
    ctx->pc = 0x239428u;
    // 0x239428: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23942c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239430: 0x84630074  lh          $v1, 0x74($v1)
    ctx->pc = 0x239430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x239434: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x239434u;
    {
        const bool branch_taken_0x239434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239434) {
            ctx->pc = 0x23946Cu;
            goto label_23946c;
        }
    }
    ctx->pc = 0x23943Cu;
    // 0x23943c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239444: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x239444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x239448: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x239448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23944c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239450: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x239450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x239454: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239458: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x239458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23945c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239460: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x239460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x239464: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239468: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x239468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23946c:
    // 0x23946c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239470: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239474: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x239474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x239478: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x239478u;
    {
        const bool branch_taken_0x239478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239478) {
            ctx->pc = 0x23951Cu;
            goto label_23951c;
        }
    }
    ctx->pc = 0x239480u;
    // 0x239480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239484: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x239484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239488: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x239488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x23948c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23948cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239490: 0x0  nop
    ctx->pc = 0x239490u;
    // NOP
    // 0x239494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x239494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239498: 0x0  nop
    ctx->pc = 0x239498u;
    // NOP
    // 0x23949c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x23949Cu;
    {
        const bool branch_taken_0x23949c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23949c) {
            ctx->pc = 0x23951Cu;
            goto label_23951c;
        }
    }
    ctx->pc = 0x2394A4u;
    // 0x2394a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2394a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2394a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2394a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394ac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2394acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2394b0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2394b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2394b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2394b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394b8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2394b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2394bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2394bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394c0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2394c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2394c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2394c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394c8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2394c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2394cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2394ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2394d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2394d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2394D4u;
    SET_GPR_U32(ctx, 31, 0x2394DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2394D4u, 0x2394DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394DCu;
label_2394dc:
    // 0x2394dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2394dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2394e0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2394e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2394e4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2394E4u;
    {
        const bool branch_taken_0x2394e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2394e4) {
            ctx->pc = 0x23951Cu;
            goto label_23951c;
        }
    }
    ctx->pc = 0x2394ECu;
    // 0x2394ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2394ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2394f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2394f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2394f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2394f8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2394f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2394fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2394fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239500: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x239500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x239504: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239508: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x239508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23950c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239510: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x239510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x239514: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239518: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x239518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23951c:
    // 0x23951c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x23951cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239524: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x239524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x239528: 0x3e00008  jr          $ra
    ctx->pc = 0x239528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239530u;
}
