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

// Function: Em24_R1_wait
// Address: 0x359620 - 0x3596cc
void Em24_R1_wait_0x359620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em24_R1_wait_0x359620");
#endif

    switch (ctx->pc) {
        case 0x359674u: goto label_359674;
        case 0x359694u: goto label_359694;
        case 0x3596a0u: goto label_3596a0;
        case 0x3596b0u: goto label_3596b0;
        case 0x3596bcu: goto label_3596bc;
        default: break;
    }

    ctx->pc = 0x359620u;

    // 0x359620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359624: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x359624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x359628: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x359628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35962c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359630: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x359630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x359634: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x359634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x359638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x359638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35963c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35963Cu;
    {
        const bool branch_taken_0x35963c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35963c) {
            ctx->pc = 0x359684u;
            goto label_359684;
        }
    }
    ctx->pc = 0x359644u;
    // 0x359644: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359644u;
    {
        const bool branch_taken_0x359644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x359644) {
            ctx->pc = 0x359654u;
            goto label_359654;
        }
    }
    ctx->pc = 0x35964Cu;
    // 0x35964c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x35964Cu;
    {
        const bool branch_taken_0x35964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35964c) {
            ctx->pc = 0x3596BCu;
            goto label_3596bc;
        }
    }
    ctx->pc = 0x359654u;
label_359654:
    // 0x359654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359658: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35965c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35965cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x359660: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x359660u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359664: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x359664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359668: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x359668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35966c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35966Cu;
    SET_GPR_U32(ctx, 31, 0x359674u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35966Cu, 0x359674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359674u;
label_359674:
    // 0x359674: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x359674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359678: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x359678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35967c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x359680: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x359680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_359684:
    // 0x359684: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359688: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359688u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35968c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x35968Cu;
    SET_GPR_U32(ctx, 31, 0x359694u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x35968Cu, 0x359694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359694u;
label_359694:
    // 0x359694: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359698: 0xc05cd10  jal         func_173440
    ctx->pc = 0x359698u;
    SET_GPR_U32(ctx, 31, 0x3596A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x359698u, 0x3596A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596A0u;
label_3596a0:
    // 0x3596a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3596a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3596a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3596a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3596a8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3596A8u;
    SET_GPR_U32(ctx, 31, 0x3596B0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3596A8u, 0x3596B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596B0u;
label_3596b0:
    // 0x3596b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3596b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3596b4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3596B4u;
    SET_GPR_U32(ctx, 31, 0x3596BCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3596B4u, 0x3596BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596BCu;
label_3596bc:
    // 0x3596bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3596bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3596c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3596c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3596c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3596C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3596C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3596CCu;
}
