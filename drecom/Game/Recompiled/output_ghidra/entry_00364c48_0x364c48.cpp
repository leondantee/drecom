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

// Function: entry_00364c48
// Address: 0x364c48 - 0x364c54
void entry_00364c48_0x364c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364c48_0x364c48");
#endif

    ctx->pc = 0x364c48u;

    // 0x364c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364c4c: 0x0  nop
    ctx->pc = 0x364c4cu;
    // NOP
    // 0x364c50: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->pc = 0x364c54u;
}
