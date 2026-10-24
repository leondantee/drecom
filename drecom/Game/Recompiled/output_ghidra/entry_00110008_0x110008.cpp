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

// Function: entry_00110008
// Address: 0x110008 - 0x110044
void entry_00110008_0x110008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110008_0x110008");
#endif

    switch (ctx->pc) {
        case 0x110034u: goto label_110034;
        default: break;
    }

    ctx->pc = 0x110008u;

    // 0x110008: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x110008u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x11000c: 0x24e75280  addiu       $a3, $a3, 0x5280
    ctx->pc = 0x11000cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x110010: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x110010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x110014: 0xace50014  sw          $a1, 0x14($a3)
    ctx->pc = 0x110014u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
    // 0x110018: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11001c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11001cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x110020: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x110020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x110024: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x110024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x110028: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x110028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11002c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x11002Cu;
    SET_GPR_U32(ctx, 31, 0x110034u);
    ctx->pc = 0x110030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11002Cu;
    // 0x110030: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x110034u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110034u) { return; }
    ctx->pc = 0x110034u;
label_110034:
    // 0x110034: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110038: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110038u;
    {
        const bool branch_taken_0x110038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110038u;
        // 0x11003c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110038) {
            ctx->pc = 0x11004Cu;
            return;
        }
    }
    ctx->pc = 0x110040u;
    // 0x110040: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x110040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x110044u;
}
