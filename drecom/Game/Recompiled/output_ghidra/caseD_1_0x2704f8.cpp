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

// Function: caseD_1
// Address: 0x2704f8 - 0x270560
void caseD_1_0x2704f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2704f8");
#endif

    switch (ctx->pc) {
        case 0x270508u: goto label_270508;
        case 0x270514u: goto label_270514;
        case 0x270528u: goto label_270528;
        case 0x270534u: goto label_270534;
        case 0x27053cu: goto label_27053c;
        default: break;
    }

    ctx->pc = 0x2704f8u;

    // 0x2704f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2704f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2704fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2704fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x270500: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x270500u;
    SET_GPR_U32(ctx, 31, 0x270508u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270500u, 0x270508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270508u;
label_270508:
    // 0x270508: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27050c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x27050Cu;
    SET_GPR_U32(ctx, 31, 0x270514u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x27050Cu, 0x270514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270514u;
label_270514:
    // 0x270514: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270518: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27051c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27051cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270520: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x270520u;
    SET_GPR_U32(ctx, 31, 0x270528u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x270520u, 0x270528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270528u;
label_270528:
    // 0x270528: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270528u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27052c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x27052Cu;
    SET_GPR_U32(ctx, 31, 0x270534u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x27052Cu, 0x270534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270534u;
label_270534:
    // 0x270534: 0xc0bcd40  jal         func_2F3500
    ctx->pc = 0x270534u;
    SET_GPR_U32(ctx, 31, 0x27053Cu);
    ctx->pc = 0x2F3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3500u, 0x270534u, 0x27053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27053Cu;
label_27053c:
    // 0x27053c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x27053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270540: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x270540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x270544: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x270544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x270548: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x270548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x27054c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27054Cu;
    {
        const bool branch_taken_0x27054c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27054c) {
            ctx->pc = 0x270560u;
            return;
        }
    }
    ctx->pc = 0x270554u;
    // 0x270554: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270558: 0xc09b88c  jal         func_26E230
    ctx->pc = 0x270558u;
    SET_GPR_U32(ctx, 31, 0x270560u);
    ctx->pc = 0x26E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E230u, 0x270558u, 0x270560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270560u;
}
