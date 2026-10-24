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

// Function: e2d_id10_type01
// Address: 0x2b08a0 - 0x2b0ac4
void e2d_id10_type01_0x2b08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id10_type01_0x2b08a0");
#endif

    switch (ctx->pc) {
        case 0x2b08b4u: goto label_2b08b4;
        case 0x2b0940u: goto label_2b0940;
        case 0x2b0968u: goto label_2b0968;
        case 0x2b0988u: goto label_2b0988;
        case 0x2b0994u: goto label_2b0994;
        case 0x2b0a30u: goto label_2b0a30;
        case 0x2b0a40u: goto label_2b0a40;
        default: break;
    }

    ctx->pc = 0x2b08a0u;

    // 0x2b08a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b08a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b08a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b08a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b08a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b08a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b08ac: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2B08ACu;
    SET_GPR_U32(ctx, 31, 0x2B08B4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2B08ACu, 0x2B08B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08B4u;
label_2b08b4:
    // 0x2b08b4: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2b08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2b08b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b08b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b08bc: 0x0  nop
    ctx->pc = 0x2b08bcu;
    // NOP
    // 0x2b08c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b08c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b08c4: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x2b08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x2b08c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b08c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b08cc: 0x0  nop
    ctx->pc = 0x2b08ccu;
    // NOP
    // 0x2b08d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b08d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b08d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b08d8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b08d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b08dc: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x2b08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x2b08e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b08e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b08e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b08e8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2b08e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2b08ec: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x2b08ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x2b08f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b08f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b08f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b08f8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b08f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b08fc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2b08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2b0900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0904: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0908: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b0908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b090c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x2b090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x2b0910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0914: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0918: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b0918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b091c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2b091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2b0920: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b0920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b0924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0928: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b092c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b0930: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0934: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x2b0934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0938: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2B0938u;
    SET_GPR_U32(ctx, 31, 0x2B0940u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2B0938u, 0x2B0940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0940u;
label_2b0940:
    // 0x2b0940: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2b0940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2b0944: 0x34639374  ori         $v1, $v1, 0x9374
    ctx->pc = 0x2b0944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37748);
    // 0x2b0948: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2b0948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b094c: 0x3403bc6a  ori         $v1, $zero, 0xBC6A
    ctx->pc = 0x2b094cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48234);
    // 0x2b0950: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b0950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2b0954: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x2b0954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32506);
    // 0x2b0958: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2b0958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b095c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2b095cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2b0960: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x2B0960u;
    SET_GPR_U32(ctx, 31, 0x2B0968u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2B0960u, 0x2B0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0968u;
label_2b0968:
    // 0x2b0968: 0x3c033feb  lui         $v1, 0x3FEB
    ctx->pc = 0x2b0968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16363 << 16));
    // 0x2b096c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b0970: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2b0970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b0974: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2b0974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2b0978: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2b0978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b097c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2b097cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2b0980: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x2B0980u;
    SET_GPR_U32(ctx, 31, 0x2B0988u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x2B0980u, 0x2B0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0988u;
label_2b0988:
    // 0x2b0988: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2b0988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2b098c: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x2B098Cu;
    SET_GPR_U32(ctx, 31, 0x2B0994u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x2B098Cu, 0x2B0994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0994u;
label_2b0994:
    // 0x2b0994: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0998: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b0998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b099c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2b099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2b09a0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b09a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b09a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b09a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b09a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b09ac: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b09acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b09b0: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x2b09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
    // 0x2b09b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b09b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b09b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b09b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b09bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b09c0: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b09c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b09c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b09c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b09c8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b09cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b09ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b09d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b09d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b09d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b09d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b09dc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b09e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b09e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b09e4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b09e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b09e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b09ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b09f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b09f4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b09f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b09f8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b09fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b0a00: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b0a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b0a04: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b0a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b0a08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0a0c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2b0a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2b0a10: 0x24430032  addiu       $v1, $v0, 0x32
    ctx->pc = 0x2b0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x2b0a14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0a18: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b0a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b0a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0a20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0a24: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b0a24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b0a28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B0A28u;
    SET_GPR_U32(ctx, 31, 0x2B0A30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B0A28u, 0x2B0A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A30u;
label_2b0a30:
    // 0x2b0a30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0a34: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b0a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b0a38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B0A38u;
    SET_GPR_U32(ctx, 31, 0x2B0A40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B0A38u, 0x2B0A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A40u;
label_2b0a40:
    // 0x2b0a40: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b0a44: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b0a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b0a48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b0a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0a4c: 0x0  nop
    ctx->pc = 0x2b0a4cu;
    // NOP
    // 0x2b0a50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b0a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b0a54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0a58: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b0a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b0a5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b0a60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0a64: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b0a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b0a68: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2b0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2b0a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0a70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0a74: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b0a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b0a78: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2b0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2b0a7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0a80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0a84: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b0a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b0a88: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2b0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2b0a8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0a90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0a94: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b0a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b0a98: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2b0a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2b0a9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0aa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0aa4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b0aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b0aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0aac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b0aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0ab0: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b0ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b0ab4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b0ab4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0ab8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b0ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b0abc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0AC4u;
}
