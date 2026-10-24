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

// Function: entry_001020b0
// Address: 0x1020b0 - 0x1020bc
void entry_001020b0_0x1020b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001020b0_0x1020b0");
#endif

    ctx->pc = 0x1020b0u;

    // 0x1020b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1020b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1020b4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1020b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1020b8: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x1020b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    ctx->pc = 0x1020bcu;
}
