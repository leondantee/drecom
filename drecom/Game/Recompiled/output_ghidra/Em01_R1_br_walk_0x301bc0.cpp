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

// Function: Em01_R1_br_walk
// Address: 0x301bc0 - 0x3022b4
void Em01_R1_br_walk_0x301bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_br_walk_0x301bc0");
#endif

    switch (ctx->pc) {
        case 0x301cc0u: goto label_301cc0;
        case 0x301d74u: goto label_301d74;
        case 0x301e04u: goto label_301e04;
        case 0x301ec8u: goto label_301ec8;
        case 0x301f7cu: goto label_301f7c;
        case 0x302044u: goto label_302044;
        case 0x3020c0u: goto label_3020c0;
        case 0x302164u: goto label_302164;
        default: break;
    }

    ctx->pc = 0x301bc0u;

    // 0x301bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x301bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x301bc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x301bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x301bc8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x301bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x301bcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301bd0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301bd4: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x301bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x301bd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301bdc: 0x0  nop
    ctx->pc = 0x301bdcu;
    // NOP
    // 0x301be0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x301be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301be4: 0x0  nop
    ctx->pc = 0x301be4u;
    // NOP
    // 0x301be8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x301BE8u;
    {
        const bool branch_taken_0x301be8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301be8) {
            ctx->pc = 0x301C20u;
            goto label_301c20;
        }
    }
    ctx->pc = 0x301BF0u;
    // 0x301bf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301bf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301bf8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301bfc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x301bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x301c00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c04: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301c04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301c08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301c10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301c18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_301c20:
    // 0x301c20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c24: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x301c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x301c28: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x301c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x301c2c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x301C2Cu;
    {
        const bool branch_taken_0x301c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c2c) {
            ctx->pc = 0x301C6Cu;
            goto label_301c6c;
        }
    }
    ctx->pc = 0x301C34u;
    // 0x301c34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301c38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301c40: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x301c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x301c44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301c4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301c50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301c54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301c58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301c5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x301c64: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x301C64u;
    {
        const bool branch_taken_0x301c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c64) {
            ctx->pc = 0x30207Cu;
            goto label_30207c;
        }
    }
    ctx->pc = 0x301C6Cu;
label_301c6c:
    // 0x301c6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c70: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301c74: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x301c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x301c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301c7c: 0x0  nop
    ctx->pc = 0x301c7cu;
    // NOP
    // 0x301c80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301c84: 0x0  nop
    ctx->pc = 0x301c84u;
    // NOP
    // 0x301c88: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x301C88u;
    {
        const bool branch_taken_0x301c88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301c88) {
            ctx->pc = 0x301CF8u;
            goto label_301cf8;
        }
    }
    ctx->pc = 0x301C90u;
    // 0x301c90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c94: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x301c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301c98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c9c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x301c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x301ca0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x301ca4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301ca8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x301ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x301cac: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x301cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301cb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x301cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x301cb4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x301cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x301cb8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x301CB8u;
    SET_GPR_U32(ctx, 31, 0x301CC0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x301CB8u, 0x301CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301CC0u;
label_301cc0:
    // 0x301cc0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x301CC0u;
    {
        const bool branch_taken_0x301cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301cc0) {
            ctx->pc = 0x301CF8u;
            goto label_301cf8;
        }
    }
    ctx->pc = 0x301CC8u;
    // 0x301cc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301ccc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301cd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301cd4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x301cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x301cd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301cdc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301ce0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ce4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301ce8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301cec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301cf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301cf4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_301cf8:
    // 0x301cf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301cfc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301d00: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x301d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x301d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301d08: 0x0  nop
    ctx->pc = 0x301d08u;
    // NOP
    // 0x301d0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x301d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301d10: 0x0  nop
    ctx->pc = 0x301d10u;
    // NOP
    // 0x301d14: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x301D14u;
    {
        const bool branch_taken_0x301d14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301d14) {
            ctx->pc = 0x301DACu;
            goto label_301dac;
        }
    }
    ctx->pc = 0x301D1Cu;
    // 0x301d1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d20: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301d24: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x301d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x301d28: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x301d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x301d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301d30: 0x0  nop
    ctx->pc = 0x301d30u;
    // NOP
    // 0x301d34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301d38: 0x0  nop
    ctx->pc = 0x301d38u;
    // NOP
    // 0x301d3c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x301D3Cu;
    {
        const bool branch_taken_0x301d3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301d3c) {
            ctx->pc = 0x301DACu;
            goto label_301dac;
        }
    }
    ctx->pc = 0x301D44u;
    // 0x301d44: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x301d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x301d48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x301d4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301d50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d54: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x301d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301d58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d5c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x301d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x301d60: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x301d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301d64: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x301d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x301d68: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x301d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x301d6c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x301D6Cu;
    SET_GPR_U32(ctx, 31, 0x301D74u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x301D6Cu, 0x301D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D74u;
label_301d74:
    // 0x301d74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x301D74u;
    {
        const bool branch_taken_0x301d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301d74) {
            ctx->pc = 0x301DACu;
            goto label_301dac;
        }
    }
    ctx->pc = 0x301D7Cu;
    // 0x301d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301d80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301d88: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x301d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x301d8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d90: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301d94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d98: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301d9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301da0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301da4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301da8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_301dac:
    // 0x301dac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301db0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301db4: 0x3c034489  lui         $v1, 0x4489
    ctx->pc = 0x301db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17545 << 16));
    // 0x301db8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x301db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x301dbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301dc0: 0x0  nop
    ctx->pc = 0x301dc0u;
    // NOP
    // 0x301dc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301dc8: 0x0  nop
    ctx->pc = 0x301dc8u;
    // NOP
    // 0x301dcc: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x301DCCu;
    {
        const bool branch_taken_0x301dcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301dcc) {
            ctx->pc = 0x301E3Cu;
            goto label_301e3c;
        }
    }
    ctx->pc = 0x301DD4u;
    // 0x301dd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301dd8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x301dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301ddc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301de0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x301de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x301de4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x301de8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301dec: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x301decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x301df0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x301df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301df4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x301df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x301df8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x301df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x301dfc: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x301DFCu;
    SET_GPR_U32(ctx, 31, 0x301E04u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x301DFCu, 0x301E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E04u;
label_301e04:
    // 0x301e04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x301E04u;
    {
        const bool branch_taken_0x301e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301e04) {
            ctx->pc = 0x301E3Cu;
            goto label_301e3c;
        }
    }
    ctx->pc = 0x301E0Cu;
    // 0x301e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301e10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e14: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301e14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301e18: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x301e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x301e1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e20: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301e24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301e2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e30: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301e34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e38: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_301e3c:
    // 0x301e3c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x301e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x301e40: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x301e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x301e44: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x301E44u;
    {
        const bool branch_taken_0x301e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301e44) {
            ctx->pc = 0x301FB4u;
            goto label_301fb4;
        }
    }
    ctx->pc = 0x301E4Cu;
    // 0x301e4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e50: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301e54: 0x3c0344ed  lui         $v1, 0x44ED
    ctx->pc = 0x301e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17645 << 16));
    // 0x301e58: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x301e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x301e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301e60: 0x0  nop
    ctx->pc = 0x301e60u;
    // NOP
    // 0x301e64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x301e64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301e68: 0x0  nop
    ctx->pc = 0x301e68u;
    // NOP
    // 0x301e6c: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x301E6Cu;
    {
        const bool branch_taken_0x301e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301e6c) {
            ctx->pc = 0x301F00u;
            goto label_301f00;
        }
    }
    ctx->pc = 0x301E74u;
    // 0x301e74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e78: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301e7c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x301e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x301e80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301e84: 0x0  nop
    ctx->pc = 0x301e84u;
    // NOP
    // 0x301e88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301e8c: 0x0  nop
    ctx->pc = 0x301e8cu;
    // NOP
    // 0x301e90: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x301E90u;
    {
        const bool branch_taken_0x301e90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301e90) {
            ctx->pc = 0x301F00u;
            goto label_301f00;
        }
    }
    ctx->pc = 0x301E98u;
    // 0x301e98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e9c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x301e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301ea0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ea4: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x301ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x301ea8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x301eac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301eb0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x301eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x301eb4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x301eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301eb8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x301eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x301ebc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x301ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x301ec0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x301EC0u;
    SET_GPR_U32(ctx, 31, 0x301EC8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x301EC0u, 0x301EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301EC8u;
label_301ec8:
    // 0x301ec8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x301EC8u;
    {
        const bool branch_taken_0x301ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ec8) {
            ctx->pc = 0x301F00u;
            goto label_301f00;
        }
    }
    ctx->pc = 0x301ED0u;
    // 0x301ed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301ed4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ed8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301edc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x301edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x301ee0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ee4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301ee8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301eec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301ef0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ef4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301ef8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301efc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_301f00:
    // 0x301f00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f04: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301f08: 0x3c034509  lui         $v1, 0x4509
    ctx->pc = 0x301f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17673 << 16));
    // 0x301f0c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x301f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x301f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301f14: 0x0  nop
    ctx->pc = 0x301f14u;
    // NOP
    // 0x301f18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x301f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301f1c: 0x0  nop
    ctx->pc = 0x301f1cu;
    // NOP
    // 0x301f20: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x301F20u;
    {
        const bool branch_taken_0x301f20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301f20) {
            ctx->pc = 0x301FB4u;
            goto label_301fb4;
        }
    }
    ctx->pc = 0x301F28u;
    // 0x301f28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f2c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301f30: 0x3c03452f  lui         $v1, 0x452F
    ctx->pc = 0x301f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17711 << 16));
    // 0x301f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301f38: 0x0  nop
    ctx->pc = 0x301f38u;
    // NOP
    // 0x301f3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301f40: 0x0  nop
    ctx->pc = 0x301f40u;
    // NOP
    // 0x301f44: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x301F44u;
    {
        const bool branch_taken_0x301f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301f44) {
            ctx->pc = 0x301FB4u;
            goto label_301fb4;
        }
    }
    ctx->pc = 0x301F4Cu;
    // 0x301f4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f50: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x301f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301f54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f58: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x301f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x301f5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x301f60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301f64: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x301f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x301f68: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x301f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301f6c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x301f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x301f70: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x301f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x301f74: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x301F74u;
    SET_GPR_U32(ctx, 31, 0x301F7Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x301F74u, 0x301F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F7Cu;
label_301f7c:
    // 0x301f7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x301F7Cu;
    {
        const bool branch_taken_0x301f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301f7c) {
            ctx->pc = 0x301FB4u;
            goto label_301fb4;
        }
    }
    ctx->pc = 0x301F84u;
    // 0x301f84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301f88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301f90: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x301f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x301f94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301f98: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301f98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301f9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301fa0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301fa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301fa8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301fac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301fb0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_301fb4:
    // 0x301fb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301fb8: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x301fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x301fbc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x301fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x301fc0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x301FC0u;
    {
        const bool branch_taken_0x301fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301fc0) {
            ctx->pc = 0x30207Cu;
            goto label_30207c;
        }
    }
    ctx->pc = 0x301FC8u;
    // 0x301fc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301fcc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301fd0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x301fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x301fd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301fd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301fd8: 0x0  nop
    ctx->pc = 0x301fd8u;
    // NOP
    // 0x301fdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301fe0: 0x0  nop
    ctx->pc = 0x301fe0u;
    // NOP
    // 0x301fe4: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x301FE4u;
    {
        const bool branch_taken_0x301fe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301fe4) {
            ctx->pc = 0x30207Cu;
            goto label_30207c;
        }
    }
    ctx->pc = 0x301FECu;
    // 0x301fec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ff0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301ff4: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x301ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x301ff8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x301ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x301ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302000: 0x0  nop
    ctx->pc = 0x302000u;
    // NOP
    // 0x302004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x302004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302008: 0x0  nop
    ctx->pc = 0x302008u;
    // NOP
    // 0x30200c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x30200Cu;
    {
        const bool branch_taken_0x30200c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30200c) {
            ctx->pc = 0x30207Cu;
            goto label_30207c;
        }
    }
    ctx->pc = 0x302014u;
    // 0x302014: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302018: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x302018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30201c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302020: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x302020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x302024: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302028: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30202c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x302030: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302034: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302038: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30203c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30203Cu;
    SET_GPR_U32(ctx, 31, 0x302044u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30203Cu, 0x302044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302044u;
label_302044:
    // 0x302044: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302044u;
    {
        const bool branch_taken_0x302044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302044) {
            ctx->pc = 0x30207Cu;
            goto label_30207c;
        }
    }
    ctx->pc = 0x30204Cu;
    // 0x30204c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302050: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302054: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302058: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x302058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x30205c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302060: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302064: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302068: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30206c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302070: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302074: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302078: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30207c:
    // 0x30207c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302080: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x302080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x302084: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x302084u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x302088: 0x14830052  bne         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x302088u;
    {
        const bool branch_taken_0x302088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302088) {
            ctx->pc = 0x3021D4u;
            goto label_3021d4;
        }
    }
    ctx->pc = 0x302090u;
    // 0x302090: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x302090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x302094: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302098: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30209c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3020a0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3020a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3020a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3020a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3020a8: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x3020a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3020ac: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3020acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3020b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3020b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3020b4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3020b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3020b8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3020B8u;
    SET_GPR_U32(ctx, 31, 0x3020C0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3020B8u, 0x3020C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3020C0u;
label_3020c0:
    // 0x3020c0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3020C0u;
    {
        const bool branch_taken_0x3020c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3020c0) {
            ctx->pc = 0x3021D4u;
            goto label_3021d4;
        }
    }
    ctx->pc = 0x3020C8u;
    // 0x3020c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3020c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3020cc: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x3020ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x3020d0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3020D0u;
    {
        const bool branch_taken_0x3020d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3020d0) {
            ctx->pc = 0x302124u;
            goto label_302124;
        }
    }
    ctx->pc = 0x3020D8u;
    // 0x3020d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3020d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3020dc: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x3020dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3020e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3020e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3020e4: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x3020E4u;
    {
        const bool branch_taken_0x3020e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3020e4) {
            ctx->pc = 0x3021D4u;
            goto label_3021d4;
        }
    }
    ctx->pc = 0x3020ECu;
    // 0x3020ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3020ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3020f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3020f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3020f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3020f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3020f8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x3020f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3020fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3020fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302100: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302108: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30210c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302110: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302114: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302118: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30211c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x30211Cu;
    {
        const bool branch_taken_0x30211c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30211c) {
            ctx->pc = 0x3021D4u;
            goto label_3021d4;
        }
    }
    ctx->pc = 0x302124u;
label_302124:
    // 0x302124: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302128: 0x8c63136c  lw          $v1, 0x136C($v1)
    ctx->pc = 0x302128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4972)));
    // 0x30212c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x30212Cu;
    {
        const bool branch_taken_0x30212c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30212c) {
            ctx->pc = 0x3021D4u;
            goto label_3021d4;
        }
    }
    ctx->pc = 0x302134u;
    // 0x302134: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x302134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x302138: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30213c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30213cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302140: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302144: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x302144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302148: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30214c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x302150: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x302150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302154: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302158: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30215c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30215Cu;
    SET_GPR_U32(ctx, 31, 0x302164u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30215Cu, 0x302164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302164u;
label_302164:
    // 0x302164: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x302164u;
    {
        const bool branch_taken_0x302164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302164) {
            ctx->pc = 0x3021A4u;
            goto label_3021a4;
        }
    }
    ctx->pc = 0x30216Cu;
    // 0x30216c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302170: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302174: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302178: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x302178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30217c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302180: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302184: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302188: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30218c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302190: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302194: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302198: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30219c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30219Cu;
    {
        const bool branch_taken_0x30219c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30219c) {
            ctx->pc = 0x3021D4u;
            goto label_3021d4;
        }
    }
    ctx->pc = 0x3021A4u;
label_3021a4:
    // 0x3021a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3021a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3021a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3021acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3021b0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3021b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3021b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3021b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3021bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3021c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3021c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3021c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3021cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3021d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3021d4:
    // 0x3021d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3021d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3021d8: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x3021d8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x3021dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3021dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3021e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3021e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3021e4: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3021E4u;
    {
        const bool branch_taken_0x3021e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3021e4) {
            ctx->pc = 0x30221Cu;
            goto label_30221c;
        }
    }
    ctx->pc = 0x3021ECu;
    // 0x3021ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3021ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3021f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3021f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3021f8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3021f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3021fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302200: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302204: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302208: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30220c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30220cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302210: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302214: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302218: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30221c:
    // 0x30221c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30221cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302220: 0x8c641274  lw          $a0, 0x1274($v1)
    ctx->pc = 0x302220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4724)));
    // 0x302224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302228: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x302228u;
    {
        const bool branch_taken_0x302228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302228) {
            ctx->pc = 0x302260u;
            goto label_302260;
        }
    }
    ctx->pc = 0x302230u;
    // 0x302230: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302234: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302238: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30223c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x30223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x302240: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302244: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302248: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30224c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30224cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302250: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302254: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302258: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30225c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30225cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_302260:
    // 0x302260: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302264: 0x8c641274  lw          $a0, 0x1274($v1)
    ctx->pc = 0x302264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4724)));
    // 0x302268: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x302268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30226c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30226Cu;
    {
        const bool branch_taken_0x30226c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30226c) {
            ctx->pc = 0x3022A4u;
            goto label_3022a4;
        }
    }
    ctx->pc = 0x302274u;
    // 0x302274: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302278: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30227c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30227cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302280: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x302280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x302284: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302288: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30228c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302290: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302294: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302298: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30229c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3022a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3022a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3022a4:
    // 0x3022a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3022a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3022a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3022a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3022ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3022ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3022ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3022B4u;
}
