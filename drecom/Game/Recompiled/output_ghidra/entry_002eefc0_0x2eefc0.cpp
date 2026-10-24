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

// Function: entry_002eefc0
// Address: 0x2eefc0 - 0x2eefe0
void entry_002eefc0_0x2eefc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eefc0_0x2eefc0");
#endif

    ctx->pc = 0x2eefc0u;

    // 0x2eefc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eefc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eefc4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eefc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eefc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eefcc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eefccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eefd0: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x2eefd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2eefd4: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x2eefd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2eefd8: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x2eefd8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eefdc: 0x0  nop
    ctx->pc = 0x2eefdcu;
    // NOP
    ctx->pc = 0x2eefe0u;
}
