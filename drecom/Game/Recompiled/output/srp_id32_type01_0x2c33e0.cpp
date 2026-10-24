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

// Function: srp_id32_type01
// Address: 0x2c33e0 - 0x2c3578
void srp_id32_type01_0x2c33e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id32_type01_0x2c33e0");
#endif

    switch (ctx->pc) {
        case 0x2c3510u: goto label_2c3510;
        default: break;
    }

    ctx->pc = 0x2c33e0u;

    // 0x2c33e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c33e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c33e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c33e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c33e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c33e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c33ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c33ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c33f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c33f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c33f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c33f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c33fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3400: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c3400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3404: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2c3404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c3408: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c340c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c340cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c3410: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c3410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c3414: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c3414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c341c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2c341cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2c3420: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c3420u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2c3424: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c3424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c3428: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c3428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c342c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2c342cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2c3430: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c3434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3438: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2c3438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c343c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c343cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c3440: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3444: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3448: 0xa043036a  sb          $v1, 0x36A($v0)
    ctx->pc = 0x2c3448u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 874), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c344c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c344cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3458: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c3458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c345c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c345cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3464: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3468: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c3468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c346c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c346cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3474: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3478: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c3478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c347c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c3480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3488: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c3488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c348c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c3490: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3494: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c3494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3498: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2c3498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c349c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c34a0: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c34a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c34a4: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2c34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x2c34a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c34a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c34ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c34acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c34b0: 0xe44002a4  swc1        $f0, 0x2A4($v0)
    ctx->pc = 0x2c34b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 676), bits); }
    // 0x2c34b4: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x2c34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
    // 0x2c34b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c34b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c34bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c34c0: 0xe4400270  swc1        $f0, 0x270($v0)
    ctx->pc = 0x2c34c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 624), bits); }
    // 0x2c34c4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2c34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2c34c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c34c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c34cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c34d0: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2c34d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2c34d4: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x2c34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x2c34d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c34d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c34dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c34e0: 0xe4400278  swc1        $f0, 0x278($v0)
    ctx->pc = 0x2c34e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x2c34e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c34e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c34e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c34e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c34ec: 0xa04302a8  sb          $v1, 0x2A8($v0)
    ctx->pc = 0x2c34ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c34f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2c34f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2c34f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c34f8: 0xa043034f  sb          $v1, 0x34F($v0)
    ctx->pc = 0x2c34f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c34fc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2c34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c3500: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c3500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3504: 0xac430364  sw          $v1, 0x364($v0)
    ctx->pc = 0x2c3504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 868), GPR_U32(ctx, 3));
    // 0x2c3508: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C3508u;
    SET_GPR_U32(ctx, 31, 0x2C3510u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C3508u, 0x2C3510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3510u;
label_2c3510:
    // 0x2c3510: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x2c3510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x2c3514: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2c3514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2c3518: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c3518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c351c: 0x0  nop
    ctx->pc = 0x2c351cu;
    // NOP
    // 0x2c3520: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c3520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c3524: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c3524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c3528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c352c: 0x0  nop
    ctx->pc = 0x2c352cu;
    // NOP
    // 0x2c3530: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c3530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c3534: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3538: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c3538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c353c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c353cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3540: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x2c3540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x2c3544: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c3544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c3548: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c3548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c354c: 0xc4800338  lwc1        $f0, 0x338($a0)
    ctx->pc = 0x2c354cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3550: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c3550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c3554: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3558: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c3558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c355c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c355cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3560: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c3560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3564: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c3564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3568: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c3568u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c356c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c356cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c3570: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3578u;
}
