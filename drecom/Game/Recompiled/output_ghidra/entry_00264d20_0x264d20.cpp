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

// Function: entry_00264d20
// Address: 0x264d20 - 0x264d38
void entry_00264d20_0x264d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264d20_0x264d20");
#endif

    ctx->pc = 0x264d20u;

    // 0x264d20: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x264d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x264d24: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x264d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x264d28: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x264d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x264d2c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x264d2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264d30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x264D30u;
    {
        const bool branch_taken_0x264d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d30) {
            ctx->pc = 0x264D68u;
            return;
        }
    }
    ctx->pc = 0x264D38u;
}
