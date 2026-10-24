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

// Function: Em01_R1_reset_ceil
// Address: 0x308210 - 0x308450
void Em01_R1_reset_ceil_0x308210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_reset_ceil_0x308210");
#endif

    switch (ctx->pc) {
        case 0x308264u: goto label_308264;
        case 0x3082b8u: goto label_3082b8;
        case 0x3082ccu: goto label_3082cc;
        case 0x3082e4u: goto label_3082e4;
        case 0x3082f0u: goto label_3082f0;
        case 0x30836cu: goto label_30836c;
        case 0x30839cu: goto label_30839c;
        case 0x3083b4u: goto label_3083b4;
        case 0x3083c0u: goto label_3083c0;
        case 0x308430u: goto label_308430;
        default: break;
    }

    ctx->pc = 0x308210u;

    // 0x308210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308214: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x308214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x308218: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x308218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30821c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308220: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x308220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x308224: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x308224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x308228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30822c: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x30822Cu;
    {
        const bool branch_taken_0x30822c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30822c) {
            ctx->pc = 0x30828Cu;
            goto label_30828c;
        }
    }
    ctx->pc = 0x308234u;
    // 0x308234: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308234u;
    {
        const bool branch_taken_0x308234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308234) {
            ctx->pc = 0x308244u;
            goto label_308244;
        }
    }
    ctx->pc = 0x30823Cu;
    // 0x30823c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x30823Cu;
    {
        const bool branch_taken_0x30823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30823c) {
            ctx->pc = 0x308440u;
            goto label_308440;
        }
    }
    ctx->pc = 0x308244u;
label_308244:
    // 0x308244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308248: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30824c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30824cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x308250: 0x2406280c  addiu       $a2, $zero, 0x280C
    ctx->pc = 0x308250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10252));
    // 0x308254: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x308254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308258: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x308258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30825c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30825Cu;
    SET_GPR_U32(ctx, 31, 0x308264u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30825Cu, 0x308264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308264u;
label_308264:
    // 0x308264: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x308264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x308268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30826c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308270: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x308270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x308274: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308278: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x308278u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30827c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308280: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x308280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x308284: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308288: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x308288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30828c:
    // 0x30828c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30828cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308290: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308294: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x308294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x308298: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x308298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x30829c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30829cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3082a0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3082a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3082a4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3082a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3082a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3082a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3082ac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3082acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3082b0: 0xc05c848  jal         func_172120
    ctx->pc = 0x3082B0u;
    SET_GPR_U32(ctx, 31, 0x3082B8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3082B0u, 0x3082B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082B8u;
label_3082b8:
    // 0x3082b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3082b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3082bc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3082bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3082c0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3082c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3082c4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3082C4u;
    SET_GPR_U32(ctx, 31, 0x3082CCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3082C4u, 0x3082CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082CCu;
label_3082cc:
    // 0x3082cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3082ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3082d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3082d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3082d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3082d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3082d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3082d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3082dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3082DCu;
    SET_GPR_U32(ctx, 31, 0x3082E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3082DCu, 0x3082E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082E4u;
label_3082e4:
    // 0x3082e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3082e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3082e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3082E8u;
    SET_GPR_U32(ctx, 31, 0x3082F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3082E8u, 0x3082F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082F0u;
label_3082f0:
    // 0x3082f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3082f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3082f4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3082f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3082f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3082f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3082fc: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x3082fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x308300: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x308300u;
    {
        const bool branch_taken_0x308300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308300) {
            ctx->pc = 0x3083A4u;
            goto label_3083a4;
        }
    }
    ctx->pc = 0x308308u;
    // 0x308308: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30830c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x30830cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308310: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308314: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x308314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308318: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x308318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30831c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x30831cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x308320: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308324: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x308324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308328: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x308328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x30832c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30832cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308330: 0x0  nop
    ctx->pc = 0x308330u;
    // NOP
    // 0x308334: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x308334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x308338: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x308338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x30833c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308340: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x308340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x308344: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x308348: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x308348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x30834c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30834Cu;
    {
        const bool branch_taken_0x30834c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30834c) {
            ctx->pc = 0x3083A4u;
            goto label_3083a4;
        }
    }
    ctx->pc = 0x308354u;
    // 0x308354: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308358: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30835c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x30835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x308360: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x308360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x308364: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x308364u;
    SET_GPR_U32(ctx, 31, 0x30836Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x308364u, 0x30836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30836Cu;
label_30836c:
    // 0x30836c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308370: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x308370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x308374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308378: 0x0  nop
    ctx->pc = 0x308378u;
    // NOP
    // 0x30837c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x30837Cu;
    {
        const bool branch_taken_0x30837c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30837c) {
            ctx->pc = 0x3083A4u;
            goto label_3083a4;
        }
    }
    ctx->pc = 0x308384u;
    // 0x308384: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308388: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30838c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x30838cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x308390: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x308390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x308394: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x308394u;
    SET_GPR_U32(ctx, 31, 0x30839Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x308394u, 0x30839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30839Cu;
label_30839c:
    // 0x30839c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x3083a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_3083a4:
    // 0x3083a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3083a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083a8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3083a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3083ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3083ACu;
    SET_GPR_U32(ctx, 31, 0x3083B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3083ACu, 0x3083B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083B4u;
label_3083b4:
    // 0x3083b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3083b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083b8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3083B8u;
    SET_GPR_U32(ctx, 31, 0x3083C0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3083B8u, 0x3083C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083C0u;
label_3083c0:
    // 0x3083c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3083c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3083c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3083c8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3083C8u;
    {
        const bool branch_taken_0x3083c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3083c8) {
            ctx->pc = 0x308440u;
            goto label_308440;
        }
    }
    ctx->pc = 0x3083D0u;
    // 0x3083d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3083d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083d4: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x3083d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x3083d8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3083d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3083dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3083dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3083e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3083e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3083e4: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x3083e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x3083e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3083e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3083ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3083ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083f0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3083f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3083f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3083f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3083f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3083f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3083fc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3083fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x308400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308404: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x308404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308408: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30840c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x30840cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308414: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x308414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x308418: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30841c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308420: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x308420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x308424: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x308424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x308428: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x308428u;
    SET_GPR_U32(ctx, 31, 0x308430u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x308428u, 0x308430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308430u;
label_308430:
    // 0x308430: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308434: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x308434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x308438: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30843c: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x30843cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
label_308440:
    // 0x308440: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x308440u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308444: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x308444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x308448: 0x3e00008  jr          $ra
    ctx->pc = 0x308448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308450u;
}
