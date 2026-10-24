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

// Function: Em18_R1_walk
// Address: 0x2db620 - 0x2db730
void Em18_R1_walk_0x2db620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_walk_0x2db620");
#endif

    switch (ctx->pc) {
        case 0x2db684u: goto label_2db684;
        case 0x2db6c0u: goto label_2db6c0;
        case 0x2db6dcu: goto label_2db6dc;
        case 0x2db6f4u: goto label_2db6f4;
        case 0x2db700u: goto label_2db700;
        case 0x2db710u: goto label_2db710;
        case 0x2db71cu: goto label_2db71c;
        default: break;
    }

    ctx->pc = 0x2db620u;

    // 0x2db620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2db620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2db624: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2db624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2db628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db62c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2db62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2db630: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2db630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db634: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2db634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2db638: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2db638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db63c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2db63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2db640: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2db640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2db644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db648: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DB648u;
    {
        const bool branch_taken_0x2db648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2db648) {
            ctx->pc = 0x2DB694u;
            goto label_2db694;
        }
    }
    ctx->pc = 0x2DB650u;
    // 0x2db650: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB650u;
    {
        const bool branch_taken_0x2db650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db650) {
            ctx->pc = 0x2DB660u;
            goto label_2db660;
        }
    }
    ctx->pc = 0x2DB658u;
    // 0x2db658: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2DB658u;
    {
        const bool branch_taken_0x2db658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db658) {
            ctx->pc = 0x2DB71Cu;
            goto label_2db71c;
        }
    }
    ctx->pc = 0x2DB660u;
label_2db660:
    // 0x2db660: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2db660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db664: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db668: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db66c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2db66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2db670: 0x24060a01  addiu       $a2, $zero, 0xA01
    ctx->pc = 0x2db670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x2db674: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2db674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db678: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2db678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2db67c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DB67Cu;
    SET_GPR_U32(ctx, 31, 0x2DB684u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DB67Cu, 0x2DB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB684u;
label_2db684:
    // 0x2db684: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2db684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db688: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2db688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2db68c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2db68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2db690: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2db690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2db694:
    // 0x2db694: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2db694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2db698: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2db698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2db69c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2db69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2db6a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2db6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6ac: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2db6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2db6b0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2db6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db6b4: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2db6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2db6b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2DB6B8u;
    SET_GPR_U32(ctx, 31, 0x2DB6C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2DB6B8u, 0x2DB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6C0u;
label_2db6c0:
    // 0x2db6c0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2db6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2db6c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6c8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2db6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db6cc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2db6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db6d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2db6d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2db6d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2DB6D4u;
    SET_GPR_U32(ctx, 31, 0x2DB6DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2DB6D4u, 0x2DB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6DCu;
label_2db6dc:
    // 0x2db6dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2db6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2db6e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2db6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2db6ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DB6ECu;
    SET_GPR_U32(ctx, 31, 0x2DB6F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DB6ECu, 0x2DB6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6F4u;
label_2db6f4:
    // 0x2db6f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db6f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DB6F8u;
    SET_GPR_U32(ctx, 31, 0x2DB700u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DB6F8u, 0x2DB700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB700u;
label_2db700:
    // 0x2db700: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db704: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2db704u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2db708: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DB708u;
    SET_GPR_U32(ctx, 31, 0x2DB710u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DB708u, 0x2DB710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB710u;
label_2db710:
    // 0x2db710: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db714: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DB714u;
    SET_GPR_U32(ctx, 31, 0x2DB71Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DB714u, 0x2DB71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB71Cu;
label_2db71c:
    // 0x2db71c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2db71cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db724: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2db724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2db728: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB730u;
}
