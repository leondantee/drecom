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

// Function: entry_00322af0
// Address: 0x322af0 - 0x322b08
void entry_00322af0_0x322af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322af0_0x322af0");
#endif

    ctx->pc = 0x322af0u;

    // 0x322af0: 0x2e230013  sltiu       $v1, $s1, 0x13
    ctx->pc = 0x322af0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x322af4: 0x1460ff5f  bnez        $v1, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x322AF4u;
    {
        const bool branch_taken_0x322af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322af4) {
            ctx->pc = 0x322874u;
            return;
        }
    }
    ctx->pc = 0x322AFCu;
    // 0x322afc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x322afcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322b00: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x322B00u;
    {
        const bool branch_taken_0x322b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322b00) {
            ctx->pc = 0x322D68u;
            return;
        }
    }
    ctx->pc = 0x322B08u;
}
