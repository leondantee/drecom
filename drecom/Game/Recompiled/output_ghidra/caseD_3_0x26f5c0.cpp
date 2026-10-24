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

// Function: caseD_3
// Address: 0x26f5c0 - 0x26f614
void caseD_3_0x26f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x26f5c0");
#endif

    switch (ctx->pc) {
        case 0x26f5d0u: goto label_26f5d0;
        case 0x26f5dcu: goto label_26f5dc;
        case 0x26f5f0u: goto label_26f5f0;
        case 0x26f5fcu: goto label_26f5fc;
        default: break;
    }

    ctx->pc = 0x26f5c0u;

    // 0x26f5c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f5c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f5c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f5c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26F5C8u;
    SET_GPR_U32(ctx, 31, 0x26F5D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26F5C8u, 0x26F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5D0u;
label_26f5d0:
    // 0x26f5d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f5d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26F5D4u;
    SET_GPR_U32(ctx, 31, 0x26F5DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26F5D4u, 0x26F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5DCu;
label_26f5dc:
    // 0x26f5dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f5e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f5e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f5e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f5e8: 0xc057480  jal         func_15D200
    ctx->pc = 0x26F5E8u;
    SET_GPR_U32(ctx, 31, 0x26F5F0u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x26F5E8u, 0x26F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5F0u;
label_26f5f0:
    // 0x26f5f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f5f4: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x26F5F4u;
    SET_GPR_U32(ctx, 31, 0x26F5FCu);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x26F5F4u, 0x26F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5FCu;
label_26f5fc:
    // 0x26f5fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F5FCu;
    {
        const bool branch_taken_0x26f5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f5fc) {
            ctx->pc = 0x26F614u;
            return;
        }
    }
    ctx->pc = 0x26F604u;
    // 0x26f604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f608: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26f608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26f60c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f610: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26f610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26f614u;
}
