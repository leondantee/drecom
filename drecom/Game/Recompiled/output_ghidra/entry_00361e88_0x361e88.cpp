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

// Function: entry_00361e88
// Address: 0x361e88 - 0x361e98
void entry_00361e88_0x361e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361e88_0x361e88");
#endif

    ctx->pc = 0x361e88u;

    // 0x361e88: 0x2ea20020  sltiu       $v0, $s5, 0x20
    ctx->pc = 0x361e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x361e8c: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x361E8Cu;
    {
        const bool branch_taken_0x361e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361e8c) {
            ctx->pc = 0x361C6Cu;
            return;
        }
    }
    ctx->pc = 0x361E94u;
    // 0x361e94: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x361e94u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x361e98u;
}
