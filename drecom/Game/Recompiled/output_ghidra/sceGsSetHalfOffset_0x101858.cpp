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

// Function: sceGsSetHalfOffset
// Address: 0x101858 - 0x1018e0
void sceGsSetHalfOffset_0x101858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetHalfOffset_0x101858");
#endif

    ctx->pc = 0x101858u;

    // 0x101858: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x101858u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x10185c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x10185cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x101860: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x101860u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x101864: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x101864u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x101868: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x101868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x10186c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x10186cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x101870: 0x2143e  dsrl32      $v0, $v0, 16
    ctx->pc = 0x101870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x101874: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x101874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x101878: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x101878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x10187c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x10187cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x101880: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x101880u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x101884: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x101884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x101888: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x101888u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10188c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x10188cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x101890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x101894: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x101894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x101898: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x101898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10189c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x10189cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1018a0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1018a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1018a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1018a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1018a8: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x1018a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x1018ac: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x1018acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
    // 0x1018b0: 0xa3282f  dsubu       $a1, $a1, $v1
    ctx->pc = 0x1018b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 3));
    // 0x1018b4: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1018b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x1018b8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1018b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1018bc: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1018BCu;
    {
        const bool branch_taken_0x1018bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018BCu;
        // 0x1018c0: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018bc) {
            ctx->pc = 0x1018D0u;
            goto label_1018d0;
        }
    }
    ctx->pc = 0x1018C4u;
    // 0x1018c4: 0x64420008  daddiu      $v0, $v0, 0x8
    ctx->pc = 0x1018c4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)8);
    // 0x1018c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1018C8u;
    {
        const bool branch_taken_0x1018c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1018CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018C8u;
        // 0x1018cc: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018c8) {
            ctx->pc = 0x1018D4u;
            goto label_1018d4;
        }
    }
    ctx->pc = 0x1018D0u;
label_1018d0:
    // 0x1018d0: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x1018d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
label_1018d4:
    // 0x1018d4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1018d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1018d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1018D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1018DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018D8u;
        // 0x1018dc: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1018D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1018E0u;
}
