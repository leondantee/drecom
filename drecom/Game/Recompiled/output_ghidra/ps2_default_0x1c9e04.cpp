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
// Address: 0x1c9e04 - 0x1c9f04
void ps2_default_0x1c9e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1c9e04");
#endif

    switch (ctx->pc) {
        case 0x1c9ec4u: goto label_1c9ec4;
        default: break;
    }

    ctx->pc = 0x1c9e04u;

    // 0x1c9e04: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x1c9e04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9e08: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x1c9e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1c9e0c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1c9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1c9e10: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1c9e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c9e14: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C9E14u;
    {
        const bool branch_taken_0x1c9e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e14) {
            ctx->pc = 0x1C9F10u;
            return;
        }
    }
    ctx->pc = 0x1C9E1Cu;
    // 0x1c9e1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9e20: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c9e20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c9e24: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1c9e28: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c9e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c9e2c: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C9E2Cu;
    {
        const bool branch_taken_0x1c9e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e2c) {
            ctx->pc = 0x1C9F10u;
            return;
        }
    }
    ctx->pc = 0x1C9E34u;
    // 0x1c9e34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9e38: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1c9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1c9e3c: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x1c9e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1c9e40: 0x14a00033  bnez        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1C9E40u;
    {
        const bool branch_taken_0x1c9e40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e40) {
            ctx->pc = 0x1C9F10u;
            return;
        }
    }
    ctx->pc = 0x1C9E48u;
    // 0x1c9e48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9e4c: 0x0  nop
    ctx->pc = 0x1c9e4cu;
    // NOP
    // 0x1c9e50: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c9e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c9e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9e58: 0x0  nop
    ctx->pc = 0x1c9e58u;
    // NOP
    // 0x1c9e5c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c9e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c9e60: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x1c9e60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
    // 0x1c9e64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c9e64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9e68: 0x0  nop
    ctx->pc = 0x1c9e68u;
    // NOP
    // 0x1c9e6c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c9e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c9e70: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1c9e70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9e74: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1c9e74u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9e78: 0x0  nop
    ctx->pc = 0x1c9e78u;
    // NOP
    // 0x1c9e7c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1c9e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1c9e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9e84: 0x0  nop
    ctx->pc = 0x1c9e84u;
    // NOP
    // 0x1c9e88: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c9e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c9e8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9e8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9e90: 0x0  nop
    ctx->pc = 0x1c9e90u;
    // NOP
    // 0x1c9e94: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c9e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c9e98: 0x3c084416  lui         $t0, 0x4416
    ctx->pc = 0x1c9e98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17430 << 16));
    // 0x1c9e9c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c9e9cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ea0: 0x0  nop
    ctx->pc = 0x1c9ea0u;
    // NOP
    // 0x1c9ea4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1c9ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c9ea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9eb0: 0x0  nop
    ctx->pc = 0x1c9eb0u;
    // NOP
    // 0x1c9eb4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1c9eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1c9eb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9ebc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1C9EBCu;
    SET_GPR_U32(ctx, 31, 0x1C9EC4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1C9EBCu, 0x1C9EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EC4u;
label_1c9ec4:
    // 0x1c9ec4: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x1c9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x1c9ec8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1c9ec8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9ecc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1c9eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1c9ed0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1c9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1c9ed4: 0x24649240  addiu       $a0, $v1, -0x6DC0
    ctx->pc = 0x1c9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x1c9ed8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1c9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1c9edc: 0x24679240  addiu       $a3, $v1, -0x6DC0
    ctx->pc = 0x1c9edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x1c9ee0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1c9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1c9ee4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1c9ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c9ee8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1c9eec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c9eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c9ef0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c9ef0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9ef4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9ef8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1c9ef8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9efc: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1c9efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c9f00: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x1c9f00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1c9f04u;
}
