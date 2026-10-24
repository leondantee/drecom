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

// Function: entry_0033a788
// Address: 0x33a788 - 0x33a7b0
void entry_0033a788_0x33a788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a788_0x33a788");
#endif

    ctx->pc = 0x33a788u;

    // 0x33a788: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a78c: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a790: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a794: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33a798: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x33a798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x33a79c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A79Cu;
    {
        const bool branch_taken_0x33a79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a79c) {
            ctx->pc = 0x33A7B0u;
            return;
        }
    }
    ctx->pc = 0x33A7A4u;
    // 0x33a7a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a7a8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x33A7A8u;
    {
        const bool branch_taken_0x33a7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a7a8) {
            ctx->pc = 0x33A928u;
            return;
        }
    }
    ctx->pc = 0x33A7B0u;
}
