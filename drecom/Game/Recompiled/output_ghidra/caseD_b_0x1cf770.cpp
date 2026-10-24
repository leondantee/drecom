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

// Function: caseD_b
// Address: 0x1cf770 - 0x1cf818
void caseD_b_0x1cf770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1cf770");
#endif

    switch (ctx->pc) {
        case 0x1cf798u: goto label_1cf798;
        case 0x1cf7a4u: goto label_1cf7a4;
        case 0x1cf7c0u: goto label_1cf7c0;
        case 0x1cf7d0u: goto label_1cf7d0;
        default: break;
    }

    ctx->pc = 0x1cf770u;

    // 0x1cf770: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf774: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cf774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cf778: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1cf778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x1cf77c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1cf77cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cf780: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1cf780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1cf784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf788: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf78c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf78cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf790: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CF790u;
    SET_GPR_U32(ctx, 31, 0x1CF798u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CF790u, 0x1CF798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF798u;
label_1cf798:
    // 0x1cf798: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf79c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CF79Cu;
    SET_GPR_U32(ctx, 31, 0x1CF7A4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CF79Cu, 0x1CF7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7A4u;
label_1cf7a4:
    // 0x1cf7a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf7a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf7a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf7ac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf7b0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cf7b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cf7b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf7b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf7b8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CF7B8u;
    SET_GPR_U32(ctx, 31, 0x1CF7C0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CF7B8u, 0x1CF7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7C0u;
label_1cf7c0:
    // 0x1cf7c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf7c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf7c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cf7c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf7c8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CF7C8u;
    SET_GPR_U32(ctx, 31, 0x1CF7D0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CF7C8u, 0x1CF7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7D0u;
label_1cf7d0:
    // 0x1cf7d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cf7d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf7d4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf7d8: 0x94c309ee  lhu         $v1, 0x9EE($a2)
    ctx->pc = 0x1cf7d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2542)));
    // 0x1cf7dc: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1cf7dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1cf7e0: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cf7e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cf7e4: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CF7E4u;
    {
        const bool branch_taken_0x1cf7e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7e4) {
            ctx->pc = 0x1CF818u;
            return;
        }
    }
    ctx->pc = 0x1CF7ECu;
    // 0x1cf7ec: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1cf7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1cf7f0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cf7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1cf7f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF7F4u;
    {
        const bool branch_taken_0x1cf7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7f4) {
            ctx->pc = 0x1CF818u;
            return;
        }
    }
    ctx->pc = 0x1CF7FCu;
    // 0x1cf7fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf800: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cf800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf804: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf808: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1cf808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1cf80c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1cf810: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x1cf810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1cf814: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1cf814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1cf818u;
}
