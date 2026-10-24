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

// Function: entry_001acc80
// Address: 0x1acc80 - 0x1acc90
void entry_001acc80_0x1acc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acc80_0x1acc80");
#endif

    ctx->pc = 0x1acc80u;

    // 0x1acc80: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x1acc80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1acc84: 0x2475ffff  addiu       $s5, $v1, -0x1
    ctx->pc = 0x1acc84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1acc88: 0x1460fef6  bnez        $v1, . + 4 + (-0x10A << 2)
    ctx->pc = 0x1ACC88u;
    {
        const bool branch_taken_0x1acc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acc88) {
            ctx->pc = 0x1AC864u;
            return;
        }
    }
    ctx->pc = 0x1ACC90u;
}
