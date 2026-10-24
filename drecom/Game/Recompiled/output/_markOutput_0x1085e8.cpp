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

// Function: _markOutput
// Address: 0x1085e8 - 0x108620
void _markOutput_0x1085e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_markOutput_0x1085e8");
#endif

    ctx->pc = 0x1085e8u;

    // 0x1085e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1085e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1085ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1085ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1085f0: 0x8c433bf4  lw          $v1, 0x3BF4($v0)
    ctx->pc = 0x1085f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383BF4u));
    // 0x1085f4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1085f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1085f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1085f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1085fc: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1085FCu;
    {
        const bool branch_taken_0x1085fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x108600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085FCu;
        // 0x108600: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085fc) {
            ctx->pc = 0x108610u;
            goto label_108610;
        }
    }
    ctx->pc = 0x108604u;
    // 0x108604: 0x8c433d04  lw          $v1, 0x3D04($v0)
    ctx->pc = 0x108604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15620)));
    // 0x108608: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x108608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x10860c: 0xac8300ac  sw          $v1, 0xAC($a0)
    ctx->pc = 0x10860cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
label_108610:
    // 0x108610: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x108610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x108614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108618: 0x3e00008  jr          $ra
    ctx->pc = 0x108618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108618u;
        // 0x10861c: 0xac624480  sw          $v0, 0x4480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108620u;
}
