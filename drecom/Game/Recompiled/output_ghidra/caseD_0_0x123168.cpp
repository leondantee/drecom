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

// Function: caseD_0
// Address: 0x123168 - 0x123180
void caseD_0_0x123168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x123168");
#endif

    ctx->pc = 0x123168u;

    // 0x123168: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x123168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x12316c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12316cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123170: 0x0  nop
    ctx->pc = 0x123170u;
    // NOP
    // 0x123174: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x123174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x123178: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x123178u;
    {
        const bool branch_taken_0x123178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123178) {
            ctx->pc = 0x1232E0u;
            return;
        }
    }
    ctx->pc = 0x123180u;
}
