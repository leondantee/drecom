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

// Function: entry_002e0a58
// Address: 0x2e0a58 - 0x2e0a70
void entry_002e0a58_0x2e0a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0a58_0x2e0a58");
#endif

    ctx->pc = 0x2e0a58u;

    // 0x2e0a58: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2e0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2e0a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0a60: 0x0  nop
    ctx->pc = 0x2e0a60u;
    // NOP
    // 0x2e0a64: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e0a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e0a68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0A68u;
    {
        const bool branch_taken_0x2e0a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a68) {
            ctx->pc = 0x2E0A80u;
            return;
        }
    }
    ctx->pc = 0x2E0A70u;
}
