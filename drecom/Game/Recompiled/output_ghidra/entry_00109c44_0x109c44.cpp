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

// Function: entry_00109c44
// Address: 0x109c44 - 0x109c60
void entry_00109c44_0x109c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109c44_0x109c44");
#endif

    ctx->pc = 0x109c44u;

    // 0x109c44: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x109C44u;
    {
        const bool branch_taken_0x109c44 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C44u;
        // 0x109c48: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c44) {
            ctx->pc = 0x109C60u;
            return;
        }
    }
    ctx->pc = 0x109C4Cu;
    // 0x109c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c50: 0x24423bd8  addiu       $v0, $v0, 0x3BD8
    ctx->pc = 0x109c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15320));
    // 0x109c54: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x109c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x109c58: 0xc04240a  jal         func_109028
    ctx->pc = 0x109C58u;
    SET_GPR_U32(ctx, 31, 0x109C60u);
    ctx->pc = 0x109C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C58u;
    // 0x109c5c: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109C58u, 0x109C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C60u;
}
