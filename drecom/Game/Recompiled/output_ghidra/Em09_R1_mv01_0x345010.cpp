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

// Function: Em09_R1_mv01
// Address: 0x345010 - 0x345148
void Em09_R1_mv01_0x345010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv01_0x345010");
#endif

    switch (ctx->pc) {
        case 0x345090u: goto label_345090;
        case 0x3450d8u: goto label_3450d8;
        case 0x3450f4u: goto label_3450f4;
        case 0x34510cu: goto label_34510c;
        case 0x345118u: goto label_345118;
        case 0x345128u: goto label_345128;
        case 0x345134u: goto label_345134;
        default: break;
    }

    ctx->pc = 0x345010u;

    // 0x345010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x345010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x345014: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x345014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x345018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34501c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x34501cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x345020: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x345020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345024: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x345024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x345028: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x345028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34502c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345030: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x345030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x345034: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x345034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x345038: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x345038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34503c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345040: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x345040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x345044: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x345044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x345048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34504c: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34504Cu;
    {
        const bool branch_taken_0x34504c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34504c) {
            ctx->pc = 0x3450ACu;
            goto label_3450ac;
        }
    }
    ctx->pc = 0x345054u;
    // 0x345054: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345054u;
    {
        const bool branch_taken_0x345054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345054) {
            ctx->pc = 0x345064u;
            goto label_345064;
        }
    }
    ctx->pc = 0x34505Cu;
    // 0x34505c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x34505Cu;
    {
        const bool branch_taken_0x34505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34505c) {
            ctx->pc = 0x345134u;
            goto label_345134;
        }
    }
    ctx->pc = 0x345064u;
label_345064:
    // 0x345064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345068: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34506c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34506cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x345070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345074: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345078: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x345078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34507c: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x34507cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x345080: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x345080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345084: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x345084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345088: 0xc0965d0  jal         func_259740
    ctx->pc = 0x345088u;
    SET_GPR_U32(ctx, 31, 0x345090u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x345088u, 0x345090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345090u;
label_345090:
    // 0x345090: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345094: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x345094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x345098: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x345098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34509c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34509cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3450a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3450a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3450a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3450a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3450a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3450a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3450ac:
    // 0x3450ac: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x3450acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x3450b0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x3450b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x3450b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3450b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3450b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3450b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3450bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3450bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3450c0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3450c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3450c4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3450c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3450c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3450c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3450cc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3450ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3450d0: 0xc05c848  jal         func_172120
    ctx->pc = 0x3450D0u;
    SET_GPR_U32(ctx, 31, 0x3450D8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3450D0u, 0x3450D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450D8u;
label_3450d8:
    // 0x3450d8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3450d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3450dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3450dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3450e0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3450e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3450e4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3450e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3450e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3450e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3450ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3450ECu;
    SET_GPR_U32(ctx, 31, 0x3450F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3450ECu, 0x3450F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450F4u;
label_3450f4:
    // 0x3450f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3450f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3450f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3450f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3450fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3450fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345104: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x345104u;
    SET_GPR_U32(ctx, 31, 0x34510Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x345104u, 0x34510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34510Cu;
label_34510c:
    // 0x34510c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34510cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345110: 0xc05cd10  jal         func_173440
    ctx->pc = 0x345110u;
    SET_GPR_U32(ctx, 31, 0x345118u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x345110u, 0x345118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345118u;
label_345118:
    // 0x345118: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34511c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34511cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345120: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x345120u;
    SET_GPR_U32(ctx, 31, 0x345128u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x345120u, 0x345128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345128u;
label_345128:
    // 0x345128: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34512c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34512Cu;
    SET_GPR_U32(ctx, 31, 0x345134u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34512Cu, 0x345134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345134u;
label_345134:
    // 0x345134: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x345134u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34513c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34513cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x345140: 0x3e00008  jr          $ra
    ctx->pc = 0x345140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345148u;
}
