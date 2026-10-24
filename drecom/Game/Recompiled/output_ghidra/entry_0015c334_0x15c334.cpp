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

// Function: entry_0015c334
// Address: 0x15c334 - 0x15c348
void entry_0015c334_0x15c334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c334_0x15c334");
#endif

    ctx->pc = 0x15c334u;

    // 0x15c334: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c338: 0xa4401574  sh          $zero, 0x1574($v0)
    ctx->pc = 0x15c338u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15c33c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c33cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c340: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x15C340u;
    {
        const bool branch_taken_0x15c340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c340) {
            ctx->pc = 0x15C474u;
            return;
        }
    }
    ctx->pc = 0x15C348u;
}
