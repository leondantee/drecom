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

// Function: entry_0032aed0
// Address: 0x32aed0 - 0x32af10
void entry_0032aed0_0x32aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032aed0_0x32aed0");
#endif

    ctx->pc = 0x32aed0u;

    // 0x32aed0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aed4: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32aed4u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32aed8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32aedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32aedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32aee0: 0x0  nop
    ctx->pc = 0x32aee0u;
    // NOP
    // 0x32aee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32aee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32aee8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aeec: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32aeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32aef0: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32aef4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32aef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32aef8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32aef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32aefc: 0xc420b340  lwc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32aefcu;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32af00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32af00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32af04: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32af04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32af08: 0xe420b340  swc1        $f0, -0x4CC0($at)
    ctx->pc = 0x32af08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85B340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85B340u, _value); } while (0); }
    // 0x32af0c: 0x0  nop
    ctx->pc = 0x32af0cu;
    // NOP
    ctx->pc = 0x32af10u;
}
