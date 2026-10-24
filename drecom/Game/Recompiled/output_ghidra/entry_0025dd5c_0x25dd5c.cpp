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

// Function: entry_0025dd5c
// Address: 0x25dd5c - 0x25dd7c
void entry_0025dd5c_0x25dd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025dd5c_0x25dd5c");
#endif

    ctx->pc = 0x25dd5cu;

    // 0x25dd5c: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25dd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd60: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x25dd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x25dd64: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25dd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd68: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x25dd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x25dd6c: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd70: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x25dd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x25dd74: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25DD74u;
    {
        const bool branch_taken_0x25dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd74) {
            ctx->pc = 0x25DDE0u;
            return;
        }
    }
    ctx->pc = 0x25DD7Cu;
}
