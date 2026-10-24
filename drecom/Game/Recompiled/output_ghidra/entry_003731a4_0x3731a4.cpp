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

// Function: entry_003731a4
// Address: 0x3731a4 - 0x3731c0
void entry_003731a4_0x3731a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003731a4_0x3731a4");
#endif

    ctx->pc = 0x3731a4u;

    // 0x3731a4: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x3731a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3731a8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3731a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3731ac: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x3731acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3731b0: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3731b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3731b4: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x3731b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3731b8: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x3731b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x3731bc: 0x0  nop
    ctx->pc = 0x3731bcu;
    // NOP
    ctx->pc = 0x3731c0u;
}
