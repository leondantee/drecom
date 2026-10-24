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

// Function: entry_002f1684
// Address: 0x2f1684 - 0x2f16a0
void entry_002f1684_0x2f1684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1684_0x2f1684");
#endif

    ctx->pc = 0x2f1684u;

    // 0x2f1684: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1688: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f1688u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f168c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f168cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1690: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f1690u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1694: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x2f1694u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2f1698: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x2f1698u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f169c: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x2f169cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2f16a0u;
}
