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

// Function: entry_00216884
// Address: 0x216884 - 0x2168d4
void entry_00216884_0x216884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216884_0x216884");
#endif

    switch (ctx->pc) {
        case 0x2168bcu: goto label_2168bc;
        case 0x2168ccu: goto label_2168cc;
        default: break;
    }

    ctx->pc = 0x216884u;

    // 0x216884: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x216884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x216888: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x216888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x21688c: 0x2452c880  addiu       $s2, $v0, -0x3780
    ctx->pc = 0x21688cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x216890: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x216890u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
    // 0x216894: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x216894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x216898: 0x2484ca50  addiu       $a0, $a0, -0x35B0
    ctx->pc = 0x216898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953552));
    // 0x21689c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x21689cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2168a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168a4: 0x256b6328  addiu       $t3, $t3, 0x6328
    ctx->pc = 0x2168a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25384));
    // 0x2168a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2168a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2168ac: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x2168acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2168b0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2168b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168b4: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x2168B4u;
    SET_GPR_U32(ctx, 31, 0x2168BCu);
    ctx->pc = 0x2168B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168B4u;
    // 0x2168b8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x2168BCu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2168BCu) { return; }
    ctx->pc = 0x2168BCu;
label_2168bc:
    // 0x2168bc: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2168BCu;
    {
        const bool branch_taken_0x2168bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2168bc) {
            ctx->pc = 0x2168C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2168BCu;
            // 0x2168c0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2168D4u;
            return;
        }
    }
    ctx->pc = 0x2168C4u;
    // 0x2168c4: 0xc0858c8  jal         func_216320
    ctx->pc = 0x2168C4u;
    SET_GPR_U32(ctx, 31, 0x2168CCu);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x2168C4u, 0x2168CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168CCu;
label_2168cc:
    // 0x2168cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2168CCu;
    {
        const bool branch_taken_0x2168cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168CCu;
        // 0x2168d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168cc) {
            ctx->pc = 0x2168F4u;
            return;
        }
    }
    ctx->pc = 0x2168D4u;
}
