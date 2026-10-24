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

// Function: entry_00273ab8
// Address: 0x273ab8 - 0x273ac8
void entry_00273ab8_0x273ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273ab8_0x273ab8");
#endif

    ctx->pc = 0x273ab8u;

    // 0x273ab8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x273ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x273abc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x273abcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x273AC0u;
    {
        const bool branch_taken_0x273ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273ac0) {
            ctx->pc = 0x273AE8u;
            return;
        }
    }
    ctx->pc = 0x273AC8u;
}
