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

// Function: entry_002598c8
// Address: 0x2598c8 - 0x2598f0
void entry_002598c8_0x2598c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002598c8_0x2598c8");
#endif

    ctx->pc = 0x2598c8u;

    // 0x2598c8: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2598c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2598cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2598ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2598d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2598d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2598d4: 0xac400370  sw          $zero, 0x370($v0)
    ctx->pc = 0x2598d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 0));
    // 0x2598d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2598d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2598dc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2598dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2598e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2598e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2598e4: 0xac4004b0  sw          $zero, 0x4B0($v0)
    ctx->pc = 0x2598e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1200), GPR_U32(ctx, 0));
    // 0x2598e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2598e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2598ec: 0x0  nop
    ctx->pc = 0x2598ecu;
    // NOP
    ctx->pc = 0x2598f0u;
}
