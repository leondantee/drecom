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

// Function: entry_002e8544
// Address: 0x2e8544 - 0x2e8560
void entry_002e8544_0x2e8544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e8544_0x2e8544");
#endif

    ctx->pc = 0x2e8544u;

    // 0x2e8544: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8548: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e8548u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e854c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e854cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8550: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e8550u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8554: 0x24770118  addiu       $s7, $v1, 0x118
    ctx->pc = 0x2e8554u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e8558: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x2e8558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e855c: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x2e855cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2e8560u;
}
