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

// Function: entry_0018e180
// Address: 0x18e180 - 0x18e190
void entry_0018e180_0x18e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e180_0x18e180");
#endif

    ctx->pc = 0x18e180u;

    // 0x18e180: 0x8e2301f8  lw          $v1, 0x1F8($s1)
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x18e184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e188: 0xae2301f8  sw          $v1, 0x1F8($s1)
    ctx->pc = 0x18e188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 3));
    // 0x18e18c: 0x0  nop
    ctx->pc = 0x18e18cu;
    // NOP
    ctx->pc = 0x18e190u;
}
