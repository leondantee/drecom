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

// Function: entry_001f476c
// Address: 0x1f476c - 0x1f4784
void entry_001f476c_0x1f476c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f476c_0x1f476c");
#endif

    ctx->pc = 0x1f476cu;

    // 0x1f476c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4770: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f4770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f4774: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f4774u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4778: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f477c: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f477cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f4780: 0x0  nop
    ctx->pc = 0x1f4780u;
    // NOP
    ctx->pc = 0x1f4784u;
}
