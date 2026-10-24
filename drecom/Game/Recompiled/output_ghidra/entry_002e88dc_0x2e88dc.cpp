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

// Function: entry_002e88dc
// Address: 0x2e88dc - 0x2e8900
void entry_002e88dc_0x2e88dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e88dc_0x2e88dc");
#endif

    ctx->pc = 0x2e88dcu;

    // 0x2e88dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e88dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e88e0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e88e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e88e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e88e8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e88ec: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2e88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e88f0: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x2e88f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x2e88f4: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2e88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2e88f8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2e88f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e88fc: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x2e88fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2e8900u;
}
