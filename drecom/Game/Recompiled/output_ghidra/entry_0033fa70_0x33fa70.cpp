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

// Function: entry_0033fa70
// Address: 0x33fa70 - 0x33fa8c
void entry_0033fa70_0x33fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fa70_0x33fa70");
#endif

    ctx->pc = 0x33fa70u;

    // 0x33fa70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa74: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x33fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fa78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa7c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x33fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fa80: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x33fa80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x33fa84: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x33fa84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33fa88: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x33fa88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x33fa8cu;
}
