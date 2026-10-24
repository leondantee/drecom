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

// Function: entry_00138948
// Address: 0x138948 - 0x138960
void entry_00138948_0x138948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138948_0x138948");
#endif

    ctx->pc = 0x138948u;

    // 0x138948: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13894c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13894Cu;
    {
        const bool branch_taken_0x13894c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13894c) {
            ctx->pc = 0x138910u;
            return;
        }
    }
    ctx->pc = 0x138954u;
    // 0x138954: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138954u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138958: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x138958u;
    {
        const bool branch_taken_0x138958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138958) {
            ctx->pc = 0x138998u;
            return;
        }
    }
    ctx->pc = 0x138960u;
}
