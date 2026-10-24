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

// Function: entry_002e2110
// Address: 0x2e2110 - 0x2e2128
void entry_002e2110_0x2e2110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2110_0x2e2110");
#endif

    ctx->pc = 0x2e2110u;

    // 0x2e2110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2114: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2118: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e211c: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e211cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x2e2120: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E2120u;
    {
        const bool branch_taken_0x2e2120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2120) {
            ctx->pc = 0x2E2190u;
            return;
        }
    }
    ctx->pc = 0x2E2128u;
}
