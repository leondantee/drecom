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

// Function: entry_00163e6c
// Address: 0x163e6c - 0x163e74
void entry_00163e6c_0x163e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163e6c_0x163e6c");
#endif

    ctx->pc = 0x163e6cu;

    // 0x163e6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x163e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e70: 0x0  nop
    ctx->pc = 0x163e70u;
    // NOP
    ctx->pc = 0x163e74u;
}
