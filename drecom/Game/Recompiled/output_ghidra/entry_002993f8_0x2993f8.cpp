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

// Function: entry_002993f8
// Address: 0x2993f8 - 0x29940c
void entry_002993f8_0x2993f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002993f8_0x2993f8");
#endif

    ctx->pc = 0x2993f8u;

    // 0x2993f8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2993f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2993fc: 0xa04001c4  sb          $zero, 0x1C4($v0)
    ctx->pc = 0x2993fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x299400: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x299400u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x299404: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x299404u;
    {
        const bool branch_taken_0x299404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299404) {
            ctx->pc = 0x299B88u;
            return;
        }
    }
    ctx->pc = 0x29940Cu;
}
