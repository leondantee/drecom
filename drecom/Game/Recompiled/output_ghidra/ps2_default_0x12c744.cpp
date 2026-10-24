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

// Function: default
// Address: 0x12c744 - 0x12c7e0
void ps2_default_0x12c744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x12c744");
#endif

    switch (ctx->pc) {
        case 0x12c76cu: goto label_12c76c;
        case 0x12c7b4u: goto label_12c7b4;
        case 0x12c7ccu: goto label_12c7cc;
        default: break;
    }

    ctx->pc = 0x12c744u;

    // 0x12c744: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c748: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x12c748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x12c74c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x12c74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12c750: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x12c750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x12c754: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x12C754u;
    {
        const bool branch_taken_0x12c754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c754) {
            ctx->pc = 0x12C7E0u;
            return;
        }
    }
    ctx->pc = 0x12C75Cu;
    // 0x12c75c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x12c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12c760: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c764: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12C764u;
    SET_GPR_U32(ctx, 31, 0x12C76Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12C764u, 0x12C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C76Cu;
label_12c76c:
    // 0x12c76c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c76cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c770: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c774: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x12c774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12c778: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x12c778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x12c77c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x12c77cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12c780: 0x74438  dsll        $t0, $a3, 16
    ctx->pc = 0x12c780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << 16);
    // 0x12c784: 0x3502ffff  ori         $v0, $t0, 0xFFFF
    ctx->pc = 0x12c784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x12c788: 0xc21824  and         $v1, $a2, $v0
    ctx->pc = 0x12c788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x12c78c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x12c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12c790: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12c790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12c794: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c798: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12c79c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12c7a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12c7a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12c7a4: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x12c7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x12c7a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12c7a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12c7ac: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12C7ACu;
    SET_GPR_U32(ctx, 31, 0x12C7B4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12C7ACu, 0x12C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7B4u;
label_12c7b4:
    // 0x12c7b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c7b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c7b8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x12c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x12c7bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c7bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12c7c0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x12c7c4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12C7C4u;
    SET_GPR_U32(ctx, 31, 0x12C7CCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12C7C4u, 0x12C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7CCu;
label_12c7cc:
    // 0x12c7cc: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x12c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x12c7d0: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x12c7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x12c7d4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x12c7d8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12C7D8u;
    SET_GPR_U32(ctx, 31, 0x12C7E0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12C7D8u, 0x12C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7E0u;
}
