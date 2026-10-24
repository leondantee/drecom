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

// Function: entry_00118048
// Address: 0x118048 - 0x1180c0
void entry_00118048_0x118048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118048_0x118048");
#endif

    switch (ctx->pc) {
        case 0x118070u: goto label_118070;
        default: break;
    }

    ctx->pc = 0x118048u;

    // 0x118048: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x118048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x11804c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x11804cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x118050: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x118050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x118054: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x118054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118058: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x118058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x11805c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11805cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x118060: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x118060u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x118064: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x118064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x118068: 0xc046a16  jal         func_11A858
    ctx->pc = 0x118068u;
    SET_GPR_U32(ctx, 31, 0x118070u);
    ctx->pc = 0x11806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118068u;
    // 0x11806c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A858u, 0x118068u, 0x118070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118070u;
label_118070:
    // 0x118070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118074: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x118074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x118078: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x118078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11807c: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11807Cu;
    {
        const bool branch_taken_0x11807c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x118080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11807Cu;
        // 0x118080: 0x911023  subu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11807c) {
            ctx->pc = 0x118134u;
            return;
        }
    }
    ctx->pc = 0x118084u;
    // 0x118084: 0x8fc34d58  lw          $v1, 0x4D58($fp)
    ctx->pc = 0x118084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 19800)));
    // 0x118088: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x118088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11808c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x11808cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x118090: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x118090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x118094: 0x24a44928  addiu       $a0, $a1, 0x4928
    ctx->pc = 0x118094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 18728));
    // 0x118098: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x118098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x11809c: 0xafc34d58  sw          $v1, 0x4D58($fp)
    ctx->pc = 0x11809cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 19800), GPR_U32(ctx, 3));
    // 0x1180a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1180a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1180a4: 0x12840017  beq         $s4, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1180A4u;
    {
        const bool branch_taken_0x1180a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x1180A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180A4u;
        // 0x1180a8: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180a4) {
            ctx->pc = 0x118104u;
            return;
        }
    }
    ctx->pc = 0x1180ACu;
    // 0x1180ac: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x1180acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1180b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1180B0u;
    {
        const bool branch_taken_0x1180b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180B0u;
        // 0x1180b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180b0) {
            ctx->pc = 0x1180C0u;
            return;
        }
    }
    ctx->pc = 0x1180B8u;
    // 0x1180b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1180B8u;
    {
        const bool branch_taken_0x1180b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180B8u;
        // 0x1180bc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180b8) {
            ctx->pc = 0x118134u;
            return;
        }
    }
    ctx->pc = 0x1180C0u;
}
