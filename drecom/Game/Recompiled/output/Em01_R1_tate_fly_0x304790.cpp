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

// Function: Em01_R1_tate_fly
// Address: 0x304790 - 0x3048cc
void Em01_R1_tate_fly_0x304790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_tate_fly_0x304790");
#endif

    switch (ctx->pc) {
        case 0x3047e4u: goto label_3047e4;
        case 0x304820u: goto label_304820;
        case 0x304834u: goto label_304834;
        case 0x30484cu: goto label_30484c;
        case 0x304858u: goto label_304858;
        case 0x304868u: goto label_304868;
        case 0x304874u: goto label_304874;
        default: break;
    }

    ctx->pc = 0x304790u;

    // 0x304790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304794: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x304794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x304798: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x304798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30479c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3047a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3047a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3047a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3047a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3047a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3047a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3047ac: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3047ACu;
    {
        const bool branch_taken_0x3047ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3047ac) {
            ctx->pc = 0x3047F4u;
            goto label_3047f4;
        }
    }
    ctx->pc = 0x3047B4u;
    // 0x3047b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3047B4u;
    {
        const bool branch_taken_0x3047b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3047b4) {
            ctx->pc = 0x3047C4u;
            goto label_3047c4;
        }
    }
    ctx->pc = 0x3047BCu;
    // 0x3047bc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3047BCu;
    {
        const bool branch_taken_0x3047bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3047bc) {
            ctx->pc = 0x3048BCu;
            goto label_3048bc;
        }
    }
    ctx->pc = 0x3047C4u;
label_3047c4:
    // 0x3047c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3047c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3047c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3047c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3047cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3047ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3047d0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x3047d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3047d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3047d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3047d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3047d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3047dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3047DCu;
    SET_GPR_U32(ctx, 31, 0x3047E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3047DCu, 0x3047E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047E4u;
label_3047e4:
    // 0x3047e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3047e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3047e8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3047e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3047ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3047ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3047f0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3047f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3047f4:
    // 0x3047f4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3047f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x3047f8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3047f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3047fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3047fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x304800: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304804: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304808: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30480c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x304810: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x304810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304814: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x304814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x304818: 0xc05c848  jal         func_172120
    ctx->pc = 0x304818u;
    SET_GPR_U32(ctx, 31, 0x304820u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x304818u, 0x304820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304820u;
label_304820:
    // 0x304820: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304824: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x304824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304828: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x304828u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30482c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30482Cu;
    SET_GPR_U32(ctx, 31, 0x304834u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30482Cu, 0x304834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304834u;
label_304834:
    // 0x304834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304838: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x304838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30483c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304840: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304840u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304844: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x304844u;
    SET_GPR_U32(ctx, 31, 0x30484Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x304844u, 0x30484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30484Cu;
label_30484c:
    // 0x30484c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304850: 0xc05cd10  jal         func_173440
    ctx->pc = 0x304850u;
    SET_GPR_U32(ctx, 31, 0x304858u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x304850u, 0x304858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304858u;
label_304858:
    // 0x304858: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30485c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30485cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304860: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304860u;
    SET_GPR_U32(ctx, 31, 0x304868u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304860u, 0x304868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304868u;
label_304868:
    // 0x304868: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30486c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30486Cu;
    SET_GPR_U32(ctx, 31, 0x304874u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30486Cu, 0x304874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304874u;
label_304874:
    // 0x304874: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304878: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x304878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30487c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30487Cu;
    {
        const bool branch_taken_0x30487c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30487c) {
            ctx->pc = 0x3048BCu;
            goto label_3048bc;
        }
    }
    ctx->pc = 0x304884u;
    // 0x304884: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304888: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x304888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x30488c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304890: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304894: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x304894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x304898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30489c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30489cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3048a0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3048a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3048a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3048a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3048a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3048a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3048ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3048acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3048b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3048b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3048b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3048b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3048b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3048b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3048bc:
    // 0x3048bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3048bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3048c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3048c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3048c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3048C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3048C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3048CCu;
}
