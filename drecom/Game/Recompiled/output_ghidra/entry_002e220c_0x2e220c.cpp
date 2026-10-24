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

// Function: entry_002e220c
// Address: 0x2e220c - 0x2e2224
void entry_002e220c_0x2e220c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e220c_0x2e220c");
#endif

    ctx->pc = 0x2e220cu;

    // 0x2e220c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e220cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2210: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2214: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2218: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e2218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x2e221c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E221Cu;
    {
        const bool branch_taken_0x2e221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e221c) {
            ctx->pc = 0x2E228Cu;
            return;
        }
    }
    ctx->pc = 0x2E2224u;
}
