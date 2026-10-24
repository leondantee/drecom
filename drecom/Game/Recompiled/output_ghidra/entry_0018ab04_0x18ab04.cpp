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

// Function: entry_0018ab04
// Address: 0x18ab04 - 0x18ab18
void entry_0018ab04_0x18ab04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab04_0x18ab04");
#endif

    ctx->pc = 0x18ab04u;

    // 0x18ab04: 0x240200bb  addiu       $v0, $zero, 0xBB
    ctx->pc = 0x18ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x18ab08: 0xa2220020  sb          $v0, 0x20($s1)
    ctx->pc = 0x18ab08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ab0c: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x18ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x18ab10: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x18ab10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ab14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18ab14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x18ab18u;
}
