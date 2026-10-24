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

// Function: entry_00138600
// Address: 0x138600 - 0x138618
void entry_00138600_0x138600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138600_0x138600");
#endif

    ctx->pc = 0x138600u;

    // 0x138600: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138604: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x138604u;
    {
        const bool branch_taken_0x138604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138604) {
            ctx->pc = 0x138504u;
            return;
        }
    }
    ctx->pc = 0x13860Cu;
    // 0x13860c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x13860cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138610: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x138610u;
    {
        const bool branch_taken_0x138610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138610) {
            ctx->pc = 0x138718u;
            return;
        }
    }
    ctx->pc = 0x138618u;
}
