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

// Function: entry_0032bd1c
// Address: 0x32bd1c - 0x32bd28
void entry_0032bd1c_0x32bd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032bd1c_0x32bd1c");
#endif

    ctx->pc = 0x32bd1cu;

    // 0x32bd1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32bd1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd20: 0x0  nop
    ctx->pc = 0x32bd20u;
    // NOP
    // 0x32bd24: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->pc = 0x32bd28u;
}
