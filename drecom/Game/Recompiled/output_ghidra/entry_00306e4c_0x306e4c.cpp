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

// Function: entry_00306e4c
// Address: 0x306e4c - 0x306e5c
void entry_00306e4c_0x306e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306e4c_0x306e4c");
#endif

    ctx->pc = 0x306e4cu;

    // 0x306e4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x306e54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x306e5cu;
}
