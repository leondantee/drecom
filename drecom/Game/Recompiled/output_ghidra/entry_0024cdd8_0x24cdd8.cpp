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

// Function: entry_0024cdd8
// Address: 0x24cdd8 - 0x24cde4
void entry_0024cdd8_0x24cdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024cdd8_0x24cdd8");
#endif

    ctx->pc = 0x24cdd8u;

    // 0x24cdd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cddc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cde0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    ctx->pc = 0x24cde4u;
}
