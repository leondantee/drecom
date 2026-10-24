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

// Function: Em18_R1_step_aside
// Address: 0x2df5b0 - 0x2df738
void Em18_R1_step_aside_0x2df5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_step_aside_0x2df5b0");
#endif

    switch (ctx->pc) {
        case 0x2df61cu: goto label_2df61c;
        case 0x2df628u: goto label_2df628;
        case 0x2df654u: goto label_2df654;
        case 0x2df688u: goto label_2df688;
        case 0x2df6a0u: goto label_2df6a0;
        case 0x2df6b4u: goto label_2df6b4;
        case 0x2df6c8u: goto label_2df6c8;
        case 0x2df6d8u: goto label_2df6d8;
        case 0x2df6e4u: goto label_2df6e4;
        default: break;
    }

    ctx->pc = 0x2df5b0u;

    // 0x2df5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df5b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2df5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2df5b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df5bc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2df5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2df5c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df5c4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2df5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2df5c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df5cc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2df5ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df5d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2df5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2df5d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2df5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df5d8: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2DF5D8u;
    {
        const bool branch_taken_0x2df5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2df5d8) {
            ctx->pc = 0x2DF664u;
            goto label_2df664;
        }
    }
    ctx->pc = 0x2DF5E0u;
    // 0x2df5e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF5E0u;
    {
        const bool branch_taken_0x2df5e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df5e0) {
            ctx->pc = 0x2DF5F0u;
            goto label_2df5f0;
        }
    }
    ctx->pc = 0x2DF5E8u;
    // 0x2df5e8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2DF5E8u;
    {
        const bool branch_taken_0x2df5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df5e8) {
            ctx->pc = 0x2DF724u;
            goto label_2df724;
        }
    }
    ctx->pc = 0x2DF5F0u;
label_2df5f0:
    // 0x2df5f0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2df5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2df5f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df5f8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2df5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df5fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df600: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df604: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2df604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2df608: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x2df608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
    // 0x2df60c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2df60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df610: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2df610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df614: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DF614u;
    SET_GPR_U32(ctx, 31, 0x2DF61Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DF614u, 0x2DF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF61Cu;
label_2df61c:
    // 0x2df61c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2df61cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2df620: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DF620u;
    SET_GPR_U32(ctx, 31, 0x2DF628u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DF620u, 0x2DF628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF628u;
label_2df628:
    // 0x2df628: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2df628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2df62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df630: 0x0  nop
    ctx->pc = 0x2df630u;
    // NOP
    // 0x2df634: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2df634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2df638: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2df638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2df63c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2df63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2df640: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2df640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2df644: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2df644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2df648: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2df648u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2df64c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2DF64Cu;
    SET_GPR_U32(ctx, 31, 0x2DF654u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2DF654u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DF654u) { return; }
    ctx->pc = 0x2DF654u;
label_2df654:
    // 0x2df654: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df658: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2df658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df65c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df660: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2df660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2df664:
    // 0x2df664: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x2df664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x2df668: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2df668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2df66c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2df66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2df670: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df674: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df678: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2df678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2df67c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2df67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2df680: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DF680u;
    SET_GPR_U32(ctx, 31, 0x2DF688u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DF680u, 0x2DF688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF688u;
label_2df688:
    // 0x2df688: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df68c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2df68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2df690: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df694: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df698: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF698u;
    SET_GPR_U32(ctx, 31, 0x2DF6A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF698u, 0x2DF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6A0u;
label_2df6a0:
    // 0x2df6a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6a4: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2df6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2df6a8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2df6a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2df6ac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DF6ACu;
    SET_GPR_U32(ctx, 31, 0x2DF6B4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DF6B4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DF6B4u) { return; }
    ctx->pc = 0x2DF6B4u;
label_2df6b4:
    // 0x2df6b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6bc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2df6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2df6c0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2DF6C0u;
    SET_GPR_U32(ctx, 31, 0x2DF6C8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2DF6C0u, 0x2DF6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6C8u;
label_2df6c8:
    // 0x2df6c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2df6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2df6d0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF6D0u;
    SET_GPR_U32(ctx, 31, 0x2DF6D8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF6D0u, 0x2DF6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6D8u;
label_2df6d8:
    // 0x2df6d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6dc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF6DCu;
    SET_GPR_U32(ctx, 31, 0x2DF6E4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF6DCu, 0x2DF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6E4u;
label_2df6e4:
    // 0x2df6e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6e8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2df6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2df6ec: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2DF6ECu;
    {
        const bool branch_taken_0x2df6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df6ec) {
            ctx->pc = 0x2DF724u;
            goto label_2df724;
        }
    }
    ctx->pc = 0x2DF6F4u;
    // 0x2df6f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df6f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df700: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2df700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2df704: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df708: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df70c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df710: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df718: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df71c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df720: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2df724:
    // 0x2df724: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2df724u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df72c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df730: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF738u;
}
