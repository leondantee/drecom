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

// Function: entry_00275f1c
// Address: 0x275f1c - 0x275fb0
void entry_00275f1c_0x275f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275f1c_0x275f1c");
#endif

    ctx->pc = 0x275f1cu;

    // 0x275f1c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x275f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x275f20: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x275f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x275f24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275f28: 0x0  nop
    ctx->pc = 0x275f28u;
    // NOP
    // 0x275f2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x275f2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x275f30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x275f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x275f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x275f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275f38: 0x0  nop
    ctx->pc = 0x275f38u;
    // NOP
    // 0x275f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x275f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x275f40: 0x112240  sll         $a0, $s1, 9
    ctx->pc = 0x275f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x275f44: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x275f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x275f48: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x275f48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x275f4c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x275f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x275f50: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x275f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x275f54: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x275f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275f58: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x275f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x275f5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275f60: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x275f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275f64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x275f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x275f68: 0x8e8202d0  lw          $v0, 0x2D0($s4)
    ctx->pc = 0x275f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x275f6c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x275f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275f70: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x275f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275f74: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x275f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x275f78: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x275f78u;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275f7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x275f7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x275f80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275f84: 0x0  nop
    ctx->pc = 0x275f84u;
    // NOP
    // 0x275f88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275f8c: 0x0  nop
    ctx->pc = 0x275f8cu;
    // NOP
    // 0x275f90: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x275F90u;
    {
        const bool branch_taken_0x275f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275f90) {
            ctx->pc = 0x275FB0u;
            return;
        }
    }
    ctx->pc = 0x275F98u;
    // 0x275f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x275f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x275f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x275f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275fa0: 0x0  nop
    ctx->pc = 0x275fa0u;
    // NOP
    // 0x275fa4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x275fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x275fa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275FA8u;
    {
        const bool branch_taken_0x275fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275fa8) {
            ctx->pc = 0x275FC0u;
            return;
        }
    }
    ctx->pc = 0x275FB0u;
}
