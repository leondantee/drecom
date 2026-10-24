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

// Function: entry_00195a74
// Address: 0x195a74 - 0x195a7c
void entry_00195a74_0x195a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a74_0x195a74");
#endif

    ctx->pc = 0x195a74u;

    // 0x195a74: 0x8c23ac60  lw          $v1, -0x53A0($at)
    ctx->pc = 0x195a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945888)));
    // 0x195a78: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x195a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x195a7cu;
}
