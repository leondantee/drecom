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

// Function: entry_0025e1c8
// Address: 0x25e1c8 - 0x25e1e0
void entry_0025e1c8_0x25e1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e1c8_0x25e1c8");
#endif

    ctx->pc = 0x25e1c8u;

    // 0x25e1c8: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e1cc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25e1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25e1d0: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25e1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e1d4: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25e1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25e1d8: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25e1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e1dc: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25e1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    ctx->pc = 0x25e1e0u;
}
