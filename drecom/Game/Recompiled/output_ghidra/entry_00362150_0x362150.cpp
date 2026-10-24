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

// Function: entry_00362150
// Address: 0x362150 - 0x362168
void entry_00362150_0x362150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362150_0x362150");
#endif

    ctx->pc = 0x362150u;

    // 0x362150: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362154: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x362154u;
    {
        const bool branch_taken_0x362154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x362154) {
            ctx->pc = 0x3621E8u;
            return;
        }
    }
    ctx->pc = 0x36215Cu;
    // 0x36215c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x36215cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362160: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x362160u;
    {
        const bool branch_taken_0x362160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362160) {
            ctx->pc = 0x3621D0u;
            return;
        }
    }
    ctx->pc = 0x362168u;
}
