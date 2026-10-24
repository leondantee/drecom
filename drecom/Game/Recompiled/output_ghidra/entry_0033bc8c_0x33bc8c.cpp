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

// Function: entry_0033bc8c
// Address: 0x33bc8c - 0x33bca0
void entry_0033bc8c_0x33bc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033bc8c_0x33bc8c");
#endif

    ctx->pc = 0x33bc8cu;

    // 0x33bc8c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x33bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x33bc90: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x33bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33bc94: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x33bc94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x33bc98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bc9c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x33bc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x33bca0u;
}
