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

// Function: entry_003191c0
// Address: 0x3191c0 - 0x3191d0
void entry_003191c0_0x3191c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003191c0_0x3191c0");
#endif

    ctx->pc = 0x3191c0u;

    // 0x3191c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3191c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3191c4: 0x8c83128c  lw          $v1, 0x128C($a0)
    ctx->pc = 0x3191c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x3191c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3191c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3191cc: 0xac83128c  sw          $v1, 0x128C($a0)
    ctx->pc = 0x3191ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 3));
    ctx->pc = 0x3191d0u;
}
