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

// Function: entry_0010d94c
// Address: 0x10d94c - 0x10d988
void entry_0010d94c_0x10d94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d94c_0x10d94c");
#endif

    switch (ctx->pc) {
        case 0x10d958u: goto label_10d958;
        case 0x10d980u: goto label_10d980;
        default: break;
    }

    ctx->pc = 0x10d94cu;

    // 0x10d94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d950: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10D950u;
    SET_GPR_U32(ctx, 31, 0x10D958u);
    ctx->pc = 0x10D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D950u;
    // 0x10d954: 0x24050124  addiu       $a1, $zero, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10D958u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D958u) { return; }
    ctx->pc = 0x10D958u;
label_10d958:
    // 0x10d958: 0x26e43ea8  addiu       $a0, $s7, 0x3EA8
    ctx->pc = 0x10d958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16040));
    // 0x10d95c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10d960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10d964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d968: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10d968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d96c: 0x24080124  addiu       $t0, $zero, 0x124
    ctx->pc = 0x10d96cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x10d970: 0x27c93e40  addiu       $t1, $fp, 0x3E40
    ctx->pc = 0x10d970u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 15936));
    // 0x10d974: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10d974u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10d978: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10D978u;
    SET_GPR_U32(ctx, 31, 0x10D980u);
    ctx->pc = 0x10D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D978u;
    // 0x10d97c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10D980u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D980u) { return; }
    ctx->pc = 0x10D980u;
label_10d980:
    // 0x10d980: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D980u;
    {
        const bool branch_taken_0x10d980 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D980u;
        // 0x10d984: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d980) {
            ctx->pc = 0x10D99Cu;
            return;
        }
    }
    ctx->pc = 0x10D988u;
}
