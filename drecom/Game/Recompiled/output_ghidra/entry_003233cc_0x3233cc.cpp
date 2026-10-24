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

// Function: entry_003233cc
// Address: 0x3233cc - 0x3233e0
void entry_003233cc_0x3233cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003233cc_0x3233cc");
#endif

    ctx->pc = 0x3233ccu;

    // 0x3233cc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3233ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3233d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3233d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3233d4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3233d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3233d8: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x3233d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3233dc: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x3233dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x3233e0u;
}
