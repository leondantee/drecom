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

// Function: entry_002f9068
// Address: 0x2f9068 - 0x2f9084
void entry_002f9068_0x2f9068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9068_0x2f9068");
#endif

    ctx->pc = 0x2f9068u;

    // 0x2f9068: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f906c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f906cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f9070: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9074: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f9074u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f9078: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x2f9078u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2f907c: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x2f907cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f9080: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2f9080u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2f9084u;
}
