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

// Function: entry_0018a2e0
// Address: 0x18a2e0 - 0x18a2f8
void entry_0018a2e0_0x18a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a2e0_0x18a2e0");
#endif

    ctx->pc = 0x18a2e0u;

    // 0x18a2e0: 0x2e0301c2  sltiu       $v1, $s0, 0x1C2
    ctx->pc = 0x18a2e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)450) ? 1 : 0);
    // 0x18a2e4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A2E4u;
    {
        const bool branch_taken_0x18a2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a2e4) {
            ctx->pc = 0x18A2C8u;
            return;
        }
    }
    ctx->pc = 0x18A2ECu;
    // 0x18a2ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a2ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a2f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A2F0u;
    {
        const bool branch_taken_0x18a2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a2f0) {
            ctx->pc = 0x18A308u;
            return;
        }
    }
    ctx->pc = 0x18A2F8u;
}
