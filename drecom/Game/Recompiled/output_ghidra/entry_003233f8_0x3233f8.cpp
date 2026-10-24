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

// Function: entry_003233f8
// Address: 0x3233f8 - 0x32340c
void entry_003233f8_0x3233f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003233f8_0x3233f8");
#endif

    ctx->pc = 0x3233f8u;

    // 0x3233f8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x3233f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3233fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3233fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x323400: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x323400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x323404: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x323404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x323408: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x323408u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x32340cu;
}
