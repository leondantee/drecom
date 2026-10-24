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

// Function: entry_002e0a70
// Address: 0x2e0a70 - 0x2e0a80
void entry_002e0a70_0x2e0a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0a70_0x2e0a70");
#endif

    ctx->pc = 0x2e0a70u;

    // 0x2e0a70: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x2e0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x2e0a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0a78: 0x0  nop
    ctx->pc = 0x2e0a78u;
    // NOP
    // 0x2e0a7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e0a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x2e0a80u;
}
