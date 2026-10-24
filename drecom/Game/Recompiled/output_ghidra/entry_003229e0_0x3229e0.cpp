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

// Function: entry_003229e0
// Address: 0x3229e0 - 0x322a00
void entry_003229e0_0x3229e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003229e0_0x3229e0");
#endif

    ctx->pc = 0x3229e0u;

    // 0x3229e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3229e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3229e4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3229e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3229e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3229e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3229ec: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3229ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3229f0: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x3229f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x3229f4: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x3229f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3229f8: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x3229f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3229fc: 0x0  nop
    ctx->pc = 0x3229fcu;
    // NOP
    ctx->pc = 0x322a00u;
}
