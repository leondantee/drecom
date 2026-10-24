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

// Function: entry_0032c530
// Address: 0x32c530 - 0x32c53c
void entry_0032c530_0x32c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c530_0x32c530");
#endif

    ctx->pc = 0x32c530u;

    // 0x32c530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32c530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c534: 0x0  nop
    ctx->pc = 0x32c534u;
    // NOP
    // 0x32c538: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    ctx->pc = 0x32c53cu;
}
