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

// Function: entry_001076d8
// Address: 0x1076d8 - 0x10771c
void entry_001076d8_0x1076d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001076d8_0x1076d8");
#endif

    switch (ctx->pc) {
        case 0x1076e0u: goto label_1076e0;
        case 0x1076e8u: goto label_1076e8;
        case 0x10770cu: goto label_10770c;
        case 0x107714u: goto label_107714;
        default: break;
    }

    ctx->pc = 0x1076d8u;

label_1076d8:
    // 0x1076d8: 0xc041c58  jal         func_107160
label_1076dc:
    if (ctx->pc == 0x1076DCu) {
        ctx->pc = 0x1076E0u;
        goto label_1076e0;
    }
    ctx->pc = 0x1076D8u;
    SET_GPR_U32(ctx, 31, 0x1076E0u);
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x1076D8u, 0x1076E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076E0u;
label_1076e0:
    // 0x1076e0: 0xc041c9e  jal         func_107278
label_1076e4:
    if (ctx->pc == 0x1076E4u) {
        ctx->pc = 0x1076E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076E0u;
        // 0x1076e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076E8u;
        goto label_1076e8;
    }
    ctx->pc = 0x1076E0u;
    SET_GPR_U32(ctx, 31, 0x1076E8u);
    ctx->pc = 0x1076E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076E0u;
    // 0x1076e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1076E0u, 0x1076E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076E8u;
label_1076e8:
    // 0x1076e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1076e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1076ec:
    // 0x1076ec: 0x26043aa8  addiu       $a0, $s0, 0x3AA8
    ctx->pc = 0x1076ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15016));
label_1076f0:
    // 0x1076f0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1076f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1076f4:
    // 0x1076f4: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1076f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1076f8:
    // 0x1076f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1076f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1076fc:
    // 0x1076fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1076fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_107700:
    // 0x107700: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107704:
    // 0x107704: 0x60f809  jalr        $v1
label_107708:
    if (ctx->pc == 0x107708u) {
        ctx->pc = 0x10770Cu;
        goto label_10770c;
    }
    ctx->pc = 0x107704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10770Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107704u, 0x10770Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10770Cu;
label_10770c:
    // 0x10770c: 0xc041cf8  jal         func_1073E0
label_107710:
    if (ctx->pc == 0x107710u) {
        ctx->pc = 0x107714u;
        goto label_107714;
    }
    ctx->pc = 0x10770Cu;
    SET_GPR_U32(ctx, 31, 0x107714u);
    ctx->pc = 0x1073E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073E0u, 0x10770Cu, 0x107714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107714u;
label_107714:
    // 0x107714: 0x10000005  b           . + 4 + (0x5 << 2)
label_107718:
    if (ctx->pc == 0x107718u) {
        ctx->pc = 0x10771Cu;
        goto label_fallthrough_0x107714;
    }
    ctx->pc = 0x107714u;
    {
        const bool branch_taken_0x107714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107714) {
            ctx->pc = 0x10772Cu;
            return;
        }
    }
label_fallthrough_0x107714:
    ctx->pc = 0x10771Cu;
}
