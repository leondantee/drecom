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

// Function: entry_00113e1c
// Address: 0x113e1c - 0x113e40
void entry_00113e1c_0x113e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113e1c_0x113e1c");
#endif

    ctx->pc = 0x113e1cu;

    // 0x113e1c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x113E1Cu;
    {
        const bool branch_taken_0x113e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E1Cu;
        // 0x113e20: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e1c) {
            ctx->pc = 0x113E64u;
            return;
        }
    }
    ctx->pc = 0x113E24u;
    // 0x113e24: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x113e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x113e28: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x113e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x113e2c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113e30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113e34: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x113E34u;
    {
        const bool branch_taken_0x113e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x113E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E34u;
        // 0x113e38: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e34) {
            ctx->pc = 0x113EE8u;
            return;
        }
    }
    ctx->pc = 0x113E3Cu;
    // 0x113e3c: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x113e3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    ctx->pc = 0x113e40u;
}
