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

// Function: entry_001a1aec
// Address: 0x1a1aec - 0x1a1c00
void entry_001a1aec_0x1a1aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1aec_0x1a1aec");
#endif

    switch (ctx->pc) {
        case 0x1a1b84u: goto label_1a1b84;
        case 0x1a1ba0u: goto label_1a1ba0;
        case 0x1a1bbcu: goto label_1a1bbc;
        case 0x1a1be0u: goto label_1a1be0;
        default: break;
    }

    ctx->pc = 0x1a1aecu;

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
    ctx->pc = 0x1a1c00u;
}
