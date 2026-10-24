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

// Function: entry_0034aa84
// Address: 0x34aa84 - 0x34aa90
void entry_0034aa84_0x34aa84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034aa84_0x34aa84");
#endif

    ctx->pc = 0x34aa84u;

    // 0x34aa84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34aa8c: 0xa44000c2  sh          $zero, 0xC2($v0)
    ctx->pc = 0x34aa8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x34aa90u;
}
