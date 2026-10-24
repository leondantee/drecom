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

// Function: e2d_id04_type27
// Address: 0x2ae260 - 0x2ae4e4
void e2d_id04_type27_0x2ae260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type27_0x2ae260");
#endif

    switch (ctx->pc) {
        case 0x2ae380u: goto label_2ae380;
        case 0x2ae424u: goto label_2ae424;
        default: break;
    }

    ctx->pc = 0x2ae260u;

    // 0x2ae260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ae260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ae264: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2ae264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2ae268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ae268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ae26c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2ae26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2ae270: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ae270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ae274: 0x2450fce0  addiu       $s0, $v0, -0x320
    ctx->pc = 0x2ae274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x2ae278: 0x3c0242a4  lui         $v0, 0x42A4
    ctx->pc = 0x2ae278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17060 << 16));
    // 0x2ae27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae280: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae284: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ae284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ae288: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2ae288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2ae28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae290: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae294: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ae294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ae298: 0x3c024238  lui         $v0, 0x4238
    ctx->pc = 0x2ae298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16952 << 16));
    // 0x2ae29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae2a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae2a4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ae2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ae2a8: 0x3c024268  lui         $v0, 0x4268
    ctx->pc = 0x2ae2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17000 << 16));
    // 0x2ae2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae2b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae2b4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ae2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ae2b8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ae2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ae2bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ae2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ae2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae2c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae2c8: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ae2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ae2cc: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x2ae2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x2ae2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae2d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae2d8: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2ae2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2ae2dc: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x2ae2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x2ae2e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae2e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae2e8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2ae2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2ae2ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2ae2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae2f0: 0x3c023ee4  lui         $v0, 0x3EE4
    ctx->pc = 0x2ae2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16100 << 16));
    // 0x2ae2f4: 0x3442dd2f  ori         $v0, $v0, 0xDD2F
    ctx->pc = 0x2ae2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56623);
    // 0x2ae2f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ae2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae2fc: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x2ae2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae300: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ae300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ae304: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae308: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2ae308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2ae30c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ae30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ae310: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ae310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ae314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae318: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae31c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2ae31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2ae320: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ae320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ae324: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ae324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ae328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae32c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae330: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2ae330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2ae334: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ae334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ae338: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ae338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ae33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae340: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae344: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2ae344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2ae348: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ae348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ae34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae350: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae354: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2ae354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2ae358: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2ae358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2ae35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae364: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2ae364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2ae368: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ae368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ae36c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae370: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae374: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2ae374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2ae378: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AE378u;
    SET_GPR_U32(ctx, 31, 0x2AE380u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AE378u, 0x2AE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE380u;
label_2ae380:
    // 0x2ae380: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2ae380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2ae384: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ae384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ae388: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ae388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae38c: 0x0  nop
    ctx->pc = 0x2ae38cu;
    // NOP
    // 0x2ae390: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ae390u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ae394: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x2ae394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x2ae398: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ae398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ae39c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae3a0: 0x0  nop
    ctx->pc = 0x2ae3a0u;
    // NOP
    // 0x2ae3a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ae3a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae3ac: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2ae3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2ae3b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae3b4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ae3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae3b8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ae3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ae3bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ae3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ae3c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ae3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae3c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ae3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ae3c8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ae3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ae3cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae3d0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ae3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae3d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ae3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ae3d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ae3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ae3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ae3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae3e0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ae3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ae3e4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ae3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ae3e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ae3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ae3ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae3f0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ae3f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ae3f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ae3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ae3f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ae3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ae3fc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2ae3fcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2ae400: 0x0  nop
    ctx->pc = 0x2ae400u;
    // NOP
    // 0x2ae404: 0x0  nop
    ctx->pc = 0x2ae404u;
    // NOP
    // 0x2ae408: 0x1010  mfhi        $v0
    ctx->pc = 0x2ae408u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ae40c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2ae40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2ae410: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ae410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ae414: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ae414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae418: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2ae418u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae41c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AE41Cu;
    SET_GPR_U32(ctx, 31, 0x2AE424u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AE41Cu, 0x2AE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE424u;
label_2ae424:
    // 0x2ae424: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2ae424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2ae428: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ae428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae42c: 0x0  nop
    ctx->pc = 0x2ae42cu;
    // NOP
    // 0x2ae430: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ae430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ae434: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x2ae434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x2ae438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae43c: 0x0  nop
    ctx->pc = 0x2ae43cu;
    // NOP
    // 0x2ae440: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ae444: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2ae444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae448: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ae448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ae44c: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2ae44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2ae450: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ae450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ae454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae458: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2ae458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae45c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ae45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ae460: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ae460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae464: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2ae464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae468: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2ae468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae46c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae470: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ae470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae474: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ae474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ae478: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae47c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae480: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ae480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae484: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ae484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ae488: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae48c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ae48cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae490: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ae490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ae494: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae498: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae49c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ae49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ae4a0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ae4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ae4a4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ae4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ae4a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae4ac: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ae4acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ae4b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ae4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae4b4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2ae4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ae4b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ae4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae4bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2ae4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae4c0: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ae4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae4c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ae4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae4c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2ae4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae4cc: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2ae4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae4d0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2ae4d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ae4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae4d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ae4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ae4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE4E4u;
}
