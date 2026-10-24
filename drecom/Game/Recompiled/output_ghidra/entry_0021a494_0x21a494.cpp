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

// Function: entry_0021a494
// Address: 0x21a494 - 0x21a4a8
void entry_0021a494_0x21a494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a494_0x21a494");
#endif

    ctx->pc = 0x21a494u;

    // 0x21a494: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x21a494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a498: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x21a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21a49c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21a4a0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21a4a4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x21a4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x21a4a8u;
}
