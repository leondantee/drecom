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

// Function: caseD_7
// Address: 0x123210 - 0x123228
void caseD_7_0x123210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x123210");
#endif

    ctx->pc = 0x123210u;

    // 0x123210: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x123210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x123214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123218: 0x0  nop
    ctx->pc = 0x123218u;
    // NOP
    // 0x12321c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x12321cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x123220: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x123220u;
    {
        const bool branch_taken_0x123220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123220) {
            ctx->pc = 0x1232E0u;
            return;
        }
    }
    ctx->pc = 0x123228u;
}
