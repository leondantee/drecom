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

// Function: entry_0015e380
// Address: 0x15e380 - 0x15e398
void entry_0015e380_0x15e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e380_0x15e380");
#endif

    ctx->pc = 0x15e380u;

    // 0x15e380: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x15e380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x15e384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e388: 0x0  nop
    ctx->pc = 0x15e388u;
    // NOP
    // 0x15e38c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15e38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15e390: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15E390u;
    {
        const bool branch_taken_0x15e390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e390) {
            ctx->pc = 0x15E3C0u;
            return;
        }
    }
    ctx->pc = 0x15E398u;
}
