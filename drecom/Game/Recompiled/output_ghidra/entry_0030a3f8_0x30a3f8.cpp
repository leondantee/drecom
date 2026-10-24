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

// Function: entry_0030a3f8
// Address: 0x30a3f8 - 0x30a49c
void entry_0030a3f8_0x30a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a3f8_0x30a3f8");
#endif

    switch (ctx->pc) {
        case 0x30a470u: goto label_30a470;
        case 0x30a47cu: goto label_30a47c;
        default: break;
    }

    ctx->pc = 0x30a3f8u;

    // 0x30a3f8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a3fc: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30a3fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30a400: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30a400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a404: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x30a404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x30a408: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x30A408u;
    {
        const bool branch_taken_0x30a408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a408) {
            ctx->pc = 0x30A5D8u;
            return;
        }
    }
    ctx->pc = 0x30A410u;
    // 0x30a410: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a414: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x30a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x30a418: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x30a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30a41c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30a41cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399770u));
    // 0x30a420: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30a420u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30a424: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a428: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x30a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
    // 0x30a42c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x30a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a430: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30a430u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399780u));
    // 0x30a434: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30a434u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30a438: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a43c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30a440: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x30a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x30a444: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30a444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a448: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30a448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30a44c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30a44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30a450: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30a450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30a454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30a458: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30a458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a45c: 0x24045c00  addiu       $a0, $zero, 0x5C00
    ctx->pc = 0x30a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23552));
    // 0x30a460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30a460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a464: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30a464u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a468: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30A468u;
    SET_GPR_U32(ctx, 31, 0x30A470u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30A468u, 0x30A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A470u;
label_30a470:
    // 0x30a470: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30a470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a474: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30A474u;
    SET_GPR_U32(ctx, 31, 0x30A47Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30A474u, 0x30A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A47Cu;
label_30a47c:
    // 0x30a47c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x30a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a480: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30a480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30a484: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x30a484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x30a488: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30a488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30a48c: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30a490: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x30a490u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a494: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x30A494u;
    {
        const bool branch_taken_0x30a494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a494) {
            ctx->pc = 0x30A5B8u;
            return;
        }
    }
    ctx->pc = 0x30A49Cu;
}
