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

// Function: entry_0033fba0
// Address: 0x33fba0 - 0x33fbbc
void entry_0033fba0_0x33fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fba0_0x33fba0");
#endif

    ctx->pc = 0x33fba0u;

    // 0x33fba0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fba4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x33fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fba8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fbac: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x33fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fbb0: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x33fbb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x33fbb4: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x33fbb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x33fbb8: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x33fbb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x33fbbcu;
}
