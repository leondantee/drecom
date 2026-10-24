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

// Function: entry_00216ca8
// Address: 0x216ca8 - 0x216cb8
void entry_00216ca8_0x216ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216ca8_0x216ca8");
#endif

    ctx->pc = 0x216ca8u;

    // 0x216ca8: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x216ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x216cac: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x216cacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x216cb0: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x216cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
    // 0x216cb4: 0x2530c880  addiu       $s0, $t1, -0x3780
    ctx->pc = 0x216cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953088));
    ctx->pc = 0x216cb8u;
}
