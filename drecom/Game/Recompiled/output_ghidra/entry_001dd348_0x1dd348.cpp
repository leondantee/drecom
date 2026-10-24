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

// Function: entry_001dd348
// Address: 0x1dd348 - 0x1dd358
void entry_001dd348_0x1dd348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd348_0x1dd348");
#endif

    ctx->pc = 0x1dd348u;

    // 0x1dd348: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1dd348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dd34c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1dd34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dd350: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1dd350u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1dd354: 0x0  nop
    ctx->pc = 0x1dd354u;
    // NOP
    ctx->pc = 0x1dd358u;
}
