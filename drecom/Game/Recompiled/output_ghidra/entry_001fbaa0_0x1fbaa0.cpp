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

// Function: entry_001fbaa0
// Address: 0x1fbaa0 - 0x1fbad8
void entry_001fbaa0_0x1fbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbaa0_0x1fbaa0");
#endif

    ctx->pc = 0x1fbaa0u;

    // 0x1fbaa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbaa4: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fbaa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fbaa8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fbaa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fbaac: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1fbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1fbab0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fbab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fbab4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbab8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbabc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fbabcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fbac0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fbac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fbac4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fbac8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fbac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fbacc: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1fbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fbad0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fbad0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fbad4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fbad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1fbad8u;
}
