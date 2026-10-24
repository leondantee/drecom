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

// Function: entry_00184444
// Address: 0x184444 - 0x184484
void entry_00184444_0x184444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184444_0x184444");
#endif

    ctx->pc = 0x184444u;

    // 0x184444: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184448: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x184448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18444c: 0x3043000c  andi        $v1, $v0, 0xC
    ctx->pc = 0x18444cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x184450: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x184450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x184454: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x184454u;
    {
        const bool branch_taken_0x184454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x184454) {
            ctx->pc = 0x184574u;
            return;
        }
    }
    ctx->pc = 0x18445Cu;
    // 0x18445c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x184460: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x184460u;
    {
        const bool branch_taken_0x184460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x184460) {
            ctx->pc = 0x184524u;
            return;
        }
    }
    ctx->pc = 0x184468u;
    // 0x184468: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x184468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18446c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18446Cu;
    {
        const bool branch_taken_0x18446c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18446c) {
            ctx->pc = 0x1844BCu;
            return;
        }
    }
    ctx->pc = 0x184474u;
    // 0x184474: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184474u;
    {
        const bool branch_taken_0x184474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184474) {
            ctx->pc = 0x184484u;
            return;
        }
    }
    ctx->pc = 0x18447Cu;
    // 0x18447c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x18447Cu;
    {
        const bool branch_taken_0x18447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18447c) {
            ctx->pc = 0x18459Cu;
            return;
        }
    }
    ctx->pc = 0x184484u;
}
