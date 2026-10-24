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

// Function: entry_001ca3e4
// Address: 0x1ca3e4 - 0x1ca47c
void entry_001ca3e4_0x1ca3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca3e4_0x1ca3e4");
#endif

    switch (ctx->pc) {
        case 0x1ca3f4u: goto label_1ca3f4;
        case 0x1ca400u: goto label_1ca400;
        case 0x1ca414u: goto label_1ca414;
        case 0x1ca420u: goto label_1ca420;
        default: break;
    }

    ctx->pc = 0x1ca3e4u;

    // 0x1ca3e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ca3e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca3ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CA3ECu;
    SET_GPR_U32(ctx, 31, 0x1CA3F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CA3ECu, 0x1CA3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3F4u;
label_1ca3f4:
    // 0x1ca3f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CA3F8u;
    SET_GPR_U32(ctx, 31, 0x1CA400u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CA3F8u, 0x1CA400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA400u;
label_1ca400:
    // 0x1ca400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca404: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca408: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ca408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca40c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CA40Cu;
    SET_GPR_U32(ctx, 31, 0x1CA414u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CA40Cu, 0x1CA414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA414u;
label_1ca414:
    // 0x1ca414: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ca414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca418: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CA418u;
    SET_GPR_U32(ctx, 31, 0x1CA420u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CA418u, 0x1CA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA420u;
label_1ca420:
    // 0x1ca420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca424: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ca424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ca428: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1ca428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1ca42c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ca42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ca430: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA430u;
    {
        const bool branch_taken_0x1ca430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca430) {
            ctx->pc = 0x1CA47Cu;
            return;
        }
    }
    ctx->pc = 0x1CA438u;
    // 0x1ca438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca43c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca440: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ca440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca444: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1ca444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ca448: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca44c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ca44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca450: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca454: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ca454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca458: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca45c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ca45cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca460: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca464: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ca464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ca468: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ca468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ca46c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca470: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ca470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca474: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x1CA474u;
    {
        const bool branch_taken_0x1ca474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca474) {
            ctx->pc = 0x1CA8E8u;
            return;
        }
    }
    ctx->pc = 0x1CA47Cu;
}
