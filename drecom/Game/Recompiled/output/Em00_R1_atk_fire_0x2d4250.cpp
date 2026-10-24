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

// Function: Em00_R1_atk_fire
// Address: 0x2d4250 - 0x2d44bc
void Em00_R1_atk_fire_0x2d4250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_atk_fire_0x2d4250");
#endif

    switch (ctx->pc) {
        case 0x2d42e4u: goto label_2d42e4;
        case 0x2d4318u: goto label_2d4318;
        case 0x2d4334u: goto label_2d4334;
        case 0x2d4398u: goto label_2d4398;
        case 0x2d43ecu: goto label_2d43ec;
        case 0x2d4418u: goto label_2d4418;
        case 0x2d442cu: goto label_2d442c;
        case 0x2d4444u: goto label_2d4444;
        case 0x2d4450u: goto label_2d4450;
        case 0x2d4460u: goto label_2d4460;
        case 0x2d446cu: goto label_2d446c;
        default: break;
    }

    ctx->pc = 0x2d4250u;

    // 0x2d4250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d4254: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d4254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d4258: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2d4258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2d425c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4260: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d4260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4264: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d4264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d4268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d426c: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2D426Cu;
    {
        const bool branch_taken_0x2d426c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d426c) {
            ctx->pc = 0x2D4344u;
            goto label_2d4344;
        }
    }
    ctx->pc = 0x2D4274u;
    // 0x2d4274: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4274u;
    {
        const bool branch_taken_0x2d4274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4274) {
            ctx->pc = 0x2D4284u;
            goto label_2d4284;
        }
    }
    ctx->pc = 0x2D427Cu;
    // 0x2d427c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2D427Cu;
    {
        const bool branch_taken_0x2d427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d427c) {
            ctx->pc = 0x2D44ACu;
            goto label_2d44ac;
        }
    }
    ctx->pc = 0x2D4284u;
label_2d4284:
    // 0x2d4284: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d4284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d4288: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2d4288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2d428c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2d428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4290: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4294: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d4294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4298: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d4298u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d429c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d42a0: 0xc440128c  lwc1        $f0, 0x128C($v0)
    ctx->pc = 0x2d42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d42a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2d42a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d42a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d42ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d42acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d42b0: 0x0  nop
    ctx->pc = 0x2d42b0u;
    // NOP
    // 0x2d42b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d42b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d42b8: 0x0  nop
    ctx->pc = 0x2d42b8u;
    // NOP
    // 0x2d42bc: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2D42BCu;
    {
        const bool branch_taken_0x2d42bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d42bc) {
            ctx->pc = 0x2D42F8u;
            goto label_2d42f8;
        }
    }
    ctx->pc = 0x2D42C4u;
    // 0x2d42c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d42c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d42c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d42cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d42ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d42d0: 0x24065a0f  addiu       $a2, $zero, 0x5A0F
    ctx->pc = 0x2d42d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23055));
    // 0x2d42d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d42d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d42d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d42d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d42dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D42DCu;
    SET_GPR_U32(ctx, 31, 0x2D42E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D42DCu, 0x2D42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D42E4u;
label_2d42e4:
    // 0x2d42e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d42e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d42ec: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d42ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d42f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D42F0u;
    {
        const bool branch_taken_0x2d42f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d42f0) {
            ctx->pc = 0x2D4320u;
            goto label_2d4320;
        }
    }
    ctx->pc = 0x2D42F8u;
label_2d42f8:
    // 0x2d42f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d42fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d42fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4300: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4304: 0x24065a0e  addiu       $a2, $zero, 0x5A0E
    ctx->pc = 0x2d4304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23054));
    // 0x2d4308: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d430c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d430cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4310: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4310u;
    SET_GPR_U32(ctx, 31, 0x2D4318u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4310u, 0x2D4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4318u;
label_2d4318:
    // 0x2d4318: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d431c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d431cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2d4320:
    // 0x2d4320: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4324: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4328: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x2d4328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2d432c: 0xc0c6c98  jal         func_31B260
    ctx->pc = 0x2D432Cu;
    SET_GPR_U32(ctx, 31, 0x2D4334u);
    ctx->pc = 0x31B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B260u, 0x2D432Cu, 0x2D4334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4334u;
label_2d4334:
    // 0x2d4334: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4338: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d433c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4340: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d4344:
    // 0x2d4344: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4348: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d4348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d434c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d434cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d4350: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d4350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d4354: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D4354u;
    {
        const bool branch_taken_0x2d4354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4354) {
            ctx->pc = 0x2D43ECu;
            goto label_2d43ec;
        }
    }
    ctx->pc = 0x2D435Cu;
    // 0x2d435c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4360: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2d4360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2d4364: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d4364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4368: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2d4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d436c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d436cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d4370: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4374: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2d4374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4378: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d4378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d437c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2d437cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2d4380: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2d4380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4384: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2d4384u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d4388: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d438c: 0xc44d128c  lwc1        $f13, 0x128C($v0)
    ctx->pc = 0x2d438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d4390: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2D4390u;
    SET_GPR_U32(ctx, 31, 0x2D4398u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2D4390u, 0x2D4398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4398u;
label_2d4398:
    // 0x2d4398: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d4398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d439c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2d439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d43a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d43a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d43a4: 0x0  nop
    ctx->pc = 0x2d43a4u;
    // NOP
    // 0x2d43a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d43a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d43ac: 0x0  nop
    ctx->pc = 0x2d43acu;
    // NOP
    // 0x2d43b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D43B0u;
    {
        const bool branch_taken_0x2d43b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d43b0) {
            ctx->pc = 0x2D43C8u;
            goto label_2d43c8;
        }
    }
    ctx->pc = 0x2D43B8u;
    // 0x2d43b8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d43b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d43bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2d43bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2d43c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D43C0u;
    {
        const bool branch_taken_0x2d43c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d43c0) {
            ctx->pc = 0x2D43D4u;
            goto label_2d43d4;
        }
    }
    ctx->pc = 0x2D43C8u;
label_2d43c8:
    // 0x2d43c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d43c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d43cc: 0x0  nop
    ctx->pc = 0x2d43ccu;
    // NOP
    // 0x2d43d0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2d43d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2d43d4:
    // 0x2d43d4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2d43d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d43d8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d43d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d43dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d43dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d43e0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d43e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d43e4: 0xc0c6c64  jal         func_31B190
    ctx->pc = 0x2D43E4u;
    SET_GPR_U32(ctx, 31, 0x2D43ECu);
    ctx->pc = 0x31B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B190u, 0x2D43E4u, 0x2D43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D43ECu;
label_2d43ec:
    // 0x2d43ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d43f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d43f4: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x2d43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x2d43f8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d43f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d43fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d43fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d4400: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d4400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d4404: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d4404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d4408: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d4408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d440c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d4410: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D4410u;
    SET_GPR_U32(ctx, 31, 0x2D4418u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D4410u, 0x2D4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4418u;
label_2d4418:
    // 0x2d4418: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d441c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d441cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4420: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d4420u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d4424: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D4424u;
    SET_GPR_U32(ctx, 31, 0x2D442Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D4424u, 0x2D442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D442Cu;
label_2d442c:
    // 0x2d442c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4430: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d4430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d4434: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4438: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d443c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D443Cu;
    SET_GPR_U32(ctx, 31, 0x2D4444u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D443Cu, 0x2D4444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4444u;
label_2d4444:
    // 0x2d4444: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4448: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4448u;
    SET_GPR_U32(ctx, 31, 0x2D4450u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4448u, 0x2D4450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4450u;
label_2d4450:
    // 0x2d4450: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4454: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4458: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4458u;
    SET_GPR_U32(ctx, 31, 0x2D4460u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4458u, 0x2D4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4460u;
label_2d4460:
    // 0x2d4460: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4464: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4464u;
    SET_GPR_U32(ctx, 31, 0x2D446Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4464u, 0x2D446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D446Cu;
label_2d446c:
    // 0x2d446c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d446cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4470: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d4474: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D4474u;
    {
        const bool branch_taken_0x2d4474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4474) {
            ctx->pc = 0x2D44ACu;
            goto label_2d44ac;
        }
    }
    ctx->pc = 0x2D447Cu;
    // 0x2d447c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4484: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d448c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4490: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d4490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4494: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4498: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d449c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d449cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d44a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d44a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d44a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d44a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d44ac:
    // 0x2d44ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d44acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d44b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d44b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d44b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D44B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D44B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D44BCu;
}
