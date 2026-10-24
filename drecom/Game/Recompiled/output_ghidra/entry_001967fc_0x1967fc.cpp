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

// Function: entry_001967fc
// Address: 0x1967fc - 0x196858
void entry_001967fc_0x1967fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001967fc_0x1967fc");
#endif

    switch (ctx->pc) {
        case 0x196828u: goto label_196828;
        case 0x196834u: goto label_196834;
        case 0x196844u: goto label_196844;
        default: break;
    }

    ctx->pc = 0x1967fcu;

label_1967fc:
    // 0x1967fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1967fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_196800:
    // 0x196800: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x196800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_196804:
    // 0x196804: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x196804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_196808:
    // 0x196808: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x196808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19680c:
    // 0x19680c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19680cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_196810:
    // 0x196810: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x196810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_196814:
    // 0x196814: 0x24427340  addiu       $v0, $v0, 0x7340
    ctx->pc = 0x196814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29504));
label_196818:
    // 0x196818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19681c:
    // 0x19681c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_196820:
    // 0x196820: 0x40f809  jalr        $v0
label_196824:
    if (ctx->pc == 0x196824u) {
        ctx->pc = 0x196828u;
        goto label_196828;
    }
    ctx->pc = 0x196820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196828u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196820u, 0x196828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196828u;
label_196828:
    // 0x196828: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x196828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19682c:
    // 0x19682c: 0xc05d1b8  jal         func_1746E0
label_196830:
    if (ctx->pc == 0x196830u) {
        ctx->pc = 0x196834u;
        goto label_196834;
    }
    ctx->pc = 0x19682Cu;
    SET_GPR_U32(ctx, 31, 0x196834u);
    ctx->pc = 0x1746E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746E0u, 0x19682Cu, 0x196834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196834u;
label_196834:
    // 0x196834: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x196834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_196838:
    // 0x196838: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x196838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_19683c:
    // 0x19683c: 0xc0624b4  jal         func_1892D0
label_196840:
    if (ctx->pc == 0x196840u) {
        ctx->pc = 0x196844u;
        goto label_196844;
    }
    ctx->pc = 0x19683Cu;
    SET_GPR_U32(ctx, 31, 0x196844u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x19683Cu, 0x196844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196844u;
label_196844:
    // 0x196844: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x196844u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196848:
    // 0x196848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19684c:
    // 0x19684c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19684cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_196850:
    // 0x196850: 0x3e00008  jr          $ra
label_196854:
    if (ctx->pc == 0x196854u) {
        ctx->pc = 0x196858u;
        goto label_fallthrough_0x196850;
    }
    ctx->pc = 0x196850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x196850:
    ctx->pc = 0x196858u;
}
