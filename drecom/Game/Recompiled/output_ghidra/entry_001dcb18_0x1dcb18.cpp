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

// Function: entry_001dcb18
// Address: 0x1dcb18 - 0x1dcb20
void entry_001dcb18_0x1dcb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcb18_0x1dcb18");
#endif

    ctx->pc = 0x1dcb18u;

    // 0x1dcb18: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1dcb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dcb1c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1dcb1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1dcb20u;
}
