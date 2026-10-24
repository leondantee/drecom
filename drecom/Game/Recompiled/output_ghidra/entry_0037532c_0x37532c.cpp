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

// Function: entry_0037532c
// Address: 0x37532c - 0x375384
void entry_0037532c_0x37532c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037532c_0x37532c");
#endif

    switch (ctx->pc) {
        case 0x37533cu: goto label_37533c;
        case 0x375348u: goto label_375348;
        case 0x375358u: goto label_375358;
        case 0x375364u: goto label_375364;
        default: break;
    }

    ctx->pc = 0x37532cu;

    // 0x37532c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37532cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375330: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375334: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x375334u;
    SET_GPR_U32(ctx, 31, 0x37533Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x375334u, 0x37533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37533Cu;
label_37533c:
    // 0x37533c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37533cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375340: 0xc05cd10  jal         func_173440
    ctx->pc = 0x375340u;
    SET_GPR_U32(ctx, 31, 0x375348u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x375340u, 0x375348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375348u;
label_375348:
    // 0x375348: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37534c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37534cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375350: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x375350u;
    SET_GPR_U32(ctx, 31, 0x375358u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x375350u, 0x375358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375358u;
label_375358:
    // 0x375358: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37535c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37535Cu;
    SET_GPR_U32(ctx, 31, 0x375364u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37535Cu, 0x375364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375364u;
label_375364:
    // 0x375364: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375368: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x375368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x37536c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37536Cu;
    {
        const bool branch_taken_0x37536c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37536c) {
            ctx->pc = 0x375384u;
            return;
        }
    }
    ctx->pc = 0x375374u;
    // 0x375374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375378: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x375378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x37537c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x375380: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x375380u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x375384u;
}
