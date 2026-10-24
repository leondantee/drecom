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

// Function: entry_002743cc
// Address: 0x2743cc - 0x27444c
void entry_002743cc_0x2743cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002743cc_0x2743cc");
#endif

    ctx->pc = 0x2743ccu;

    // 0x2743cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2743ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2743d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2743d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2743d4: 0x0  nop
    ctx->pc = 0x2743d4u;
    // NOP
    // 0x2743d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2743d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2743dc: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x2743dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2743e0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2743e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2743e4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2743e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2743e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2743e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2743ec: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2743ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2743f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2743f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2743f4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2743f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2743f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2743f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2743fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2743fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x274400: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x274400u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x274404: 0x8e8202d0  lw          $v0, 0x2D0($s4)
    ctx->pc = 0x274404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x274408: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x274408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27440c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x27440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274410: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274414: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x274414u;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274418: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x274418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27441c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27441cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274420: 0x0  nop
    ctx->pc = 0x274420u;
    // NOP
    // 0x274424: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x274424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274428: 0x0  nop
    ctx->pc = 0x274428u;
    // NOP
    // 0x27442c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x27442Cu;
    {
        const bool branch_taken_0x27442c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27442c) {
            ctx->pc = 0x27444Cu;
            return;
        }
    }
    ctx->pc = 0x274434u;
    // 0x274434: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x274434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x274438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27443c: 0x0  nop
    ctx->pc = 0x27443cu;
    // NOP
    // 0x274440: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x274440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x274444: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274444u;
    {
        const bool branch_taken_0x274444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274444) {
            ctx->pc = 0x274460u;
            return;
        }
    }
    ctx->pc = 0x27444Cu;
}
