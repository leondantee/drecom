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

// Function: entry_00224e04
// Address: 0x224e04 - 0x224ec8
void entry_00224e04_0x224e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224e04_0x224e04");
#endif

    switch (ctx->pc) {
        case 0x224e64u: goto label_224e64;
        default: break;
    }

    ctx->pc = 0x224e04u;

    // 0x224e04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224e0c: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x224e0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x224e10: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x224E10u;
    {
        const bool branch_taken_0x224e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224e10) {
            ctx->pc = 0x224EC8u;
            return;
        }
    }
    ctx->pc = 0x224E18u;
    // 0x224e18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e1c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x224e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224e20: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x224e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x224e24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224e28: 0x0  nop
    ctx->pc = 0x224e28u;
    // NOP
    // 0x224e2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x224e2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224e30: 0x0  nop
    ctx->pc = 0x224e30u;
    // NOP
    // 0x224e34: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x224E34u;
    {
        const bool branch_taken_0x224e34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224e34) {
            ctx->pc = 0x224EC8u;
            return;
        }
    }
    ctx->pc = 0x224E3Cu;
    // 0x224e3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x224e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e44: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x224e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x224e48: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x224e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x224e4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x224e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x224e50: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x224e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x224e54: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x224e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x224e58: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x224e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x224e5c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x224E5Cu;
    SET_GPR_U32(ctx, 31, 0x224E64u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x224E5Cu, 0x224E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E64u;
label_224e64:
    // 0x224e64: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x224E64u;
    {
        const bool branch_taken_0x224e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224e64) {
            ctx->pc = 0x224EC8u;
            return;
        }
    }
    ctx->pc = 0x224E6Cu;
    // 0x224e6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224e74: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x224e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x224e78: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x224e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x224e7c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x224E7Cu;
    {
        const bool branch_taken_0x224e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224e7c) {
            ctx->pc = 0x224EC8u;
            return;
        }
    }
    ctx->pc = 0x224E84u;
    // 0x224e84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x224e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x224e88: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x224e88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x224e8c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x224e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x224e90: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x224E90u;
    {
        const bool branch_taken_0x224e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224e90) {
            ctx->pc = 0x224EC8u;
            return;
        }
    }
    ctx->pc = 0x224E98u;
    // 0x224e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x224e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224e9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ea0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x224ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x224ea4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x224ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x224ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224eac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x224eacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x224eb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224eb4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x224eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x224eb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ebc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x224ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x224ec0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ec4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x224ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x224ec8u;
}
