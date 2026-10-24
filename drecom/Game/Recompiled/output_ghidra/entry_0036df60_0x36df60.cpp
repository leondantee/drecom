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

// Function: entry_0036df60
// Address: 0x36df60 - 0x36df78
void entry_0036df60_0x36df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036df60_0x36df60");
#endif

    ctx->pc = 0x36df60u;

    // 0x36df60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36df60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36df64: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x36df64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x36df68: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x36df68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x36df6c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x36df6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x36df70: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x36DF70u;
    {
        const bool branch_taken_0x36df70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36df70) {
            ctx->pc = 0x36DF0Cu;
            return;
        }
    }
    ctx->pc = 0x36DF78u;
}
