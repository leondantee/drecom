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

// Function: entry_00267548
// Address: 0x267548 - 0x26758c
void entry_00267548_0x267548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267548_0x267548");
#endif

    switch (ctx->pc) {
        case 0x267554u: goto label_267554;
        case 0x267580u: goto label_267580;
        default: break;
    }

    ctx->pc = 0x267548u;

    // 0x267548: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x267548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x26754c: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x26754Cu;
    SET_GPR_U32(ctx, 31, 0x267554u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x26754Cu, 0x267554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267554u;
label_267554:
    // 0x267554: 0x8e031240  lw          $v1, 0x1240($s0)
    ctx->pc = 0x267554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x267558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26755c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26755Cu;
    {
        const bool branch_taken_0x26755c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26755c) {
            ctx->pc = 0x2675C0u;
            return;
        }
    }
    ctx->pc = 0x267564u;
    // 0x267564: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x267564u;
    {
        const bool branch_taken_0x267564 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x267564) {
            ctx->pc = 0x26758Cu;
            return;
        }
    }
    ctx->pc = 0x26756Cu;
    // 0x26756c: 0x8e041240  lw          $a0, 0x1240($s0)
    ctx->pc = 0x26756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x267570: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x267570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x267574: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x267574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267578: 0xc05b4f8  jal         func_16D3E0
    ctx->pc = 0x267578u;
    SET_GPR_U32(ctx, 31, 0x267580u);
    ctx->pc = 0x16D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D3E0u, 0x267578u, 0x267580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267580u;
label_267580:
    // 0x267580: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x267580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x267584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267584u;
    {
        const bool branch_taken_0x267584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267584) {
            ctx->pc = 0x2675A8u;
            return;
        }
    }
    ctx->pc = 0x26758Cu;
}
