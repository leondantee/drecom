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

// Function: entry_0010453c
// Address: 0x10453c - 0x1045b8
void entry_0010453c_0x10453c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010453c_0x10453c");
#endif

    switch (ctx->pc) {
        case 0x104578u: goto label_104578;
        case 0x1045b0u: goto label_1045b0;
        default: break;
    }

    ctx->pc = 0x10453cu;

    // 0x10453c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x10453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x104540: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x104540u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x104544: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x104544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x104548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10454c: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x10454cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104550: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104554: 0x8e043c04  lw          $a0, 0x3C04($s0)
    ctx->pc = 0x104554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15364)));
    // 0x104558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10455c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10455cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104560: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104564: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x104564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x104568: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10456c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x10456cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x104570: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x104570u;
    SET_GPR_U32(ctx, 31, 0x104578u);
    ctx->pc = 0x104574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104570u;
    // 0x104574: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x104570u, 0x104578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104578u;
label_104578:
    // 0x104578: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x104578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10457c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x10457cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104580: 0x8ec5000c  lw          $a1, 0xC($s6)
    ctx->pc = 0x104580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x104584: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104584u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104588: 0x8e2b0018  lw          $t3, 0x18($s1)
    ctx->pc = 0x104588u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x10458c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10458cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104590: 0x8e043c04  lw          $a0, 0x3C04($s0)
    ctx->pc = 0x104590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15364)));
    // 0x104594: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104598: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10459c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10459cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045a0: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x1045a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x1045a4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1045a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1045a8: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x1045A8u;
    SET_GPR_U32(ctx, 31, 0x1045B0u);
    ctx->pc = 0x1045ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045A8u;
    // 0x1045ac: 0xafb20010  sw          $s2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x1045A8u, 0x1045B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045B0u;
label_1045b0:
    // 0x1045b0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1045B0u;
    {
        const bool branch_taken_0x1045b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045B0u;
        // 0x1045b4: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045b0) {
            ctx->pc = 0x1046CCu;
            return;
        }
    }
    ctx->pc = 0x1045B8u;
}
