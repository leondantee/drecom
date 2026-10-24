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

// Function: caseD_8
// Address: 0x123228 - 0x123240
void caseD_8_0x123228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x123228");
#endif

    ctx->pc = 0x123228u;

    // 0x123228: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x123228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x12322c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12322cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123230: 0x0  nop
    ctx->pc = 0x123230u;
    // NOP
    // 0x123234: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x123234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x123238: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x123238u;
    {
        const bool branch_taken_0x123238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123238) {
            ctx->pc = 0x1232E0u;
            return;
        }
    }
    ctx->pc = 0x123240u;
}
