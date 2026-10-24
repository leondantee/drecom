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

// Function: default
// Address: 0x1c8ea4 - 0x1c8f88
void ps2_default_0x1c8ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1c8ea4");
#endif

    switch (ctx->pc) {
        case 0x1c8f34u: goto label_1c8f34;
        default: break;
    }

    ctx->pc = 0x1c8ea4u;

    // 0x1c8ea4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c8ea8: 0x8c24013c  lw          $a0, 0x13C($at)
    ctx->pc = 0x1c8ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1c8eac: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x1c8eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1c8eb0: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C8EB0u;
    {
        const bool branch_taken_0x1c8eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8eb0) {
            ctx->pc = 0x1C8F88u;
            return;
        }
    }
    ctx->pc = 0x1C8EB8u;
    // 0x1c8eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ebc: 0x0  nop
    ctx->pc = 0x1c8ebcu;
    // NOP
    // 0x1c8ec0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c8ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c8ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ec8: 0x0  nop
    ctx->pc = 0x1c8ec8u;
    // NOP
    // 0x1c8ecc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c8eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c8ed0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1c8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1c8ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ed8: 0x0  nop
    ctx->pc = 0x1c8ed8u;
    // NOP
    // 0x1c8edc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c8edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c8ee0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8ee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ee8: 0x0  nop
    ctx->pc = 0x1c8ee8u;
    // NOP
    // 0x1c8eec: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1c8eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1c8ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ef4: 0x0  nop
    ctx->pc = 0x1c8ef4u;
    // NOP
    // 0x1c8ef8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c8ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c8efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f00: 0x0  nop
    ctx->pc = 0x1c8f00u;
    // NOP
    // 0x1c8f04: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c8f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c8f08: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x1c8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x1c8f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f10: 0x0  nop
    ctx->pc = 0x1c8f10u;
    // NOP
    // 0x1c8f14: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1c8f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c8f18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f20: 0x0  nop
    ctx->pc = 0x1c8f20u;
    // NOP
    // 0x1c8f24: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1c8f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1c8f28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c8f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c8f2c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1C8F2Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F34u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1C8F2Cu, 0x1C8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F34u;
label_1c8f34:
    // 0x1c8f34: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1c8f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1c8f38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1c8f3c: 0x24469240  addiu       $a2, $v0, -0x6DC0
    ctx->pc = 0x1c8f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x1c8f40: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x1c8f40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x1c8f44: 0x24e29240  addiu       $v0, $a3, -0x6DC0
    ctx->pc = 0x1c8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939200));
    // 0x1c8f48: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1c8f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1c8f4c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c8f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8f50: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1c8f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1c8f54: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1c8f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c8f58: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1c8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1c8f5c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1c8f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c8f60: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1c8f60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1c8f64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8f64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8f68: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1c8f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8f6c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1c8f6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8f70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1c8f70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8f74: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1c8f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c8f78: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x1c8f78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c8f7c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1c8f7cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8f80: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x1C8F80u;
    SET_GPR_U32(ctx, 31, 0x1C8F88u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x1C8F80u, 0x1C8F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F88u;
}
