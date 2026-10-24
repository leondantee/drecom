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

// Function: entry_0014ed5c
// Address: 0x14ed5c - 0x14ee20
void entry_0014ed5c_0x14ed5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ed5c_0x14ed5c");
#endif

    switch (ctx->pc) {
        case 0x14ed64u: goto label_14ed64;
        case 0x14ed70u: goto label_14ed70;
        case 0x14ed88u: goto label_14ed88;
        case 0x14eda0u: goto label_14eda0;
        case 0x14edb0u: goto label_14edb0;
        case 0x14edf0u: goto label_14edf0;
        case 0x14ee08u: goto label_14ee08;
        case 0x14ee18u: goto label_14ee18;
        default: break;
    }

    ctx->pc = 0x14ed5cu;

    // 0x14ed5c: 0xc053eb4  jal         func_14FAD0
    ctx->pc = 0x14ED5Cu;
    SET_GPR_U32(ctx, 31, 0x14ED64u);
    ctx->pc = 0x14FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAD0u, 0x14ED5Cu, 0x14ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED64u;
label_14ed64:
    // 0x14ed64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ed68: 0xc07932c  jal         func_1E4CB0
    ctx->pc = 0x14ED68u;
    SET_GPR_U32(ctx, 31, 0x14ED70u);
    ctx->pc = 0x1E4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4CB0u, 0x14ED68u, 0x14ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED70u;
label_14ed70:
    // 0x14ed70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ed74: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14ed78: 0x2444c980  addiu       $a0, $v0, -0x3680
    ctx->pc = 0x14ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953344));
    // 0x14ed7c: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x14ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x14ed80: 0xc040c9e  jal         func_103278
    ctx->pc = 0x14ED80u;
    SET_GPR_U32(ctx, 31, 0x14ED88u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14ED88u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14ED88u) { return; }
    ctx->pc = 0x14ED88u;
label_14ed88:
    // 0x14ed88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ed8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14ed90: 0x2444ca80  addiu       $a0, $v0, -0x3580
    ctx->pc = 0x14ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953600));
    // 0x14ed94: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x14ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14ed98: 0xc040c9e  jal         func_103278
    ctx->pc = 0x14ED98u;
    SET_GPR_U32(ctx, 31, 0x14EDA0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14EDA0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14EDA0u) { return; }
    ctx->pc = 0x14EDA0u;
label_14eda0:
    // 0x14eda0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14eda4: 0x2444c960  addiu       $a0, $v0, -0x36A0
    ctx->pc = 0x14eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x14eda8: 0xc07932c  jal         func_1E4CB0
    ctx->pc = 0x14EDA8u;
    SET_GPR_U32(ctx, 31, 0x14EDB0u);
    ctx->pc = 0x1E4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4CB0u, 0x14EDA8u, 0x14EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDB0u;
label_14edb0:
    // 0x14edb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14edb4: 0x8c6313f4  lw          $v1, 0x13F4($v1)
    ctx->pc = 0x14edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5108)));
    // 0x14edb8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14EDB8u;
    {
        const bool branch_taken_0x14edb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14edb8) {
            ctx->pc = 0x14EE20u;
            return;
        }
    }
    ctx->pc = 0x14EDC0u;
    // 0x14edc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14edc4: 0x8c6313f4  lw          $v1, 0x13F4($v1)
    ctx->pc = 0x14edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5108)));
    // 0x14edc8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x14edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14edcc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x14edccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x14edd0: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x14EDD0u;
    {
        const bool branch_taken_0x14edd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14edd0) {
            ctx->pc = 0x14EE74u;
            return;
        }
    }
    ctx->pc = 0x14EDD8u;
    // 0x14edd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14eddc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14ede0: 0x24449260  addiu       $a0, $v0, -0x6DA0
    ctx->pc = 0x14ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
    // 0x14ede4: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x14ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x14ede8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x14EDE8u;
    SET_GPR_U32(ctx, 31, 0x14EDF0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14EDF0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14EDF0u) { return; }
    ctx->pc = 0x14EDF0u;
label_14edf0:
    // 0x14edf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14edf4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14edf8: 0x24449360  addiu       $a0, $v0, -0x6CA0
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
    // 0x14edfc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14ee00: 0xc040c9e  jal         func_103278
    ctx->pc = 0x14EE00u;
    SET_GPR_U32(ctx, 31, 0x14EE08u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14EE08u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14EE08u) { return; }
    ctx->pc = 0x14EE08u;
label_14ee08:
    // 0x14ee08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14ee0c: 0x24449240  addiu       $a0, $v0, -0x6DC0
    ctx->pc = 0x14ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x14ee10: 0xc07932c  jal         func_1E4CB0
    ctx->pc = 0x14EE10u;
    SET_GPR_U32(ctx, 31, 0x14EE18u);
    ctx->pc = 0x1E4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4CB0u, 0x14EE10u, 0x14EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE18u;
label_14ee18:
    // 0x14ee18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14EE18u;
    {
        const bool branch_taken_0x14ee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee18) {
            ctx->pc = 0x14EE74u;
            return;
        }
    }
    ctx->pc = 0x14EE20u;
}
