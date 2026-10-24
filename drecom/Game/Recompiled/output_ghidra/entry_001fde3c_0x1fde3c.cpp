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

// Function: entry_001fde3c
// Address: 0x1fde3c - 0x1fde48
void entry_001fde3c_0x1fde3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fde3c_0x1fde3c");
#endif

    ctx->pc = 0x1fde3cu;

    // 0x1fde3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fde3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fde40: 0x0  nop
    ctx->pc = 0x1fde40u;
    // NOP
    // 0x1fde44: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1fde44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->pc = 0x1fde48u;
}
