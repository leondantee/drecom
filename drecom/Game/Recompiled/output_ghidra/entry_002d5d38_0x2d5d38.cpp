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

// Function: entry_002d5d38
// Address: 0x2d5d38 - 0x2d5d50
void entry_002d5d38_0x2d5d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5d38_0x2d5d38");
#endif

    ctx->pc = 0x2d5d38u;

    // 0x2d5d38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5d3c: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x2d5d3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x2d5d40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d5d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d5d44: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2d5d44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d5d48: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D5D48u;
    {
        const bool branch_taken_0x2d5d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d48) {
            ctx->pc = 0x2D5CE8u;
            return;
        }
    }
    ctx->pc = 0x2D5D50u;
}
