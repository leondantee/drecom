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

// Function: entry_001fee3c
// Address: 0x1fee3c - 0x1fee48
void entry_001fee3c_0x1fee3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fee3c_0x1fee3c");
#endif

    ctx->pc = 0x1fee3cu;

    // 0x1fee3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fee3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fee40: 0x0  nop
    ctx->pc = 0x1fee40u;
    // NOP
    // 0x1fee44: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1fee44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x1fee48u;
}
