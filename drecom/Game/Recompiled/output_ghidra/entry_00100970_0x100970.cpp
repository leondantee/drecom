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

// Function: entry_00100970
// Address: 0x100970 - 0x100998
void entry_00100970_0x100970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100970_0x100970");
#endif

    switch (ctx->pc) {
        case 0x100978u: goto label_100978;
        default: break;
    }

    ctx->pc = 0x100970u;

    // 0x100970: 0xc084bb8  jal         func_212EE0
    ctx->pc = 0x100970u;
    SET_GPR_U32(ctx, 31, 0x100978u);
    ctx->pc = 0x212EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212EE0u, 0x100970u, 0x100978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100978u;
label_100978:
    // 0x100978: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x100978u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
    // 0x10097c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x10097cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100980: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x100980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x100984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100988: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100988u;
    {
        const bool branch_taken_0x100988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100988u;
        // 0x10098c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100988) {
            ctx->pc = 0x100998u;
            return;
        }
    }
    ctx->pc = 0x100990u;
    // 0x100990: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x100990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x100994: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x100994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x100998u;
}
