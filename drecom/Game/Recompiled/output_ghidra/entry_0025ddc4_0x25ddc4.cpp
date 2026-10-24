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

// Function: entry_0025ddc4
// Address: 0x25ddc4 - 0x25dde0
void entry_0025ddc4_0x25ddc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ddc4_0x25ddc4");
#endif

    ctx->pc = 0x25ddc4u;

    // 0x25ddc4: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ddc8: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x25ddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x25ddcc: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ddd0: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x25ddd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x25ddd4: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ddd8: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x25ddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x25dddc: 0x0  nop
    ctx->pc = 0x25dddcu;
    // NOP
    ctx->pc = 0x25dde0u;
}
