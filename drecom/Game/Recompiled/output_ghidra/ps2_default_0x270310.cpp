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

// Function: default
// Address: 0x270310 - 0x27032c
void ps2_default_0x270310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x270310");
#endif

    ctx->pc = 0x270310u;

    // 0x270310: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270314: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x270314u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x270318: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x270318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x27031c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x27031cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x270320: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x270320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x270324: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x270324u;
    {
        const bool branch_taken_0x270324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270324) {
            ctx->pc = 0x270338u;
            return;
        }
    }
    ctx->pc = 0x27032Cu;
}
