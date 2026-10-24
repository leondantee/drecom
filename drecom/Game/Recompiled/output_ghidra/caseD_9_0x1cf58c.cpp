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

// Function: caseD_9
// Address: 0x1cf58c - 0x1cf628
void caseD_9_0x1cf58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1cf58c");
#endif

    switch (ctx->pc) {
        case 0x1cf5b4u: goto label_1cf5b4;
        case 0x1cf5c8u: goto label_1cf5c8;
        case 0x1cf5e4u: goto label_1cf5e4;
        case 0x1cf5f4u: goto label_1cf5f4;
        default: break;
    }

    ctx->pc = 0x1cf58cu;

    // 0x1cf58c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf590: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1cf590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1cf594: 0x3c048040  lui         $a0, 0x8040
    ctx->pc = 0x1cf594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32832 << 16));
    // 0x1cf598: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1cf598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1cf59c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1cf59cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1cf5a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf5a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf5a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf5a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf5a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf5ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CF5ACu;
    SET_GPR_U32(ctx, 31, 0x1CF5B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CF5ACu, 0x1CF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5B4u;
label_1cf5b4:
    // 0x1cf5b4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cf5b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf5b8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf5bc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1cf5bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cf5c0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CF5C0u;
    SET_GPR_U32(ctx, 31, 0x1CF5C8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CF5C0u, 0x1CF5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5C8u;
label_1cf5c8:
    // 0x1cf5c8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1cf5c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf5cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf5d0: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cf5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf5d4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1cf5d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cf5d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf5d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf5dc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CF5DCu;
    SET_GPR_U32(ctx, 31, 0x1CF5E4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CF5DCu, 0x1CF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5E4u;
label_1cf5e4:
    // 0x1cf5e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf5e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf5e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cf5e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf5ec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CF5ECu;
    SET_GPR_U32(ctx, 31, 0x1CF5F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CF5ECu, 0x1CF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5F4u;
label_1cf5f4:
    // 0x1cf5f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf5f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf5f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf5fc: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1cf5fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cf600: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF600u;
    {
        const bool branch_taken_0x1cf600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf600) {
            ctx->pc = 0x1CF628u;
            return;
        }
    }
    ctx->pc = 0x1CF608u;
    // 0x1cf608: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf60c: 0x8ca609f8  lw          $a2, 0x9F8($a1)
    ctx->pc = 0x1cf60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2552)));
    // 0x1cf610: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf614: 0x8c8309fc  lw          $v1, 0x9FC($a0)
    ctx->pc = 0x1cf614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2556)));
    // 0x1cf618: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x1cf618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x1cf61c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x1cf61cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cf620: 0x1020025d  beqz        $at, . + 4 + (0x25D << 2)
    ctx->pc = 0x1CF620u;
    {
        const bool branch_taken_0x1cf620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf620) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF628u;
}
