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

// Function: entry_00200440
// Address: 0x200440 - 0x20044c
void entry_00200440_0x200440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200440_0x200440");
#endif

    ctx->pc = 0x200440u;

    // 0x200440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200444: 0x0  nop
    ctx->pc = 0x200444u;
    // NOP
    // 0x200448: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x200448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->pc = 0x20044cu;
}
