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

// Function: entry_001887a0
// Address: 0x1887a0 - 0x1887b8
void entry_001887a0_0x1887a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001887a0_0x1887a0");
#endif

    ctx->pc = 0x1887a0u;

    // 0x1887a0: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1887a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1887a4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1887a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1887a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1887a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1887ac: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1887acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1887b0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1887B0u;
    {
        const bool branch_taken_0x1887b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1887b0) {
            ctx->pc = 0x18885Cu;
            return;
        }
    }
    ctx->pc = 0x1887B8u;
}
