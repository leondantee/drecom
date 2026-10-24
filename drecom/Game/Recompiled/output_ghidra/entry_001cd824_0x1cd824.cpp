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

// Function: entry_001cd824
// Address: 0x1cd824 - 0x1cd8a4
void entry_001cd824_0x1cd824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd824_0x1cd824");
#endif

    switch (ctx->pc) {
        case 0x1cd834u: goto label_1cd834;
        case 0x1cd840u: goto label_1cd840;
        case 0x1cd858u: goto label_1cd858;
        case 0x1cd864u: goto label_1cd864;
        default: break;
    }

    ctx->pc = 0x1cd824u;

    // 0x1cd824: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd828: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd82c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CD82Cu;
    SET_GPR_U32(ctx, 31, 0x1CD834u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CD82Cu, 0x1CD834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD834u;
label_1cd834:
    // 0x1cd834: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd838: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CD838u;
    SET_GPR_U32(ctx, 31, 0x1CD840u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CD838u, 0x1CD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD840u;
label_1cd840:
    // 0x1cd840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd844: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd848: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1cd848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1cd84c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd84cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd850: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CD850u;
    SET_GPR_U32(ctx, 31, 0x1CD858u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CD850u, 0x1CD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD858u;
label_1cd858:
    // 0x1cd858: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cd858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd85c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CD85Cu;
    SET_GPR_U32(ctx, 31, 0x1CD864u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CD85Cu, 0x1CD864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD864u;
label_1cd864:
    // 0x1cd864: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cd864u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd868: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cd868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd86c: 0x90c309df  lbu         $v1, 0x9DF($a2)
    ctx->pc = 0x1cd86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x1cd870: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cd870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cd874: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cd874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cd878: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CD878u;
    {
        const bool branch_taken_0x1cd878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd878) {
            ctx->pc = 0x1CD8A4u;
            return;
        }
    }
    ctx->pc = 0x1CD880u;
    // 0x1cd880: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1cd880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1cd884: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cd884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cd888: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD888u;
    {
        const bool branch_taken_0x1cd888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd888) {
            ctx->pc = 0x1CD8A4u;
            return;
        }
    }
    ctx->pc = 0x1CD890u;
    // 0x1cd890: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd894: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cd894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cd898: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cd898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cd89c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1cd89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cd8a0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1cd8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1cd8a4u;
}
