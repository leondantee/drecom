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

// Function: entry_00313c80
// Address: 0x313c80 - 0x313d90
void entry_00313c80_0x313c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313c80_0x313c80");
#endif

    switch (ctx->pc) {
        case 0x313d74u: goto label_313d74;
        default: break;
    }

    ctx->pc = 0x313c80u;

    // 0x313c80: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x313c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x313c84: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x313c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x313c88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x313c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x313c8c: 0x24421c00  addiu       $v0, $v0, 0x1C00
    ctx->pc = 0x313c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7168));
    // 0x313c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313c94: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x313c94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313c98: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x313c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x313c9c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x313c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x313ca0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x313ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x313ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313ca8: 0x0  nop
    ctx->pc = 0x313ca8u;
    // NOP
    // 0x313cac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x313cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x313cb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x313cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313cb4: 0x0  nop
    ctx->pc = 0x313cb4u;
    // NOP
    // 0x313cb8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x313cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x313cbc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x313cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x313cc0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x313cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x313cc4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x313cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x313cc8: 0x24421cc0  addiu       $v0, $v0, 0x1CC0
    ctx->pc = 0x313cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7360));
    // 0x313ccc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x313cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313cd0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x313cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x313cd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313cd8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x313cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313cdc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x313cdcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313ce0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x313ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x313ce4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x313ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x313ce8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x313ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x313cec: 0x24421d00  addiu       $v0, $v0, 0x1D00
    ctx->pc = 0x313cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7424));
    // 0x313cf0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x313cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313cf4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x313cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x313cf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313cfc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x313cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313d00: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x313d00u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313d04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x313d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x313d08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x313d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x313d0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x313d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x313d10: 0x24421d00  addiu       $v0, $v0, 0x1D00
    ctx->pc = 0x313d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7424));
    // 0x313d14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x313d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313d18: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x313d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x313d1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313d20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x313d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313d24: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x313d24u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313d28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x313d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x313d2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x313d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x313d30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x313d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x313d34: 0x24421d00  addiu       $v0, $v0, 0x1D00
    ctx->pc = 0x313d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7424));
    // 0x313d38: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x313d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313d3c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x313d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x313d40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313d44: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x313d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313d48: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x313d48u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313d4c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x313d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x313d50: 0x24449240  addiu       $a0, $v0, -0x6DC0
    ctx->pc = 0x313d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x313d54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x313d54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313d58: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x313d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x313d5c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x313d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x313d60: 0x24479b30  addiu       $a3, $v0, -0x64D0
    ctx->pc = 0x313d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941488));
    // 0x313d64: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x313d64u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313d68: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x313d68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313d6c: 0xc0c4dac  jal         func_3136B0
    ctx->pc = 0x313D6Cu;
    SET_GPR_U32(ctx, 31, 0x313D74u);
    ctx->pc = 0x3136B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3136B0u, 0x313D6Cu, 0x313D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313D74u;
label_313d74:
    // 0x313d74: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x313d74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x313d78: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x313d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x313d7c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x313d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x313d80: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x313D80u;
    {
        const bool branch_taken_0x313d80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x313d80) {
            ctx->pc = 0x313D90u;
            return;
        }
    }
    ctx->pc = 0x313D88u;
    // 0x313d88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x313d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x313d8c: 0xa222011c  sb          $v0, 0x11C($s1)
    ctx->pc = 0x313d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x313d90u;
}
