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

// Function: entry_00215cac
// Address: 0x215cac - 0x215ce4
void entry_00215cac_0x215cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215cac_0x215cac");
#endif

    switch (ctx->pc) {
        case 0x215cd4u: goto label_215cd4;
        default: break;
    }

    ctx->pc = 0x215cacu;

    // 0x215cac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x215cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215cb0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x215cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x215cb4: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x215cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x215cb8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x215cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215cbc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x215cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x215cc0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x215cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215cc4: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x215cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x215cc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ccc: 0xc08543e  jal         func_2150F8
    ctx->pc = 0x215CCCu;
    SET_GPR_U32(ctx, 31, 0x215CD4u);
    ctx->pc = 0x215CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CCCu;
    // 0x215cd0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150F8u;
    {
        ctx->pc = 0x215CD4u;
        ps2_syscalls::sceSifSendCmd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215CD4u) { return; }
    ctx->pc = 0x215CD4u;
label_215cd4:
    // 0x215cd4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x215CD4u;
    {
        const bool branch_taken_0x215cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CD4u;
        // 0x215cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cd4) {
            ctx->pc = 0x215D64u;
            return;
        }
    }
    ctx->pc = 0x215CDCu;
    // 0x215cdc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x215CDCu;
    {
        const bool branch_taken_0x215cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215cdc) {
            ctx->pc = 0x215D40u;
            return;
        }
    }
    ctx->pc = 0x215CE4u;
}
