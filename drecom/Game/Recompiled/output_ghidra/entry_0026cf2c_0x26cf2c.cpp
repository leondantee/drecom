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

// Function: entry_0026cf2c
// Address: 0x26cf2c - 0x26cf40
void entry_0026cf2c_0x26cf2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026cf2c_0x26cf2c");
#endif

    ctx->pc = 0x26cf2cu;

    // 0x26cf2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cf2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cf30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cf34: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x26cf38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26CF38u;
    {
        const bool branch_taken_0x26cf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf38) {
            ctx->pc = 0x26CF9Cu;
            return;
        }
    }
    ctx->pc = 0x26CF40u;
}
