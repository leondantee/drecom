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

// Function: entry_0025c0c8
// Address: 0x25c0c8 - 0x25c0e0
void entry_0025c0c8_0x25c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c0c8_0x25c0c8");
#endif

    ctx->pc = 0x25c0c8u;

    // 0x25c0c8: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x25c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c0cc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x25c0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x25c0d0: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x25c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c0d4: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25c0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x25c0d8: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x25c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c0dc: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25c0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    ctx->pc = 0x25c0e0u;
}
