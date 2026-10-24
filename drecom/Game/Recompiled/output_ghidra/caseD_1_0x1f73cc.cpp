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
// Address: 0x1f73cc - 0x1f74ec
void caseD_1_0x1f73cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1f73cc");
#endif

    switch (ctx->pc) {
        case 0x1f73d8u: goto label_1f73d8;
        case 0x1f7414u: goto label_1f7414;
        case 0x1f7438u: goto label_1f7438;
        case 0x1f7450u: goto label_1f7450;
        case 0x1f7468u: goto label_1f7468;
        case 0x1f7480u: goto label_1f7480;
        case 0x1f74b4u: goto label_1f74b4;
        case 0x1f74ccu: goto label_1f74cc;
        case 0x1f74e4u: goto label_1f74e4;
        default: break;
    }

    ctx->pc = 0x1f73ccu;

    // 0x1f73cc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f73ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f73d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F73D0u;
    SET_GPR_U32(ctx, 31, 0x1F73D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F73D0u, 0x1F73D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73D8u;
label_1f73d8:
    // 0x1f73d8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f73dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f73dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f73e0: 0x1060031e  beqz        $v1, . + 4 + (0x31E << 2)
    ctx->pc = 0x1F73E0u;
    {
        const bool branch_taken_0x1f73e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f73e0) {
            ctx->pc = 0x1F805Cu;
            return;
        }
    }
    ctx->pc = 0x1F73E8u;
    // 0x1f73e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f73ec: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f73ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f73f0: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1f73f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f73f4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f73f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f73f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f73fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f73fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f7400: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x1f7400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x1f7404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f7404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7408: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f7408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f740c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F740Cu;
    SET_GPR_U32(ctx, 31, 0x1F7414u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F740Cu, 0x1F7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7414u;
label_1f7414:
    // 0x1f7414: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x1f7414u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7418: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f7418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f741c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f7420: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f7420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f7424: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1f7424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x1f7428: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1f7428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1f742c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f742cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f7430: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F7430u;
    SET_GPR_U32(ctx, 31, 0x1F7438u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F7430u, 0x1F7438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7438u;
label_1f7438:
    // 0x1f7438: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f743c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1f743cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f7440: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7440u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f7444: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f7444u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f7448: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1F7448u;
    SET_GPR_U32(ctx, 31, 0x1F7450u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F7448u, 0x1F7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7450u;
label_1f7450:
    // 0x1f7450: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7454: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f7454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f7458: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7458u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f745c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f745cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f7460: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1F7460u;
    SET_GPR_U32(ctx, 31, 0x1F7468u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F7460u, 0x1F7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7468u;
label_1f7468:
    // 0x1f7468: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f746c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1f746cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1f7470: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7470u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f7474: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f7474u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f7478: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1F7478u;
    SET_GPR_U32(ctx, 31, 0x1F7480u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F7478u, 0x1F7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7480u;
label_1f7480:
    // 0x1f7480: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7484: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7488: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x1f7488u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x1f748c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1f748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1f7490: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1f7490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1f7494: 0x106002f1  beqz        $v1, . + 4 + (0x2F1 << 2)
    ctx->pc = 0x1F7494u;
    {
        const bool branch_taken_0x1f7494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7494) {
            ctx->pc = 0x1F805Cu;
            return;
        }
    }
    ctx->pc = 0x1F749Cu;
    // 0x1f749c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f749cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f74a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f74a4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f74a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f74a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f74a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f74ac: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1F74ACu;
    SET_GPR_U32(ctx, 31, 0x1F74B4u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F74ACu, 0x1F74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74B4u;
label_1f74b4:
    // 0x1f74b4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f74b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f74b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f74b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f74bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f74bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f74c0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f74c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f74c4: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1F74C4u;
    SET_GPR_U32(ctx, 31, 0x1F74CCu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F74C4u, 0x1F74CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74CCu;
label_1f74cc:
    // 0x1f74cc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f74ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f74d0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f74d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f74d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f74d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f74d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1f74d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f74dc: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1F74DCu;
    SET_GPR_U32(ctx, 31, 0x1F74E4u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1F74DCu, 0x1F74E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74E4u;
label_1f74e4:
    // 0x1f74e4: 0x100002dd  b           . + 4 + (0x2DD << 2)
    ctx->pc = 0x1F74E4u;
    {
        const bool branch_taken_0x1f74e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f74e4) {
            ctx->pc = 0x1F805Cu;
            return;
        }
    }
    ctx->pc = 0x1F74ECu;
}
