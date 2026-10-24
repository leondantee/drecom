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

// Function: entry_002991a0
// Address: 0x2991a0 - 0x2991b4
void entry_002991a0_0x2991a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002991a0_0x2991a0");
#endif

    ctx->pc = 0x2991a0u;

    // 0x2991a0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2991a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2991a4: 0xa06001c4  sb          $zero, 0x1C4($v1)
    ctx->pc = 0x2991a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x2991a8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2991a8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2991ac: 0x10000276  b           . + 4 + (0x276 << 2)
    ctx->pc = 0x2991ACu;
    {
        const bool branch_taken_0x2991ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2991ac) {
            ctx->pc = 0x299B88u;
            return;
        }
    }
    ctx->pc = 0x2991B4u;
}
