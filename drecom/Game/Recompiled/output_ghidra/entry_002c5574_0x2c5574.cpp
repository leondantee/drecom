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

// Function: entry_002c5574
// Address: 0x2c5574 - 0x2c5640
void entry_002c5574_0x2c5574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5574_0x2c5574");
#endif

    switch (ctx->pc) {
        case 0x2c5584u: goto label_2c5584;
        case 0x2c5598u: goto label_2c5598;
        case 0x2c55acu: goto label_2c55ac;
        case 0x2c55dcu: goto label_2c55dc;
        case 0x2c5624u: goto label_2c5624;
        default: break;
    }

    ctx->pc = 0x2c5574u;

    // 0x2c5574: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5578: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x2c5578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c557c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2C557Cu;
    SET_GPR_U32(ctx, 31, 0x2C5584u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C557Cu, 0x2C5584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5584u;
label_2c5584:
    // 0x2c5584: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2c5584u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c5588: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c558c: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x2c558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5590: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2C5590u;
    SET_GPR_U32(ctx, 31, 0x2C5598u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C5590u, 0x2C5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5598u;
label_2c5598:
    // 0x2c5598: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2c5598u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c559c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c55a0: 0xc44c0128  lwc1        $f12, 0x128($v0)
    ctx->pc = 0x2c55a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c55a4: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2C55A4u;
    SET_GPR_U32(ctx, 31, 0x2C55ACu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C55A4u, 0x2C55ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55ACu;
label_2c55ac:
    // 0x2c55ac: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x2c55acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2c55b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c55b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c55b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2c55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2c55b8: 0x34630a05  ori         $v1, $v1, 0xA05
    ctx->pc = 0x2c55b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2565);
    // 0x2c55bc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2c55bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c55c0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c55c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c55c4: 0x246518d8  addiu       $a1, $v1, 0x18D8
    ctx->pc = 0x2c55c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6360));
    // 0x2c55c8: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x2c55c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2c55cc: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x2c55ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2c55d0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2c55d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c55d4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2C55D4u;
    SET_GPR_U32(ctx, 31, 0x2C55DCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2C55D4u, 0x2C55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55DCu;
label_2c55dc:
    // 0x2c55dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c55e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2c55e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c55e4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2c55e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c55e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c55ec: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2c55ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2c55f0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2c55f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c55f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c55f8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2c55f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c55fc: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2c55fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5600: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x2c5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2c5604: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c5604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c5608: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2c5608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2c560c: 0x34420a06  ori         $v0, $v0, 0xA06
    ctx->pc = 0x2c560cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2566);
    // 0x2c5610: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2c5610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c5614: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c5614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c5618: 0x244518e8  addiu       $a1, $v0, 0x18E8
    ctx->pc = 0x2c5618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6376));
    // 0x2c561c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2C561Cu;
    SET_GPR_U32(ctx, 31, 0x2C5624u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2C561Cu, 0x2C5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5624u;
label_2c5624:
    // 0x2c5624: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2c5624u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c562c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c562cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5634: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2c5634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c5638: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5640u;
}
