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

// Function: e2d_id04_type29
// Address: 0x2ae6b0 - 0x2ae878
void e2d_id04_type29_0x2ae6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type29_0x2ae6b0");
#endif

    switch (ctx->pc) {
        case 0x2ae7a4u: goto label_2ae7a4;
        default: break;
    }

    ctx->pc = 0x2ae6b0u;

    // 0x2ae6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae6b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ae6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ae6b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ae6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ae6bc: 0x3c024332  lui         $v0, 0x4332
    ctx->pc = 0x2ae6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17202 << 16));
    // 0x2ae6c0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ae6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ae6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae6c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae6cc: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ae6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ae6d0: 0x3c024308  lui         $v0, 0x4308
    ctx->pc = 0x2ae6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17160 << 16));
    // 0x2ae6d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ae6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ae6d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae6dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae6e0: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ae6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ae6e4: 0x3c0242c2  lui         $v0, 0x42C2
    ctx->pc = 0x2ae6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17090 << 16));
    // 0x2ae6e8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ae6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ae6ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae6f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae6f4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ae6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ae6f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ae6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ae6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae700: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae704: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ae704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ae708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae70c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae710: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2ae710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2ae714: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2ae714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2ae718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae71c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae720: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2ae720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2ae724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae728: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae72c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2ae72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2ae730: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ae730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ae734: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ae734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ae738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae73c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae740: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2ae740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2ae744: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ae744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ae748: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ae748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ae74c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae750: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae754: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2ae754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2ae758: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ae758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ae75c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ae75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ae760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae764: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae768: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2ae768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2ae76c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ae76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ae770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae774: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae778: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2ae778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2ae77c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ae77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ae780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae784: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae788: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2ae788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2ae78c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ae78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ae790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae794: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae798: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2ae798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2ae79c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AE79Cu;
    SET_GPR_U32(ctx, 31, 0x2AE7A4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AE79Cu, 0x2AE7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE7A4u;
label_2ae7a4:
    // 0x2ae7a4: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2ae7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2ae7a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ae7a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae7ac: 0x0  nop
    ctx->pc = 0x2ae7acu;
    // NOP
    // 0x2ae7b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ae7b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ae7b4: 0x3c0343be  lui         $v1, 0x43BE
    ctx->pc = 0x2ae7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17342 << 16));
    // 0x2ae7b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae7b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae7bc: 0x0  nop
    ctx->pc = 0x2ae7bcu;
    // NOP
    // 0x2ae7c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae7c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ae7c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae7c8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ae7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ae7cc: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2ae7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2ae7d0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ae7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ae7d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae7d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae7d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae7dc: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ae7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ae7e0: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2ae7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2ae7e4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ae7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ae7e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae7e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae7ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae7f0: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2ae7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2ae7f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ae7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae7f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae7fc: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2ae7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae800: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ae800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae804: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae808: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2ae808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae80c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae810: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ae810u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae814: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ae814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ae818: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae81c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae820: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ae820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae824: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ae824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ae828: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae82c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ae82cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae830: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ae830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ae834: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae83c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ae83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ae840: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ae840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ae844: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ae844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ae848: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae84c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ae84cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ae850: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ae850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae854: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ae854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ae858: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ae858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ae85c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ae85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae860: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae864: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ae864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae868: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ae868u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae86c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ae86cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ae870: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE878u;
}
