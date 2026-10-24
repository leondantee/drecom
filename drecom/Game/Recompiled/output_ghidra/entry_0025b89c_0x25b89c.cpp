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

// Function: entry_0025b89c
// Address: 0x25b89c - 0x25b8b8
void entry_0025b89c_0x25b89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b89c_0x25b89c");
#endif

    ctx->pc = 0x25b89cu;

    // 0x25b89c: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x25b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b8a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x25b8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x25b8a4: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x25b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b8a8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25b8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x25b8ac: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x25b8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b8b0: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25b8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x25b8b4: 0x0  nop
    ctx->pc = 0x25b8b4u;
    // NOP
    ctx->pc = 0x25b8b8u;
}
