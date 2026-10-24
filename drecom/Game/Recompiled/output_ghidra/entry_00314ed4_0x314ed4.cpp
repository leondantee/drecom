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

// Function: entry_00314ed4
// Address: 0x314ed4 - 0x315108
void entry_00314ed4_0x314ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00314ed4_0x314ed4");
#endif

    switch (ctx->pc) {
        case 0x314f08u: goto label_314f08;
        case 0x314f14u: goto label_314f14;
        case 0x314f74u: goto label_314f74;
        case 0x314f98u: goto label_314f98;
        case 0x314fbcu: goto label_314fbc;
        case 0x314fe0u: goto label_314fe0;
        case 0x315044u: goto label_315044;
        case 0x315074u: goto label_315074;
        default: break;
    }

    ctx->pc = 0x314ed4u;

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
            return;
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
    ctx->pc = 0x315108u;
}
