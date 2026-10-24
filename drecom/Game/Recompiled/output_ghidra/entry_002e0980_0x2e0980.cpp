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

// Function: entry_002e0980
// Address: 0x2e0980 - 0x2e0998
void entry_002e0980_0x2e0980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0980_0x2e0980");
#endif

    ctx->pc = 0x2e0980u;

    // 0x2e0980: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2e0980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2e0984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0988: 0x0  nop
    ctx->pc = 0x2e0988u;
    // NOP
    // 0x2e098c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e098cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e0990: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0990u;
    {
        const bool branch_taken_0x2e0990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0990) {
            ctx->pc = 0x2E09D8u;
            return;
        }
    }
    ctx->pc = 0x2E0998u;
}
