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

// Function: entry_001afb78
// Address: 0x1afb78 - 0x1afb88
void entry_001afb78_0x1afb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afb78_0x1afb78");
#endif

    ctx->pc = 0x1afb78u;

    // 0x1afb78: 0x2fc30030  sltiu       $v1, $fp, 0x30
    ctx->pc = 0x1afb78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1afb7c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AFB7Cu;
    {
        const bool branch_taken_0x1afb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afb7c) {
            ctx->pc = 0x1AFB64u;
            return;
        }
    }
    ctx->pc = 0x1AFB84u;
    // 0x1afb84: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1afb84u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1afb88u;
}
