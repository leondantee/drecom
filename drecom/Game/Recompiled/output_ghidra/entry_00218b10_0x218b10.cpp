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

// Function: entry_00218b10
// Address: 0x218b10 - 0x218b38
void entry_00218b10_0x218b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218b10_0x218b10");
#endif

    ctx->pc = 0x218b10u;

    // 0x218b10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218b14: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x218b14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x218b18: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x218b18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x218b1c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x218b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x218b20: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x218b20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x218b24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218b28: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218b28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218b2c: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x218b2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x218b30: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x218b30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x218b34: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x218b34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x218b38u;
}
