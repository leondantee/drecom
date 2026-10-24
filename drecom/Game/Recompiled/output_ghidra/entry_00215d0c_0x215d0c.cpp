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

// Function: entry_00215d0c
// Address: 0x215d0c - 0x215d40
void entry_00215d0c_0x215d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215d0c_0x215d0c");
#endif

    switch (ctx->pc) {
        case 0x215d30u: goto label_215d30;
        default: break;
    }

    ctx->pc = 0x215d0cu;

    // 0x215d0c: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x215d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x215d10: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x215d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x215d14: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x215d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d18: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x215d18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d1c: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x215d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x215d20: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x215d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x215d24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d28: 0xc08543e  jal         func_2150F8
    ctx->pc = 0x215D28u;
    SET_GPR_U32(ctx, 31, 0x215D30u);
    ctx->pc = 0x215D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D28u;
    // 0x215d2c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150F8u;
    {
        ctx->pc = 0x215D30u;
        ps2_syscalls::sceSifSendCmd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215D30u) { return; }
    ctx->pc = 0x215D30u;
label_215d30:
    // 0x215d30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215D30u;
    {
        const bool branch_taken_0x215d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215d30) {
            ctx->pc = 0x215D50u;
            return;
        }
    }
    ctx->pc = 0x215D38u;
    // 0x215d38: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x215D38u;
    SET_GPR_U32(ctx, 31, 0x215D40u);
    ctx->pc = 0x215D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D38u;
    // 0x215d3c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x215D40u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215D40u) { return; }
    ctx->pc = 0x215D40u;
}
