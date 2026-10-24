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

// Function: entry_001723a0
// Address: 0x1723a0 - 0x1723ac
void entry_001723a0_0x1723a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001723a0_0x1723a0");
#endif

    ctx->pc = 0x1723a0u;

    // 0x1723a0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1723a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1723a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1723a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1723a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1723acu;
}
