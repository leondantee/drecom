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

// Function: entry_0025e578
// Address: 0x25e578 - 0x25e584
void entry_0025e578_0x25e578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e578_0x25e578");
#endif

    ctx->pc = 0x25e578u;

    // 0x25e578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25e578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e57c: 0x0  nop
    ctx->pc = 0x25e57cu;
    // NOP
    // 0x25e580: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    ctx->pc = 0x25e584u;
}
