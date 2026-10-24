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

// Function: entry_0020bf90
// Address: 0x20bf90 - 0x20bf9c
void entry_0020bf90_0x20bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020bf90_0x20bf90");
#endif

    ctx->pc = 0x20bf90u;

    // 0x20bf90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20bf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bf94: 0x0  nop
    ctx->pc = 0x20bf94u;
    // NOP
    // 0x20bf98: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x20bf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->pc = 0x20bf9cu;
}
