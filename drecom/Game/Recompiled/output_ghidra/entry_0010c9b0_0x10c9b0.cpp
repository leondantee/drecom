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

// Function: entry_0010c9b0
// Address: 0x10c9b0 - 0x10ca18
void entry_0010c9b0_0x10c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c9b0_0x10c9b0");
#endif

    switch (ctx->pc) {
        case 0x10ca08u: goto label_10ca08;
        default: break;
    }

    ctx->pc = 0x10c9b0u;

    // 0x10c9b0: 0x24703b00  addiu       $s0, $v1, 0x3B00
    ctx->pc = 0x10c9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15104));
    // 0x10c9b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10c9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10c9b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10c9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10c9bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10c9bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10c9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10c9c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10c9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9c8: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x10c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x10c9cc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10c9d0: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x10c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x10c9d4: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x10c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x10c9d8: 0xac623b00  sw          $v0, 0x3B00($v1)
    ctx->pc = 0x10c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15104), GPR_U32(ctx, 2));
    // 0x10c9dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10c9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c9e0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x10c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x10c9e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9e8: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x10c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x10c9ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10c9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10c9f4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10c9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10c9f8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10c9f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9fc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10c9fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10ca00: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10CA00u;
    SET_GPR_U32(ctx, 31, 0x10CA08u);
    ctx->pc = 0x10CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA00u;
    // 0x10ca04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10CA08u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10CA08u) { return; }
    ctx->pc = 0x10CA08u;
label_10ca08:
    // 0x10ca08: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CA08u;
    {
        const bool branch_taken_0x10ca08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10ca08) {
            ctx->pc = 0x10CA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CA08u;
            // 0x10ca0c: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA18u;
            return;
        }
    }
    ctx->pc = 0x10CA10u;
    // 0x10ca10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10CA10u;
    {
        const bool branch_taken_0x10ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA10u;
        // 0x10ca14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca10) {
            ctx->pc = 0x10CA3Cu;
            return;
        }
    }
    ctx->pc = 0x10CA18u;
}
