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

// Function: caseD_5
// Address: 0x148890 - 0x1488f8
void caseD_5_0x148890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x148890");
#endif

    switch (ctx->pc) {
        case 0x1488b4u: goto label_1488b4;
        case 0x1488c0u: goto label_1488c0;
        case 0x1488d4u: goto label_1488d4;
        case 0x1488e0u: goto label_1488e0;
        default: break;
    }

    ctx->pc = 0x148890u;

    // 0x148890: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148894: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x148894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x148898: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x148898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14889c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14889cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1488a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1488a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1488a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1488a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1488a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1488a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1488ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1488ACu;
    SET_GPR_U32(ctx, 31, 0x1488B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1488ACu, 0x1488B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488B4u;
label_1488b4:
    // 0x1488b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1488b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1488b8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1488B8u;
    SET_GPR_U32(ctx, 31, 0x1488C0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1488B8u, 0x1488C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488C0u;
label_1488c0:
    // 0x1488c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1488c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1488c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1488c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1488c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1488c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1488cc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1488CCu;
    SET_GPR_U32(ctx, 31, 0x1488D4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1488CCu, 0x1488D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488D4u;
label_1488d4:
    // 0x1488d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1488d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1488d8: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x1488D8u;
    SET_GPR_U32(ctx, 31, 0x1488E0u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x1488D8u, 0x1488E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488E0u;
label_1488e0:
    // 0x1488e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1488E0u;
    {
        const bool branch_taken_0x1488e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1488e0) {
            ctx->pc = 0x1488F8u;
            return;
        }
    }
    ctx->pc = 0x1488E8u;
    // 0x1488e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1488e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1488ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1488ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1488f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1488f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1488f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1488f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1488f8u;
}
