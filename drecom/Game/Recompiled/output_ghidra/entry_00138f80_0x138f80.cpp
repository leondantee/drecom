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

// Function: entry_00138f80
// Address: 0x138f80 - 0x138f98
void entry_00138f80_0x138f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138f80_0x138f80");
#endif

    ctx->pc = 0x138f80u;

    // 0x138f80: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138f84: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x138F84u;
    {
        const bool branch_taken_0x138f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138f84) {
            ctx->pc = 0x138E78u;
            return;
        }
    }
    ctx->pc = 0x138F8Cu;
    // 0x138f8c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138f8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138f90: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x138F90u;
    {
        const bool branch_taken_0x138f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138f90) {
            ctx->pc = 0x1390A0u;
            return;
        }
    }
    ctx->pc = 0x138F98u;
}
