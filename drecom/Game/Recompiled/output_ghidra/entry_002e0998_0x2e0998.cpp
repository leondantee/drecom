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

// Function: entry_002e0998
// Address: 0x2e0998 - 0x2e09b0
void entry_002e0998_0x2e0998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0998_0x2e0998");
#endif

    ctx->pc = 0x2e0998u;

    // 0x2e0998: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2e0998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2e099c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e099cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e09a0: 0x0  nop
    ctx->pc = 0x2e09a0u;
    // NOP
    // 0x2e09a4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e09a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e09a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E09A8u;
    {
        const bool branch_taken_0x2e09a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e09a8) {
            ctx->pc = 0x2E09D8u;
            return;
        }
    }
    ctx->pc = 0x2E09B0u;
}
