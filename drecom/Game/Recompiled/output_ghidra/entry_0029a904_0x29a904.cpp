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

// Function: entry_0029a904
// Address: 0x29a904 - 0x29a918
void entry_0029a904_0x29a904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a904_0x29a904");
#endif

    ctx->pc = 0x29a904u;

    // 0x29a904: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a908: 0xa06001c4  sb          $zero, 0x1C4($v1)
    ctx->pc = 0x29a908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a90c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x29a90cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29a910: 0x10000492  b           . + 4 + (0x492 << 2)
    ctx->pc = 0x29A910u;
    {
        const bool branch_taken_0x29a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a910) {
            ctx->pc = 0x29BB5Cu;
            return;
        }
    }
    ctx->pc = 0x29A918u;
}
