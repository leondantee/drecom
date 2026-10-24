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

// Function: entry_00214890
// Address: 0x214890 - 0x2148c8
void entry_00214890_0x214890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214890_0x214890");
#endif

    switch (ctx->pc) {
        case 0x214898u: goto label_214898;
        case 0x2148b4u: goto label_2148b4;
        default: break;
    }

    ctx->pc = 0x214890u;

label_214890:
    // 0x214890: 0xc047546  jal         func_11D518
    ctx->pc = 0x214890u;
    SET_GPR_U32(ctx, 31, 0x214898u);
    ctx->pc = 0x214894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214890u;
    // 0x214894: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D518u, 0x214890u, 0x214898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214898u;
label_214898:
    // 0x214898: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x214898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x21489c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x21489cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2148a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2148a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2148a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2148a8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2148a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2148ac: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2148ACu;
    SET_GPR_U32(ctx, 31, 0x2148B4u);
    ctx->pc = 0x2148B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148ACu;
    // 0x2148b0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CCA0u;
    {
        ctx->pc = 0x2148B4u;
        ps2_stubs::__divdi3(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2148B4u) { return; }
    ctx->pc = 0x2148B4u;
label_2148b4:
    // 0x2148b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2148b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148b8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2148B8u;
    {
        const bool branch_taken_0x2148b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2148BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148B8u;
        // 0x2148bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148b8) {
            ctx->pc = 0x214890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214890;
        }
    }
    ctx->pc = 0x2148C0u;
    // 0x2148c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2148C0u;
    {
        const bool branch_taken_0x2148c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2148c0) {
            ctx->pc = 0x2148CCu;
            return;
        }
    }
    ctx->pc = 0x2148C8u;
}
