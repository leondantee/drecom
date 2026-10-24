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

// Function: Em0f_R1_br_run
// Address: 0x30ce60 - 0x30d0b8
void Em0f_R1_br_run_0x30ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_br_run_0x30ce60");
#endif

    switch (ctx->pc) {
        case 0x30ce78u: goto label_30ce78;
        case 0x30cf18u: goto label_30cf18;
        case 0x30cf78u: goto label_30cf78;
        case 0x30d030u: goto label_30d030;
        default: break;
    }

    ctx->pc = 0x30ce60u;

    // 0x30ce60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30ce64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x30ce68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30ce6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30ce70: 0xc0c30e8  jal         func_30C3A0
    ctx->pc = 0x30CE70u;
    SET_GPR_U32(ctx, 31, 0x30CE78u);
    ctx->pc = 0x30C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C3A0u, 0x30CE70u, 0x30CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE78u;
label_30ce78:
    // 0x30ce78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30ce7c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30ce7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30ce80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30ce80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30ce84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30ce88: 0x10830087  beq         $a0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x30CE88u;
    {
        const bool branch_taken_0x30ce88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30ce88) {
            ctx->pc = 0x30D0A8u;
            goto label_30d0a8;
        }
    }
    ctx->pc = 0x30CE90u;
    // 0x30ce90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30ce94: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x30ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ce98: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x30ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x30ce9c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x30ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x30cea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30cea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cea4: 0x0  nop
    ctx->pc = 0x30cea4u;
    // NOP
    // 0x30cea8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30cea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ceac: 0x0  nop
    ctx->pc = 0x30ceacu;
    // NOP
    // 0x30ceb0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x30CEB0u;
    {
        const bool branch_taken_0x30ceb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ceb0) {
            ctx->pc = 0x30CEE8u;
            goto label_30cee8;
        }
    }
    ctx->pc = 0x30CEB8u;
    // 0x30ceb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cebc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cec0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x30cec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30cec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cec8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cecc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x30ceccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30ced0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30ced4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x30ced4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ced8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cedc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x30cedcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cee0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cee4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x30cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_30cee8:
    // 0x30cee8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30ceec: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30cef0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30cef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cef4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cef8: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30cefc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30cefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30cf00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30cf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30cf04: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30cf08: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cf0c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30cf10: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30CF10u;
    SET_GPR_U32(ctx, 31, 0x30CF18u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30CF10u, 0x30CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF18u;
label_30cf18:
    // 0x30cf18: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x30CF18u;
    {
        const bool branch_taken_0x30cf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cf18) {
            ctx->pc = 0x30CFB0u;
            goto label_30cfb0;
        }
    }
    ctx->pc = 0x30CF20u;
    // 0x30cf20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf24: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x30cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cf28: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x30cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x30cf2c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x30cf2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x30cf30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30cf30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cf34: 0x0  nop
    ctx->pc = 0x30cf34u;
    // NOP
    // 0x30cf38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30cf38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cf3c: 0x0  nop
    ctx->pc = 0x30cf3cu;
    // NOP
    // 0x30cf40: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x30CF40u;
    {
        const bool branch_taken_0x30cf40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cf40) {
            ctx->pc = 0x30CFB0u;
            goto label_30cfb0;
        }
    }
    ctx->pc = 0x30CF48u;
    // 0x30cf48: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30cf4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30cf50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30cf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30cf54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf58: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30cf5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf60: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30cf64: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cf68: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30cf6c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30cf70: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30CF70u;
    SET_GPR_U32(ctx, 31, 0x30CF78u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30CF70u, 0x30CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF78u;
label_30cf78:
    // 0x30cf78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CF78u;
    {
        const bool branch_taken_0x30cf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cf78) {
            ctx->pc = 0x30CFB0u;
            goto label_30cfb0;
        }
    }
    ctx->pc = 0x30CF80u;
    // 0x30cf80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cf84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30cf88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30cf8c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x30cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30cf90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf94: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30cf94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30cf98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30cf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cfa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfa4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30cfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cfa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30cfb0:
    // 0x30cfb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfb4: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x30cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30cfb8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x30cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x30cfbc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30cfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30cfc0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30CFC0u;
    {
        const bool branch_taken_0x30cfc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cfc0) {
            ctx->pc = 0x30D000u;
            goto label_30d000;
        }
    }
    ctx->pc = 0x30CFC8u;
    // 0x30cfc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cfcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30cfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30cfd4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30cfd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfdc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30cfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30cfe0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfe4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30cfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cfe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30cfecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cff0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cff4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30cff8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x30CFF8u;
    {
        const bool branch_taken_0x30cff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cff8) {
            ctx->pc = 0x30D0A8u;
            goto label_30d0a8;
        }
    }
    ctx->pc = 0x30D000u;
label_30d000:
    // 0x30d000: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d004: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30d004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30d008: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30d008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d00c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d010: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30d010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30d014: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30d014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30d018: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30d018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30d01c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30d020: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30d020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d024: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30d024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30d028: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30D028u;
    SET_GPR_U32(ctx, 31, 0x30D030u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30D028u, 0x30D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D030u;
label_30d030:
    // 0x30d030: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30D030u;
    {
        const bool branch_taken_0x30d030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d030) {
            ctx->pc = 0x30D068u;
            goto label_30d068;
        }
    }
    ctx->pc = 0x30D038u;
    // 0x30d038: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d03c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d040: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d044: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x30d044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d048: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d04c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d04cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d050: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d054: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d058: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d05c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d05cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d060: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d064: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30d068:
    // 0x30d068: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d06c: 0x8c631274  lw          $v1, 0x1274($v1)
    ctx->pc = 0x30d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4724)));
    // 0x30d070: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30D070u;
    {
        const bool branch_taken_0x30d070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d070) {
            ctx->pc = 0x30D0A8u;
            goto label_30d0a8;
        }
    }
    ctx->pc = 0x30D078u;
    // 0x30d078: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d07c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d080: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d088: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d08c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d08cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d090: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d094: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d098: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d09c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d0a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d0a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30d0a8:
    // 0x30d0a8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30d0a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d0ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30d0acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30d0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x30D0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D0B8u;
}
