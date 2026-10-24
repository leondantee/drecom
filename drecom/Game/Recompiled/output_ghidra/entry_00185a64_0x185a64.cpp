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

// Function: entry_00185a64
// Address: 0x185a64 - 0x185ac8
void entry_00185a64_0x185a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185a64_0x185a64");
#endif

    ctx->pc = 0x185a64u;

    // 0x185a64: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x185a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185a68: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x185a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x185a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185a70: 0x0  nop
    ctx->pc = 0x185a70u;
    // NOP
    // 0x185a74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185a78: 0x0  nop
    ctx->pc = 0x185a78u;
    // NOP
    // 0x185a7c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x185A7Cu;
    {
        const bool branch_taken_0x185a7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185a7c) {
            ctx->pc = 0x185AD0u;
            return;
        }
    }
    ctx->pc = 0x185A84u;
    // 0x185a84: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a88: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x185a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x185a8c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185a8cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x4802D0u));
    // 0x185a90: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x185a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185a94: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185a94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x185a98: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a9c: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x185a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x185aa0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185aa0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x4802E0u));
    // 0x185aa4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185aa8: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x185aac: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185aacu;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802D0u, _value); } while (0);
    // 0x185ab0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x185ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185ab4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185ab4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185ab8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185abc: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x185abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x185ac0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185ac0u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802E0u, _value); } while (0);
    // 0x185ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x185ac8u;
}
