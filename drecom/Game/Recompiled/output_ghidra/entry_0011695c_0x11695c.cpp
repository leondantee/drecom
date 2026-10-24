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

// Function: entry_0011695c
// Address: 0x11695c - 0x116988
void entry_0011695c_0x11695c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011695c_0x11695c");
#endif

    switch (ctx->pc) {
        case 0x11697cu: goto label_11697c;
        default: break;
    }

    ctx->pc = 0x11695cu;

    // 0x11695c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11695Cu;
    {
        const bool branch_taken_0x11695c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11695Cu;
        // 0x116960: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11695c) {
            ctx->pc = 0x116988u;
            return;
        }
    }
    ctx->pc = 0x116964u;
    // 0x116964: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x116964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x116968: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x116968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11696c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11696cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x116970: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x116970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116974: 0xc046416  jal         func_119058
    ctx->pc = 0x116974u;
    SET_GPR_U32(ctx, 31, 0x11697Cu);
    ctx->pc = 0x116978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116974u;
    // 0x116978: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119058u, 0x116974u, 0x11697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11697Cu;
label_11697c:
    // 0x11697c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x11697cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x116980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116980u;
    {
        const bool branch_taken_0x116980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116980u;
        // 0x116984: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116980) {
            ctx->pc = 0x116990u;
            return;
        }
    }
    ctx->pc = 0x116988u;
}
