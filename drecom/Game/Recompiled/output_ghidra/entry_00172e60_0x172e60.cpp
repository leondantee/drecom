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

// Function: entry_00172e60
// Address: 0x172e60 - 0x172e6c
void entry_00172e60_0x172e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172e60_0x172e60");
#endif

    ctx->pc = 0x172e60u;

    // 0x172e60: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172e64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172e68: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x172e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x172e6cu;
}
