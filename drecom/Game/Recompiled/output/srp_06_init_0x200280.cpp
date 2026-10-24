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

// Function: srp_06_init
// Address: 0x200280 - 0x2004ec
void srp_06_init_0x200280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_06_init_0x200280");
#endif

    switch (ctx->pc) {
        case 0x2002d8u: goto label_2002d8;
        case 0x2002e4u: goto label_2002e4;
        case 0x20034cu: goto label_20034c;
        case 0x200458u: goto label_200458;
        default: break;
    }

    ctx->pc = 0x200280u;

    // 0x200280: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x200280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x200284: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x200284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x200288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20028c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x200294: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x200294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x200298: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x200298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20029c: 0x8c510ac0  lw          $s1, 0xAC0($v0)
    ctx->pc = 0x20029cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x2002a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2002a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2002a4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2002a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2002a8: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x2002a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x2002ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2002acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2002b0: 0x8c420ac4  lw          $v0, 0xAC4($v0)
    ctx->pc = 0x2002b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x2002b4: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x2002b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2002b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2002b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2002bc: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x2002bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x2002c0: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x2002c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2002c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2002c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2002c8: 0xac820b18  sw          $v0, 0xB18($a0)
    ctx->pc = 0x2002c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 2));
    // 0x2002cc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2002ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2002d0: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x2002D0u;
    SET_GPR_U32(ctx, 31, 0x2002D8u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x2002D0u, 0x2002D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002D8u;
label_2002d8:
    // 0x2002d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2002d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2002dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2002DCu;
    SET_GPR_U32(ctx, 31, 0x2002E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2002DCu, 0x2002E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002E4u;
label_2002e4:
    // 0x2002e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2002e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2002e8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2002e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2002ec: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2002ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2002f0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2002f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2002f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2002f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2002f8: 0x0  nop
    ctx->pc = 0x2002f8u;
    // NOP
    // 0x2002fc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2002fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x200300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200304: 0x0  nop
    ctx->pc = 0x200304u;
    // NOP
    // 0x200308: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x200308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x20030c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20030cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200310: 0x0  nop
    ctx->pc = 0x200310u;
    // NOP
    // 0x200314: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x200314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x200318: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x200318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20031c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20031cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200320: 0x0  nop
    ctx->pc = 0x200320u;
    // NOP
    // 0x200324: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x200324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x200328: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20032c: 0x90640347  lbu         $a0, 0x347($v1)
    ctx->pc = 0x20032cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x200330: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x200334: 0xa0640348  sb          $a0, 0x348($v1)
    ctx->pc = 0x200334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x200338: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20033c: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x20033cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x200340: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x200340u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x200344: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x200344u;
    {
        const bool branch_taken_0x200344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200344) {
            ctx->pc = 0x200388u;
            goto label_200388;
        }
    }
    ctx->pc = 0x20034Cu;
label_20034c:
    // 0x20034c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x200350: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x200350u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200354: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200358: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20035c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200360: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x200360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x200364: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x200364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x200368: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x200368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20036c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x20036cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200370: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200374: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x200378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20037c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x20037cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x200380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x200380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x200384: 0x0  nop
    ctx->pc = 0x200384u;
    // NOP
label_200388:
    // 0x200388: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20038c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x20038cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x200390: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x200390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x200394: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x200394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x200398: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x200398u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20039c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x20039Cu;
    {
        const bool branch_taken_0x20039c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20039c) {
            ctx->pc = 0x20034Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20034c;
        }
    }
    ctx->pc = 0x2003A4u;
    // 0x2003a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2003a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2003a8: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x2003a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2003ac: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x2003acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x2003b0: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x2003b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2003b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2003b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2003b8: 0x0  nop
    ctx->pc = 0x2003b8u;
    // NOP
    // 0x2003bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2003bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2003c0: 0x0  nop
    ctx->pc = 0x2003c0u;
    // NOP
    // 0x2003c4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x2003C4u;
    {
        const bool branch_taken_0x2003c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2003c4) {
            ctx->pc = 0x200440u;
            goto label_200440;
        }
    }
    ctx->pc = 0x2003CCu;
    // 0x2003cc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2003ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2003d0: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x2003d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2003d4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2003d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2003d8: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x2003d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2003dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2003dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2003e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2003e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2003e4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x2003e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x2003e8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2003E8u;
    {
        const bool branch_taken_0x2003e8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2003e8) {
            ctx->pc = 0x200404u;
            goto label_200404;
        }
    }
    ctx->pc = 0x2003F0u;
    // 0x2003f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2003f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2003f4: 0x0  nop
    ctx->pc = 0x2003f4u;
    // NOP
    // 0x2003f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2003f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2003fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2003FCu;
    {
        const bool branch_taken_0x2003fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003fc) {
            ctx->pc = 0x200420u;
            goto label_200420;
        }
    }
    ctx->pc = 0x200404u;
label_200404:
    // 0x200404: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x200404u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x200408: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x200408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20040c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x20040cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x200410: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x200410u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200414: 0x0  nop
    ctx->pc = 0x200414u;
    // NOP
    // 0x200418: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20041c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20041cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_200420:
    // 0x200420: 0x0  nop
    ctx->pc = 0x200420u;
    // NOP
    // 0x200424: 0x0  nop
    ctx->pc = 0x200424u;
    // NOP
    // 0x200428: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200428u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20042c: 0x0  nop
    ctx->pc = 0x20042cu;
    // NOP
    // 0x200430: 0x0  nop
    ctx->pc = 0x200430u;
    // NOP
    // 0x200434: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x200434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x200438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200438u;
    {
        const bool branch_taken_0x200438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200438) {
            ctx->pc = 0x20044Cu;
            goto label_20044c;
        }
    }
    ctx->pc = 0x200440u;
label_200440:
    // 0x200440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200444: 0x0  nop
    ctx->pc = 0x200444u;
    // NOP
    // 0x200448: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x200448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_20044c:
    // 0x20044c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x20044cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x200450: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x200450u;
    {
        const bool branch_taken_0x200450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200450) {
            ctx->pc = 0x2004B8u;
            goto label_2004b8;
        }
    }
    ctx->pc = 0x200458u;
label_200458:
    // 0x200458: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20045c: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x20045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200460: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200460u;
    {
        const bool branch_taken_0x200460 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x200460) {
            ctx->pc = 0x20047Cu;
            goto label_20047c;
        }
    }
    ctx->pc = 0x200468u;
    // 0x200468: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x200468u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20046c: 0x0  nop
    ctx->pc = 0x20046cu;
    // NOP
    // 0x200470: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x200470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x200474: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x200474u;
    {
        const bool branch_taken_0x200474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200474) {
            ctx->pc = 0x200498u;
            goto label_200498;
        }
    }
    ctx->pc = 0x20047Cu;
label_20047c:
    // 0x20047c: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x20047cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x200480: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x200480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x200484: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x200484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x200488: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x200488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20048c: 0x0  nop
    ctx->pc = 0x20048cu;
    // NOP
    // 0x200490: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x200490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x200494: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x200494u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_200498:
    // 0x200498: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x200498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20049c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20049cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2004a0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2004a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2004a4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2004a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2004a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2004a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2004ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2004acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2004b0: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x2004b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x2004b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2004b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2004b8:
    // 0x2004b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2004b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2004bc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x2004bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x2004c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2004c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2004c4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2004c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2004c8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2004C8u;
    {
        const bool branch_taken_0x2004c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2004c8) {
            ctx->pc = 0x200458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200458;
        }
    }
    ctx->pc = 0x2004D0u;
    // 0x2004d0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2004d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2004d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2004d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2004d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2004d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2004dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2004dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2004e0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2004e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2004e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2004E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2004E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2004ECu;
}
