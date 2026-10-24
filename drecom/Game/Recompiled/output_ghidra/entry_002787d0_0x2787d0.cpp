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

// Function: entry_002787d0
// Address: 0x2787d0 - 0x2787e8
void entry_002787d0_0x2787d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002787d0_0x2787d0");
#endif

    ctx->pc = 0x2787d0u;

    // 0x2787d0: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x2787d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2787d4: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2787D4u;
    {
        const bool branch_taken_0x2787d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2787d4) {
            ctx->pc = 0x2786D8u;
            return;
        }
    }
    ctx->pc = 0x2787DCu;
    // 0x2787dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2787dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2787e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2787E0u;
    {
        const bool branch_taken_0x2787e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2787e0) {
            ctx->pc = 0x278820u;
            return;
        }
    }
    ctx->pc = 0x2787E8u;
}
