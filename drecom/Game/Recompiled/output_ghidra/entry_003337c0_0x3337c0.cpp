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

// Function: entry_003337c0
// Address: 0x3337c0 - 0x333878
void entry_003337c0_0x3337c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003337c0_0x3337c0");
#endif

    switch (ctx->pc) {
        case 0x333840u: goto label_333840;
        case 0x333868u: goto label_333868;
        default: break;
    }

    ctx->pc = 0x3337c0u;

    // 0x3337c0: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x3337c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x3337c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3337c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3337c8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3337C8u;
    {
        const bool branch_taken_0x3337c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3337c8) {
            ctx->pc = 0x333878u;
            return;
        }
    }
    ctx->pc = 0x3337D0u;
    // 0x3337d0: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x3337d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x3337d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3337d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3337d8: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3337d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3337dc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3337dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3337e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3337e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3337e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3337e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3337e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3337e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3337ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3337ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3337f0: 0x9042663e  lbu         $v0, 0x663E($v0)
    ctx->pc = 0x3337f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26174)));
    // 0x3337f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3337f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3337f8: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x3337f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x3337fc: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x3337fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x333800: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x333800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333804: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x333804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x333808: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x333808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33380c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33380cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x333810: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x333810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333818: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x333818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33381c: 0x9042663f  lbu         $v0, 0x663F($v0)
    ctx->pc = 0x33381cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26175)));
    // 0x333820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x333820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333824: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x333824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x333828: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x333828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x33382c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33382cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333830: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x333830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x333834: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x333834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x333838: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x333838u;
    SET_GPR_U32(ctx, 31, 0x333840u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x333838u, 0x333840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333840u;
label_333840:
    // 0x333840: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x333840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x333844: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x333844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x333848: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x333848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x33384c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x33384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x333850: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x333850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x333854: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x333854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x333858: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x333858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33385c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33385cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333860: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x333860u;
    SET_GPR_U32(ctx, 31, 0x333868u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x333860u, 0x333868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333868u;
label_333868:
    // 0x333868: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x333868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x33386c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x33386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x333870: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x333870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x333874: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x333874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    ctx->pc = 0x333878u;
}
