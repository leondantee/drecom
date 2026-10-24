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

// Function: entry_00113578
// Address: 0x113578 - 0x1135b4
void entry_00113578_0x113578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113578_0x113578");
#endif

    switch (ctx->pc) {
        case 0x113584u: goto label_113584;
        case 0x113598u: goto label_113598;
        case 0x1135acu: goto label_1135ac;
        default: break;
    }

    ctx->pc = 0x113578u;

    // 0x113578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x113578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11357c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11357Cu;
    SET_GPR_U32(ctx, 31, 0x113584u);
    ctx->pc = 0x113580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11357Cu;
    // 0x113580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11357Cu, 0x113584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113584u;
label_113584:
    // 0x113584: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x113584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x113588: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x113588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11358c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x11358cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x113590: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113590u;
    SET_GPR_U32(ctx, 31, 0x113598u);
    ctx->pc = 0x113594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113590u;
    // 0x113594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113590u, 0x113598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113598u;
label_113598:
    // 0x113598: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x113598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11359c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135a0: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1135a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1135a4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1135A4u;
    SET_GPR_U32(ctx, 31, 0x1135ACu);
    ctx->pc = 0x1135A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135A4u;
    // 0x1135a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1135A4u, 0x1135ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135ACu;
label_1135ac:
    // 0x1135ac: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x1135acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1135b0: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1135b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->pc = 0x1135b4u;
}
