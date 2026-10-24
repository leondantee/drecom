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

// Function: caseD_5
// Address: 0x1231e0 - 0x1231f8
void caseD_5_0x1231e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1231e0");
#endif

    ctx->pc = 0x1231e0u;

    // 0x1231e0: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x1231e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x1231e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1231e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1231e8: 0x0  nop
    ctx->pc = 0x1231e8u;
    // NOP
    // 0x1231ec: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1231ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1231f0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1231F0u;
    {
        const bool branch_taken_0x1231f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231f0) {
            ctx->pc = 0x1232E0u;
            return;
        }
    }
    ctx->pc = 0x1231F8u;
}
