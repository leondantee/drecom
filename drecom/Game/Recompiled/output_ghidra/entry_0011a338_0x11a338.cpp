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

// Function: entry_0011a338
// Address: 0x11a338 - 0x11a368
void entry_0011a338_0x11a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a338_0x11a338");
#endif

    ctx->pc = 0x11a338u;

    // 0x11a338: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x11A338u;
    {
        const bool branch_taken_0x11a338 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A338u;
        // 0x11a33c: 0x2534021  addu        $t0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a338) {
            ctx->pc = 0x11A3ECu;
            return;
        }
    }
    ctx->pc = 0x11A340u;
    // 0x11a340: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a344: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A344u;
    {
        const bool branch_taken_0x11a344 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A344u;
        // 0x11a348: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a344) {
            ctx->pc = 0x11A368u;
            return;
        }
    }
    ctx->pc = 0x11A34Cu;
    // 0x11a34c: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x11a34cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11a350: 0x2534021  addu        $t0, $s2, $s3
    ctx->pc = 0x11a350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x11a354: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x11a354u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x11a358: 0x2b33821  addu        $a3, $s5, $s3
    ctx->pc = 0x11a358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x11a35c: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x11a35cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x11a360: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11A360u;
    {
        const bool branch_taken_0x11a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A360u;
        // 0x11a364: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a360) {
            ctx->pc = 0x11A3E8u;
            return;
        }
    }
    ctx->pc = 0x11A368u;
}
