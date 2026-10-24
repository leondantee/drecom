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

// Function: entry_002750d0
// Address: 0x2750d0 - 0x2750f8
void entry_002750d0_0x2750d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002750d0_0x2750d0");
#endif

    ctx->pc = 0x2750d0u;

    // 0x2750d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2750d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2750d4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2750d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2750d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2750d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2750dc: 0x8c25a610  lw          $a1, -0x59F0($at)
    ctx->pc = 0x2750dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x53A610u));
    // 0x2750e0: 0x24a30118  addiu       $v1, $a1, 0x118
    ctx->pc = 0x2750e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
    // 0x2750e4: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x2750e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x2750e8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2750e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2750ec: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2750ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2750f0: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x2750f0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2750f4: 0x0  nop
    ctx->pc = 0x2750f4u;
    // NOP
    ctx->pc = 0x2750f8u;
}
