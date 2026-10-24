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
// Address: 0x2705b8 - 0x270620
void caseD_3_0x2705b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2705b8");
#endif

    switch (ctx->pc) {
        case 0x2705c8u: goto label_2705c8;
        case 0x2705d4u: goto label_2705d4;
        case 0x2705e8u: goto label_2705e8;
        case 0x2705f4u: goto label_2705f4;
        case 0x2705fcu: goto label_2705fc;
        default: break;
    }

    ctx->pc = 0x2705b8u;

    // 0x2705b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2705b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2705bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2705bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2705c0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2705C0u;
    SET_GPR_U32(ctx, 31, 0x2705C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2705C0u, 0x2705C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705C8u;
label_2705c8:
    // 0x2705c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2705c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2705cc: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2705CCu;
    SET_GPR_U32(ctx, 31, 0x2705D4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2705CCu, 0x2705D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705D4u;
label_2705d4:
    // 0x2705d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2705d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2705d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2705d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2705dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2705dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2705e0: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x2705E0u;
    SET_GPR_U32(ctx, 31, 0x2705E8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x2705E0u, 0x2705E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705E8u;
label_2705e8:
    // 0x2705e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2705e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2705ec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x2705ECu;
    SET_GPR_U32(ctx, 31, 0x2705F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x2705ECu, 0x2705F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705F4u;
label_2705f4:
    // 0x2705f4: 0xc0bccb0  jal         func_2F32C0
    ctx->pc = 0x2705F4u;
    SET_GPR_U32(ctx, 31, 0x2705FCu);
    ctx->pc = 0x2F32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F32C0u, 0x2705F4u, 0x2705FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705FCu;
label_2705fc:
    // 0x2705fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2705fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270600: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x270600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x270604: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x270604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x270608: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x270608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x27060c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27060Cu;
    {
        const bool branch_taken_0x27060c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27060c) {
            ctx->pc = 0x270620u;
            return;
        }
    }
    ctx->pc = 0x270614u;
    // 0x270614: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270618: 0xc09b8cc  jal         func_26E330
    ctx->pc = 0x270618u;
    SET_GPR_U32(ctx, 31, 0x270620u);
    ctx->pc = 0x26E330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E330u, 0x270618u, 0x270620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270620u;
}
