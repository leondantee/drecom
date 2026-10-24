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

// Function: srp_id33_type01
// Address: 0x2c3750 - 0x2c38fc
void srp_id33_type01_0x2c3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id33_type01_0x2c3750");
#endif

    switch (ctx->pc) {
        case 0x2c379cu: goto label_2c379c;
        case 0x2c38b8u: goto label_2c38b8;
        default: break;
    }

    ctx->pc = 0x2c3750u;

    // 0x2c3750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3754: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c3754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c3758: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c3758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c375c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3760: 0xa040036a  sb          $zero, 0x36A($v0)
    ctx->pc = 0x2c3760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 874), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3764: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c376c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3770: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c3770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c3774: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c377c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3780: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c3780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c3784: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c3784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c378c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3790: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c3790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c3794: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C3794u;
    SET_GPR_U32(ctx, 31, 0x2C379Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C3794u, 0x2C379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C379Cu;
label_2c379c:
    // 0x2c379c: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2c379cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2c37a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c37a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c37a4: 0x0  nop
    ctx->pc = 0x2c37a4u;
    // NOP
    // 0x2c37a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c37a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c37ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c37acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c37b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c37b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c37b4: 0x0  nop
    ctx->pc = 0x2c37b4u;
    // NOP
    // 0x2c37b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c37b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c37bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c37bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c37c0: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c37c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c37c4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c37c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c37c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c37cc: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c37ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c37d0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2c37d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c37d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c37d8: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c37d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c37dc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c37e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c37e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c37e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c37e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c37e8: 0xe44002a4  swc1        $f0, 0x2A4($v0)
    ctx->pc = 0x2c37e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 676), bits); }
    // 0x2c37ec: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2c37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2c37f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c37f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c37f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c37f8: 0xe4400270  swc1        $f0, 0x270($v0)
    ctx->pc = 0x2c37f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 624), bits); }
    // 0x2c37fc: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x2c37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x2c3800: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c3800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c3804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3808: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c380c: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2c380cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2c3810: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x2c3810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x2c3814: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c3814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c3818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c381c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3820: 0xe4400278  swc1        $f0, 0x278($v0)
    ctx->pc = 0x2c3820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x2c3824: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c3828: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c3828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c382c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c382cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c3830: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c3830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3838: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c3838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c383c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2c383cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c3840: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c3844: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c3844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c3848: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c3848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c384c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c384cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3854: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2c3854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2c3858: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c3858u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2c385c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c3860: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c3864: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2c3864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2c3868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c386c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3870: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2c3870u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c3874: 0x0  nop
    ctx->pc = 0x2c3874u;
    // NOP
    // 0x2c3878: 0x0  nop
    ctx->pc = 0x2c3878u;
    // NOP
    // 0x2c387c: 0x1010  mfhi        $v0
    ctx->pc = 0x2c387cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c3880: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3888: 0xa04302aa  sb          $v1, 0x2AA($v0)
    ctx->pc = 0x2c3888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 682), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c388c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3890: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3894: 0xa04302a8  sb          $v1, 0x2A8($v0)
    ctx->pc = 0x2c3894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3898: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x2c3898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2c389c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c38a0: 0xa043034f  sb          $v1, 0x34F($v0)
    ctx->pc = 0x2c38a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c38a4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c38a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c38ac: 0xac430364  sw          $v1, 0x364($v0)
    ctx->pc = 0x2c38acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 868), GPR_U32(ctx, 3));
    // 0x2c38b0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C38B0u;
    SET_GPR_U32(ctx, 31, 0x2C38B8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C38B0u, 0x2C38B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38B8u;
label_2c38b8:
    // 0x2c38b8: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2c38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2c38bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c38bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c38c0: 0x0  nop
    ctx->pc = 0x2c38c0u;
    // NOP
    // 0x2c38c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c38c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c38c8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c38cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c38ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c38d0: 0x0  nop
    ctx->pc = 0x2c38d0u;
    // NOP
    // 0x2c38d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c38d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c38d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c38d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c38dc: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c38dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c38e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c38e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c38e8: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c38e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c38ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c38ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c38f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c38f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C38F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C38F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C38FCu;
}
