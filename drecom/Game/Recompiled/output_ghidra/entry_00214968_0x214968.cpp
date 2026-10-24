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

// Function: entry_00214968
// Address: 0x214968 - 0x214998
void entry_00214968_0x214968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214968_0x214968");
#endif

    switch (ctx->pc) {
        case 0x214970u: goto label_214970;
        case 0x21498cu: goto label_21498c;
        default: break;
    }

    ctx->pc = 0x214968u;

label_214968:
    // 0x214968: 0xc04786c  jal         func_11E1B0
    ctx->pc = 0x214968u;
    SET_GPR_U32(ctx, 31, 0x214970u);
    ctx->pc = 0x21496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214968u;
    // 0x21496c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B0u, 0x214968u, 0x214970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214970u;
label_214970:
    // 0x214970: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x214970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x214974: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x214974u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x214978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21497c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21497cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x214980: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x214980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x214984: 0xc0476f8  jal         func_11DBE0
    ctx->pc = 0x214984u;
    SET_GPR_U32(ctx, 31, 0x21498Cu);
    ctx->pc = 0x214988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214984u;
    // 0x214988: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DBE0u, 0x214984u, 0x21498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21498Cu;
label_21498c:
    // 0x21498c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21498cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214990: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x214990u;
    {
        const bool branch_taken_0x214990 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x214994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214990u;
        // 0x214994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214990) {
            ctx->pc = 0x214968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214968;
        }
    }
    ctx->pc = 0x214998u;
}
