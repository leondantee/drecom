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

// Function: caseD_a
// Address: 0x123258 - 0x123270
void caseD_a_0x123258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x123258");
#endif

    ctx->pc = 0x123258u;

    // 0x123258: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x123258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x12325c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12325cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123260: 0x0  nop
    ctx->pc = 0x123260u;
    // NOP
    // 0x123264: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x123264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x123268: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x123268u;
    {
        const bool branch_taken_0x123268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123268) {
            ctx->pc = 0x1232E0u;
            return;
        }
    }
    ctx->pc = 0x123270u;
}
