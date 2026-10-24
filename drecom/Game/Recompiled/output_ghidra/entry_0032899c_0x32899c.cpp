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

// Function: entry_0032899c
// Address: 0x32899c - 0x3289a8
void entry_0032899c_0x32899c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032899c_0x32899c");
#endif

    ctx->pc = 0x32899cu;

    // 0x32899c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32899cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3289a0: 0x0  nop
    ctx->pc = 0x3289a0u;
    // NOP
    // 0x3289a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3289a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x3289a8u;
}
