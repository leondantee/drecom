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

// Function: entry_00189f20
// Address: 0x189f20 - 0x189f2c
void entry_00189f20_0x189f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189f20_0x189f20");
#endif

    ctx->pc = 0x189f20u;

    // 0x189f20: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189f24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x189f24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x189f28: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x189f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->pc = 0x189f2cu;
}
