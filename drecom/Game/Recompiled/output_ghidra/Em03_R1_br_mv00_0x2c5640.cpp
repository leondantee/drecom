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

// Function: Em03_R1_br_mv00
// Address: 0x2c5640 - 0x2c591c
void Em03_R1_br_mv00_0x2c5640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_br_mv00_0x2c5640");
#endif

    switch (ctx->pc) {
        case 0x2c56f8u: goto label_2c56f8;
        case 0x2c5738u: goto label_2c5738;
        case 0x2c57acu: goto label_2c57ac;
        case 0x2c583cu: goto label_2c583c;
        default: break;
    }

    ctx->pc = 0x2c5640u;

    // 0x2c5640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c5640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c5644: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2c5644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2c5648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c564c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c564cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5650: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2c5650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2c5654: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2c5654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2c5658: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x2c5658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2c565c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5660: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2c5660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5664: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x2c5664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x2c5668: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c5668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c566c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c566cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5670: 0x0  nop
    ctx->pc = 0x2c5670u;
    // NOP
    // 0x2c5674: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c5674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c567c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C567Cu;
    {
        const bool branch_taken_0x2c567c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c567c) {
            ctx->pc = 0x2C5688u;
            goto label_2c5688;
        }
    }
    ctx->pc = 0x2C5684u;
    // 0x2c5684: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x2c5684u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2c5688:
    // 0x2c5688: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c568c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c568cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c5690: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x2C5690u;
    {
        const bool branch_taken_0x2c5690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5690) {
            ctx->pc = 0x2C5904u;
            goto label_2c5904;
        }
    }
    ctx->pc = 0x2C5698u;
    // 0x2c5698: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c569c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c569cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c56a0: 0x84630058  lh          $v1, 0x58($v1)
    ctx->pc = 0x2c56a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2c56a4: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C56A4u;
    {
        const bool branch_taken_0x2c56a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c56a4) {
            ctx->pc = 0x2C577Cu;
            goto label_2c577c;
        }
    }
    ctx->pc = 0x2C56ACu;
    // 0x2c56ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c56acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c56b0: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2c56b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c56b4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2c56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2c56b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c56b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c56bc: 0x0  nop
    ctx->pc = 0x2c56bcu;
    // NOP
    // 0x2c56c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c56c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c56c4: 0x0  nop
    ctx->pc = 0x2c56c4u;
    // NOP
    // 0x2c56c8: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x2C56C8u;
    {
        const bool branch_taken_0x2c56c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c56c8) {
            ctx->pc = 0x2C577Cu;
            goto label_2c577c;
        }
    }
    ctx->pc = 0x2C56D0u;
    // 0x2c56d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2c56d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c56d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c56d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c56d8: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x2c56d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
    // 0x2c56dc: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x2c56dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x2c56e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c56e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c56e4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c56e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c56e8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c56e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c56ec: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2c56ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2c56f0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2C56F0u;
    SET_GPR_U32(ctx, 31, 0x2C56F8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2C56F0u, 0x2C56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C56F8u;
label_2c56f8:
    // 0x2c56f8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C56F8u;
    {
        const bool branch_taken_0x2c56f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c56f8) {
            ctx->pc = 0x2C577Cu;
            goto label_2c577c;
        }
    }
    ctx->pc = 0x2C5700u;
    // 0x2c5700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5704: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c5704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5708: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c5708u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c570c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5710: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c5710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5714: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c5714u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5718: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c5718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c571c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c571cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5720: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c5720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5724: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c5724u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5728: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c572c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c572cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c5730: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5730u;
    SET_GPR_U32(ctx, 31, 0x2C5738u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5730u, 0x2C5738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5738u;
label_2c5738:
    // 0x2c5738: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c5738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c573c: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2c573cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2c5740: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c5740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5744: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C5744u;
    {
        const bool branch_taken_0x2c5744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c5744) {
            ctx->pc = 0x2C577Cu;
            goto label_2c577c;
        }
    }
    ctx->pc = 0x2C574Cu;
    // 0x2c574c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c574cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5750: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5754: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c5754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5758: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c5758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c575c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5760: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c5760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5768: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c5768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c576c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5770: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c5770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5774: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5778: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c5778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c577c:
    // 0x2c577c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c577cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c5780: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x2c5780u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x2c5784: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c5784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c5788: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C5788u;
    {
        const bool branch_taken_0x2c5788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5788) {
            ctx->pc = 0x2C5800u;
            goto label_2c5800;
        }
    }
    ctx->pc = 0x2C5790u;
    // 0x2c5790: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5794: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5798: 0x9463005a  lhu         $v1, 0x5A($v1)
    ctx->pc = 0x2c5798u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x2c579c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C579Cu;
    {
        const bool branch_taken_0x2c579c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c579c) {
            ctx->pc = 0x2C5800u;
            goto label_2c5800;
        }
    }
    ctx->pc = 0x2C57A4u;
    // 0x2c57a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C57A4u;
    SET_GPR_U32(ctx, 31, 0x2C57ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C57A4u, 0x2C57ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C57ACu;
label_2c57ac:
    // 0x2c57ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c57acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c57b0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c57b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c57b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c57b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c57b8: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C57B8u;
    {
        const bool branch_taken_0x2c57b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c57b8) {
            ctx->pc = 0x2C5800u;
            goto label_2c5800;
        }
    }
    ctx->pc = 0x2C57C0u;
    // 0x2c57c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c57c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c57c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c57c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c57cc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c57ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c57d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c57d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c57d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c57dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c57e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c57e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c57e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c57f0: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x2c57f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2c57f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c57f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c57fc: 0xa464005a  sh          $a0, 0x5A($v1)
    ctx->pc = 0x2c57fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 90), (uint16_t)GPR_U32(ctx, 4));
label_2c5800:
    // 0x2c5800: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5804: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5808: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c5808u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c580c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c580cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c5810: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c5810u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c5814: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2c5814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c5818: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C5818u;
    {
        const bool branch_taken_0x2c5818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5818) {
            ctx->pc = 0x2C58B8u;
            goto label_2c58b8;
        }
    }
    ctx->pc = 0x2C5820u;
    // 0x2c5820: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c5820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5824: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5828: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x2c5828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2c582c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2c582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5830: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x2c5830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2c5834: 0xc0b3a18  jal         func_2CE860
    ctx->pc = 0x2C5834u;
    SET_GPR_U32(ctx, 31, 0x2C583Cu);
    ctx->pc = 0x2CE860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE860u, 0x2C5834u, 0x2C583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C583Cu;
label_2c583c:
    // 0x2c583c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2c583cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c5840: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5840u;
    {
        const bool branch_taken_0x2c5840 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5840) {
            ctx->pc = 0x2C5860u;
            goto label_2c5860;
        }
    }
    ctx->pc = 0x2C5848u;
    // 0x2c5848: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c584c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5850: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x2c5850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2c5854: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2c5854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2c5858: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2C5858u;
    {
        const bool branch_taken_0x2c5858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5858) {
            ctx->pc = 0x2C58B8u;
            goto label_2c58b8;
        }
    }
    ctx->pc = 0x2C5860u;
label_2c5860:
    // 0x2c5860: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5864: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5868: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x2c5868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c586c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x2c586cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2c5870: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c5870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c5874: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2c5874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c5878: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2c5878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c587c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x2c587cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2c5880: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c5880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c5884: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2c5884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c5888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c588c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5890: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c5890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5894: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c5894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c5898: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c589c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c589cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c58a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c58a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c58a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c58acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c58b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c58b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c58b8:
    // 0x2c58b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c58b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c58bc: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c58c0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2c58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2c58c4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2c58c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c58c8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2c58c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2c58cc: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C58CCu;
    {
        const bool branch_taken_0x2c58cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c58cc) {
            ctx->pc = 0x2C5904u;
            goto label_2c5904;
        }
    }
    ctx->pc = 0x2C58D4u;
    // 0x2c58d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c58d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c58dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c58e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c58e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c58e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58e8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c58e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c58ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c58f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c58f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c58f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c58f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c58fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5900: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c5900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c5904:
    // 0x2c5904: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2c5904u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c590c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c590cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5910: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c5910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c5914: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C591Cu;
}
