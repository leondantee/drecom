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

// Function: entry_00214910
// Address: 0x214910 - 0x214928
void entry_00214910_0x214910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214910_0x214910");
#endif

    ctx->pc = 0x214910u;

    // 0x214910: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x214910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x214914: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214914u;
    {
        const bool branch_taken_0x214914 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x214918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214914u;
        // 0x214918: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214914) {
            ctx->pc = 0x214928u;
            return;
        }
    }
    ctx->pc = 0x21491Cu;
    // 0x21491c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21491cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x214920: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x214920u;
    {
        const bool branch_taken_0x214920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214920u;
        // 0x214924: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214920) {
            ctx->pc = 0x21493Cu;
            return;
        }
    }
    ctx->pc = 0x214928u;
}
