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

// Function: entry_002738b8
// Address: 0x2738b8 - 0x2738c4
void entry_002738b8_0x2738b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002738b8_0x2738b8");
#endif

    ctx->pc = 0x2738b8u;

    // 0x2738b8: 0x73c08628  paddub      $s0, $fp, $zero
    ctx->pc = 0x2738b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x2738bc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2738BCu;
    {
        const bool branch_taken_0x2738bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2738bc) {
            ctx->pc = 0x273958u;
            return;
        }
    }
    ctx->pc = 0x2738C4u;
}
