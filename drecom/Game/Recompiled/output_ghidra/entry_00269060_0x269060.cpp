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

// Function: entry_00269060
// Address: 0x269060 - 0x26907c
void entry_00269060_0x269060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00269060_0x269060");
#endif

    ctx->pc = 0x269060u;

    // 0x269060: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269064: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x269064u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x269068: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26906c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x26906cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x269070: 0x24720118  addiu       $s2, $v1, 0x118
    ctx->pc = 0x269070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x269074: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x269074u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x269078: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x269078u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x26907cu;
}
