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

// Function: Title_capcom_logo
// Address: 0x1a1aa0 - 0x1a1d00
void Title_capcom_logo_0x1a1aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Title_capcom_logo_0x1a1aa0");
#endif

    switch (ctx->pc) {
        case 0x1a1ab8u: goto label_1a1ab8;
        case 0x1a1b84u: goto label_1a1b84;
        case 0x1a1ba0u: goto label_1a1ba0;
        case 0x1a1bbcu: goto label_1a1bbc;
        case 0x1a1be0u: goto label_1a1be0;
        case 0x1a1c4cu: goto label_1a1c4c;
        case 0x1a1c94u: goto label_1a1c94;
        case 0x1a1cb4u: goto label_1a1cb4;
        case 0x1a1cccu: goto label_1a1ccc;
        case 0x1a1cd8u: goto label_1a1cd8;
        default: break;
    }

    ctx->pc = 0x1a1aa0u;

    // 0x1a1aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1aa4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1a1aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a1aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1aac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1a1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1a1ab0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1ab4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1a1ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1a1ab8:
    // 0x1a1ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1abc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1a1abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1a1ac0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a1ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a1ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1ac8: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1A1AC8u;
    {
        const bool branch_taken_0x1a1ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1ac8) {
            ctx->pc = 0x1A1C88u;
            goto label_1a1c88;
        }
    }
    ctx->pc = 0x1A1AD0u;
    // 0x1a1ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1ad4: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1A1AD4u;
    {
        const bool branch_taken_0x1a1ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1ad4) {
            ctx->pc = 0x1A1C00u;
            goto label_1a1c00;
        }
    }
    ctx->pc = 0x1A1ADCu;
    // 0x1a1adc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1ADCu;
    {
        const bool branch_taken_0x1a1adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1adc) {
            ctx->pc = 0x1A1AECu;
            goto label_1a1aec;
        }
    }
    ctx->pc = 0x1A1AE4u;
    // 0x1a1ae4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1A1AE4u;
    {
        const bool branch_taken_0x1a1ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ae4) {
            ctx->pc = 0x1A1CA0u;
            goto label_1a1ca0;
        }
    }
    ctx->pc = 0x1A1AECu;
label_1a1aec:
    // 0x1a1aec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1af0: 0x24500028  addiu       $s0, $v0, 0x28
    ctx->pc = 0x1a1af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1a1af4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1af8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a1afc: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x1a1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x1a1b00: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x1a1b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x1a1b04: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a1b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a1b08: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a1b0c: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1a1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x1a1b10: 0x34434040  ori         $v1, $v0, 0x4040
    ctx->pc = 0x1a1b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1a1b14: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a1b18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1b1c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1a1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a1b20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a1b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a1b24: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x1a1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x1a1b28: 0x34431400  ori         $v1, $v0, 0x1400
    ctx->pc = 0x1a1b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1a1b2c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1a1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a1b30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a1b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1b34: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a1b38: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1a1b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a1b3c: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1a1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a1b40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1b44: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a1b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a1b48: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x1a1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a1b4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1b50: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x1a1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x1a1b54: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1a1b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1a1b58: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x1a1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a1b5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a1b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1b60: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a1b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a1b64: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x1a1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a1b68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a1b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1b6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a1b70: 0x2442ecf8  addiu       $v0, $v0, -0x1308
    ctx->pc = 0x1a1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962424));
    // 0x1a1b74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a1b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a1b78: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a1b78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1b7c: 0xc05e990  jal         func_17A640
    ctx->pc = 0x1A1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A1B84u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x1A1B7Cu, 0x1A1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B84u;
label_1a1b84:
    // 0x1a1b84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1b88: 0x240400cf  addiu       $a0, $zero, 0xCF
    ctx->pc = 0x1a1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x1a1b8c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1a1b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1a1b90: 0x24063600  addiu       $a2, $zero, 0x3600
    ctx->pc = 0x1a1b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13824));
    // 0x1a1b94: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1a1b94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a1b98: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x1A1B98u;
    SET_GPR_U32(ctx, 31, 0x1A1BA0u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x1A1B98u, 0x1A1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BA0u;
label_1a1ba0:
    // 0x1a1ba0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1ba4: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1a1ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1ba8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1bac: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a1bb0: 0x24451d00  addiu       $a1, $v0, 0x1D00
    ctx->pc = 0x1a1bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7424));
    // 0x1a1bb4: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x1A1BB4u;
    SET_GPR_U32(ctx, 31, 0x1A1BBCu);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x1A1BB4u, 0x1A1BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BBCu;
label_1a1bbc:
    // 0x1a1bbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1bc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a1bc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1bc4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a1bc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1bc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a1bc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1bcc: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1a1bccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1bd0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1a1bd0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1bd4: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1a1bd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a1bd8: 0xc059190  jal         func_164640
    ctx->pc = 0x1A1BD8u;
    SET_GPR_U32(ctx, 31, 0x1A1BE0u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A1BD8u, 0x1A1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BE0u;
label_1a1be0:
    // 0x1a1be0: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1a1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1a1be4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1be8: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1a1be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1a1bec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1bf0: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a1bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a1bf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1bf8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a1bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1bfc: 0x0  nop
    ctx->pc = 0x1a1bfcu;
    // NOP
label_1a1c00:
    // 0x1a1c00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1c04: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a1c08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1C08u;
    {
        const bool branch_taken_0x1a1c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c08) {
            ctx->pc = 0x1A1C28u;
            goto label_1a1c28;
        }
    }
    ctx->pc = 0x1A1C10u;
    // 0x1a1c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a1c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a1c14: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x1a1c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x1a1c18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a1c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a1c1c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1a1c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1a1c20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A1C20u;
    {
        const bool branch_taken_0x1a1c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c20) {
            ctx->pc = 0x1A1C60u;
            goto label_1a1c60;
        }
    }
    ctx->pc = 0x1A1C28u;
label_1a1c28:
    // 0x1a1c28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a1c28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1c2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a1c2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1c30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1c34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a1c34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1c38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1a1c38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1c3c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a1c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1c40: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1a1c40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a1c44: 0xc059190  jal         func_164640
    ctx->pc = 0x1A1C44u;
    SET_GPR_U32(ctx, 31, 0x1A1C4Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A1C44u, 0x1A1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C4Cu;
label_1a1c4c:
    // 0x1a1c4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1c50: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a1c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a1c54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1c58: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a1c58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1c5c: 0x0  nop
    ctx->pc = 0x1a1c5cu;
    // NOP
label_1a1c60:
    // 0x1a1c60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1c64: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a1c68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1C68u;
    {
        const bool branch_taken_0x1a1c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c68) {
            ctx->pc = 0x1A1CA0u;
            goto label_1a1ca0;
        }
    }
    ctx->pc = 0x1A1C70u;
    // 0x1a1c70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1c74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1a1c78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1c7c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1a1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x1a1c80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1C80u;
    {
        const bool branch_taken_0x1a1c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c80) {
            ctx->pc = 0x1A1CA0u;
            goto label_1a1ca0;
        }
    }
    ctx->pc = 0x1A1C88u;
label_1a1c88:
    // 0x1a1c88: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a1c88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1c8c: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A1C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A1C94u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A1C8Cu, 0x1A1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C94u;
label_1a1c94:
    // 0x1a1c94: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1a1c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a1c98: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1C98u;
    {
        const bool branch_taken_0x1a1c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c98) {
            ctx->pc = 0x1A1CE0u;
            goto label_1a1ce0;
        }
    }
    ctx->pc = 0x1A1CA0u;
label_1a1ca0:
    // 0x1a1ca0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a1ca4: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a1ca8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1a1ca8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a1cac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A1CACu;
    SET_GPR_U32(ctx, 31, 0x1A1CB4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A1CACu, 0x1A1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CB4u;
label_1a1cb4:
    // 0x1a1cb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1cb8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a1cbc: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a1cc0: 0x24650058  addiu       $a1, $v1, 0x58
    ctx->pc = 0x1a1cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1a1cc4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A1CC4u;
    SET_GPR_U32(ctx, 31, 0x1A1CCCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A1CC4u, 0x1A1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CCCu;
label_1a1ccc:
    // 0x1a1ccc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1cd0: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A1CD0u;
    SET_GPR_U32(ctx, 31, 0x1A1CD8u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A1CD0u, 0x1A1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CD8u;
label_1a1cd8:
    // 0x1a1cd8: 0x1000ff77  b           . + 4 + (-0x89 << 2)
    ctx->pc = 0x1A1CD8u;
    {
        const bool branch_taken_0x1a1cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cd8) {
            ctx->pc = 0x1A1AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1ab8;
        }
    }
    ctx->pc = 0x1A1CE0u;
label_1a1ce0:
    // 0x1a1ce0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1ce4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1ce8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a1ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1cec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a1cecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1cf4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1D00u;
}
