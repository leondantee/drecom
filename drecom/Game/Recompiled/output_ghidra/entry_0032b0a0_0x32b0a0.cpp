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

// Function: entry_0032b0a0
// Address: 0x32b0a0 - 0x32b0f4
void entry_0032b0a0_0x32b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b0a0_0x32b0a0");
#endif

    ctx->pc = 0x32b0a0u;

    // 0x32b0a0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b0a4: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b0a4u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b0a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32b0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b0b0: 0x0  nop
    ctx->pc = 0x32b0b0u;
    // NOP
    // 0x32b0b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32b0b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b0b8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b0bc: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32b0c0: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b0c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b0c8: 0x0  nop
    ctx->pc = 0x32b0c8u;
    // NOP
    // 0x32b0cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32b0ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b0d0: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32b0d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b0d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b0d8: 0x0  nop
    ctx->pc = 0x32b0d8u;
    // NOP
    // 0x32b0dc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x32b0dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32b0e0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b0e4: 0xc420b340  lwc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b0e4u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b0e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32b0e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b0ec: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b0f0: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32b0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    ctx->pc = 0x32b0f4u;
}
