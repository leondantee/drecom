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

// Function: _alalcAlloc
// Address: 0x10a5a8 - 0x10a610
void _alalcAlloc_0x10a5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_alalcAlloc_0x10a5a8");
#endif

    switch (ctx->pc) {
        case 0x10a600u: goto label_10a600;
        default: break;
    }

    ctx->pc = 0x10a5a8u;

    // 0x10a5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a5ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10a5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a5b4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A5B4u;
    {
        const bool branch_taken_0x10a5b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a5b4) {
            ctx->pc = 0x10A5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A5B4u;
            // 0x10a5b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A5BCu;
            goto label_10a5bc;
        }
    }
    ctx->pc = 0x10A5BCu;
label_10a5bc:
    // 0x10a5bc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x10a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x10a5c0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x10a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x10a5c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10a5c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10a5cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10a5d0: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x10a5d0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x10a5d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10a5d8: 0x1012  mflo        $v0
    ctx->pc = 0x10a5d8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10a5dc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x10a5dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10a5e0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x10a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10a5e4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x10a5e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10a5e8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A5E8u;
    {
        const bool branch_taken_0x10a5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a5e8) {
            ctx->pc = 0x10A5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A5E8u;
            // 0x10a5ec: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A5F8u;
            goto label_10a5f8;
        }
    }
    ctx->pc = 0x10A5F0u;
    // 0x10a5f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A5F0u;
    {
        const bool branch_taken_0x10a5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5F0u;
        // 0x10a5f4: 0xace40008  sw          $a0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5f0) {
            ctx->pc = 0x10A604u;
            goto label_10a604;
        }
    }
    ctx->pc = 0x10A5F8u;
label_10a5f8:
    // 0x10a5f8: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10A5F8u;
    SET_GPR_U32(ctx, 31, 0x10A600u);
    ctx->pc = 0x10A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5F8u;
    // 0x10a5fc: 0x2484c8c8  addiu       $a0, $a0, -0x3738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10A5F8u, 0x10A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A600u;
label_10a600:
    // 0x10a600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a604:
    // 0x10a604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a608: 0x3e00008  jr          $ra
    ctx->pc = 0x10A608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A608u;
        // 0x10a60c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A610u;
}
