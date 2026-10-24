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

// Function: entry_0010ec24
// Address: 0x10ec24 - 0x10ec7c
void entry_0010ec24_0x10ec24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ec24_0x10ec24");
#endif

    switch (ctx->pc) {
        case 0x10ec3cu: goto label_10ec3c;
        case 0x10ec68u: goto label_10ec68;
        default: break;
    }

    ctx->pc = 0x10ec24u;

    // 0x10ec24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10EC24u;
    {
        const bool branch_taken_0x10ec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC24u;
        // 0x10ec28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec24) {
            ctx->pc = 0x10EC7Cu;
            return;
        }
    }
    ctx->pc = 0x10EC2Cu;
    // 0x10ec2c: 0xae1350d0  sw          $s3, 0x50D0($s0)
    ctx->pc = 0x10ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20688), GPR_U32(ctx, 19));
    // 0x10ec30: 0xaea045e8  sw          $zero, 0x45E8($s5)
    ctx->pc = 0x10ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 17896), GPR_U32(ctx, 0));
    // 0x10ec34: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10EC34u;
    SET_GPR_U32(ctx, 31, 0x10EC3Cu);
    ctx->pc = 0x10EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC34u;
    // 0x10ec38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10EC3Cu;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EC3Cu) { return; }
    ctx->pc = 0x10EC3Cu;
label_10ec3c:
    // 0x10ec3c: 0x27d04bc0  addiu       $s0, $fp, 0x4BC0
    ctx->pc = 0x10ec3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 19392));
    // 0x10ec40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x10ec44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10ec4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ec4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ec50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec54: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x10ec54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10ec58: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10ec58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec5c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x10ec5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10ec60: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10EC60u;
    SET_GPR_U32(ctx, 31, 0x10EC68u);
    ctx->pc = 0x10EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC60u;
    // 0x10ec64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10EC68u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EC68u) { return; }
    ctx->pc = 0x10EC68u;
label_10ec68:
    // 0x10ec68: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10EC68u;
    {
        const bool branch_taken_0x10ec68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC68u;
        // 0x10ec6c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec68) {
            ctx->pc = 0x10ECACu;
            return;
        }
    }
    ctx->pc = 0x10EC70u;
    // 0x10ec70: 0xac4045c8  sw          $zero, 0x45C8($v0)
    ctx->pc = 0x10ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17864), GPR_U32(ctx, 0));
    // 0x10ec74: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x10EC74u;
    {
        const bool branch_taken_0x10ec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC74u;
        // 0x10ec78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec74) {
            ctx->pc = 0x10EDA8u;
            return;
        }
    }
    ctx->pc = 0x10EC7Cu;
}
