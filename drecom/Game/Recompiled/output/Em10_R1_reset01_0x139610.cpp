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

// Function: Em10_R1_reset01
// Address: 0x139610 - 0x1398ac
void Em10_R1_reset01_0x139610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_reset01_0x139610");
#endif

    switch (ctx->pc) {
        case 0x139688u: goto label_139688;
        case 0x1396e8u: goto label_1396e8;
        case 0x1396f4u: goto label_1396f4;
        case 0x139704u: goto label_139704;
        case 0x139710u: goto label_139710;
        case 0x139770u: goto label_139770;
        case 0x139798u: goto label_139798;
        case 0x1397a4u: goto label_1397a4;
        case 0x1397b4u: goto label_1397b4;
        case 0x1397ccu: goto label_1397cc;
        case 0x13984cu: goto label_13984c;
        default: break;
    }

    ctx->pc = 0x139610u;

    // 0x139610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139614: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x139614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x139618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13961c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x13961cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x139620: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139624: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x139624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x139628: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13962c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x13962cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x139630: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x139630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139634: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x139634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x139638: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x139638u;
    {
        const bool branch_taken_0x139638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x139638) {
            ctx->pc = 0x139788u;
            goto label_139788;
        }
    }
    ctx->pc = 0x139640u;
    // 0x139640: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x139640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139644: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x139644u;
    {
        const bool branch_taken_0x139644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x139644) {
            ctx->pc = 0x139750u;
            goto label_139750;
        }
    }
    ctx->pc = 0x13964Cu;
    // 0x13964c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139650: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x139650u;
    {
        const bool branch_taken_0x139650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x139650) {
            ctx->pc = 0x1396BCu;
            goto label_1396bc;
        }
    }
    ctx->pc = 0x139658u;
    // 0x139658: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139658u;
    {
        const bool branch_taken_0x139658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x139658) {
            ctx->pc = 0x139668u;
            goto label_139668;
        }
    }
    ctx->pc = 0x139660u;
    // 0x139660: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x139660u;
    {
        const bool branch_taken_0x139660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139660) {
            ctx->pc = 0x139898u;
            goto label_139898;
        }
    }
    ctx->pc = 0x139668u;
label_139668:
    // 0x139668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13966c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139670: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x139670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x139674: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x139674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x139678: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13967c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13967cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139680: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139680u;
    SET_GPR_U32(ctx, 31, 0x139688u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139680u, 0x139688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139688u;
label_139688:
    // 0x139688: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13968c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13968cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x139690: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x139690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x139694: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x139694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x139698: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13969c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x13969cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1396a0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1396a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1396a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1396a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396a8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1396a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1396ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1396acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1396b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1396b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1396b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1396b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1396b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1396bc:
    // 0x1396bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1396bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396c0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1396c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1396c4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1396c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1396c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1396c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1396cc: 0x0  nop
    ctx->pc = 0x1396ccu;
    // NOP
    // 0x1396d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1396d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1396d4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1396d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1396d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1396d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1396dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1396e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1396E0u;
    SET_GPR_U32(ctx, 31, 0x1396E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1396E0u, 0x1396E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396E8u;
label_1396e8:
    // 0x1396e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1396e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396ec: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1396ECu;
    SET_GPR_U32(ctx, 31, 0x1396F4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1396ECu, 0x1396F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1396F4u;
label_1396f4:
    // 0x1396f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1396f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1396f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1396f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1396fc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1396FCu;
    SET_GPR_U32(ctx, 31, 0x139704u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1396FCu, 0x139704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139704u;
label_139704:
    // 0x139704: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139708: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x139708u;
    SET_GPR_U32(ctx, 31, 0x139710u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x139708u, 0x139710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139710u;
label_139710:
    // 0x139710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139714: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x139714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x139718: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x139718u;
    {
        const bool branch_taken_0x139718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139718) {
            ctx->pc = 0x139738u;
            goto label_139738;
        }
    }
    ctx->pc = 0x139720u;
    // 0x139720: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139724: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x139724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x139728: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x139728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13972c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x13972cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x139730: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x139730u;
    {
        const bool branch_taken_0x139730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139730) {
            ctx->pc = 0x139898u;
            goto label_139898;
        }
    }
    ctx->pc = 0x139738u;
label_139738:
    // 0x139738: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13973c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x13973cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x139740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139744: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x139744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x139748: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x139748u;
    {
        const bool branch_taken_0x139748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139748) {
            ctx->pc = 0x139898u;
            goto label_139898;
        }
    }
    ctx->pc = 0x139750u;
label_139750:
    // 0x139750: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139754: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139758: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x139758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x13975c: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x13975cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x139760: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139764: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139768: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139768u;
    SET_GPR_U32(ctx, 31, 0x139770u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139768u, 0x139770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139770u;
label_139770:
    // 0x139770: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139774: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x139774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x139778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13977c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13977cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x139780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139784: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_139788:
    // 0x139788: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13978c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13978cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139790: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x139790u;
    SET_GPR_U32(ctx, 31, 0x139798u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x139790u, 0x139798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139798u;
label_139798:
    // 0x139798: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13979c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13979Cu;
    SET_GPR_U32(ctx, 31, 0x1397A4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13979Cu, 0x1397A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397A4u;
label_1397a4:
    // 0x1397a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1397a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1397a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1397a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1397ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1397ACu;
    SET_GPR_U32(ctx, 31, 0x1397B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1397ACu, 0x1397B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397B4u;
label_1397b4:
    // 0x1397b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1397b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1397b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1397b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1397bc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1397bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1397c0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1397c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1397c4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1397C4u;
    SET_GPR_U32(ctx, 31, 0x1397CCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1397C4u, 0x1397CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397CCu;
label_1397cc:
    // 0x1397cc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1397ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1397d0: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1397d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1397d4: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1397d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1397d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1397d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1397dc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1397dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1397e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1397e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1397e4: 0x0  nop
    ctx->pc = 0x1397e4u;
    // NOP
    // 0x1397e8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1397E8u;
    {
        const bool branch_taken_0x1397e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1397e8) {
            ctx->pc = 0x1397FCu;
            goto label_1397fc;
        }
    }
    ctx->pc = 0x1397F0u;
    // 0x1397f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1397f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1397f4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1397f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1397f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1397f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1397fc:
    // 0x1397fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1397fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139800: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x139800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139804: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x139804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x139808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13980c: 0x0  nop
    ctx->pc = 0x13980cu;
    // NOP
    // 0x139810: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x139810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x139814: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x139814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x139818: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13981c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x13981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139820: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x139820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139828: 0x0  nop
    ctx->pc = 0x139828u;
    // NOP
    // 0x13982c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13982Cu;
    {
        const bool branch_taken_0x13982c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13982c) {
            ctx->pc = 0x139840u;
            goto label_139840;
        }
    }
    ctx->pc = 0x139834u;
    // 0x139834: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x139834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139838: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13983c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13983cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_139840:
    // 0x139840: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139844: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x139844u;
    SET_GPR_U32(ctx, 31, 0x13984Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x139844u, 0x13984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13984Cu;
label_13984c:
    // 0x13984c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139850: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x139854: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x139854u;
    {
        const bool branch_taken_0x139854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139854) {
            ctx->pc = 0x139898u;
            goto label_139898;
        }
    }
    ctx->pc = 0x13985Cu;
    // 0x13985c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139860: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139864: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x139864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x139868: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x139868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13986c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139870: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x139870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x139874: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139878: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139878u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13987c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139880: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x139880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x139884: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139888: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x139888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x13988c: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x13988cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x139890: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x139890u;
    {
        const bool branch_taken_0x139890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139890) {
            ctx->pc = 0x139898u;
            goto label_139898;
        }
    }
    ctx->pc = 0x139898u;
label_139898:
    // 0x139898: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x139898u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13989c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13989cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1398a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1398a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1398a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1398A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1398A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1398ACu;
}
