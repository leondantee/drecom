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

// Function: entry_00274e70
// Address: 0x274e70 - 0x274e90
void entry_00274e70_0x274e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274e70_0x274e70");
#endif

    ctx->pc = 0x274e70u;

    // 0x274e70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e74: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x274e74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x274e78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e7c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x274e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x274e80: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x274e80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x274e84: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x274e84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x274e88: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x274e88u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x274e8c: 0x0  nop
    ctx->pc = 0x274e8cu;
    // NOP
    ctx->pc = 0x274e90u;
}
