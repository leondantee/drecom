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

// Function: entry_00218e48
// Address: 0x218e48 - 0x218e64
void entry_00218e48_0x218e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218e48_0x218e48");
#endif

    ctx->pc = 0x218e48u;

    // 0x218e48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e4c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218e50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e54: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218e58: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x218e58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x218e5c: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x218e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x218e60: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x218e60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x218e64u;
}
