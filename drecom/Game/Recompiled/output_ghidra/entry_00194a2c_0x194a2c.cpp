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

// Function: entry_00194a2c
// Address: 0x194a2c - 0x194a90
void entry_00194a2c_0x194a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194a2c_0x194a2c");
#endif

    ctx->pc = 0x194a2cu;

    // 0x194a2c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x194a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194a30: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x194a30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194a34: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x194a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194a38: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x194a38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x194a3c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x194a3cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x194a40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194a44: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194a48: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x194a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194a4c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x194a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x194a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194a54: 0x0  nop
    ctx->pc = 0x194a54u;
    // NOP
    // 0x194a58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194a5c: 0x0  nop
    ctx->pc = 0x194a5cu;
    // NOP
    // 0x194a60: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x194A60u;
    {
        const bool branch_taken_0x194a60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194a60) {
            ctx->pc = 0x194A90u;
            return;
        }
    }
    ctx->pc = 0x194A68u;
    // 0x194a68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194a6c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194a70: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x194a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194a74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x194a78: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x194a78u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194a7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194a80: 0x0  nop
    ctx->pc = 0x194a80u;
    // NOP
    // 0x194a84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x194A84u;
    {
        const bool branch_taken_0x194a84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194a84) {
            ctx->pc = 0x194A98u;
            return;
        }
    }
    ctx->pc = 0x194A8Cu;
    // 0x194a8c: 0x0  nop
    ctx->pc = 0x194a8cu;
    // NOP
    ctx->pc = 0x194a90u;
}
