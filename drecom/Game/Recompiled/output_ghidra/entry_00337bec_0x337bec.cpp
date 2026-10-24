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

// Function: entry_00337bec
// Address: 0x337bec - 0x337c1c
void entry_00337bec_0x337bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337bec_0x337bec");
#endif

    ctx->pc = 0x337becu;

label_337bec:
    // 0x337bec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_337bf0:
    // 0x337bf0: 0x8c244e40  lw          $a0, 0x4E40($at)
    ctx->pc = 0x337bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20032)));
label_337bf4:
    // 0x337bf4: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x337bf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_337bf8:
    // 0x337bf8: 0x1020008d  beqz        $at, . + 4 + (0x8D << 2)
label_337bfc:
    if (ctx->pc == 0x337BFCu) {
        ctx->pc = 0x337C00u;
        goto label_337c00;
    }
    ctx->pc = 0x337BF8u;
    {
        const bool branch_taken_0x337bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337bf8) {
            ctx->pc = 0x337E30u;
            return;
        }
    }
    ctx->pc = 0x337C00u;
label_337c00:
    // 0x337c00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x337c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_337c04:
    // 0x337c04: 0x24432120  addiu       $v1, $v0, 0x2120
    ctx->pc = 0x337c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8480));
label_337c08:
    // 0x337c08: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x337c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_337c0c:
    // 0x337c0c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x337c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_337c10:
    // 0x337c10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x337c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_337c14:
    // 0x337c14: 0x400008  jr          $v0
label_337c18:
    if (ctx->pc == 0x337C18u) {
        ctx->pc = 0x337C1Cu;
        goto label_fallthrough_0x337c14;
    }
    ctx->pc = 0x337C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337C14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x337c14:
    ctx->pc = 0x337C1Cu;
}
