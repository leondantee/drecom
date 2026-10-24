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

// Function: entry_00299450
// Address: 0x299450 - 0x299464
void entry_00299450_0x299450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299450_0x299450");
#endif

    ctx->pc = 0x299450u;

    // 0x299450: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299454: 0xa04001c4  sb          $zero, 0x1C4($v0)
    ctx->pc = 0x299454u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x299458: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x299458u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29945c: 0x100001ca  b           . + 4 + (0x1CA << 2)
    ctx->pc = 0x29945Cu;
    {
        const bool branch_taken_0x29945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29945c) {
            ctx->pc = 0x299B88u;
            return;
        }
    }
    ctx->pc = 0x299464u;
}
