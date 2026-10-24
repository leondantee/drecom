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

// Function: Em07_R1_atk_tail_super
// Address: 0x2d76b0 - 0x2d7ae8
void Em07_R1_atk_tail_super_0x2d76b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_atk_tail_super_0x2d76b0");
#endif

    switch (ctx->pc) {
        case 0x2d7708u: goto label_2d7708;
        case 0x2d7738u: goto label_2d7738;
        case 0x2d77c0u: goto label_2d77c0;
        case 0x2d7a00u: goto label_2d7a00;
        default: break;
    }

    ctx->pc = 0x2d76b0u;

    // 0x2d76b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d76b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d76b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d76b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2d76b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d76b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d76bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2d76bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2d76c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d76c4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d76c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d76c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d76c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d76cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d76d0: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D76D0u;
    {
        const bool branch_taken_0x2d76d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d76d0) {
            ctx->pc = 0x2D7778u;
            goto label_2d7778;
        }
    }
    ctx->pc = 0x2D76D8u;
    // 0x2d76d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D76D8u;
    {
        const bool branch_taken_0x2d76d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d76d8) {
            ctx->pc = 0x2D76E8u;
            goto label_2d76e8;
        }
    }
    ctx->pc = 0x2D76E0u;
    // 0x2d76e0: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x2D76E0u;
    {
        const bool branch_taken_0x2d76e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d76e0) {
            ctx->pc = 0x2D7AD4u;
            goto label_2d7ad4;
        }
    }
    ctx->pc = 0x2D76E8u;
label_2d76e8:
    // 0x2d76e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d76ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d76ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d76f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d76f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d76f4: 0x24063c0c  addiu       $a2, $zero, 0x3C0C
    ctx->pc = 0x2d76f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15372));
    // 0x2d76f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d76f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d76fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d76fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7700: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D7700u;
    SET_GPR_U32(ctx, 31, 0x2D7708u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D7700u, 0x2D7708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7708u;
label_2d7708:
    // 0x2d7708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d770c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7710: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7714: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7718: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d771c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7720: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d7720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d7724: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d7724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d7728: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d7728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d772c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d7730: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D7730u;
    SET_GPR_U32(ctx, 31, 0x2D7738u);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D7730u, 0x2D7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7738u;
label_2d7738:
    // 0x2d7738: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d773c: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d7740: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7748: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d7748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d774c: 0x3c02438d  lui         $v0, 0x438D
    ctx->pc = 0x2d774cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17293 << 16));
    // 0x2d7750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d7750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7754: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7758: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d7758u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d775c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d775cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d7760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7764: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2d7764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d7768: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d776c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d776cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d7770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d7774: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d7774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d7778:
    // 0x2d7778: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d777c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d777cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d7780: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D7780u;
    {
        const bool branch_taken_0x2d7780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7780) {
            ctx->pc = 0x2D77D4u;
            goto label_2d77d4;
        }
    }
    ctx->pc = 0x2D7788u;
    // 0x2d7788: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d7788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d778c: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x2d778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x2d7790: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d7790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d7794: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d7794u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398980u));
    // 0x2d7798: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d7798u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d779c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d77a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77a8: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x2d77a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d77ac: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d77acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d77b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d77b4: 0x24478cd0  addiu       $a3, $v0, -0x7330
    ctx->pc = 0x2d77b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
    // 0x2d77b8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D77B8u;
    SET_GPR_U32(ctx, 31, 0x2D77C0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D77B8u, 0x2D77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77C0u;
label_2d77c0:
    // 0x2d77c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D77C0u;
    {
        const bool branch_taken_0x2d77c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d77c0) {
            ctx->pc = 0x2D77D4u;
            goto label_2d77d4;
        }
    }
    ctx->pc = 0x2D77C8u;
    // 0x2d77c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d77c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d77cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77d0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2d77d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2d77d4:
    // 0x2d77d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77d8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d77d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d77dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d77dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d77e0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d77e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d77e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D77E4u;
    {
        const bool branch_taken_0x2d77e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d77e4) {
            ctx->pc = 0x2D7814u;
            goto label_2d7814;
        }
    }
    ctx->pc = 0x2D77ECu;
    // 0x2d77ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77f0: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d77f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d77f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d77f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d77fc: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7800: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7804: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d7804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d7808: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d780c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D780Cu;
    {
        const bool branch_taken_0x2d780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d780c) {
            ctx->pc = 0x2D7834u;
            goto label_2d7834;
        }
    }
    ctx->pc = 0x2D7814u;
label_2d7814:
    // 0x2d7814: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7818: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d7818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d781c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7820: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7824: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7828: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d782c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d782cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d7830: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2d7834:
    // 0x2d7834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7838: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d783c: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x2d783cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x2d7840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7844: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7848: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d784c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d784cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d7850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7854: 0x0  nop
    ctx->pc = 0x2d7854u;
    // NOP
    // 0x2d7858: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d7858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d785c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d785cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7860: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d7860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d7864: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d7864u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7868: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d786c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d7870: 0x24500c80  addiu       $s0, $v0, 0xC80
    ctx->pc = 0x2d7870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2d7874: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7878: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d787c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7880: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d7880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d7884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7888: 0x0  nop
    ctx->pc = 0x2d7888u;
    // NOP
    // 0x2d788c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d7890: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d7890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7894: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d7894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d7898: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d7898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d789c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d78a0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d78a4: 0x24500fa0  addiu       $s0, $v0, 0xFA0
    ctx->pc = 0x2d78a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
    // 0x2d78a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d78ac: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d78acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d78b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d78b4: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d78b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d78b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d78b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d78bc: 0x0  nop
    ctx->pc = 0x2d78bcu;
    // NOP
    // 0x2d78c0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d78c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d78c4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d78c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d78c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d78c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d78cc: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d78ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d78d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d78d4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d78d8: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x2d78d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2d78dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d78e0: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d78e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d78e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d78e8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d78e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d78ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d78ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d78f0: 0x0  nop
    ctx->pc = 0x2d78f0u;
    // NOP
    // 0x2d78f4: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d78f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d78f8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d78f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d78fc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d78fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d7900: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d7900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7908: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d7908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d790c: 0x245015e0  addiu       $s0, $v0, 0x15E0
    ctx->pc = 0x2d790cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5600));
    // 0x2d7910: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7914: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7918: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d791c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d791cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d7920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7924: 0x0  nop
    ctx->pc = 0x2d7924u;
    // NOP
    // 0x2d7928: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d7928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d792c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d792cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7930: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d7930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d7934: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d7934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d793c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d793cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d7940: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d7940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d7944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d7944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d7948: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D7948u;
    {
        const bool branch_taken_0x2d7948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7948) {
            ctx->pc = 0x2D79F4u;
            goto label_2d79f4;
        }
    }
    ctx->pc = 0x2D7950u;
    // 0x2d7950: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7954: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d7954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d7958: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D7958u;
    {
        const bool branch_taken_0x2d7958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7958) {
            ctx->pc = 0x2D79E8u;
            goto label_2d79e8;
        }
    }
    ctx->pc = 0x2D7960u;
    // 0x2d7960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7968: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d7968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d796c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7970: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d7970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7974: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2d7974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7978: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d797c: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d7980: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7984: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d7984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7988: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d798c: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d7990: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d7990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7994: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d7994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7998: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d799c: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d79a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d79a4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d79a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d79a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79ac: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d79b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d79b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d79b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d79b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d79bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79c0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d79c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d79c4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2d79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d79c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79cc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d79ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d79d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79d4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d79d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d79d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79dc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d79dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d79e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d79e8:
    // 0x2d79e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d79ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79f0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2d79f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2d79f4:
    // 0x2d79f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79f8: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D79F8u;
    SET_GPR_U32(ctx, 31, 0x2D7A00u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D79F8u, 0x2D7A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A00u;
label_2d7a00:
    // 0x2d7a00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d7a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d7a08: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D7A08u;
    {
        const bool branch_taken_0x2d7a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7a08) {
            ctx->pc = 0x2D7AD4u;
            goto label_2d7ad4;
        }
    }
    ctx->pc = 0x2D7A10u;
    // 0x2d7a10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a14: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d7a18: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d7a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7a1c: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d7a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d7a20: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d7a24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d7a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d7a28: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d7a2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7a30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d7a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7a38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7a3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d7a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7a44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d7a48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7a4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d7a50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7a54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d7a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d7a5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a60: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d7a64: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x2d7a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x2d7a68: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7a6c: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7a70: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7a74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a78: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d7a7c: 0x24700c80  addiu       $s0, $v1, 0xC80
    ctx->pc = 0x2d7a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
    // 0x2d7a80: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7a80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7a84: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7a88: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7a88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7a8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a90: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d7a94: 0x24700fa0  addiu       $s0, $v1, 0xFA0
    ctx->pc = 0x2d7a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x2d7a98: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7a98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7a9c: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7aa0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7aa4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7aa8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d7aac: 0x247012c0  addiu       $s0, $v1, 0x12C0
    ctx->pc = 0x2d7aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2d7ab0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7ab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7ab4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7ab8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7abc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7ac0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d7ac4: 0x247015e0  addiu       $s0, $v1, 0x15E0
    ctx->pc = 0x2d7ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2d7ac8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7ac8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7acc: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7ad0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_2d7ad4:
    // 0x2d7ad4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d7ad4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d7ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7adc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d7adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d7ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7AE8u;
}
