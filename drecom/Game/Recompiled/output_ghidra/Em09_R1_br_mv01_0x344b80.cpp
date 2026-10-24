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

// Function: Em09_R1_br_mv01
// Address: 0x344b80 - 0x34500c
void Em09_R1_br_mv01_0x344b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_br_mv01_0x344b80");
#endif

    switch (ctx->pc) {
        case 0x344ba4u: goto label_344ba4;
        case 0x344c14u: goto label_344c14;
        case 0x344c7cu: goto label_344c7c;
        case 0x344d30u: goto label_344d30;
        case 0x344e58u: goto label_344e58;
        case 0x344f04u: goto label_344f04;
        case 0x344facu: goto label_344fac;
        default: break;
    }

    ctx->pc = 0x344b80u;

    // 0x344b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x344b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x344b84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x344b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x344b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x344b8c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x344b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x344b90: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x344b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x344b94: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x344b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x344b98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x344b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344b9c: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x344B9Cu;
    SET_GPR_U32(ctx, 31, 0x344BA4u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x344B9Cu, 0x344BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BA4u;
label_344ba4:
    // 0x344ba4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ba8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x344ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344bac: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x344bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x344bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344bb4: 0x0  nop
    ctx->pc = 0x344bb4u;
    // NOP
    // 0x344bb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x344bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344bbc: 0x0  nop
    ctx->pc = 0x344bbcu;
    // NOP
    // 0x344bc0: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x344BC0u;
    {
        const bool branch_taken_0x344bc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x344bc0) {
            ctx->pc = 0x344C8Cu;
            goto label_344c8c;
        }
    }
    ctx->pc = 0x344BC8u;
    // 0x344bc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344bcc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x344bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344bd0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x344bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x344bd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344bd8: 0x0  nop
    ctx->pc = 0x344bd8u;
    // NOP
    // 0x344bdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x344bdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344be0: 0x0  nop
    ctx->pc = 0x344be0u;
    // NOP
    // 0x344be4: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x344BE4u;
    {
        const bool branch_taken_0x344be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344be4) {
            ctx->pc = 0x344C8Cu;
            goto label_344c8c;
        }
    }
    ctx->pc = 0x344BECu;
    // 0x344bec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x344becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344bf0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344bf4: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x344bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x344bf8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x344bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x344bfc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x344bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x344c00: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x344c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x344c04: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x344c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344c08: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x344c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x344c0c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x344C0Cu;
    SET_GPR_U32(ctx, 31, 0x344C14u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x344C0Cu, 0x344C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C14u;
label_344c14:
    // 0x344c14: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x344C14u;
    {
        const bool branch_taken_0x344c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344c14) {
            ctx->pc = 0x344C8Cu;
            goto label_344c8c;
        }
    }
    ctx->pc = 0x344C1Cu;
    // 0x344c1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344c20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344c24: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x344c24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x344c28: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x344C28u;
    {
        const bool branch_taken_0x344c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344c28) {
            ctx->pc = 0x344C8Cu;
            goto label_344c8c;
        }
    }
    ctx->pc = 0x344C30u;
    // 0x344c30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344c34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344c38: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x344c38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x344c3c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x344C3Cu;
    {
        const bool branch_taken_0x344c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344c3c) {
            ctx->pc = 0x344C8Cu;
            goto label_344c8c;
        }
    }
    ctx->pc = 0x344C44u;
    // 0x344c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344c48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344c4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x344c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x344c50: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x344c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x344c54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344c58: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x344c58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x344c5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344c60: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x344c60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344c64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344c68: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x344c68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344c6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344c70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x344c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x344c74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x344C74u;
    SET_GPR_U32(ctx, 31, 0x344C7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x344C74u, 0x344C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C7Cu;
label_344c7c:
    // 0x344c7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x344c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344c80: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x344c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x344c84: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x344c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x344c88: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x344c88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_344c8c:
    // 0x344c8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344c90: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x344c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344c94: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x344c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x344c98: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x344c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x344c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344ca0: 0x0  nop
    ctx->pc = 0x344ca0u;
    // NOP
    // 0x344ca4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x344ca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344ca8: 0x0  nop
    ctx->pc = 0x344ca8u;
    // NOP
    // 0x344cac: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x344CACu;
    {
        const bool branch_taken_0x344cac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344cac) {
            ctx->pc = 0x344D68u;
            goto label_344d68;
        }
    }
    ctx->pc = 0x344CB4u;
    // 0x344cb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344cb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344cbc: 0x84630068  lh          $v1, 0x68($v1)
    ctx->pc = 0x344cbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x344cc0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x344cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x344cc4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x344cc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x344cc8: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x344cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x344ccc: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x344CCCu;
    {
        const bool branch_taken_0x344ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x344ccc) {
            ctx->pc = 0x344D68u;
            goto label_344d68;
        }
    }
    ctx->pc = 0x344CD4u;
    // 0x344cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344cd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344cdc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x344cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x344ce0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x344ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x344ce4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ce8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x344ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x344cec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344cf0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x344cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344cf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344cf8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x344cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344cfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x344d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x344d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344d08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d0c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x344d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x344d10: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x344d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x344d14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x344d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x344d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344d1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x344d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344d24: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x344d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x344d28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x344D28u;
    SET_GPR_U32(ctx, 31, 0x344D30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x344D28u, 0x344D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D30u;
label_344d30:
    // 0x344d30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x344d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344d34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x344d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x344d38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x344D38u;
    {
        const bool branch_taken_0x344d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344d38) {
            ctx->pc = 0x344D58u;
            goto label_344d58;
        }
    }
    ctx->pc = 0x344D40u;
    // 0x344d40: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x344d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x344d44: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x344d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x344d48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344d4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344d54: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x344d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_344d58:
    // 0x344d58: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x344d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x344d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344d64: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x344d64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
label_344d68:
    // 0x344d68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d6c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x344d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344d70: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x344d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x344d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344d78: 0x0  nop
    ctx->pc = 0x344d78u;
    // NOP
    // 0x344d7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x344d7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344d80: 0x0  nop
    ctx->pc = 0x344d80u;
    // NOP
    // 0x344d84: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x344D84u;
    {
        const bool branch_taken_0x344d84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344d84) {
            ctx->pc = 0x344DFCu;
            goto label_344dfc;
        }
    }
    ctx->pc = 0x344D8Cu;
    // 0x344d8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344d94: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x344d94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x344d98: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x344D98u;
    {
        const bool branch_taken_0x344d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344d98) {
            ctx->pc = 0x344DFCu;
            goto label_344dfc;
        }
    }
    ctx->pc = 0x344DA0u;
    // 0x344da0: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x344da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344da4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344da8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x344da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344dac: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x344dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x344db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344db4: 0x0  nop
    ctx->pc = 0x344db4u;
    // NOP
    // 0x344db8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x344db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x344dbc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x344dbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344dc0: 0x0  nop
    ctx->pc = 0x344dc0u;
    // NOP
    // 0x344dc4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x344DC4u;
    {
        const bool branch_taken_0x344dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x344dc4) {
            ctx->pc = 0x344DFCu;
            goto label_344dfc;
        }
    }
    ctx->pc = 0x344DCCu;
    // 0x344dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344dd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344dd4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x344dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x344dd8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x344dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x344ddc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344de0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x344de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x344de4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344de8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x344de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344dec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344df0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x344df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344df4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344df8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x344df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_344dfc:
    // 0x344dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e00: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x344e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344e04: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x344e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x344e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344e0c: 0x0  nop
    ctx->pc = 0x344e0cu;
    // NOP
    // 0x344e10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x344e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344e14: 0x0  nop
    ctx->pc = 0x344e14u;
    // NOP
    // 0x344e18: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x344E18u;
    {
        const bool branch_taken_0x344e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344e18) {
            ctx->pc = 0x344E98u;
            goto label_344e98;
        }
    }
    ctx->pc = 0x344E20u;
    // 0x344e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344e24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x344e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x344e2c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x344e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x344e30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e34: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x344e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x344e38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e3c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x344e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344e40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e44: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x344e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344e48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x344e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x344e50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x344E50u;
    SET_GPR_U32(ctx, 31, 0x344E58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x344E50u, 0x344E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344E58u;
label_344e58:
    // 0x344e58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x344e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344e5c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x344e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x344e60: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x344E60u;
    {
        const bool branch_taken_0x344e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344e60) {
            ctx->pc = 0x344E98u;
            goto label_344e98;
        }
    }
    ctx->pc = 0x344E68u;
    // 0x344e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344e6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x344e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x344e74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x344e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x344e78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e7c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x344e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x344e80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x344e84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344e88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x344e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344e90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e94: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x344e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_344e98:
    // 0x344e98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e9c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344ea0: 0x846300c2  lh          $v1, 0xC2($v1)
    ctx->pc = 0x344ea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
    // 0x344ea4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x344ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x344ea8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x344ea8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x344eac: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x344eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x344eb0: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x344EB0u;
    {
        const bool branch_taken_0x344eb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x344eb0) {
            ctx->pc = 0x344F48u;
            goto label_344f48;
        }
    }
    ctx->pc = 0x344EB8u;
    // 0x344eb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ebc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344ec0: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x344ec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x344ec4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x344EC4u;
    {
        const bool branch_taken_0x344ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344ec4) {
            ctx->pc = 0x344F48u;
            goto label_344f48;
        }
    }
    ctx->pc = 0x344ECCu;
    // 0x344ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344ed0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ed4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x344ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x344ed8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x344ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x344edc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ee0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x344ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x344ee4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ee8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x344ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344eec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ef0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x344ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344ef4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ef8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x344ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x344efc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x344EFCu;
    SET_GPR_U32(ctx, 31, 0x344F04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x344EFCu, 0x344F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F04u;
label_344f04:
    // 0x344f04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x344f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344f08: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x344f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x344f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344f10: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x344F10u;
    {
        const bool branch_taken_0x344f10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x344f10) {
            ctx->pc = 0x344F48u;
            goto label_344f48;
        }
    }
    ctx->pc = 0x344F18u;
    // 0x344f18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344f1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x344f20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x344f24: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x344f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x344f28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x344f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x344f30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x344f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344f38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x344f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344f40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x344f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_344f48:
    // 0x344f48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344f50: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x344f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x344f54: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x344f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x344f58: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x344F58u;
    {
        const bool branch_taken_0x344f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344f58) {
            ctx->pc = 0x344FF8u;
            goto label_344ff8;
        }
    }
    ctx->pc = 0x344F60u;
    // 0x344f60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f64: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x344f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344f68: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x344f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x344f6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344f70: 0x0  nop
    ctx->pc = 0x344f70u;
    // NOP
    // 0x344f74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x344f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344f78: 0x0  nop
    ctx->pc = 0x344f78u;
    // NOP
    // 0x344f7c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x344F7Cu;
    {
        const bool branch_taken_0x344f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344f7c) {
            ctx->pc = 0x344FF8u;
            goto label_344ff8;
        }
    }
    ctx->pc = 0x344F84u;
    // 0x344f84: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x344f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x344f88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x344f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x344f8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x344f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x344f90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f98: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x344f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x344f9c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x344f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344fa0: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x344fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x344fa4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x344FA4u;
    SET_GPR_U32(ctx, 31, 0x344FACu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x344FA4u, 0x344FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344FACu;
label_344fac:
    // 0x344fac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x344FACu;
    {
        const bool branch_taken_0x344fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344fac) {
            ctx->pc = 0x344FF8u;
            goto label_344ff8;
        }
    }
    ctx->pc = 0x344FB4u;
    // 0x344fb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344fb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344fbc: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x344fbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x344fc0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x344FC0u;
    {
        const bool branch_taken_0x344fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344fc0) {
            ctx->pc = 0x344FF8u;
            goto label_344ff8;
        }
    }
    ctx->pc = 0x344FC8u;
    // 0x344fc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344fcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344fd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x344fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x344fd4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x344fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x344fd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344fdc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x344fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x344fe0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344fe4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x344fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344fe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344fec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x344fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344ff0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ff4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x344ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_344ff8:
    // 0x344ff8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x344ff8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345000: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x345000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x345004: 0x3e00008  jr          $ra
    ctx->pc = 0x345004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34500Cu;
}
