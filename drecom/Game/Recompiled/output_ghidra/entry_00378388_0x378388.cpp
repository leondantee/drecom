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

// Function: entry_00378388
// Address: 0x378388 - 0x3783c4
void entry_00378388_0x378388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378388_0x378388");
#endif

    ctx->pc = 0x378388u;

    // 0x378388: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x378388u;
    {
        const bool branch_taken_0x378388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x378388) {
            ctx->pc = 0x3784B0u;
            return;
        }
    }
    ctx->pc = 0x378390u;
    // 0x378390: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x378390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x378394: 0x12230038  beq         $s1, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x378394u;
    {
        const bool branch_taken_0x378394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x378394) {
            ctx->pc = 0x378478u;
            return;
        }
    }
    ctx->pc = 0x37839Cu;
    // 0x37839c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3783a0: 0x12230024  beq         $s1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3783A0u;
    {
        const bool branch_taken_0x3783a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3783a0) {
            ctx->pc = 0x378434u;
            return;
        }
    }
    ctx->pc = 0x3783A8u;
    // 0x3783a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3783a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3783ac: 0x12230015  beq         $s1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3783ACu;
    {
        const bool branch_taken_0x3783ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3783ac) {
            ctx->pc = 0x378404u;
            return;
        }
    }
    ctx->pc = 0x3783B4u;
    // 0x3783b4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3783B4u;
    {
        const bool branch_taken_0x3783b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3783b4) {
            ctx->pc = 0x3783C4u;
            return;
        }
    }
    ctx->pc = 0x3783BCu;
    // 0x3783bc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3783BCu;
    {
        const bool branch_taken_0x3783bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3783bc) {
            ctx->pc = 0x3784B0u;
            return;
        }
    }
    ctx->pc = 0x3783C4u;
}
