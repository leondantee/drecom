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

// Function: entry_002ec16c
// Address: 0x2ec16c - 0x2ec188
void entry_002ec16c_0x2ec16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec16c_0x2ec16c");
#endif

    ctx->pc = 0x2ec16cu;

    // 0x2ec16c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec170: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ec170u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec174: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec178: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ec178u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec17c: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x2ec17cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ec180: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x2ec180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ec184: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x2ec184u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2ec188u;
}
