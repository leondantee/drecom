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

// Function: entry_0015bc50
// Address: 0x15bc50 - 0x15bc5c
void entry_0015bc50_0x15bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bc50_0x15bc50");
#endif

    ctx->pc = 0x15bc50u;

    // 0x15bc50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15bc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bc54: 0x0  nop
    ctx->pc = 0x15bc54u;
    // NOP
    // 0x15bc58: 0xe6001564  swc1        $f0, 0x1564($s0)
    ctx->pc = 0x15bc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5476), bits); }
    ctx->pc = 0x15bc5cu;
}
