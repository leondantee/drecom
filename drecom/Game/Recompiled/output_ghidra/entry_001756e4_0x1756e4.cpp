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

// Function: entry_001756e4
// Address: 0x1756e4 - 0x17571c
void entry_001756e4_0x1756e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001756e4_0x1756e4");
#endif

    ctx->pc = 0x1756e4u;

    // 0x1756e4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1756e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1756e8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1756e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1756ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1756ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1756f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1756f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1756f4: 0x0  nop
    ctx->pc = 0x1756f4u;
    // NOP
    // 0x1756f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1756f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1756fc: 0x0  nop
    ctx->pc = 0x1756fcu;
    // NOP
    // 0x175700: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x175700u;
    {
        const bool branch_taken_0x175700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x175700) {
            ctx->pc = 0x17571Cu;
            return;
        }
    }
    ctx->pc = 0x175708u;
    // 0x175708: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x175708u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17570c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175710: 0x2442bd50  addiu       $v0, $v0, -0x42B0
    ctx->pc = 0x175710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x175714: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175714u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47BD50u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47BD50u, _value); } while (0);
    // 0x175718: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x175718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x17571cu;
}
