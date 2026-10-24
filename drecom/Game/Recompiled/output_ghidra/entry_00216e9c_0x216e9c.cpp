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

// Function: entry_00216e9c
// Address: 0x216e9c - 0x216eac
void entry_00216e9c_0x216e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216e9c_0x216e9c");
#endif

    ctx->pc = 0x216e9cu;

    // 0x216e9c: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x216e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x216ea0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x216ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x216ea4: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x216ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x216ea8: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x216ea8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
    ctx->pc = 0x216eacu;
}
