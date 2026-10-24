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

// Function: entry_003233e0
// Address: 0x3233e0 - 0x3233f8
void entry_003233e0_0x3233e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003233e0_0x3233e0");
#endif

    ctx->pc = 0x3233e0u;

    // 0x3233e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3233e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3233e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3233E4u;
    {
        const bool branch_taken_0x3233e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3233e4) {
            ctx->pc = 0x3233F8u;
            return;
        }
    }
    ctx->pc = 0x3233ECu;
    // 0x3233ec: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x3233ecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3233f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3233F0u;
    {
        const bool branch_taken_0x3233f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3233f0) {
            ctx->pc = 0x32340Cu;
            return;
        }
    }
    ctx->pc = 0x3233F8u;
}
