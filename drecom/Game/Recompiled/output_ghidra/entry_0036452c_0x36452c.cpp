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

// Function: entry_0036452c
// Address: 0x36452c - 0x364538
void entry_0036452c_0x36452c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036452c_0x36452c");
#endif

    ctx->pc = 0x36452cu;

    // 0x36452c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36452cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364530: 0x0  nop
    ctx->pc = 0x364530u;
    // NOP
    // 0x364534: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->pc = 0x364538u;
}
