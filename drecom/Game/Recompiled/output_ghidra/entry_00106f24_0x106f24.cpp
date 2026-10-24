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

// Function: entry_00106f24
// Address: 0x106f24 - 0x106f40
void entry_00106f24_0x106f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f24_0x106f24");
#endif

    ctx->pc = 0x106f24u;

    // 0x106f24: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x106f24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x106f28: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x106f28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x106f2c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x106f2cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x106f30: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x106f30u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x106f34: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x106f34u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x106f38: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x106f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x106f3c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x106f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x106f40u;
}
