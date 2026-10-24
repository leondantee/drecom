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

// Function: entry_0025dc64
// Address: 0x25dc64 - 0x25dc80
void entry_0025dc64_0x25dc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025dc64_0x25dc64");
#endif

    ctx->pc = 0x25dc64u;

    // 0x25dc64: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dc68: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25dc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25dc6c: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dc70: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25dc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25dc74: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dc78: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25dc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25dc7c: 0x0  nop
    ctx->pc = 0x25dc7cu;
    // NOP
    ctx->pc = 0x25dc80u;
}
