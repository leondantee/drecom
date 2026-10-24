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

// Function: entry_002931f4
// Address: 0x2931f4 - 0x293204
void entry_002931f4_0x2931f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002931f4_0x2931f4");
#endif

    ctx->pc = 0x2931f4u;

    // 0x2931f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2931f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2931f8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x2931f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2931fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2931FCu;
    {
        const bool branch_taken_0x2931fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931fc) {
            ctx->pc = 0x293210u;
            return;
        }
    }
    ctx->pc = 0x293204u;
}
