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

// Function: Em0a_R1_br_wait
// Address: 0x363a00 - 0x363df0
void Em0a_R1_br_wait_0x363a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_br_wait_0x363a00");
#endif

    switch (ctx->pc) {
        case 0x363a60u: goto label_363a60;
        case 0x363b8cu: goto label_363b8c;
        case 0x363bfcu: goto label_363bfc;
        case 0x363c20u: goto label_363c20;
        case 0x363c30u: goto label_363c30;
        case 0x363c48u: goto label_363c48;
        case 0x363ce0u: goto label_363ce0;
        default: break;
    }

    ctx->pc = 0x363a00u;

    // 0x363a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x363a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x363a04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x363a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x363a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x363a0c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x363a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x363a10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363a14: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x363a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x363a18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x363a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363a1c: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x363a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x363a20: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x363a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x363a24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x363a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x363a28: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x363A28u;
    {
        const bool branch_taken_0x363a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363a28) {
            ctx->pc = 0x363B44u;
            goto label_363b44;
        }
    }
    ctx->pc = 0x363A30u;
    // 0x363a30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363a34: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x363a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363a38: 0x3c034576  lui         $v1, 0x4576
    ctx->pc = 0x363a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17782 << 16));
    // 0x363a3c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x363a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x363a40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363a44: 0x0  nop
    ctx->pc = 0x363a44u;
    // NOP
    // 0x363a48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363a4c: 0x0  nop
    ctx->pc = 0x363a4cu;
    // NOP
    // 0x363a50: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x363A50u;
    {
        const bool branch_taken_0x363a50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363a50) {
            ctx->pc = 0x363B44u;
            goto label_363b44;
        }
    }
    ctx->pc = 0x363A58u;
    // 0x363a58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x363A58u;
    SET_GPR_U32(ctx, 31, 0x363A60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x363A58u, 0x363A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363A60u;
label_363a60:
    // 0x363a60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x363a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363a64: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x363a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x363a68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x363a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363a6c: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x363A6Cu;
    {
        const bool branch_taken_0x363a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363a6c) {
            ctx->pc = 0x363B0Cu;
            goto label_363b0c;
        }
    }
    ctx->pc = 0x363A74u;
    // 0x363a74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x363a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363a78: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x363A78u;
    {
        const bool branch_taken_0x363a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363a78) {
            ctx->pc = 0x363AD4u;
            goto label_363ad4;
        }
    }
    ctx->pc = 0x363A80u;
    // 0x363a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x363a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363a84: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x363A84u;
    {
        const bool branch_taken_0x363a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363a84) {
            ctx->pc = 0x363A9Cu;
            goto label_363a9c;
        }
    }
    ctx->pc = 0x363A8Cu;
    // 0x363a8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363A8Cu;
    {
        const bool branch_taken_0x363a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x363a8c) {
            ctx->pc = 0x363A9Cu;
            goto label_363a9c;
        }
    }
    ctx->pc = 0x363A94u;
    // 0x363a94: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x363A94u;
    {
        const bool branch_taken_0x363a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363a94) {
            ctx->pc = 0x363B44u;
            goto label_363b44;
        }
    }
    ctx->pc = 0x363A9Cu;
label_363a9c:
    // 0x363a9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363aa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363aa4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363aa8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x363aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x363aac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ab0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363ab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ab8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363abc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ac0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363ac4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ac8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363acc: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x363ACCu;
    {
        const bool branch_taken_0x363acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363acc) {
            ctx->pc = 0x363DDCu;
            goto label_363ddc;
        }
    }
    ctx->pc = 0x363AD4u;
label_363ad4:
    // 0x363ad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363ad8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363adc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363adcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363ae0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x363ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x363ae4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ae8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363aec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363af0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363af4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363af8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363af8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363afc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363b04: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x363B04u;
    {
        const bool branch_taken_0x363b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363b04) {
            ctx->pc = 0x363DDCu;
            goto label_363ddc;
        }
    }
    ctx->pc = 0x363B0Cu;
label_363b0c:
    // 0x363b0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363b10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b14: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363b18: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x363b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x363b1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b20: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363b24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363b2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b30: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363b34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b38: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363b3c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x363B3Cu;
    {
        const bool branch_taken_0x363b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363b3c) {
            ctx->pc = 0x363DDCu;
            goto label_363ddc;
        }
    }
    ctx->pc = 0x363B44u;
label_363b44:
    // 0x363b44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b48: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x363b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x363b4c: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x363B4Cu;
    {
        const bool branch_taken_0x363b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363b4c) {
            ctx->pc = 0x363D20u;
            goto label_363d20;
        }
    }
    ctx->pc = 0x363B54u;
    // 0x363b54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b58: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x363b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x363b5c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x363b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x363b60: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x363b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x363b64: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x363B64u;
    {
        const bool branch_taken_0x363b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363b64) {
            ctx->pc = 0x363CD8u;
            goto label_363cd8;
        }
    }
    ctx->pc = 0x363B6Cu;
    // 0x363b6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b70: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x363b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x363b74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x363b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x363b78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x363b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x363b7c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x363B7Cu;
    {
        const bool branch_taken_0x363b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x363b7c) {
            ctx->pc = 0x363BD4u;
            goto label_363bd4;
        }
    }
    ctx->pc = 0x363B84u;
    // 0x363b84: 0xc067694  jal         func_19DA50
    ctx->pc = 0x363B84u;
    SET_GPR_U32(ctx, 31, 0x363B8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x363B84u, 0x363B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363B8Cu;
label_363b8c:
    // 0x363b8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x363b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363b90: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x363b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x363b94: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x363B94u;
    {
        const bool branch_taken_0x363b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x363b94) {
            ctx->pc = 0x363BD4u;
            goto label_363bd4;
        }
    }
    ctx->pc = 0x363B9Cu;
    // 0x363b9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363ba0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ba4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363ba8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x363ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x363bac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bb0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363bb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bb8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363bbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bc0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363bc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363bcc: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x363BCCu;
    {
        const bool branch_taken_0x363bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363bcc) {
            ctx->pc = 0x363DDCu;
            goto label_363ddc;
        }
    }
    ctx->pc = 0x363BD4u;
label_363bd4:
    // 0x363bd4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bd8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x363bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x363bdc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x363bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x363be0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x363be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x363be4: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x363BE4u;
    {
        const bool branch_taken_0x363be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363be4) {
            ctx->pc = 0x363D20u;
            goto label_363d20;
        }
    }
    ctx->pc = 0x363BECu;
    // 0x363bec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x363becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x363bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363bf4: 0xc05d25c  jal         func_174970
    ctx->pc = 0x363BF4u;
    SET_GPR_U32(ctx, 31, 0x363BFCu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x363BF4u, 0x363BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363BFCu;
label_363bfc:
    // 0x363bfc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x363BFCu;
    {
        const bool branch_taken_0x363bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363bfc) {
            ctx->pc = 0x363D20u;
            goto label_363d20;
        }
    }
    ctx->pc = 0x363C04u;
    // 0x363c04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363c08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x363c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x363c0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x363c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x363c10: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x363c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x363c14: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x363c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x363c18: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x363C18u;
    SET_GPR_U32(ctx, 31, 0x363C20u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x363C18u, 0x363C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C20u;
label_363c20:
    // 0x363c20: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x363c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x363c24: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x363c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x363c28: 0xc0455e6  jal         func_115798
    ctx->pc = 0x363C28u;
    SET_GPR_U32(ctx, 31, 0x363C30u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x363C28u, 0x363C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C30u;
label_363c30:
    // 0x363c30: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x363c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x363c34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x363c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363c38: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x363c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x363c3c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x363c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x363c40: 0xc058f20  jal         func_163C80
    ctx->pc = 0x363C40u;
    SET_GPR_U32(ctx, 31, 0x363C48u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x363C40u, 0x363C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C48u;
label_363c48:
    // 0x363c48: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x363c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x363c4c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x363c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363c50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x363c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363c54: 0x0  nop
    ctx->pc = 0x363c54u;
    // NOP
    // 0x363c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363c5c: 0x0  nop
    ctx->pc = 0x363c5cu;
    // NOP
    // 0x363c60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x363C60u;
    {
        const bool branch_taken_0x363c60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363c60) {
            ctx->pc = 0x363C7Cu;
            goto label_363c7c;
        }
    }
    ctx->pc = 0x363C68u;
    // 0x363c68: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x363c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x363c6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x363c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363c70: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x363c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363c74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x363c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x363c78: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x363c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_363c7c:
    // 0x363c7c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x363c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363c80: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x363c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x363c84: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x363c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x363c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363c8c: 0x0  nop
    ctx->pc = 0x363c8cu;
    // NOP
    // 0x363c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363c94: 0x0  nop
    ctx->pc = 0x363c94u;
    // NOP
    // 0x363c98: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x363C98u;
    {
        const bool branch_taken_0x363c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363c98) {
            ctx->pc = 0x363D20u;
            goto label_363d20;
        }
    }
    ctx->pc = 0x363CA0u;
    // 0x363ca0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363ca4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ca8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363cac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x363cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x363cb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363cb4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363cb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363cbc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363cc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363cc4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363cc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ccc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363cd0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x363CD0u;
    {
        const bool branch_taken_0x363cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363cd0) {
            ctx->pc = 0x363DDCu;
            goto label_363ddc;
        }
    }
    ctx->pc = 0x363CD8u;
label_363cd8:
    // 0x363cd8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x363CD8u;
    SET_GPR_U32(ctx, 31, 0x363CE0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x363CD8u, 0x363CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363CE0u;
label_363ce0:
    // 0x363ce0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x363ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363ce4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x363ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x363ce8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x363CE8u;
    {
        const bool branch_taken_0x363ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x363ce8) {
            ctx->pc = 0x363D20u;
            goto label_363d20;
        }
    }
    ctx->pc = 0x363CF0u;
    // 0x363cf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363cf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363cf8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363cfc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x363cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x363d00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d04: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363d08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363d10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363d18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_363d20:
    // 0x363d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d24: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x363d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363d28: 0x3c034538  lui         $v1, 0x4538
    ctx->pc = 0x363d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17720 << 16));
    // 0x363d2c: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x363d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x363d30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363d30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363d34: 0x0  nop
    ctx->pc = 0x363d34u;
    // NOP
    // 0x363d38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x363d38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363d3c: 0x0  nop
    ctx->pc = 0x363d3cu;
    // NOP
    // 0x363d40: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x363D40u;
    {
        const bool branch_taken_0x363d40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363d40) {
            ctx->pc = 0x363D80u;
            goto label_363d80;
        }
    }
    ctx->pc = 0x363D48u;
    // 0x363d48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363d4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d50: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363d54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363d58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d5c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363d60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363d68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363d70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363d78: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x363D78u;
    {
        const bool branch_taken_0x363d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363d78) {
            ctx->pc = 0x363DDCu;
            goto label_363ddc;
        }
    }
    ctx->pc = 0x363D80u;
label_363d80:
    // 0x363d80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d84: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x363d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363d88: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x363d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x363d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363d90: 0x0  nop
    ctx->pc = 0x363d90u;
    // NOP
    // 0x363d94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x363d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363d98: 0x0  nop
    ctx->pc = 0x363d98u;
    // NOP
    // 0x363d9c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x363D9Cu;
    {
        const bool branch_taken_0x363d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363d9c) {
            ctx->pc = 0x363DDCu;
            goto label_363ddc;
        }
    }
    ctx->pc = 0x363DA4u;
    // 0x363da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363da8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363dac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363db0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363db4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363db8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363dbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363dc0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363dc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363dc8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363dcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363dd0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363dd4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x363DD4u;
    {
        const bool branch_taken_0x363dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363dd4) {
            ctx->pc = 0x363DDCu;
            goto label_363ddc;
        }
    }
    ctx->pc = 0x363DDCu;
label_363ddc:
    // 0x363ddc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x363ddcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363de4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x363de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x363de8: 0x3e00008  jr          $ra
    ctx->pc = 0x363DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363DF0u;
}
