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
// Address: 0x270678 - 0x2706e0
void caseD_5_0x270678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x270678");
#endif

    switch (ctx->pc) {
        case 0x270688u: goto label_270688;
        case 0x270694u: goto label_270694;
        case 0x2706a8u: goto label_2706a8;
        case 0x2706b4u: goto label_2706b4;
        case 0x2706bcu: goto label_2706bc;
        default: break;
    }

    ctx->pc = 0x270678u;

    // 0x270678: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27067c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x27067cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x270680: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x270680u;
    SET_GPR_U32(ctx, 31, 0x270688u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270680u, 0x270688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270688u;
label_270688:
    // 0x270688: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27068c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x27068Cu;
    SET_GPR_U32(ctx, 31, 0x270694u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x27068Cu, 0x270694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270694u;
label_270694:
    // 0x270694: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270698: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27069c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27069cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2706a0: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x2706A0u;
    SET_GPR_U32(ctx, 31, 0x2706A8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x2706A0u, 0x2706A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706A8u;
label_2706a8:
    // 0x2706a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2706a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2706ac: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x2706ACu;
    SET_GPR_U32(ctx, 31, 0x2706B4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x2706ACu, 0x2706B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706B4u;
label_2706b4:
    // 0x2706b4: 0xc0bcdd0  jal         func_2F3740
    ctx->pc = 0x2706B4u;
    SET_GPR_U32(ctx, 31, 0x2706BCu);
    ctx->pc = 0x2F3740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3740u, 0x2706B4u, 0x2706BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706BCu;
label_2706bc:
    // 0x2706bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2706bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2706c0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2706c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2706c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2706c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2706c8: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x2706c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x2706cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2706CCu;
    {
        const bool branch_taken_0x2706cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2706cc) {
            ctx->pc = 0x2706E0u;
            return;
        }
    }
    ctx->pc = 0x2706D4u;
    // 0x2706d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2706d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2706d8: 0xc09b90c  jal         func_26E430
    ctx->pc = 0x2706D8u;
    SET_GPR_U32(ctx, 31, 0x2706E0u);
    ctx->pc = 0x26E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E430u, 0x2706D8u, 0x2706E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706E0u;
}
