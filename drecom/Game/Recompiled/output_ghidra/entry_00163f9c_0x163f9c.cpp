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

// Function: entry_00163f9c
// Address: 0x163f9c - 0x163fa4
void entry_00163f9c_0x163f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163f9c_0x163f9c");
#endif

    ctx->pc = 0x163f9cu;

    // 0x163f9c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x163f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fa0: 0x0  nop
    ctx->pc = 0x163fa0u;
    // NOP
    ctx->pc = 0x163fa4u;
}
