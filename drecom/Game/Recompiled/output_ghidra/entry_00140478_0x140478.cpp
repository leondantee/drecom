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

// Function: entry_00140478
// Address: 0x140478 - 0x1404d4
void entry_00140478_0x140478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140478_0x140478");
#endif

    switch (ctx->pc) {
        case 0x14048cu: goto label_14048c;
        case 0x140494u: goto label_140494;
        case 0x14049cu: goto label_14049c;
        case 0x1404a4u: goto label_1404a4;
        case 0x1404b8u: goto label_1404b8;
        default: break;
    }

    ctx->pc = 0x140478u;

    // 0x140478: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x140478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x14047c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14047Cu;
    {
        const bool branch_taken_0x14047c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14047c) {
            ctx->pc = 0x140468u;
            return;
        }
    }
    ctx->pc = 0x140484u;
    // 0x140484: 0xc0c799c  jal         func_31E670
    ctx->pc = 0x140484u;
    SET_GPR_U32(ctx, 31, 0x14048Cu);
    ctx->pc = 0x31E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E670u, 0x140484u, 0x14048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14048Cu;
label_14048c:
    // 0x14048c: 0xc0ca324  jal         func_328C90
    ctx->pc = 0x14048Cu;
    SET_GPR_U32(ctx, 31, 0x140494u);
    ctx->pc = 0x328C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C90u, 0x14048Cu, 0x140494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140494u;
label_140494:
    // 0x140494: 0xc0a481c  jal         func_292070
    ctx->pc = 0x140494u;
    SET_GPR_U32(ctx, 31, 0x14049Cu);
    ctx->pc = 0x292070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292070u, 0x140494u, 0x14049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14049Cu;
label_14049c:
    // 0x14049c: 0xc0cec34  jal         func_33B0D0
    ctx->pc = 0x14049Cu;
    SET_GPR_U32(ctx, 31, 0x1404A4u);
    ctx->pc = 0x33B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B0D0u, 0x14049Cu, 0x1404A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404A4u;
label_1404a4:
    // 0x1404a4: 0xae0019c8  sw          $zero, 0x19C8($s0)
    ctx->pc = 0x1404a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6600), GPR_U32(ctx, 0));
    // 0x1404a8: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x1404a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1404ac: 0xae020a64  sw          $v0, 0xA64($s0)
    ctx->pc = 0x1404acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2660), GPR_U32(ctx, 2));
    // 0x1404b0: 0xc067934  jal         func_19E4D0
    ctx->pc = 0x1404B0u;
    SET_GPR_U32(ctx, 31, 0x1404B8u);
    ctx->pc = 0x19E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E4D0u, 0x1404B0u, 0x1404B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404B8u;
label_1404b8:
    // 0x1404b8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1404b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1404bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1404bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1404c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1404c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1404c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1404c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1404c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1404c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1404cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1404CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1404CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1404D4u;
}
