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

// Function: entry_00163790
// Address: 0x163790 - 0x1637d8
void entry_00163790_0x163790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163790_0x163790");
#endif

    ctx->pc = 0x163790u;

    // 0x163790: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163794: 0xc4214f38  lwc1        $f1, 0x4F38($at)
    ctx->pc = 0x163794u;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163798: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x163798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x16379c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16379cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1637a0: 0x0  nop
    ctx->pc = 0x1637a0u;
    // NOP
    // 0x1637a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1637a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1637a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1637a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1637ac: 0xe4204f38  swc1        $f0, 0x4F38($at)
    ctx->pc = 0x1637acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F38u, _value); } while (0); }
    // 0x1637b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1637b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1637b4: 0xc4214f38  lwc1        $f1, 0x4F38($at)
    ctx->pc = 0x1637b4u;
    { uint32_t bits = FAST_READ32(0x3F4F38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1637b8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1637b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1637bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1637bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1637c0: 0x0  nop
    ctx->pc = 0x1637c0u;
    // NOP
    // 0x1637c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1637C4u;
    {
        const bool branch_taken_0x1637c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1637c4) {
            ctx->pc = 0x1637D8u;
            return;
        }
    }
    ctx->pc = 0x1637CCu;
    // 0x1637cc: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1637ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1637d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1637d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1637d4: 0xe4204f38  swc1        $f0, 0x4F38($at)
    ctx->pc = 0x1637d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F38u, _value); } while (0); }
    ctx->pc = 0x1637d8u;
}
