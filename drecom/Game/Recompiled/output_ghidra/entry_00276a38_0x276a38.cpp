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

// Function: entry_00276a38
// Address: 0x276a38 - 0x276a58
void entry_00276a38_0x276a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276a38_0x276a38");
#endif

    ctx->pc = 0x276a38u;

    // 0x276a38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276a3c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x276a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x276a40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276a44: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x276a44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x276a48: 0x245e0118  addiu       $fp, $v0, 0x118
    ctx->pc = 0x276a48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x276a4c: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x276a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x276a50: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x276a50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276a54: 0x0  nop
    ctx->pc = 0x276a54u;
    // NOP
    ctx->pc = 0x276a58u;
}
