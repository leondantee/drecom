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

// Function: entry_0020d564
// Address: 0x20d564 - 0x20d5e8
void entry_0020d564_0x20d564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d564_0x20d564");
#endif

    switch (ctx->pc) {
        case 0x20d574u: goto label_20d574;
        case 0x20d580u: goto label_20d580;
        case 0x20d594u: goto label_20d594;
        case 0x20d5a0u: goto label_20d5a0;
        default: break;
    }

    ctx->pc = 0x20d564u;

    // 0x20d564: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d568: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d568u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d56c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20D56Cu;
    SET_GPR_U32(ctx, 31, 0x20D574u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20D56Cu, 0x20D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D574u;
label_20d574:
    // 0x20d574: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d578: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20D578u;
    SET_GPR_U32(ctx, 31, 0x20D580u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20D578u, 0x20D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D580u;
label_20d580:
    // 0x20d580: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20d580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d584: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d588: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d58c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x20D58Cu;
    SET_GPR_U32(ctx, 31, 0x20D594u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x20D58Cu, 0x20D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D594u;
label_20d594:
    // 0x20d594: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d598: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20D598u;
    SET_GPR_U32(ctx, 31, 0x20D5A0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20D598u, 0x20D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5A0u;
label_20d5a0:
    // 0x20d5a0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20d5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20d5a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20D5A8u;
    {
        const bool branch_taken_0x20d5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d5a8) {
            ctx->pc = 0x20D5E8u;
            return;
        }
    }
    ctx->pc = 0x20D5B0u;
    // 0x20d5b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d5b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d5bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5c0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20d5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d5c4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20d5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d5cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20d5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d5d4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20d5d8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5dc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x20d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x20d5e0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20D5E0u;
    {
        const bool branch_taken_0x20d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d5e0) {
            ctx->pc = 0x20D5E8u;
            return;
        }
    }
    ctx->pc = 0x20D5E8u;
}
