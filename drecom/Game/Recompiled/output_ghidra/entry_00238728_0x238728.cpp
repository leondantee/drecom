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

// Function: entry_00238728
// Address: 0x238728 - 0x2387f4
void entry_00238728_0x238728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238728_0x238728");
#endif

    switch (ctx->pc) {
        case 0x238738u: goto label_238738;
        case 0x23874cu: goto label_23874c;
        case 0x238760u: goto label_238760;
        case 0x238790u: goto label_238790;
        case 0x2387d8u: goto label_2387d8;
        default: break;
    }

    ctx->pc = 0x238728u;

    // 0x238728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23872c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x23872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238730: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x238730u;
    SET_GPR_U32(ctx, 31, 0x238738u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x238730u, 0x238738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238738u;
label_238738:
    // 0x238738: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x238738u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23873c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238740: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x238740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238744: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x238744u;
    SET_GPR_U32(ctx, 31, 0x23874Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x238744u, 0x23874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23874Cu;
label_23874c:
    // 0x23874c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x23874cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x238750: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238754: 0xc44c0128  lwc1        $f12, 0x128($v0)
    ctx->pc = 0x238754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238758: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x238758u;
    SET_GPR_U32(ctx, 31, 0x238760u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x238758u, 0x238760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238760u;
label_238760:
    // 0x238760: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x238760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x238764: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x238764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x238768: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x238768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x23876c: 0x34630a05  ori         $v1, $v1, 0xA05
    ctx->pc = 0x23876cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2565);
    // 0x238770: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x238770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x238774: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x238774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x238778: 0x24651210  addiu       $a1, $v1, 0x1210
    ctx->pc = 0x238778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4624));
    // 0x23877c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x23877cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x238780: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x238780u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x238784: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x238784u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x238788: 0xc059b14  jal         func_166C50
    ctx->pc = 0x238788u;
    SET_GPR_U32(ctx, 31, 0x238790u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x238788u, 0x238790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238790u;
label_238790:
    // 0x238790: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238794: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x238794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238798: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x238798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23879c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2387a0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2387a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2387a4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2387a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2387a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2387a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2387ac: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2387acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2387b0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2387b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2387b4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x2387b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2387b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2387b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2387bc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2387bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2387c0: 0x34420a06  ori         $v0, $v0, 0xA06
    ctx->pc = 0x2387c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2566);
    // 0x2387c4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2387c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2387c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2387c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2387cc: 0x24451220  addiu       $a1, $v0, 0x1220
    ctx->pc = 0x2387ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4640));
    // 0x2387d0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2387D0u;
    SET_GPR_U32(ctx, 31, 0x2387D8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2387D0u, 0x2387D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387D8u;
label_2387d8:
    // 0x2387d8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2387d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2387dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2387dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2387e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2387e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2387e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2387e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2387e8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2387e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2387ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2387ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2387ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2387F4u;
}
