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

// Function: entry_0026d030
// Address: 0x26d030 - 0x26d044
void entry_0026d030_0x26d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d030_0x26d030");
#endif

    ctx->pc = 0x26d030u;

    // 0x26d030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d034: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d038: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26d038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x26d03c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26D03Cu;
    {
        const bool branch_taken_0x26d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d03c) {
            ctx->pc = 0x26D0A0u;
            return;
        }
    }
    ctx->pc = 0x26D044u;
}
