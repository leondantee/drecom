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

// Function: entry_00107bc8
// Address: 0x107bc8 - 0x107bf4
void entry_00107bc8_0x107bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107bc8_0x107bc8");
#endif

    switch (ctx->pc) {
        case 0x107bd4u: goto label_107bd4;
        case 0x107be4u: goto label_107be4;
        case 0x107becu: goto label_107bec;
        default: break;
    }

    ctx->pc = 0x107bc8u;

    // 0x107bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107bcc: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107BCCu;
    SET_GPR_U32(ctx, 31, 0x107BD4u);
    ctx->pc = 0x107BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BCCu;
    // 0x107bd0: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107BCCu, 0x107BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BD4u;
label_107bd4:
    // 0x107bd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107BD4u;
    {
        const bool branch_taken_0x107bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BD4u;
        // 0x107bd8: 0xae0244a4  sw          $v0, 0x44A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bd4) {
            ctx->pc = 0x107BF4u;
            return;
        }
    }
    ctx->pc = 0x107BDCu;
    // 0x107bdc: 0xc041b46  jal         func_106D18
    ctx->pc = 0x107BDCu;
    SET_GPR_U32(ctx, 31, 0x107BE4u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x107BDCu, 0x107BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BE4u;
label_107be4:
    // 0x107be4: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x107BE4u;
    SET_GPR_U32(ctx, 31, 0x107BECu);
    ctx->pc = 0x107BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BE4u;
    // 0x107be8: 0x3c045800  lui         $a0, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x107BE4u, 0x107BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BECu;
label_107bec:
    // 0x107bec: 0xc041b46  jal         func_106D18
    ctx->pc = 0x107BECu;
    SET_GPR_U32(ctx, 31, 0x107BF4u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x107BECu, 0x107BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BF4u;
}
