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

// Function: entry_00267f48
// Address: 0x267f48 - 0x267f6c
void entry_00267f48_0x267f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267f48_0x267f48");
#endif

    ctx->pc = 0x267f48u;

    // 0x267f48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267f4c: 0x8c24fce8  lw          $a0, -0x318($at)
    ctx->pc = 0x267f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FCE8u));
    // 0x267f50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x267f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267f54: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x267f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x267f58: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267F58u;
    {
        const bool branch_taken_0x267f58 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x267f58) {
            ctx->pc = 0x267F6Cu;
            return;
        }
    }
    ctx->pc = 0x267F60u;
    // 0x267f60: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x267F60u;
    {
        const bool branch_taken_0x267f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x267f60) {
            ctx->pc = 0x267F6Cu;
            return;
        }
    }
    ctx->pc = 0x267F68u;
    // 0x267f68: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x267f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    ctx->pc = 0x267f6cu;
}
