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

// Function: entry_002e8d9c
// Address: 0x2e8d9c - 0x2e8db8
void entry_002e8d9c_0x2e8d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e8d9c_0x2e8d9c");
#endif

    ctx->pc = 0x2e8d9cu;

    // 0x2e8d9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8da0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8da4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8da8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8dac: 0x24720118  addiu       $s2, $v1, 0x118
    ctx->pc = 0x2e8dacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e8db0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x2e8db0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e8db4: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x2e8db4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2e8db8u;
}
