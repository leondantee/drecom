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

// Function: entry_001a2758
// Address: 0x1a2758 - 0x1a2774
void entry_001a2758_0x1a2758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2758_0x1a2758");
#endif

    ctx->pc = 0x1a2758u;

    // 0x1a2758: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a275c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a2760: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2760u;
    {
        const bool branch_taken_0x1a2760 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a2760) {
            ctx->pc = 0x1A2774u;
            return;
        }
    }
    ctx->pc = 0x1A2768u;
    // 0x1a2768: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1a2768u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a276c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A276Cu;
    {
        const bool branch_taken_0x1a276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a276c) {
            ctx->pc = 0x1A27A4u;
            return;
        }
    }
    ctx->pc = 0x1A2774u;
}
