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

// Function: entry_0032110c
// Address: 0x32110c - 0x321118
void entry_0032110c_0x32110c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032110c_0x32110c");
#endif

    ctx->pc = 0x32110cu;

    // 0x32110c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32110cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321110: 0x0  nop
    ctx->pc = 0x321110u;
    // NOP
    // 0x321114: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x321114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x321118u;
}
