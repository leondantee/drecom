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

// Function: Em06_R1_hover_move
// Address: 0x199250 - 0x1994e0
void Em06_R1_hover_move_0x199250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_hover_move_0x199250");
#endif

    switch (ctx->pc) {
        case 0x1992a4u: goto label_1992a4;
        case 0x1992fcu: goto label_1992fc;
        case 0x199310u: goto label_199310;
        case 0x199348u: goto label_199348;
        case 0x19949cu: goto label_19949c;
        case 0x1994acu: goto label_1994ac;
        case 0x1994b8u: goto label_1994b8;
        default: break;
    }

    ctx->pc = 0x199250u;

    // 0x199250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199254: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x199254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x199258: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x199258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x19925c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199260: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x199260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x199264: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x199264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x199268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19926c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x19926Cu;
    {
        const bool branch_taken_0x19926c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19926c) {
            ctx->pc = 0x1992D0u;
            goto label_1992d0;
        }
    }
    ctx->pc = 0x199274u;
    // 0x199274: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199274u;
    {
        const bool branch_taken_0x199274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199274) {
            ctx->pc = 0x199284u;
            goto label_199284;
        }
    }
    ctx->pc = 0x19927Cu;
    // 0x19927c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x19927Cu;
    {
        const bool branch_taken_0x19927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19927c) {
            ctx->pc = 0x1994D0u;
            goto label_1994d0;
        }
    }
    ctx->pc = 0x199284u;
label_199284:
    // 0x199284: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199288: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19928c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19928cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x199290: 0x24063c07  addiu       $a2, $zero, 0x3C07
    ctx->pc = 0x199290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15367));
    // 0x199294: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199298: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x199298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19929c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19929Cu;
    SET_GPR_U32(ctx, 31, 0x1992A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19929Cu, 0x1992A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992A4u;
label_1992a4:
    // 0x1992a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1992a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1992a8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1992a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1992ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1992acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1992b0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1992b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1992b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1992b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1992b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1992b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1992bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1992bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1992c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1992c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1992c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1992c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1992c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1992c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1992cc: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1992ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_1992d0:
    // 0x1992d0: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x1992d4: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1992d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x1992d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1992d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1992dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1992dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1992e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1992e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1992e4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1992e8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1992e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1992ec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1992ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1992f0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1992f4: 0xc05c848  jal         func_172120
    ctx->pc = 0x1992F4u;
    SET_GPR_U32(ctx, 31, 0x1992FCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1992F4u, 0x1992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992FCu;
label_1992fc:
    // 0x1992fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1992fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199300: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199304: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199304u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199308: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x199308u;
    SET_GPR_U32(ctx, 31, 0x199310u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x199308u, 0x199310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199310u;
label_199310:
    // 0x199310: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199314: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x199318: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19931c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x19931cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x199320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199324: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x199324u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x199328: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19932c: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x199330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199334: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x199334u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x199338: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19933c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19933cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x199340: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x199340u;
    SET_GPR_U32(ctx, 31, 0x199348u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x199340u, 0x199348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199348u;
label_199348:
    // 0x199348: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19934c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x19934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199350: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x199350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x199354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199358: 0x0  nop
    ctx->pc = 0x199358u;
    // NOP
    // 0x19935c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19935cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199360: 0x0  nop
    ctx->pc = 0x199360u;
    // NOP
    // 0x199364: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x199364u;
    {
        const bool branch_taken_0x199364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199364) {
            ctx->pc = 0x199380u;
            goto label_199380;
        }
    }
    ctx->pc = 0x19936Cu;
    // 0x19936c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19936cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199370: 0x0  nop
    ctx->pc = 0x199370u;
    // NOP
    // 0x199374: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x199374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x199378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x199378u;
    {
        const bool branch_taken_0x199378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199378) {
            ctx->pc = 0x199390u;
            goto label_199390;
        }
    }
    ctx->pc = 0x199380u;
label_199380:
    // 0x199380: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x199384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199388: 0x0  nop
    ctx->pc = 0x199388u;
    // NOP
    // 0x19938c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19938cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_199390:
    // 0x199390: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199394: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x199394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199398: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x199398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19939c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19939cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1993a0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1993a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1993a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1993a8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1993a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1993ac: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1993acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1993b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1993b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1993b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1993b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1993b8: 0x0  nop
    ctx->pc = 0x1993b8u;
    // NOP
    // 0x1993bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1993bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1993c0: 0x0  nop
    ctx->pc = 0x1993c0u;
    // NOP
    // 0x1993c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1993C4u;
    {
        const bool branch_taken_0x1993c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1993c4) {
            ctx->pc = 0x1993E8u;
            goto label_1993e8;
        }
    }
    ctx->pc = 0x1993CCu;
    // 0x1993cc: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1993ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1993d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1993d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1993d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1993d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1993d8: 0x0  nop
    ctx->pc = 0x1993d8u;
    // NOP
    // 0x1993dc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1993dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1993e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1993E0u;
    {
        const bool branch_taken_0x1993e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993e0) {
            ctx->pc = 0x1993FCu;
            goto label_1993fc;
        }
    }
    ctx->pc = 0x1993E8u;
label_1993e8:
    // 0x1993e8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1993e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1993ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1993ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1993f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1993f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1993f4: 0x0  nop
    ctx->pc = 0x1993f4u;
    // NOP
    // 0x1993f8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1993f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1993fc:
    // 0x1993fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1993fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199400: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199404: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199408: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x199408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19940c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x19940cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x199410: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199414: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199418: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x19941c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19941cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199420: 0x0  nop
    ctx->pc = 0x199420u;
    // NOP
    // 0x199424: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199428: 0x0  nop
    ctx->pc = 0x199428u;
    // NOP
    // 0x19942c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19942Cu;
    {
        const bool branch_taken_0x19942c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19942c) {
            ctx->pc = 0x199444u;
            goto label_199444;
        }
    }
    ctx->pc = 0x199434u;
    // 0x199434: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x199434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x199438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19943c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199440: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x199440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_199444:
    // 0x199444: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199448: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19944c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x19944cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x199450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199454: 0x0  nop
    ctx->pc = 0x199454u;
    // NOP
    // 0x199458: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19945c: 0x0  nop
    ctx->pc = 0x19945cu;
    // NOP
    // 0x199460: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x199460u;
    {
        const bool branch_taken_0x199460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199460) {
            ctx->pc = 0x199478u;
            goto label_199478;
        }
    }
    ctx->pc = 0x199468u;
    // 0x199468: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x199468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x19946c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19946cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199470: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199474: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x199474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_199478:
    // 0x199478: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19947c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19947cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199480: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199484: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x199484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199488: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19948c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19948cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x199490: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199494: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x199494u;
    SET_GPR_U32(ctx, 31, 0x19949Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x199494u, 0x19949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19949Cu;
label_19949c:
    // 0x19949c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1994a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1994a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1994a4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1994A4u;
    SET_GPR_U32(ctx, 31, 0x1994ACu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1994A4u, 0x1994ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994ACu;
label_1994ac:
    // 0x1994ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1994acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1994b0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x1994B0u;
    SET_GPR_U32(ctx, 31, 0x1994B8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x1994B0u, 0x1994B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994B8u;
label_1994b8:
    // 0x1994b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1994b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1994bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1994bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1994c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1994C0u;
    {
        const bool branch_taken_0x1994c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1994c0) {
            ctx->pc = 0x1994D0u;
            goto label_1994d0;
        }
    }
    ctx->pc = 0x1994C8u;
    // 0x1994c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1994c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1994cc: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x1994ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_1994d0:
    // 0x1994d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1994d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1994d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1994d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1994d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1994D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1994D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1994E0u;
}
