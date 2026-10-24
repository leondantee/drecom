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

// Function: entry_00327694
// Address: 0x327694 - 0x3276a0
void entry_00327694_0x327694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327694_0x327694");
#endif

    ctx->pc = 0x327694u;

    // 0x327694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x327694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327698: 0x0  nop
    ctx->pc = 0x327698u;
    // NOP
    // 0x32769c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x32769cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x3276a0u;
}
