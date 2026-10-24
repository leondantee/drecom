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

// Function: entry_0036bd20
// Address: 0x36bd20 - 0x36bd44
void entry_0036bd20_0x36bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036bd20_0x36bd20");
#endif

    ctx->pc = 0x36bd20u;

    // 0x36bd20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x36bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bd24: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36bd24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36bd28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36bd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bd2c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x36bd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x36bd30: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x36BD30u;
    {
        const bool branch_taken_0x36bd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bd30) {
            ctx->pc = 0x36BE30u;
            return;
        }
    }
    ctx->pc = 0x36BD38u;
    // 0x36bd38: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x36bd38u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bd3c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x36BD3Cu;
    {
        const bool branch_taken_0x36bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bd3c) {
            ctx->pc = 0x36BE20u;
            return;
        }
    }
    ctx->pc = 0x36BD44u;
}
