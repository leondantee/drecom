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

// Function: entry_00297690
// Address: 0x297690 - 0x2977c0
void entry_00297690_0x297690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297690_0x297690");
#endif

    switch (ctx->pc) {
        case 0x2976acu: goto label_2976ac;
        case 0x297788u: goto label_297788;
        case 0x2977a0u: goto label_2977a0;
        case 0x2977b8u: goto label_2977b8;
        default: break;
    }

    ctx->pc = 0x297690u;

    // 0x297690: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x297690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x297694: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x297694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x297698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29769c: 0x0  nop
    ctx->pc = 0x29769cu;
    // NOP
    // 0x2976a0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2976a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2976a4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x2976A4u;
    SET_GPR_U32(ctx, 31, 0x2976ACu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2976A4u, 0x2976ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976ACu;
label_2976ac:
    // 0x2976ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2976acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2976b0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x2976b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x2976b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2976b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2976b8: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x2976b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2976bc: 0x8e0369d8  lw          $v1, 0x69D8($s0)
    ctx->pc = 0x2976bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27096)));
    // 0x2976c0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2976c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2976c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2976c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2976c8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2976c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2976cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2976ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2976d0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2976d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2976d4: 0x26620024  addiu       $v0, $s3, 0x24
    ctx->pc = 0x2976d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x2976d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2976d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2976dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2976dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2976e0: 0x26620028  addiu       $v0, $s3, 0x28
    ctx->pc = 0x2976e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x2976e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2976e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2976e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2976e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2976ec: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2976ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2976f0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2976f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2976f4: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x2976f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x2976f8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2976f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2976fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2976fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x297700: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x297700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x297704: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x297704u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x297708: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x297708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x29770c: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x29770cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x297710: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x297710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x297714: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x297714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x297718: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x297718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29771c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29771cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x297720: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x297720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x297724: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x297724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x297728: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x297728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x29772c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x297730: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x297730u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x297734: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x297734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x297738: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x297738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29773c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x29773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x297740: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x297740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x297744: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x297744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x297748: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x297748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29774c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x29774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x297750: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297754: 0xffc20008  sd          $v0, 0x8($fp)
    ctx->pc = 0x297754u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x297758: 0x860369ac  lh          $v1, 0x69AC($s0)
    ctx->pc = 0x297758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27052)));
    // 0x29775c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x29775cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x297760: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x297760u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x297764: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x297764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x297768: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x297768u;
    {
        const bool branch_taken_0x297768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297768) {
            ctx->pc = 0x2977C0u;
            return;
        }
    }
    ctx->pc = 0x297770u;
    // 0x297770: 0xae760008  sw          $s6, 0x8($s3)
    ctx->pc = 0x297770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 22));
    // 0x297774: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x297774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297778: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x297778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29777c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x29777cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x297780: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x297780u;
    SET_GPR_U32(ctx, 31, 0x297788u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x297780u, 0x297788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297788u;
label_297788:
    // 0x297788: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x297788u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29778c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x29778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297790: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x297790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x297794: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x297794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x297798: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x297798u;
    SET_GPR_U32(ctx, 31, 0x2977A0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x297798u, 0x2977A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977A0u;
label_2977a0:
    // 0x2977a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2977a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2977a4: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2977a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2977a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2977a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2977ac: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x2977acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x2977b0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2977B0u;
    SET_GPR_U32(ctx, 31, 0x2977B8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2977B0u, 0x2977B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977B8u;
label_2977b8:
    // 0x2977b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2977b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2977bc: 0x0  nop
    ctx->pc = 0x2977bcu;
    // NOP
    ctx->pc = 0x2977c0u;
}
