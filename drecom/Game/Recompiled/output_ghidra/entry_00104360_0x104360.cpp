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

// Function: entry_00104360
// Address: 0x104360 - 0x1043e4
void entry_00104360_0x104360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104360_0x104360");
#endif

    switch (ctx->pc) {
        case 0x1043b4u: goto label_1043b4;
        default: break;
    }

    ctx->pc = 0x104360u;

    // 0x104360: 0x16620031  bne         $s3, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x104360u;
    {
        const bool branch_taken_0x104360 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x104364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104360u;
        // 0x104364: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104360) {
            ctx->pc = 0x104428u;
            return;
        }
    }
    ctx->pc = 0x104368u;
    // 0x104368: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x104368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x10436c: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x10436cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x104370: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x104370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104374: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x104374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x104378: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x104378u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10437c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10437cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104380: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x104380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x104384: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104388: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x104388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x10438c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x104390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104398: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x104398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10439c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10439cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043a0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1043a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1043a4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1043a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1043a8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1043a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043ac: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x1043ACu;
    SET_GPR_U32(ctx, 31, 0x1043B4u);
    ctx->pc = 0x1043B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043ACu;
    // 0x1043b0: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x1043ACu, 0x1043B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043B4u;
label_1043b4:
    // 0x1043b4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1043b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1043b8: 0x8cc23d7c  lw          $v0, 0x3D7C($a2)
    ctx->pc = 0x1043b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D7Cu));
    // 0x1043bc: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1043BCu;
    {
        const bool branch_taken_0x1043bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1043C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043BCu;
        // 0x1043c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043bc) {
            ctx->pc = 0x1043E4u;
            return;
        }
    }
    ctx->pc = 0x1043C4u;
    // 0x1043c4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1043c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1043c8: 0x8c433d1c  lw          $v1, 0x3D1C($v0)
    ctx->pc = 0x1043c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D1Cu));
    // 0x1043cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1043CCu;
    {
        const bool branch_taken_0x1043cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043CCu;
        // 0x1043d0: 0x8ec30008  lw          $v1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043cc) {
            ctx->pc = 0x1043E8u;
            return;
        }
    }
    ctx->pc = 0x1043D4u;
    // 0x1043d4: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x1043d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043d8: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x1043d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x1043dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1043DCu;
    {
        const bool branch_taken_0x1043dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043DCu;
        // 0x1043e0: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043dc) {
            ctx->pc = 0x1043E8u;
            return;
        }
    }
    ctx->pc = 0x1043E4u;
}
