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
// Address: 0x12b48c - 0x12b500
void caseD_3_0x12b48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x12b48c");
#endif

    switch (ctx->pc) {
        case 0x12b4b0u: goto label_12b4b0;
        case 0x12b4bcu: goto label_12b4bc;
        case 0x12b4ccu: goto label_12b4cc;
        case 0x12b4d8u: goto label_12b4d8;
        default: break;
    }

    ctx->pc = 0x12b48cu;

    // 0x12b48c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b490: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12b490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12b494: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12b494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x12b498: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12b498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12b49c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x12b4a0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b4a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b4a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b4a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12B4A8u;
    SET_GPR_U32(ctx, 31, 0x12B4B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12B4A8u, 0x12B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4B0u;
label_12b4b0:
    // 0x12b4b0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b4b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12B4B4u;
    SET_GPR_U32(ctx, 31, 0x12B4BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12B4B4u, 0x12B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4BCu;
label_12b4bc:
    // 0x12b4bc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b4c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b4c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b4c4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12B4C4u;
    SET_GPR_U32(ctx, 31, 0x12B4CCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12B4C4u, 0x12B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4CCu;
label_12b4cc:
    // 0x12b4cc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b4d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12B4D0u;
    SET_GPR_U32(ctx, 31, 0x12B4D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12B4D0u, 0x12B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4D8u;
label_12b4d8:
    // 0x12b4d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b4dc: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x12b4dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x12b4e0: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x12B4E0u;
    {
        const bool branch_taken_0x12b4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b4e0) {
            ctx->pc = 0x12B768u;
            return;
        }
    }
    ctx->pc = 0x12B4E8u;
    // 0x12b4e8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b4ec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12b4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12b4f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b4f4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12b4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12b4f8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x12B4F8u;
    {
        const bool branch_taken_0x12b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b4f8) {
            ctx->pc = 0x12B768u;
            return;
        }
    }
    ctx->pc = 0x12B500u;
}
