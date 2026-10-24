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

// Function: entry_0015e208
// Address: 0x15e208 - 0x15e220
void entry_0015e208_0x15e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e208_0x15e208");
#endif

    ctx->pc = 0x15e208u;

    // 0x15e208: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x15e208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x15e20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e210: 0x0  nop
    ctx->pc = 0x15e210u;
    // NOP
    // 0x15e214: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15e214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15e218: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15E218u;
    {
        const bool branch_taken_0x15e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e218) {
            ctx->pc = 0x15E248u;
            return;
        }
    }
    ctx->pc = 0x15E220u;
}
