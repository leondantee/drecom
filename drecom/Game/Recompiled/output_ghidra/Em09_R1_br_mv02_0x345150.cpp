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

// Function: Em09_R1_br_mv02
// Address: 0x345150 - 0x3453ec
void Em09_R1_br_mv02_0x345150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_br_mv02_0x345150");
#endif

    switch (ctx->pc) {
        case 0x345174u: goto label_345174;
        case 0x3451c0u: goto label_3451c0;
        case 0x345214u: goto label_345214;
        case 0x34538cu: goto label_34538c;
        default: break;
    }

    ctx->pc = 0x345150u;

    // 0x345150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x345154: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x345154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x345158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34515c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x34515cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x345160: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x345160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x345164: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x345164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x345168: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x345168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34516c: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x34516Cu;
    SET_GPR_U32(ctx, 31, 0x345174u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x34516Cu, 0x345174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345174u;
label_345174:
    // 0x345174: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345178: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x345178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34517c: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x34517cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x345180: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345184: 0x0  nop
    ctx->pc = 0x345184u;
    // NOP
    // 0x345188: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x345188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34518c: 0x0  nop
    ctx->pc = 0x34518cu;
    // NOP
    // 0x345190: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x345190u;
    {
        const bool branch_taken_0x345190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x345190) {
            ctx->pc = 0x345258u;
            goto label_345258;
        }
    }
    ctx->pc = 0x345198u;
    // 0x345198: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x345198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x34519c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x34519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3451a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3451a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3451a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3451a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3451a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3451a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3451ac: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3451acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3451b0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3451b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3451b4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x3451b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x3451b8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3451B8u;
    SET_GPR_U32(ctx, 31, 0x3451C0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3451B8u, 0x3451C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3451C0u;
label_3451c0:
    // 0x3451c0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3451C0u;
    {
        const bool branch_taken_0x3451c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3451c0) {
            ctx->pc = 0x345258u;
            goto label_345258;
        }
    }
    ctx->pc = 0x3451C8u;
    // 0x3451c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3451c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3451cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3451ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3451d0: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x3451d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x3451d4: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3451D4u;
    {
        const bool branch_taken_0x3451d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3451d4) {
            ctx->pc = 0x345258u;
            goto label_345258;
        }
    }
    ctx->pc = 0x3451DCu;
    // 0x3451dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3451dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3451e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3451e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3451e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3451e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3451e8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3451e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3451ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3451ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3451f0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3451f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3451f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3451f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3451f8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3451f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3451fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3451fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345200: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x345200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x345204: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x345204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345208: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x345208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34520c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34520Cu;
    SET_GPR_U32(ctx, 31, 0x345214u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34520Cu, 0x345214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345214u;
label_345214:
    // 0x345214: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x345214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x345218: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x345218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x34521c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345220: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x345220u;
    {
        const bool branch_taken_0x345220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x345220) {
            ctx->pc = 0x345258u;
            goto label_345258;
        }
    }
    ctx->pc = 0x345228u;
    // 0x345228: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34522c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345230: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x345230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x345234: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x345234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x345238: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34523c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34523cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x345240: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345244: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x345244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x345248: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34524c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34524cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x345250: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345254: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x345254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_345258:
    // 0x345258: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34525c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345260: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x345260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x345264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345268: 0x0  nop
    ctx->pc = 0x345268u;
    // NOP
    // 0x34526c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34526cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345274: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x345274u;
    {
        const bool branch_taken_0x345274 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x345274) {
            ctx->pc = 0x345280u;
            goto label_345280;
        }
    }
    ctx->pc = 0x34527Cu;
    // 0x34527c: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x34527cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_345280:
    // 0x345280: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345284: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x345284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345288: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x345288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34528c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34528cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345290: 0x0  nop
    ctx->pc = 0x345290u;
    // NOP
    // 0x345294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x345294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345298: 0x0  nop
    ctx->pc = 0x345298u;
    // NOP
    // 0x34529c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x34529Cu;
    {
        const bool branch_taken_0x34529c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34529c) {
            ctx->pc = 0x3452D4u;
            goto label_3452d4;
        }
    }
    ctx->pc = 0x3452A4u;
    // 0x3452a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3452a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3452a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3452acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3452b0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3452b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3452b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3452b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3452bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3452c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3452c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3452c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3452cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3452d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3452d4:
    // 0x3452d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3452d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3452dc: 0x84630068  lh          $v1, 0x68($v1)
    ctx->pc = 0x3452dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x3452e0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3452E0u;
    {
        const bool branch_taken_0x3452e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3452e0) {
            ctx->pc = 0x345328u;
            goto label_345328;
        }
    }
    ctx->pc = 0x3452E8u;
    // 0x3452e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3452e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3452ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3452f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3452f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3452f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3452f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3452f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3452fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3452fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x345300: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345304: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x345304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x345308: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34530c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34530cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x345310: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345314: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x345314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x345318: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x345318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34531c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345320: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345324: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x345324u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
label_345328:
    // 0x345328: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34532c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345330: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x345330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x345334: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x345334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x345338: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x345338u;
    {
        const bool branch_taken_0x345338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345338) {
            ctx->pc = 0x3453D8u;
            goto label_3453d8;
        }
    }
    ctx->pc = 0x345340u;
    // 0x345340: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345344: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x345344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345348: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x345348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34534c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34534cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345350: 0x0  nop
    ctx->pc = 0x345350u;
    // NOP
    // 0x345354: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x345354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345358: 0x0  nop
    ctx->pc = 0x345358u;
    // NOP
    // 0x34535c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x34535Cu;
    {
        const bool branch_taken_0x34535c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34535c) {
            ctx->pc = 0x3453D8u;
            goto label_3453d8;
        }
    }
    ctx->pc = 0x345364u;
    // 0x345364: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x345364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345368: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34536c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x34536cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x345370: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x345370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x345374: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x345374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x345378: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x345378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34537c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x345380: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x345380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x345384: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x345384u;
    SET_GPR_U32(ctx, 31, 0x34538Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x345384u, 0x34538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34538Cu;
label_34538c:
    // 0x34538c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x34538Cu;
    {
        const bool branch_taken_0x34538c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34538c) {
            ctx->pc = 0x3453D8u;
            goto label_3453d8;
        }
    }
    ctx->pc = 0x345394u;
    // 0x345394: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345398: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34539c: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x34539cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3453a0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3453A0u;
    {
        const bool branch_taken_0x3453a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3453a0) {
            ctx->pc = 0x3453D8u;
            goto label_3453d8;
        }
    }
    ctx->pc = 0x3453A8u;
    // 0x3453a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3453a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3453ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3453acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3453b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3453b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3453b4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x3453b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3453b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3453b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3453bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3453bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3453c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3453c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3453c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3453c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3453c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3453c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3453cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3453ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3453d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3453d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3453d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3453d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3453d8:
    // 0x3453d8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3453d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3453dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3453dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3453e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3453e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3453e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3453E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3453E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3453ECu;
}
