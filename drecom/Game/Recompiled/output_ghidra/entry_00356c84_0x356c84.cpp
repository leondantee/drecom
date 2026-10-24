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

// Function: entry_00356c84
// Address: 0x356c84 - 0x356ca8
void entry_00356c84_0x356c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356c84_0x356c84");
#endif

    ctx->pc = 0x356c84u;

    // 0x356c84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c88: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x356c88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x356c8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c90: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x356c90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x356c94: 0x24640118  addiu       $a0, $v1, 0x118
    ctx->pc = 0x356c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x356c98: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x356c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x356c9c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x356c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x356ca0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x356ca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356ca4: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x356ca4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x356ca8u;
}
