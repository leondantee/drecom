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

// Function: entry_00113550
// Address: 0x113550 - 0x11355c
void entry_00113550_0x113550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113550_0x113550");
#endif

    ctx->pc = 0x113550u;

    // 0x113550: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x113550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x113554: 0xdfb200f8  ld          $s2, 0xF8($sp)
    ctx->pc = 0x113554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x113558: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x113558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    ctx->pc = 0x11355cu;
}
