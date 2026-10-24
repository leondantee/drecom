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

// Function: entry_00218d14
// Address: 0x218d14 - 0x218d30
void entry_00218d14_0x218d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218d14_0x218d14");
#endif

    ctx->pc = 0x218d14u;

    // 0x218d14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218d18: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218d1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218d20: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218d20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218d24: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x218d24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x218d28: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x218d28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x218d2c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x218d2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x218d30u;
}
