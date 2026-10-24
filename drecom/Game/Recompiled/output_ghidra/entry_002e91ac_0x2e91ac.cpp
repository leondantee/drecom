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

// Function: entry_002e91ac
// Address: 0x2e91ac - 0x2e91c8
void entry_002e91ac_0x2e91ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e91ac_0x2e91ac");
#endif

    ctx->pc = 0x2e91acu;

    // 0x2e91ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e91acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e91b0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e91b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e91b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e91b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e91b8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2e91b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e91bc: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x2e91bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2e91c0: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x2e91c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e91c4: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2e91c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2e91c8u;
}
