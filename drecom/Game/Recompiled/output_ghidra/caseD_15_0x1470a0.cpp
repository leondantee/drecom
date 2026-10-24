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

// Function: caseD_15
// Address: 0x1470a0 - 0x14712c
void caseD_15_0x1470a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x1470a0");
#endif

    switch (ctx->pc) {
        case 0x1470b4u: goto label_1470b4;
        case 0x1470c4u: goto label_1470c4;
        case 0x1470dcu: goto label_1470dc;
        case 0x1470ecu: goto label_1470ec;
        case 0x147110u: goto label_147110;
        default: break;
    }

    ctx->pc = 0x1470a0u;

    // 0x1470a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1470a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1470a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1470a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1470a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1470a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1470ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1470ACu;
    SET_GPR_U32(ctx, 31, 0x1470B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1470ACu, 0x1470B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470B4u;
label_1470b4:
    // 0x1470b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1470b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1470b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1470b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1470bc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1470BCu;
    SET_GPR_U32(ctx, 31, 0x1470C4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1470BCu, 0x1470C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470C4u;
label_1470c4:
    // 0x1470c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1470c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1470c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1470c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1470cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1470ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1470d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1470d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1470d4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1470D4u;
    SET_GPR_U32(ctx, 31, 0x1470DCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1470D4u, 0x1470DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470DCu;
label_1470dc:
    // 0x1470dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1470dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1470e0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1470e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1470e4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1470E4u;
    SET_GPR_U32(ctx, 31, 0x1470ECu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1470E4u, 0x1470ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470ECu;
label_1470ec:
    // 0x1470ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1470ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1470f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1470f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1470f4: 0x907009db  lbu         $s0, 0x9DB($v1)
    ctx->pc = 0x1470f4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1470f8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1470f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1470fc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1470fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x147100: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x147100u;
    {
        const bool branch_taken_0x147100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147100) {
            ctx->pc = 0x14712Cu;
            return;
        }
    }
    ctx->pc = 0x147108u;
    // 0x147108: 0xc0585dc  jal         func_161770
    ctx->pc = 0x147108u;
    SET_GPR_U32(ctx, 31, 0x147110u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x147108u, 0x147110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147110u;
label_147110:
    // 0x147110: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147110u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147114: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x147114u;
    {
        const bool branch_taken_0x147114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x147114) {
            ctx->pc = 0x14712Cu;
            return;
        }
    }
    ctx->pc = 0x14711Cu;
    // 0x14711c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147120: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x147124: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x147124u;
    {
        const bool branch_taken_0x147124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147124) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x14712Cu;
}
