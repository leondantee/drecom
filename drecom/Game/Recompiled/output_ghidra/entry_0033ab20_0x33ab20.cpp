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

// Function: entry_0033ab20
// Address: 0x33ab20 - 0x33ab30
void entry_0033ab20_0x33ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ab20_0x33ab20");
#endif

    ctx->pc = 0x33ab20u;

    // 0x33ab20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ab24: 0x1c40ffed  bgtz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x33AB24u;
    {
        const bool branch_taken_0x33ab24 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x33ab24) {
            ctx->pc = 0x33AADCu;
            return;
        }
    }
    ctx->pc = 0x33AB2Cu;
    // 0x33ab2c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33ab2cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x33ab30u;
}
