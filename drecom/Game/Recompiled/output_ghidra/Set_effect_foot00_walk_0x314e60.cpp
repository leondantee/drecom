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

// Function: Set_effect_foot00_walk
// Address: 0x314e60 - 0x315500
void Set_effect_foot00_walk_0x314e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_foot00_walk_0x314e60");
#endif

    switch (ctx->pc) {
        case 0x314ed4u: goto label_314ed4;
        case 0x314f08u: goto label_314f08;
        case 0x314f14u: goto label_314f14;
        case 0x314f74u: goto label_314f74;
        case 0x314f98u: goto label_314f98;
        case 0x314fbcu: goto label_314fbc;
        case 0x314fe0u: goto label_314fe0;
        case 0x315044u: goto label_315044;
        case 0x315074u: goto label_315074;
        case 0x315154u: goto label_315154;
        case 0x315188u: goto label_315188;
        case 0x315220u: goto label_315220;
        case 0x3152d0u: goto label_3152d0;
        case 0x3152f4u: goto label_3152f4;
        case 0x315318u: goto label_315318;
        case 0x31533cu: goto label_31533c;
        case 0x315378u: goto label_315378;
        case 0x3153a8u: goto label_3153a8;
        case 0x31546cu: goto label_31546c;
        case 0x31548cu: goto label_31548c;
        default: break;
    }

    ctx->pc = 0x314e60u;

    // 0x314e60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x314e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x314e64: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x314e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x314e68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x314e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x314e6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x314e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x314e70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x314e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x314e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x314e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x314e7c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x314e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x314e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314e84: 0x0  nop
    ctx->pc = 0x314e84u;
    // NOP
    // 0x314e88: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x314e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x314e8c: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x314e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x314e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314e94: 0x0  nop
    ctx->pc = 0x314e94u;
    // NOP
    // 0x314e98: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x314e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x314e9c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x314e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x314ea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314ea4: 0x0  nop
    ctx->pc = 0x314ea4u;
    // NOP
    // 0x314ea8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x314ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x314eac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x314eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x314eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314eb4: 0x0  nop
    ctx->pc = 0x314eb4u;
    // NOP
    // 0x314eb8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x314eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x314ebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314ec0: 0x0  nop
    ctx->pc = 0x314ec0u;
    // NOP
    // 0x314ec4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x314ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x314ec8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x314ec8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314ecc: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x314ECCu;
    {
        const bool branch_taken_0x314ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314ecc) {
            ctx->pc = 0x315130u;
            goto label_315130;
        }
    }
    ctx->pc = 0x314ED4u;
label_314ed4:
    // 0x314ed4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x314ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x314ed8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x314ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x314edc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x314edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314ee0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x314ee4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x314ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x314ee8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x314ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x314eec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x314eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x314ef0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x314ef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x314ef4: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x314ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x314ef8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x314ef8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314efc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x314efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x314f00: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x314F00u;
    SET_GPR_U32(ctx, 31, 0x314F08u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x314F00u, 0x314F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F08u;
label_314f08:
    // 0x314f08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x314f08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x314f0c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x314F0Cu;
    SET_GPR_U32(ctx, 31, 0x314F14u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x314F0Cu, 0x314F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F14u;
label_314f14:
    // 0x314f14: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x314f14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x314f18: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x314f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x314f1c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x314f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x314f20: 0x12030079  beq         $s0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x314F20u;
    {
        const bool branch_taken_0x314f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x314f20) {
            ctx->pc = 0x315108u;
            goto label_315108;
        }
    }
    ctx->pc = 0x314F28u;
    // 0x314f28: 0x3c0242f9  lui         $v0, 0x42F9
    ctx->pc = 0x314f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17145 << 16));
    // 0x314f2c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x314f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x314f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314f34: 0x0  nop
    ctx->pc = 0x314f34u;
    // NOP
    // 0x314f38: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x314f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x314f3c: 0x3c0242f9  lui         $v0, 0x42F9
    ctx->pc = 0x314f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17145 << 16));
    // 0x314f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314f44: 0x0  nop
    ctx->pc = 0x314f44u;
    // NOP
    // 0x314f48: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x314f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x314f4c: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x314f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
    // 0x314f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314f54: 0x0  nop
    ctx->pc = 0x314f54u;
    // NOP
    // 0x314f58: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x314f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x314f5c: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x314f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x314f60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314f64: 0x0  nop
    ctx->pc = 0x314f64u;
    // NOP
    // 0x314f68: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x314f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x314f6c: 0xc067648  jal         func_19D920
    ctx->pc = 0x314F6Cu;
    SET_GPR_U32(ctx, 31, 0x314F74u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x314F6Cu, 0x314F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F74u;
label_314f74:
    // 0x314f74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x314f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x314f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314f7c: 0x0  nop
    ctx->pc = 0x314f7cu;
    // NOP
    // 0x314f80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314f84: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x314f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314f88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x314f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x314f8c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x314f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x314f90: 0xc067648  jal         func_19D920
    ctx->pc = 0x314F90u;
    SET_GPR_U32(ctx, 31, 0x314F98u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x314F90u, 0x314F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F98u;
label_314f98:
    // 0x314f98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x314f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x314f9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314fa0: 0x0  nop
    ctx->pc = 0x314fa0u;
    // NOP
    // 0x314fa4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314fa8: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x314fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314fac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x314facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x314fb0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x314fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x314fb4: 0xc067648  jal         func_19D920
    ctx->pc = 0x314FB4u;
    SET_GPR_U32(ctx, 31, 0x314FBCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x314FB4u, 0x314FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314FBCu;
label_314fbc:
    // 0x314fbc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x314fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x314fc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314fc4: 0x0  nop
    ctx->pc = 0x314fc4u;
    // NOP
    // 0x314fc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314fcc: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x314fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314fd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x314fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x314fd4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x314fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x314fd8: 0xc067648  jal         func_19D920
    ctx->pc = 0x314FD8u;
    SET_GPR_U32(ctx, 31, 0x314FE0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x314FD8u, 0x314FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314FE0u;
label_314fe0:
    // 0x314fe0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x314fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x314fe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314fe8: 0x0  nop
    ctx->pc = 0x314fe8u;
    // NOP
    // 0x314fec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314ff0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x314ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314ff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x314ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x314ff8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x314ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x314ffc: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x314ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x315000: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x315000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x315004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315008: 0x0  nop
    ctx->pc = 0x315008u;
    // NOP
    // 0x31500c: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x31500cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x315010: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x315010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x315014: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x315014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x315018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31501c: 0x0  nop
    ctx->pc = 0x31501cu;
    // NOP
    // 0x315020: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x315020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x315024: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x315024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x315028: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x315028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x31502c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31502cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315030: 0x0  nop
    ctx->pc = 0x315030u;
    // NOP
    // 0x315034: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x315034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x315038: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x315038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31503c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x31503Cu;
    SET_GPR_U32(ctx, 31, 0x315044u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x31503Cu, 0x315044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315044u;
label_315044:
    // 0x315044: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x315044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x315048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31504c: 0x0  nop
    ctx->pc = 0x31504cu;
    // NOP
    // 0x315050: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315054: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x315054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x315058: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x315058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x31505c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315060: 0x0  nop
    ctx->pc = 0x315060u;
    // NOP
    // 0x315064: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x315064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x315068: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x315068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31506c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x31506Cu;
    SET_GPR_U32(ctx, 31, 0x315074u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x31506Cu, 0x315074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315074u;
label_315074:
    // 0x315074: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x315074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x315078: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x315078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31507c: 0x0  nop
    ctx->pc = 0x31507cu;
    // NOP
    // 0x315080: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315084: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x315084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x315088: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x315088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x31508c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31508cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315090: 0x0  nop
    ctx->pc = 0x315090u;
    // NOP
    // 0x315094: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x315094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x315098: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x315098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x31509c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31509cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3150a0: 0x0  nop
    ctx->pc = 0x3150a0u;
    // NOP
    // 0x3150a4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3150a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3150a8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3150a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3150ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3150acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3150b0: 0x0  nop
    ctx->pc = 0x3150b0u;
    // NOP
    // 0x3150b4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x3150b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x3150b8: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x3150b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x3150bc: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x3150bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x3150c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3150c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3150c4: 0x0  nop
    ctx->pc = 0x3150c4u;
    // NOP
    // 0x3150c8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x3150c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x3150cc: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x3150ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x3150d0: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x3150d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x3150d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3150d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3150d8: 0x0  nop
    ctx->pc = 0x3150d8u;
    // NOP
    // 0x3150dc: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x3150dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x3150e0: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x3150e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
    // 0x3150e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3150e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3150e8: 0x0  nop
    ctx->pc = 0x3150e8u;
    // NOP
    // 0x3150ec: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x3150ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x3150f0: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x3150f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x3150f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3150f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3150f8: 0x0  nop
    ctx->pc = 0x3150f8u;
    // NOP
    // 0x3150fc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3150fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x315100: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x315100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x315104: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x315104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_315108:
    // 0x315108: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x315108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31510c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x31510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315110: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x315110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x315114: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x315114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x315118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x315118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31511c: 0x0  nop
    ctx->pc = 0x31511cu;
    // NOP
    // 0x315120: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x315120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x315124: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x315124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x315128: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x315128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x31512c: 0x0  nop
    ctx->pc = 0x31512cu;
    // NOP
label_315130:
    // 0x315130: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x315130u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x315134: 0x1460ff67  bnez        $v1, . + 4 + (-0x99 << 2)
    ctx->pc = 0x315134u;
    {
        const bool branch_taken_0x315134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x315134) {
            ctx->pc = 0x314ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314ed4;
        }
    }
    ctx->pc = 0x31513Cu;
    // 0x31513c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31513cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315140: 0x0  nop
    ctx->pc = 0x315140u;
    // NOP
    // 0x315144: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x315144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x315148: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x315148u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31514c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x31514Cu;
    {
        const bool branch_taken_0x31514c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31514c) {
            ctx->pc = 0x3154D0u;
            goto label_3154d0;
        }
    }
    ctx->pc = 0x315154u;
label_315154:
    // 0x315154: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x315154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x315158: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x315158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31515c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31515cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315160: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x315160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x315164: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x315164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x315168: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x315168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31516c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31516cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x315170: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x315170u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x315174: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x315174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x315178: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x315178u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31517c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31517cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x315180: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x315180u;
    SET_GPR_U32(ctx, 31, 0x315188u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x315180u, 0x315188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315188u;
label_315188:
    // 0x315188: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31518c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x31518cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x315190: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315194: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315198: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x315198u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x31519c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3151a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151a8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x3151a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x3151ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151b4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x3151b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x3151b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3151b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3151bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151c4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x3151c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x3151c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151d0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x3151d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3151d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151d8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151dc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x3151dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x3151e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151e8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x3151e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x3151ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151f0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151f4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3151f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3151f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151fc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315200: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x315200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x315204: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315208: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315208u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31520c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x31520cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x315210: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315214: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x315214u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x315218: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x315218u;
    SET_GPR_U32(ctx, 31, 0x315220u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x315218u, 0x315220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315220u;
label_315220:
    // 0x315220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315224: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x315224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x315228: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31522c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x31522cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x315230: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x315230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x315234: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x315234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x315238: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x315238u;
    {
        const bool branch_taken_0x315238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x315238) {
            ctx->pc = 0x31524Cu;
            goto label_31524c;
        }
    }
    ctx->pc = 0x315240u;
    // 0x315240: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x315240u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x315244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x315244u;
    {
        const bool branch_taken_0x315244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315244) {
            ctx->pc = 0x315268u;
            goto label_315268;
        }
    }
    ctx->pc = 0x31524Cu;
label_31524c:
    // 0x31524c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31524cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315250: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x315250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x315254: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315258: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x315258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x31525c: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x31525cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x315260: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x315260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x315264: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x315264u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_315268:
    // 0x315268: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x315268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x31526c: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x31526cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x315270: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x315270u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x315274: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x315274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x315278: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x315278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x31527c: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x31527Cu;
    {
        const bool branch_taken_0x31527c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x31527c) {
            ctx->pc = 0x3154A8u;
            goto label_3154a8;
        }
    }
    ctx->pc = 0x315284u;
    // 0x315284: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x315284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x315288: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31528c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31528cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315290: 0x0  nop
    ctx->pc = 0x315290u;
    // NOP
    // 0x315294: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x315294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x315298: 0x3c0242f1  lui         $v0, 0x42F1
    ctx->pc = 0x315298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17137 << 16));
    // 0x31529c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31529cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3152a0: 0x0  nop
    ctx->pc = 0x3152a0u;
    // NOP
    // 0x3152a4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3152a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3152a8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3152a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3152ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3152acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3152b0: 0x0  nop
    ctx->pc = 0x3152b0u;
    // NOP
    // 0x3152b4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3152b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3152b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3152b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3152bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3152bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3152c0: 0x0  nop
    ctx->pc = 0x3152c0u;
    // NOP
    // 0x3152c4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x3152c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x3152c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x3152C8u;
    SET_GPR_U32(ctx, 31, 0x3152D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3152C8u, 0x3152D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152D0u;
label_3152d0:
    // 0x3152d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3152d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3152d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3152d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3152d8: 0x0  nop
    ctx->pc = 0x3152d8u;
    // NOP
    // 0x3152dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3152dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3152e0: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x3152e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3152e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3152e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3152e8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3152e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3152ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x3152ECu;
    SET_GPR_U32(ctx, 31, 0x3152F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3152ECu, 0x3152F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152F4u;
label_3152f4:
    // 0x3152f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3152f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3152f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3152f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3152fc: 0x0  nop
    ctx->pc = 0x3152fcu;
    // NOP
    // 0x315300: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315304: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x315304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x315308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31530c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x31530cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x315310: 0xc067648  jal         func_19D920
    ctx->pc = 0x315310u;
    SET_GPR_U32(ctx, 31, 0x315318u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315310u, 0x315318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315318u;
label_315318:
    // 0x315318: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x315318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31531c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31531cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315320: 0x0  nop
    ctx->pc = 0x315320u;
    // NOP
    // 0x315324: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315328: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x315328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31532c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31532cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x315330: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x315330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x315334: 0xc067648  jal         func_19D920
    ctx->pc = 0x315334u;
    SET_GPR_U32(ctx, 31, 0x31533Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315334u, 0x31533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31533Cu;
label_31533c:
    // 0x31533c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x31533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x315340: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315344: 0x0  nop
    ctx->pc = 0x315344u;
    // NOP
    // 0x315348: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31534c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x31534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315350: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x315350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x315354: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x315354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x315358: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x315358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x31535c: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x31535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x315360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315364: 0x0  nop
    ctx->pc = 0x315364u;
    // NOP
    // 0x315368: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x315368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x31536c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x31536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x315370: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x315370u;
    SET_GPR_U32(ctx, 31, 0x315378u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x315370u, 0x315378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315378u;
label_315378:
    // 0x315378: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x315378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x31537c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31537cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315380: 0x0  nop
    ctx->pc = 0x315380u;
    // NOP
    // 0x315384: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x315384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315388: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x315388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x31538c: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x31538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
    // 0x315390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315394: 0x0  nop
    ctx->pc = 0x315394u;
    // NOP
    // 0x315398: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x315398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x31539c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x31539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3153a0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x3153A0u;
    SET_GPR_U32(ctx, 31, 0x3153A8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x3153A0u, 0x3153A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3153A8u;
label_3153a8:
    // 0x3153a8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x3153a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x3153ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3153acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3153b0: 0x0  nop
    ctx->pc = 0x3153b0u;
    // NOP
    // 0x3153b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3153b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3153b8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x3153b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x3153bc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3153bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3153c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3153c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3153c4: 0x0  nop
    ctx->pc = 0x3153c4u;
    // NOP
    // 0x3153c8: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x3153c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x3153cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3153ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3153d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3153d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3153d4: 0x0  nop
    ctx->pc = 0x3153d4u;
    // NOP
    // 0x3153d8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3153d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3153dc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3153dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3153e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3153e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3153e4: 0x0  nop
    ctx->pc = 0x3153e4u;
    // NOP
    // 0x3153e8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x3153e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x3153ec: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x3153ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x3153f0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3153f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x3153f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3153f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3153f8: 0x0  nop
    ctx->pc = 0x3153f8u;
    // NOP
    // 0x3153fc: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x3153fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x315400: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x315400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x315404: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x315404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x315408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31540c: 0x0  nop
    ctx->pc = 0x31540cu;
    // NOP
    // 0x315410: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x315410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x315414: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x315414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x315418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31541c: 0x0  nop
    ctx->pc = 0x31541cu;
    // NOP
    // 0x315420: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x315420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x315424: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x315424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x315428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31542c: 0x0  nop
    ctx->pc = 0x31542cu;
    // NOP
    // 0x315430: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x315430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x315434: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x315434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x315438: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x315438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x31543c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x31543cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x315440: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315448: 0x0  nop
    ctx->pc = 0x315448u;
    // NOP
    // 0x31544c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x31544cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x315450: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x315450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x315454: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x315454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x315458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31545c: 0x0  nop
    ctx->pc = 0x31545cu;
    // NOP
    // 0x315460: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x315460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x315464: 0xc067648  jal         func_19D920
    ctx->pc = 0x315464u;
    SET_GPR_U32(ctx, 31, 0x31546Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315464u, 0x31546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31546Cu;
label_31546c:
    // 0x31546c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x31546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x315470: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x315470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x315474: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315478: 0x0  nop
    ctx->pc = 0x315478u;
    // NOP
    // 0x31547c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31547cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x315480: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x315480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x315484: 0xc067648  jal         func_19D920
    ctx->pc = 0x315484u;
    SET_GPR_U32(ctx, 31, 0x31548Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x315484u, 0x31548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31548Cu;
label_31548c:
    // 0x31548c: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x31548cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x315490: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x315490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x315494: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x315494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315498: 0x0  nop
    ctx->pc = 0x315498u;
    // NOP
    // 0x31549c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31549cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3154a0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3154a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3154a4: 0x0  nop
    ctx->pc = 0x3154a4u;
    // NOP
label_3154a8:
    // 0x3154a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3154a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3154ac: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x3154acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3154b0: 0x3c033f65  lui         $v1, 0x3F65
    ctx->pc = 0x3154b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16229 << 16));
    // 0x3154b4: 0x3463c73e  ori         $v1, $v1, 0xC73E
    ctx->pc = 0x3154b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51006);
    // 0x3154b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3154b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3154bc: 0x0  nop
    ctx->pc = 0x3154bcu;
    // NOP
    // 0x3154c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3154c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3154c4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3154c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3154c8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3154c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x3154cc: 0x0  nop
    ctx->pc = 0x3154ccu;
    // NOP
label_3154d0:
    // 0x3154d0: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x3154d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3154d4: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x3154D4u;
    {
        const bool branch_taken_0x3154d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3154d4) {
            ctx->pc = 0x315154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315154;
        }
    }
    ctx->pc = 0x3154DCu;
    // 0x3154dc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x3154dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3154e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3154e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3154e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3154e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3154e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3154e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3154ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3154ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3154f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3154f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3154f4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x3154f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3154f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3154F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3154F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315500u;
}
