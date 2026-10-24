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

// Function: caseD_c
// Address: 0x123288 - 0x1232a0
void caseD_c_0x123288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x123288");
#endif

    ctx->pc = 0x123288u;

    // 0x123288: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x123288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x12328c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12328cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123290: 0x0  nop
    ctx->pc = 0x123290u;
    // NOP
    // 0x123294: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x123294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x123298: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x123298u;
    {
        const bool branch_taken_0x123298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123298) {
            ctx->pc = 0x1232E0u;
            return;
        }
    }
    ctx->pc = 0x1232A0u;
}
