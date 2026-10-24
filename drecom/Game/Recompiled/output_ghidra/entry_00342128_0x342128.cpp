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

// Function: entry_00342128
// Address: 0x342128 - 0x342134
void entry_00342128_0x342128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00342128_0x342128");
#endif

    ctx->pc = 0x342128u;

    // 0x342128: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34212c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342130: 0xa44000c0  sh          $zero, 0xC0($v0)
    ctx->pc = 0x342130u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 192), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x342134u;
}
