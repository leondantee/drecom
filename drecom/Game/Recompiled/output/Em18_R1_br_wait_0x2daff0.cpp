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

// Function: Em18_R1_br_wait
// Address: 0x2daff0 - 0x2db2a8
void Em18_R1_br_wait_0x2daff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_br_wait_0x2daff0");
#endif

    switch (ctx->pc) {
        case 0x2db0f8u: goto label_2db0f8;
        case 0x2db1b8u: goto label_2db1b8;
        case 0x2db208u: goto label_2db208;
        default: break;
    }

    ctx->pc = 0x2daff0u;

    // 0x2daff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2daff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2daff4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2daff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2daff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2daff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2daffc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2daffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2db000: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db004: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2db004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2db008: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db00c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2db00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db010: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2db010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2db014: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2db014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2db018: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db01c: 0x0  nop
    ctx->pc = 0x2db01cu;
    // NOP
    // 0x2db020: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2db020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db024: 0x0  nop
    ctx->pc = 0x2db024u;
    // NOP
    // 0x2db028: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2DB028u;
    {
        const bool branch_taken_0x2db028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db028) {
            ctx->pc = 0x2DB068u;
            goto label_2db068;
        }
    }
    ctx->pc = 0x2DB030u;
    // 0x2db030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db034: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db038: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db03c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2db03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db040: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db044: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db048: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db04c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db04cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db050: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db054: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db058: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db05c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db060: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2DB060u;
    {
        const bool branch_taken_0x2db060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db060) {
            ctx->pc = 0x2DB294u;
            goto label_2db294;
        }
    }
    ctx->pc = 0x2DB068u;
label_2db068:
    // 0x2db068: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db06c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2db06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db070: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x2db070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x2db074: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2db074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2db078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db07c: 0x0  nop
    ctx->pc = 0x2db07cu;
    // NOP
    // 0x2db080: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2db080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db084: 0x0  nop
    ctx->pc = 0x2db084u;
    // NOP
    // 0x2db088: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2DB088u;
    {
        const bool branch_taken_0x2db088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db088) {
            ctx->pc = 0x2DB0C8u;
            goto label_2db0c8;
        }
    }
    ctx->pc = 0x2DB090u;
    // 0x2db090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db098: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db09c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db0a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db0a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db0a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db0ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db0acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db0b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db0b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db0b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db0bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db0c0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2DB0C0u;
    {
        const bool branch_taken_0x2db0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db0c0) {
            ctx->pc = 0x2DB294u;
            goto label_2db294;
        }
    }
    ctx->pc = 0x2DB0C8u;
label_2db0c8:
    // 0x2db0c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db0cc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2db0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db0d0: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x2db0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x2db0d4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2db0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2db0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db0dc: 0x0  nop
    ctx->pc = 0x2db0dcu;
    // NOP
    // 0x2db0e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db0e4: 0x0  nop
    ctx->pc = 0x2db0e4u;
    // NOP
    // 0x2db0e8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB0E8u;
    {
        const bool branch_taken_0x2db0e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db0e8) {
            ctx->pc = 0x2DB178u;
            goto label_2db178;
        }
    }
    ctx->pc = 0x2DB0F0u;
    // 0x2db0f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB0F0u;
    SET_GPR_U32(ctx, 31, 0x2DB0F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB0F0u, 0x2DB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB0F8u;
label_2db0f8:
    // 0x2db0f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db0fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2db0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2db100: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB100u;
    {
        const bool branch_taken_0x2db100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db100) {
            ctx->pc = 0x2DB140u;
            goto label_2db140;
        }
    }
    ctx->pc = 0x2DB108u;
    // 0x2db108: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db10c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db110: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db114: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2db114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db118: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db11c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db11cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db120: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db124: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db128: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db12c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db12cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db130: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db134: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db138: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DB138u;
    {
        const bool branch_taken_0x2db138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db138) {
            ctx->pc = 0x2DB170u;
            goto label_2db170;
        }
    }
    ctx->pc = 0x2DB140u;
label_2db140:
    // 0x2db140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db144: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db148: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db14c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2db14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2db150: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db154: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db158: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db15c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db15cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db160: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db164: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db168: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db16c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db16cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2db170:
    // 0x2db170: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2DB170u;
    {
        const bool branch_taken_0x2db170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db170) {
            ctx->pc = 0x2DB294u;
            goto label_2db294;
        }
    }
    ctx->pc = 0x2DB178u;
label_2db178:
    // 0x2db178: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db17c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2db17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2db180: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DB180u;
    {
        const bool branch_taken_0x2db180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db180) {
            ctx->pc = 0x2DB250u;
            goto label_2db250;
        }
    }
    ctx->pc = 0x2DB188u;
    // 0x2db188: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2db188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db18c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2db18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2db190: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2db190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2db194: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DB194u;
    {
        const bool branch_taken_0x2db194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db194) {
            ctx->pc = 0x2DB250u;
            goto label_2db250;
        }
    }
    ctx->pc = 0x2DB19Cu;
    // 0x2db19c: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2db19cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db1a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db1a4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2db1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2db1a8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB1A8u;
    {
        const bool branch_taken_0x2db1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db1a8) {
            ctx->pc = 0x2DB200u;
            goto label_2db200;
        }
    }
    ctx->pc = 0x2DB1B0u;
    // 0x2db1b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB1B0u;
    SET_GPR_U32(ctx, 31, 0x2DB1B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB1B0u, 0x2DB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB1B8u;
label_2db1b8:
    // 0x2db1b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db1bc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2db1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2db1c0: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB1C0u;
    {
        const bool branch_taken_0x2db1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db1c0) {
            ctx->pc = 0x2DB250u;
            goto label_2db250;
        }
    }
    ctx->pc = 0x2DB1C8u;
    // 0x2db1c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db1cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db1d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db1d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db1d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db1dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db1e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db1e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db1e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db1ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db1f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db1f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db1f8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2DB1F8u;
    {
        const bool branch_taken_0x2db1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db1f8) {
            ctx->pc = 0x2DB294u;
            goto label_2db294;
        }
    }
    ctx->pc = 0x2DB200u;
label_2db200:
    // 0x2db200: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB200u;
    SET_GPR_U32(ctx, 31, 0x2DB208u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB200u, 0x2DB208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB208u;
label_2db208:
    // 0x2db208: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db20c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2db20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2db210: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB210u;
    {
        const bool branch_taken_0x2db210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db210) {
            ctx->pc = 0x2DB250u;
            goto label_2db250;
        }
    }
    ctx->pc = 0x2DB218u;
    // 0x2db218: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db21c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db220: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db224: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db228: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db22c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db22cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db230: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db234: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db238: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db23c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db23cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db240: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db244: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db248: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DB248u;
    {
        const bool branch_taken_0x2db248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db248) {
            ctx->pc = 0x2DB294u;
            goto label_2db294;
        }
    }
    ctx->pc = 0x2DB250u;
label_2db250:
    // 0x2db250: 0x920300d5  lbu         $v1, 0xD5($s0)
    ctx->pc = 0x2db250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2db254: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB254u;
    {
        const bool branch_taken_0x2db254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db254) {
            ctx->pc = 0x2DB294u;
            goto label_2db294;
        }
    }
    ctx->pc = 0x2DB25Cu;
    // 0x2db25c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db260: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db264: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db268: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2db268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db26c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db270: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db278: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db27c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db280: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db284: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db288: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db28c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DB28Cu;
    {
        const bool branch_taken_0x2db28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db28c) {
            ctx->pc = 0x2DB294u;
            goto label_2db294;
        }
    }
    ctx->pc = 0x2DB294u;
label_2db294:
    // 0x2db294: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2db294u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db29c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2db29cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2db2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB2A8u;
}
