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

// Function: entry_00140b8c
// Address: 0x140b8c - 0x140bc0
void entry_00140b8c_0x140b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b8c_0x140b8c");
#endif

    switch (ctx->pc) {
        case 0x140b94u: goto label_140b94;
        case 0x140b9cu: goto label_140b9c;
        case 0x140ba4u: goto label_140ba4;
        default: break;
    }

    ctx->pc = 0x140b8cu;

    // 0x140b8c: 0xc067fd0  jal         func_19FF40
    ctx->pc = 0x140B8Cu;
    SET_GPR_U32(ctx, 31, 0x140B94u);
    ctx->pc = 0x19FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FF40u, 0x140B8Cu, 0x140B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B94u;
label_140b94:
    // 0x140b94: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x140B94u;
    SET_GPR_U32(ctx, 31, 0x140B9Cu);
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x140B94u, 0x140B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B9Cu;
label_140b9c:
    // 0x140b9c: 0xc0a5c44  jal         func_297110
    ctx->pc = 0x140B9Cu;
    SET_GPR_U32(ctx, 31, 0x140BA4u);
    ctx->pc = 0x297110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297110u, 0x140B9Cu, 0x140BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BA4u;
label_140ba4:
    // 0x140ba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140ba8: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x140ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140bac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x140bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x140bb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140BB0u;
    {
        const bool branch_taken_0x140bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140bb0) {
            ctx->pc = 0x140BC0u;
            return;
        }
    }
    ctx->pc = 0x140BB8u;
    // 0x140bb8: 0xc0cb80c  jal         func_32E030
    ctx->pc = 0x140BB8u;
    SET_GPR_U32(ctx, 31, 0x140BC0u);
    ctx->pc = 0x32E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E030u, 0x140BB8u, 0x140BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BC0u;
}
