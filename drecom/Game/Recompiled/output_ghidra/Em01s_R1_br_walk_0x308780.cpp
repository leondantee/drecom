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

// Function: Em01s_R1_br_walk
// Address: 0x308780 - 0x308980
void Em01s_R1_br_walk_0x308780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_br_walk_0x308780");
#endif

    switch (ctx->pc) {
        case 0x308838u: goto label_308838;
        default: break;
    }

    ctx->pc = 0x308780u;

    // 0x308780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308784: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x308784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x308788: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x308788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30878c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308790: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x308790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308794: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x308794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x308798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x308798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30879c: 0x0  nop
    ctx->pc = 0x30879cu;
    // NOP
    // 0x3087a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3087a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3087a4: 0x0  nop
    ctx->pc = 0x3087a4u;
    // NOP
    // 0x3087a8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x3087A8u;
    {
        const bool branch_taken_0x3087a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3087a8) {
            ctx->pc = 0x3087E0u;
            goto label_3087e0;
        }
    }
    ctx->pc = 0x3087B0u;
    // 0x3087b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3087b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3087b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3087b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3087b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3087b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3087bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3087bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3087c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3087c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3087c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3087c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3087c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3087c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3087cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3087ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3087d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3087d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3087d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3087d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3087d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3087d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3087dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3087dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3087e0:
    // 0x3087e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3087e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3087e4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3087e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3087e8: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x3087e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x3087ec: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3087ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3087f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3087f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3087f4: 0x0  nop
    ctx->pc = 0x3087f4u;
    // NOP
    // 0x3087f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3087f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3087fc: 0x0  nop
    ctx->pc = 0x3087fcu;
    // NOP
    // 0x308800: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x308800u;
    {
        const bool branch_taken_0x308800 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308800) {
            ctx->pc = 0x308870u;
            goto label_308870;
        }
    }
    ctx->pc = 0x308808u;
    // 0x308808: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x308808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x30880c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x308810: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x308810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308814: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308818: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x308818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30881c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308820: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x308820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x308824: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x308824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308828: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x308828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30882c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x308830: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x308830u;
    SET_GPR_U32(ctx, 31, 0x308838u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x308830u, 0x308838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308838u;
label_308838:
    // 0x308838: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x308838u;
    {
        const bool branch_taken_0x308838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308838) {
            ctx->pc = 0x308870u;
            goto label_308870;
        }
    }
    ctx->pc = 0x308840u;
    // 0x308840: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308844: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308848: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30884c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x30884cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308850: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308854: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308858: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30885c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30885cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308860: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308864: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308868: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30886c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30886cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_308870:
    // 0x308870: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308874: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x308874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x308878: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x308878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30887c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x30887cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308880: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x308880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x308884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x308884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308888: 0x0  nop
    ctx->pc = 0x308888u;
    // NOP
    // 0x30888c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30888cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x308890: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x308890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308894: 0x0  nop
    ctx->pc = 0x308894u;
    // NOP
    // 0x308898: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x308898u;
    {
        const bool branch_taken_0x308898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308898) {
            ctx->pc = 0x3088D0u;
            goto label_3088d0;
        }
    }
    ctx->pc = 0x3088A0u;
    // 0x3088a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3088a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3088a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3088a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3088ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3088acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3088b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3088b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3088b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3088bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3088c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3088c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3088c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3088ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3088d0:
    // 0x3088d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088d4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x3088d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3088d8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3088d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x3088dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3088dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3088e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3088e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3088e4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x3088e4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3088e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3088e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3088ec: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3088ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3088f0: 0x0  nop
    ctx->pc = 0x3088f0u;
    // NOP
    // 0x3088f4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x3088F4u;
    {
        const bool branch_taken_0x3088f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3088f4) {
            ctx->pc = 0x30892Cu;
            goto label_30892c;
        }
    }
    ctx->pc = 0x3088FCu;
    // 0x3088fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3088fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308900: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308904: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308908: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x308908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30890c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308910: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308914: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308918: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30891c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308920: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308924: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308928: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30892c:
    // 0x30892c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308930: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x308930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x308934: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x308934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x308938: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x308938u;
    {
        const bool branch_taken_0x308938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308938) {
            ctx->pc = 0x308970u;
            goto label_308970;
        }
    }
    ctx->pc = 0x308940u;
    // 0x308940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308944: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308948: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30894c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x30894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x308950: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308954: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308958: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30895c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30895cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308960: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308964: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308968: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30896c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30896cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_308970:
    // 0x308970: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x308970u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308974: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x308974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x308978: 0x3e00008  jr          $ra
    ctx->pc = 0x308978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308980u;
}
