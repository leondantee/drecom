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

// Function: entry_002c5688
// Address: 0x2c5688 - 0x2c577c
void entry_002c5688_0x2c5688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5688_0x2c5688");
#endif

    switch (ctx->pc) {
        case 0x2c56f8u: goto label_2c56f8;
        case 0x2c5738u: goto label_2c5738;
        default: break;
    }

    ctx->pc = 0x2c5688u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
    ctx->pc = 0x2c577cu;
}
