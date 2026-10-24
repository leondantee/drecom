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

// Function: entry_001516f8
// Address: 0x1516f8 - 0x15173c
void entry_001516f8_0x1516f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001516f8_0x1516f8");
#endif

    ctx->pc = 0x1516f8u;

    // 0x1516f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1516f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1516fc: 0x12030514  beq         $s0, $v1, . + 4 + (0x514 << 2)
    ctx->pc = 0x1516FCu;
    {
        const bool branch_taken_0x1516fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1516fc) {
            ctx->pc = 0x152B50u;
            return;
        }
    }
    ctx->pc = 0x151704u;
    // 0x151704: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x151704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x151708: 0x120504c2  beq         $s0, $a1, . + 4 + (0x4C2 << 2)
    ctx->pc = 0x151708u;
    {
        const bool branch_taken_0x151708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x151708) {
            ctx->pc = 0x152A14u;
            return;
        }
    }
    ctx->pc = 0x151710u;
    // 0x151710: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x151710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151714: 0x1206046d  beq         $s0, $a2, . + 4 + (0x46D << 2)
    ctx->pc = 0x151714u;
    {
        const bool branch_taken_0x151714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x151714) {
            ctx->pc = 0x1528CCu;
            return;
        }
    }
    ctx->pc = 0x15171Cu;
    // 0x15171c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x15171cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x151720: 0x120702ee  beq         $s0, $a3, . + 4 + (0x2EE << 2)
    ctx->pc = 0x151720u;
    {
        const bool branch_taken_0x151720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        if (branch_taken_0x151720) {
            ctx->pc = 0x1522DCu;
            return;
        }
    }
    ctx->pc = 0x151728u;
    // 0x151728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15172c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15172Cu;
    {
        const bool branch_taken_0x15172c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x15172c) {
            ctx->pc = 0x15173Cu;
            return;
        }
    }
    ctx->pc = 0x151734u;
    // 0x151734: 0x1000054e  b           . + 4 + (0x54E << 2)
    ctx->pc = 0x151734u;
    {
        const bool branch_taken_0x151734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151734) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x15173Cu;
}
