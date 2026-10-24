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

// Function: entry_001c1840
// Address: 0x1c1840 - 0x1c188c
void entry_001c1840_0x1c1840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1840_0x1c1840");
#endif

    switch (ctx->pc) {
        case 0x1c1878u: goto label_1c1878;
        default: break;
    }

    ctx->pc = 0x1c1840u;

label_1c1840:
    // 0x1c1840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1844:
    // 0x1c1844: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c1844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1c1848:
    // 0x1c1848: 0xac22b970  sw          $v0, -0x4690($at)
    ctx->pc = 0x1c1848u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949232), GPR_U32(ctx, 2));
label_1c184c:
    // 0x1c184c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1850:
    // 0x1c1850: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c1854:
    // 0x1c1854: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1c1854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c1858:
    // 0x1c1858: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c1858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c185c:
    // 0x1c185c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c185cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c1860:
    // 0x1c1860: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c1860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c1864:
    // 0x1c1864: 0x24429110  addiu       $v0, $v0, -0x6EF0
    ctx->pc = 0x1c1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
label_1c1868:
    // 0x1c1868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c186c:
    // 0x1c186c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c1870:
    // 0x1c1870: 0x40f809  jalr        $v0
label_1c1874:
    if (ctx->pc == 0x1C1874u) {
        ctx->pc = 0x1C1878u;
        goto label_1c1878;
    }
    ctx->pc = 0x1C1870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1878u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1870u, 0x1C1878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1878u;
label_1c1878:
    // 0x1c1878: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c1878u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c187c:
    // 0x1c187c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c187cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1880:
    // 0x1c1880: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c1880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c1884:
    // 0x1c1884: 0x3e00008  jr          $ra
label_1c1888:
    if (ctx->pc == 0x1C1888u) {
        ctx->pc = 0x1C188Cu;
        goto label_fallthrough_0x1c1884;
    }
    ctx->pc = 0x1C1884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c1884:
    ctx->pc = 0x1C188Cu;
}
