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

// Function: Em0e_R1_br_mv01
// Address: 0x243b90 - 0x243f98
void Em0e_R1_br_mv01_0x243b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_br_mv01_0x243b90");
#endif

    switch (ctx->pc) {
        case 0x243c0cu: goto label_243c0c;
        case 0x243c58u: goto label_243c58;
        case 0x243c7cu: goto label_243c7c;
        case 0x243cc4u: goto label_243cc4;
        case 0x243d3cu: goto label_243d3c;
        case 0x243decu: goto label_243dec;
        case 0x243e10u: goto label_243e10;
        case 0x243e58u: goto label_243e58;
        case 0x243e7cu: goto label_243e7c;
        case 0x243ec4u: goto label_243ec4;
        default: break;
    }

    ctx->pc = 0x243b90u;

    // 0x243b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243b94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x243b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x243b98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x243b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x243b9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ba0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x243ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x243ba4: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x243BA4u;
    {
        const bool branch_taken_0x243ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243ba4) {
            ctx->pc = 0x243D60u;
            goto label_243d60;
        }
    }
    ctx->pc = 0x243BACu;
    // 0x243bac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243bb0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x243bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243bb4: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x243bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x243bb8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x243bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x243bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243bc0: 0x0  nop
    ctx->pc = 0x243bc0u;
    // NOP
    // 0x243bc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243bc8: 0x0  nop
    ctx->pc = 0x243bc8u;
    // NOP
    // 0x243bcc: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x243BCCu;
    {
        const bool branch_taken_0x243bcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243bcc) {
            ctx->pc = 0x243CE0u;
            goto label_243ce0;
        }
    }
    ctx->pc = 0x243BD4u;
    // 0x243bd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243bd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243bdc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243be0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x243be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243be4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243be8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243be8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243bec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243bf0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243bf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243bf8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243bfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243c04: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243C04u;
    SET_GPR_U32(ctx, 31, 0x243C0Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243C04u, 0x243C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C0Cu;
label_243c0c:
    // 0x243c0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x243c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243c10: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x243c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x243c14: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x243C14u;
    {
        const bool branch_taken_0x243c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243c14) {
            ctx->pc = 0x243C50u;
            goto label_243c50;
        }
    }
    ctx->pc = 0x243C1Cu;
    // 0x243c1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243c20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243c28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x243c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243c2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c30: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243c30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243c34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x243c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243c38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c3c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x243c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x243c40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c44: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243c44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243c48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_243c50:
    // 0x243c50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243C50u;
    SET_GPR_U32(ctx, 31, 0x243C58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243C50u, 0x243C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C58u;
label_243c58:
    // 0x243c58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x243c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243c5c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x243c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x243c60: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x243c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x243c64: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x243c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243c68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x243c68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x243c6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c70: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x243c70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x243c74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243C74u;
    SET_GPR_U32(ctx, 31, 0x243C7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243C74u, 0x243C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C7Cu;
label_243c7c:
    // 0x243c7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243c80: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x243c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x243c84: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x243C84u;
    {
        const bool branch_taken_0x243c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243c84) {
            ctx->pc = 0x243CE0u;
            goto label_243ce0;
        }
    }
    ctx->pc = 0x243C8Cu;
    // 0x243c8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243c90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c94: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243c98: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x243c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x243c9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ca0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243ca4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ca8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243cac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243cb0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243cb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243cb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243cbc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243CBCu;
    SET_GPR_U32(ctx, 31, 0x243CC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243CBCu, 0x243CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CC4u;
label_243cc4:
    // 0x243cc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243cc8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x243cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x243ccc: 0x2463008c  addiu       $v1, $v1, 0x8C
    ctx->pc = 0x243cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x243cd0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x243cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x243cd4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x243cd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x243cd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243cdc: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x243cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_243ce0:
    // 0x243ce0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ce4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x243ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243ce8: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x243ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x243cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243cf0: 0x0  nop
    ctx->pc = 0x243cf0u;
    // NOP
    // 0x243cf4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243cf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243cf8: 0x0  nop
    ctx->pc = 0x243cf8u;
    // NOP
    // 0x243cfc: 0x45010078  bc1t        . + 4 + (0x78 << 2)
    ctx->pc = 0x243CFCu;
    {
        const bool branch_taken_0x243cfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243cfc) {
            ctx->pc = 0x243EE0u;
            goto label_243ee0;
        }
    }
    ctx->pc = 0x243D04u;
    // 0x243d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243d08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d0c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243d10: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x243d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x243d14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d18: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243d18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243d1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d20: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243d20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243d24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d28: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243d28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243d2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243d34: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243D34u;
    SET_GPR_U32(ctx, 31, 0x243D3Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243D34u, 0x243D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D3Cu;
label_243d3c:
    // 0x243d3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243d40: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x243d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x243d44: 0x2463008c  addiu       $v1, $v1, 0x8C
    ctx->pc = 0x243d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x243d48: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x243d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x243d4c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x243d4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x243d50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d54: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x243d54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x243d58: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x243D58u;
    {
        const bool branch_taken_0x243d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243d58) {
            ctx->pc = 0x243EE0u;
            goto label_243ee0;
        }
    }
    ctx->pc = 0x243D60u;
label_243d60:
    // 0x243d60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x243d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d64: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x243d64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x243d68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x243d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x243d6c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x243d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x243d70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d74: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x243d74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x243d78: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x243d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x243d7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x243d7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x243d80: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x243d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x243d84: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x243D84u;
    {
        const bool branch_taken_0x243d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x243d84) {
            ctx->pc = 0x243EE0u;
            goto label_243ee0;
        }
    }
    ctx->pc = 0x243D8Cu;
    // 0x243d8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d90: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x243d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243d94: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x243d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x243d98: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x243d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x243d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243da0: 0x0  nop
    ctx->pc = 0x243da0u;
    // NOP
    // 0x243da4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243da8: 0x0  nop
    ctx->pc = 0x243da8u;
    // NOP
    // 0x243dac: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x243DACu;
    {
        const bool branch_taken_0x243dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243dac) {
            ctx->pc = 0x243EE0u;
            goto label_243ee0;
        }
    }
    ctx->pc = 0x243DB4u;
    // 0x243db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243db8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243dbc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243dc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x243dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243dc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243dc8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243dcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243dd0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243dd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243dd8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243ddc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243de0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243de4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243DE4u;
    SET_GPR_U32(ctx, 31, 0x243DECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243DE4u, 0x243DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DECu;
label_243dec:
    // 0x243dec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x243decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243df0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x243df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x243df4: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x243df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x243df8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x243df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243dfc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x243dfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x243e00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e04: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x243e04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x243e08: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243E08u;
    SET_GPR_U32(ctx, 31, 0x243E10u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243E08u, 0x243E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E10u;
label_243e10:
    // 0x243e10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x243e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243e14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x243e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x243e18: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x243E18u;
    {
        const bool branch_taken_0x243e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e18) {
            ctx->pc = 0x243E74u;
            goto label_243e74;
        }
    }
    ctx->pc = 0x243E20u;
    // 0x243e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243e24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243e2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x243e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243e30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e34: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243e38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e3c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243e40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e44: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243e48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243e50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243E50u;
    SET_GPR_U32(ctx, 31, 0x243E58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243E50u, 0x243E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E58u;
label_243e58:
    // 0x243e58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x243e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243e5c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x243e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x243e60: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x243e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x243e64: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x243e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243e68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x243e68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x243e6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e70: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x243e70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_243e74:
    // 0x243e74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243E74u;
    SET_GPR_U32(ctx, 31, 0x243E7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243E74u, 0x243E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E7Cu;
label_243e7c:
    // 0x243e7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243e80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x243e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x243e84: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x243E84u;
    {
        const bool branch_taken_0x243e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e84) {
            ctx->pc = 0x243EE0u;
            goto label_243ee0;
        }
    }
    ctx->pc = 0x243E8Cu;
    // 0x243e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243e90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e94: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243e94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243e98: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x243e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x243e9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ea0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243ea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ea8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243eac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243eb0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243eb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243eb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243ebc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243EBCu;
    SET_GPR_U32(ctx, 31, 0x243EC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243EBCu, 0x243EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EC4u;
label_243ec4:
    // 0x243ec4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243ec8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x243ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x243ecc: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x243eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x243ed0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x243ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x243ed4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x243ed4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x243ed8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243edc: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x243edcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_243ee0:
    // 0x243ee0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ee4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x243ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x243ee8: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x243ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x243eec: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x243EECu;
    {
        const bool branch_taken_0x243eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243eec) {
            ctx->pc = 0x243F4Cu;
            goto label_243f4c;
        }
    }
    ctx->pc = 0x243EF4u;
    // 0x243ef4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ef8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x243ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243efc: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x243efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x243f00: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x243f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x243f04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243f08: 0x0  nop
    ctx->pc = 0x243f08u;
    // NOP
    // 0x243f0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243f10: 0x0  nop
    ctx->pc = 0x243f10u;
    // NOP
    // 0x243f14: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x243F14u;
    {
        const bool branch_taken_0x243f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243f14) {
            ctx->pc = 0x243F4Cu;
            goto label_243f4c;
        }
    }
    ctx->pc = 0x243F1Cu;
    // 0x243f1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x243f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243f20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x243f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x243f28: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x243f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x243f2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f30: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x243f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x243f34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x243f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243f3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x243f40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243f44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x243f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_243f4c:
    // 0x243f4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x243f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x243f54: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x243f54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x243f58: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x243F58u;
    {
        const bool branch_taken_0x243f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243f58) {
            ctx->pc = 0x243F88u;
            goto label_243f88;
        }
    }
    ctx->pc = 0x243F60u;
    // 0x243f60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f64: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x243f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243f68: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x243f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x243f6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243f70: 0x0  nop
    ctx->pc = 0x243f70u;
    // NOP
    // 0x243f74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243f7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x243F7Cu;
    {
        const bool branch_taken_0x243f7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243f7c) {
            ctx->pc = 0x243F88u;
            goto label_243f88;
        }
    }
    ctx->pc = 0x243F84u;
    // 0x243f84: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x243f84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_243f88:
    // 0x243f88: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x243f88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243f8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x243f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243f90: 0x3e00008  jr          $ra
    ctx->pc = 0x243F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243F98u;
}
