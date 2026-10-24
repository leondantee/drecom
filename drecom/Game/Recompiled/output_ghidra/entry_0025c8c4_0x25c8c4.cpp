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

// Function: entry_0025c8c4
// Address: 0x25c8c4 - 0x25c8e4
void entry_0025c8c4_0x25c8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c8c4_0x25c8c4");
#endif

    ctx->pc = 0x25c8c4u;

    // 0x25c8c4: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x25c8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c8c8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x25c8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x25c8cc: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x25c8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c8d0: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25c8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x25c8d4: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x25c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c8d8: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25c8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x25c8dc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25C8DCu;
    {
        const bool branch_taken_0x25c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c8dc) {
            ctx->pc = 0x25C978u;
            return;
        }
    }
    ctx->pc = 0x25C8E4u;
}
