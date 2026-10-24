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

// Function: entry_00311e30
// Address: 0x311e30 - 0x311f34
void entry_00311e30_0x311e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311e30_0x311e30");
#endif

    switch (ctx->pc) {
        case 0x311ebcu: goto label_311ebc;
        case 0x311ef0u: goto label_311ef0;
        case 0x311f14u: goto label_311f14;
        default: break;
    }

    ctx->pc = 0x311e30u;

    // 0x311e30: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x311e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x311e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e38: 0x0  nop
    ctx->pc = 0x311e38u;
    // NOP
    // 0x311e3c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x311e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x311e40: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x311e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x311e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e48: 0x0  nop
    ctx->pc = 0x311e48u;
    // NOP
    // 0x311e4c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x311e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x311e50: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x311e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x311e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e58: 0x0  nop
    ctx->pc = 0x311e58u;
    // NOP
    // 0x311e5c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x311e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x311e60: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x311e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x311e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311e68: 0x0  nop
    ctx->pc = 0x311e68u;
    // NOP
    // 0x311e6c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x311e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x311e70: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x311e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311e74: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x311e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x311e78: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x311e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311e7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x311e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311e80: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x311e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x311e84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x311e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311e88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x311e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311e8c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x311e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x311e90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x311e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x311e94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x311e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311e98: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x311e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x311e9c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x311e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311ea0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x311ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x311ea4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x311ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311ea8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x311ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x311eac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x311eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311eb0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x311eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x311eb4: 0xc067648  jal         func_19D920
    ctx->pc = 0x311EB4u;
    SET_GPR_U32(ctx, 31, 0x311EBCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x311EB4u, 0x311EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EBCu;
label_311ebc:
    // 0x311ebc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x311ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x311ec0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311ec4: 0x0  nop
    ctx->pc = 0x311ec4u;
    // NOP
    // 0x311ec8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x311ec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311ecc: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x311eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x311ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311ed4: 0x0  nop
    ctx->pc = 0x311ed4u;
    // NOP
    // 0x311ed8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x311ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x311edc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x311edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x311ee0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x311ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x311ee4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x311ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x311ee8: 0xc067648  jal         func_19D920
    ctx->pc = 0x311EE8u;
    SET_GPR_U32(ctx, 31, 0x311EF0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x311EE8u, 0x311EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EF0u;
label_311ef0:
    // 0x311ef0: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x311ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x311ef4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x311ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x311ef8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311efc: 0x0  nop
    ctx->pc = 0x311efcu;
    // NOP
    // 0x311f00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x311f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311f04: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x311f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x311f08: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x311f08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x311f0c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x311F0Cu;
    SET_GPR_U32(ctx, 31, 0x311F14u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x311F0Cu, 0x311F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F14u;
label_311f14:
    // 0x311f14: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x311f14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x311f18: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x311f18u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x311f1c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x311f1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311f20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311f28: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x311f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x311f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x311F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311F34u;
}
