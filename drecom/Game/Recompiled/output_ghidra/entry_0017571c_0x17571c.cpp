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

// Function: entry_0017571c
// Address: 0x17571c - 0x17575c
void entry_0017571c_0x17571c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017571c_0x17571c");
#endif

    ctx->pc = 0x17571cu;

    // 0x17571c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x17571cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175720: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175724: 0x2442bd10  addiu       $v0, $v0, -0x42F0
    ctx->pc = 0x175724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950160));
    // 0x175728: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175728u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47BD10u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47BD10u, _value); } while (0);
    // 0x17572c: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x17572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175730: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x175730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x175734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175738: 0x0  nop
    ctx->pc = 0x175738u;
    // NOP
    // 0x17573c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17573cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175740: 0x0  nop
    ctx->pc = 0x175740u;
    // NOP
    // 0x175744: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x175744u;
    {
        const bool branch_taken_0x175744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175744) {
            ctx->pc = 0x17575Cu;
            return;
        }
    }
    ctx->pc = 0x17574Cu;
    // 0x17574c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x17574cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175750: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175754: 0x2442bd50  addiu       $v0, $v0, -0x42B0
    ctx->pc = 0x175754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x175758: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175758u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47BD50u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47BD50u, _value); } while (0);
    ctx->pc = 0x17575cu;
}
