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

// Function: entry_003222cc
// Address: 0x3222cc - 0x3222f0
void entry_003222cc_0x3222cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003222cc_0x3222cc");
#endif

    ctx->pc = 0x3222ccu;

    // 0x3222cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3222ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3222d0: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x3222d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x3222d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3222d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3222d8: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x3222d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x3222dc: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x3222dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x3222e0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3222e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x3222e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3222e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3222e8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3222e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3222ec: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x3222ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x3222f0u;
}
