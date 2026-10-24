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

// Function: entry_0033a4ac
// Address: 0x33a4ac - 0x33a4d0
void entry_0033a4ac_0x33a4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a4ac_0x33a4ac");
#endif

    ctx->pc = 0x33a4acu;

    // 0x33a4ac: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a4b0: 0x8c225440  lw          $v0, 0x5440($at)
    ctx->pc = 0x33a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895440u));
    // 0x33a4b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33a4b8: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x33a4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x33a4bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A4BCu;
    {
        const bool branch_taken_0x33a4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a4bc) {
            ctx->pc = 0x33A4D0u;
            return;
        }
    }
    ctx->pc = 0x33A4C4u;
    // 0x33a4c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a4c8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x33A4C8u;
    {
        const bool branch_taken_0x33a4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a4c8) {
            ctx->pc = 0x33A5F0u;
            return;
        }
    }
    ctx->pc = 0x33A4D0u;
}
