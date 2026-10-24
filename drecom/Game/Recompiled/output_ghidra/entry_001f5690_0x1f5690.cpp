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

// Function: entry_001f5690
// Address: 0x1f5690 - 0x1f5840
void entry_001f5690_0x1f5690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5690_0x1f5690");
#endif

    switch (ctx->pc) {
        case 0x1f56a8u: goto label_1f56a8;
        case 0x1f56c0u: goto label_1f56c0;
        case 0x1f56ccu: goto label_1f56cc;
        case 0x1f5714u: goto label_1f5714;
        case 0x1f5738u: goto label_1f5738;
        case 0x1f5780u: goto label_1f5780;
        case 0x1f57b4u: goto label_1f57b4;
        case 0x1f5800u: goto label_1f5800;
        default: break;
    }

    ctx->pc = 0x1f5690u;

    // 0x1f5690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5694: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f5694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5698: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1f5698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f569c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f569cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f56a0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F56A0u;
    SET_GPR_U32(ctx, 31, 0x1F56A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F56A0u, 0x1F56A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56A8u;
label_1f56a8:
    // 0x1f56a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56ac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f56acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f56b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f56b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f56b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F56B8u;
    SET_GPR_U32(ctx, 31, 0x1F56C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F56B8u, 0x1F56C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56C0u;
label_1f56c0:
    // 0x1f56c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56c4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F56C4u;
    SET_GPR_U32(ctx, 31, 0x1F56CCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F56C4u, 0x1F56CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56CCu;
label_1f56cc:
    // 0x1f56cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f56d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f56d4: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1F56D4u;
    {
        const bool branch_taken_0x1f56d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f56d4) {
            ctx->pc = 0x1F5840u;
            return;
        }
    }
    ctx->pc = 0x1F56DCu;
    // 0x1f56dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f56dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f56e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f56e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f56e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f56e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f56ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56f0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f56f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f56f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f56f8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f56f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f56fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5700: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f5700u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5704: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5708: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f5708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f570c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F570Cu;
    SET_GPR_U32(ctx, 31, 0x1F5714u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F570Cu, 0x1F5714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5714u;
label_1f5714:
    // 0x1f5714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5718: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f5718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f571c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f5720: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f5720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5724: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f5724u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f5728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f572c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f572cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5730: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5730u;
    SET_GPR_U32(ctx, 31, 0x1F5738u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5730u, 0x1F5738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5738u;
label_1f5738:
    // 0x1f5738: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f573c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f5740: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f5740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f5744: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f5744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5748: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f5748u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f574c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5754: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f5754u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5758: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f575c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5760: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1f5760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1f5764: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f5764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f5768: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f5768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f576c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f5770: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1f5770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5774: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x1f5774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x1f5778: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1F5778u;
    SET_GPR_U32(ctx, 31, 0x1F5780u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1F5778u, 0x1F5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5780u;
label_1f5780:
    // 0x1f5780: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F5780u;
    {
        const bool branch_taken_0x1f5780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5780) {
            ctx->pc = 0x1F5840u;
            return;
        }
    }
    ctx->pc = 0x1F5788u;
    // 0x1f5788: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f578c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5790: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x1f5790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
    // 0x1f5794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f5794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5798: 0x0  nop
    ctx->pc = 0x1f5798u;
    // NOP
    // 0x1f579c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f579cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f57a0: 0x0  nop
    ctx->pc = 0x1f57a0u;
    // NOP
    // 0x1f57a4: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x1F57A4u;
    {
        const bool branch_taken_0x1f57a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f57a4) {
            ctx->pc = 0x1F5840u;
            return;
        }
    }
    ctx->pc = 0x1F57ACu;
    // 0x1f57ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F57ACu;
    SET_GPR_U32(ctx, 31, 0x1F57B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F57ACu, 0x1F57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57B4u;
label_1f57b4:
    // 0x1f57b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f57b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f57b8: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1f57b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f57bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f57bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f57c0: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F57C0u;
    {
        const bool branch_taken_0x1f57c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f57c0) {
            ctx->pc = 0x1F5840u;
            return;
        }
    }
    ctx->pc = 0x1F57C8u;
    // 0x1f57c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f57c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f57cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f57d0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f57d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f57d4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1f57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f57d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f57dc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f57dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f57e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f57e4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f57e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f57e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f57ec: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f57ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f57f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f57f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f57f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F57F8u;
    SET_GPR_U32(ctx, 31, 0x1F5800u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F57F8u, 0x1F5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5800u;
label_1f5800:
    // 0x1f5800: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f5800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5804: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1f5804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f5808: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5808u;
    {
        const bool branch_taken_0x1f5808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5808) {
            ctx->pc = 0x1F5840u;
            return;
        }
    }
    ctx->pc = 0x1F5810u;
    // 0x1f5810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5814: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5818: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f5818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f581c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1f581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f5820: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5824: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f5824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f5828: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f582c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f582cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5830: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5834: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f5834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5838: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f583c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f583cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1f5840u;
}
