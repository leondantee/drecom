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

// Function: entry_00110c40
// Address: 0x110c40 - 0x110c7c
void entry_00110c40_0x110c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110c40_0x110c40");
#endif

    switch (ctx->pc) {
        case 0x110c6cu: goto label_110c6c;
        default: break;
    }

    ctx->pc = 0x110c40u;

    // 0x110c40: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x110c40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x110c44: 0xace55280  sw          $a1, 0x5280($a3)
    ctx->pc = 0x110c44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 21120), GPR_U32(ctx, 5));
    // 0x110c48: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x110c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x110c4c: 0x24e75280  addiu       $a3, $a3, 0x5280
    ctx->pc = 0x110c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x110c50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x110c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x110c54: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x110c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x110c58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110c5c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x110c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x110c60: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x110c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110c64: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x110C64u;
    SET_GPR_U32(ctx, 31, 0x110C6Cu);
    ctx->pc = 0x110C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C64u;
    // 0x110c68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x110C6Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110C6Cu) { return; }
    ctx->pc = 0x110C6Cu;
label_110c6c:
    // 0x110c6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110c6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c70: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110C70u;
    {
        const bool branch_taken_0x110c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C70u;
        // 0x110c74: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c70) {
            ctx->pc = 0x110C84u;
            return;
        }
    }
    ctx->pc = 0x110C78u;
    // 0x110c78: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x110c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x110c7cu;
}
