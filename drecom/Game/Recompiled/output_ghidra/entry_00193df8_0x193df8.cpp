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

// Function: entry_00193df8
// Address: 0x193df8 - 0x193e48
void entry_00193df8_0x193df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193df8_0x193df8");
#endif

    ctx->pc = 0x193df8u;

    // 0x193df8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x193df8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193dfc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x193dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x193e00: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x193e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x193e04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x193e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193e08: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x193e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x193e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193e10: 0x0  nop
    ctx->pc = 0x193e10u;
    // NOP
    // 0x193e14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193e18: 0x0  nop
    ctx->pc = 0x193e18u;
    // NOP
    // 0x193e1c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x193E1Cu;
    {
        const bool branch_taken_0x193e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193e1c) {
            ctx->pc = 0x193E48u;
            return;
        }
    }
    ctx->pc = 0x193E24u;
    // 0x193e24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x193e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x193e28: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x193e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x193e2c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x193e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193e30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x193e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x193e34: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x193e34u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193e3c: 0x0  nop
    ctx->pc = 0x193e3cu;
    // NOP
    // 0x193e40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x193E40u;
    {
        const bool branch_taken_0x193e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193e40) {
            ctx->pc = 0x193E50u;
            return;
        }
    }
    ctx->pc = 0x193E48u;
}
