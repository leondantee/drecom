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

// Function: entry_002ec4cc
// Address: 0x2ec4cc - 0x2ec4f0
void entry_002ec4cc_0x2ec4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec4cc_0x2ec4cc");
#endif

    ctx->pc = 0x2ec4ccu;

    // 0x2ec4cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec4d0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ec4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec4d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec4d8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ec4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec4dc: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2ec4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ec4e0: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x2ec4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x2ec4e4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x2ec4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2ec4e8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ec4e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec4ec: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x2ec4ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2ec4f0u;
}
