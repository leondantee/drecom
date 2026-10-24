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

// Function: entry_0010cc58
// Address: 0x10cc58 - 0x10ccbc
void entry_0010cc58_0x10cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cc58_0x10cc58");
#endif

    switch (ctx->pc) {
        case 0x10ccacu: goto label_10ccac;
        default: break;
    }

    ctx->pc = 0x10cc58u;

    // 0x10cc58: 0x24503b00  addiu       $s0, $v0, 0x3B00
    ctx->pc = 0x10cc58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15104));
    // 0x10cc5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10cc60: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10cc64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10cc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10cc6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10cc6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc70: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x10cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x10cc74: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10cc78: 0xac433b00  sw          $v1, 0x3B00($v0)
    ctx->pc = 0x10cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15104), GPR_U32(ctx, 3));
    // 0x10cc7c: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x10cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x10cc80: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x10cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x10cc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cc88: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x10cc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x10cc8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10cc94: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10cc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc98: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10cc98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cc9c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10cc9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cca0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10cca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cca4: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10CCA4u;
    SET_GPR_U32(ctx, 31, 0x10CCACu);
    ctx->pc = 0x10CCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCA4u;
    // 0x10cca8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10CCACu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10CCACu) { return; }
    ctx->pc = 0x10CCACu;
label_10ccac:
    // 0x10ccac: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CCACu;
    {
        const bool branch_taken_0x10ccac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10ccac) {
            ctx->pc = 0x10CCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CCACu;
            // 0x10ccb0: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CCBCu;
            return;
        }
    }
    ctx->pc = 0x10CCB4u;
    // 0x10ccb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10CCB4u;
    {
        const bool branch_taken_0x10ccb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCB4u;
        // 0x10ccb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ccb4) {
            ctx->pc = 0x10CCE0u;
            return;
        }
    }
    ctx->pc = 0x10CCBCu;
}
