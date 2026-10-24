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

// Function: entry_001251c0
// Address: 0x1251c0 - 0x1251e0
void entry_001251c0_0x1251c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001251c0_0x1251c0");
#endif

    ctx->pc = 0x1251c0u;

    // 0x1251c0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1251c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1251c4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1251c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1251c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1251c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1251cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1251ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1251d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1251d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1251d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1251d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1251d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1251dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1251dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1251e0u;
}
