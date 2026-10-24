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

// Function: entry_00136380
// Address: 0x136380 - 0x1363bc
void entry_00136380_0x136380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136380_0x136380");
#endif

    ctx->pc = 0x136380u;

    // 0x136380: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x136380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x136384: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x136384u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0068u));
    // 0x136388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13638c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13638Cu;
    {
        const bool branch_taken_0x13638c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13638c) {
            ctx->pc = 0x1363C8u;
            return;
        }
    }
    ctx->pc = 0x136394u;
    // 0x136394: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x136394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x136398: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x136398u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x13639c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1363a0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1363A0u;
    {
        const bool branch_taken_0x1363a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1363a0) {
            ctx->pc = 0x1363BCu;
            return;
        }
    }
    ctx->pc = 0x1363A8u;
    // 0x1363a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1363a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1363ac: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x1363acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x1363b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1363b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1363b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1363B4u;
    {
        const bool branch_taken_0x1363b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1363b4) {
            ctx->pc = 0x1363C8u;
            return;
        }
    }
    ctx->pc = 0x1363BCu;
}
