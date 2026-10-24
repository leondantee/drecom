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

// Function: H_cam_set
// Address: 0x184aa0 - 0x184c30
void H_cam_set_0x184aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("H_cam_set_0x184aa0");
#endif

    switch (ctx->pc) {
        case 0x184aecu: goto label_184aec;
        case 0x184bb0u: goto label_184bb0;
        case 0x184be0u: goto label_184be0;
        default: break;
    }

    ctx->pc = 0x184aa0u;

    // 0x184aa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x184aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x184aa4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x184aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x184aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184ab0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x184ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x184ab4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x184ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x184ab8: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x184ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x184abc: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x184abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x184ac0: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x184ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x184ac4: 0xafa90058  sw          $t1, 0x58($sp)
    ctx->pc = 0x184ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 9));
    // 0x184ac8: 0xafaa0060  sw          $t2, 0x60($sp)
    ctx->pc = 0x184ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 10));
    // 0x184acc: 0xafab0068  sw          $t3, 0x68($sp)
    ctx->pc = 0x184accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 11));
    // 0x184ad0: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x184ad0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x184ad4: 0xe7ad0078  swc1        $f13, 0x78($sp)
    ctx->pc = 0x184ad4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x184ad8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x184ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x184adc: 0x2470f430  addiu       $s0, $v1, -0xBD0
    ctx->pc = 0x184adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964272));
    // 0x184ae0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x184ae0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x184ae4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x184AE4u;
    {
        const bool branch_taken_0x184ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ae4) {
            ctx->pc = 0x184C08u;
            goto label_184c08;
        }
    }
    ctx->pc = 0x184AECu;
label_184aec:
    // 0x184aec: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x184aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184af0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x184af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x184af4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x184af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x184af8: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x184AF8u;
    {
        const bool branch_taken_0x184af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184af8) {
            ctx->pc = 0x184C00u;
            goto label_184c00;
        }
    }
    ctx->pc = 0x184B00u;
    // 0x184b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184b04: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x184b04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x184b08: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x184b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184b0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x184b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x184b10: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x184b10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x184b14: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x184b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184b18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x184b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x184b1c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x184b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x184b20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x184b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x184b24: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x184b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x184b28: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x184b28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x184b2c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x184b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184b30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x184b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x184b34: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x184b34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x184b38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x184b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x184b3c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x184b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x184b40: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x184b40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x184b44: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x184b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184b48: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x184b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x184b4c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x184b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184b50: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x184b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x184b54: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x184b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184b58: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x184b58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184b5c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x184b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x184b60: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x184b60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x184b64: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x184b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x184b68: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x184b68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184b6c: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x184b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x184b70: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x184b70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x184b74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x184b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x184b78: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x184B78u;
    {
        const bool branch_taken_0x184b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184b78) {
            ctx->pc = 0x184B8Cu;
            goto label_184b8c;
        }
    }
    ctx->pc = 0x184B80u;
    // 0x184b80: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x184b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x184b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x184B84u;
    {
        const bool branch_taken_0x184b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184b84) {
            ctx->pc = 0x184B98u;
            goto label_184b98;
        }
    }
    ctx->pc = 0x184B8Cu;
label_184b8c:
    // 0x184b8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x184b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x184b90: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x184b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x184b94: 0x0  nop
    ctx->pc = 0x184b94u;
    // NOP
label_184b98:
    // 0x184b98: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x184b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x184b9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x184B9Cu;
    {
        const bool branch_taken_0x184b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184b9c) {
            ctx->pc = 0x184BB8u;
            goto label_184bb8;
        }
    }
    ctx->pc = 0x184BA4u;
    // 0x184ba4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x184ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x184ba8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x184BA8u;
    SET_GPR_U32(ctx, 31, 0x184BB0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x184BA8u, 0x184BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BB0u;
label_184bb0:
    // 0x184bb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x184BB0u;
    {
        const bool branch_taken_0x184bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184bb0) {
            ctx->pc = 0x184BC8u;
            goto label_184bc8;
        }
    }
    ctx->pc = 0x184BB8u;
label_184bb8:
    // 0x184bb8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x184bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x184bbc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x184bbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184bc0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x184bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x184bc4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x184bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_184bc8:
    // 0x184bc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x184bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184bcc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x184BCCu;
    {
        const bool branch_taken_0x184bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184bcc) {
            ctx->pc = 0x184BE8u;
            goto label_184be8;
        }
    }
    ctx->pc = 0x184BD4u;
    // 0x184bd4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x184bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x184bd8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x184BD8u;
    SET_GPR_U32(ctx, 31, 0x184BE0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x184BD8u, 0x184BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BE0u;
label_184be0:
    // 0x184be0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x184BE0u;
    {
        const bool branch_taken_0x184be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184be0) {
            ctx->pc = 0x184C18u;
            goto label_184c18;
        }
    }
    ctx->pc = 0x184BE8u;
label_184be8:
    // 0x184be8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x184be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184bec: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x184becu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184bf0: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x184bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x184bf4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x184bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x184bf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x184BF8u;
    {
        const bool branch_taken_0x184bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184bf8) {
            ctx->pc = 0x184C18u;
            goto label_184c18;
        }
    }
    ctx->pc = 0x184C00u;
label_184c00:
    // 0x184c00: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x184c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x184c04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x184c04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_184c08:
    // 0x184c08: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x184c08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x184c0c: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x184C0Cu;
    {
        const bool branch_taken_0x184c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184c0c) {
            ctx->pc = 0x184AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184aec;
        }
    }
    ctx->pc = 0x184C14u;
    // 0x184c14: 0x0  nop
    ctx->pc = 0x184c14u;
    // NOP
label_184c18:
    // 0x184c18: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x184c18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184c24: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x184c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x184c28: 0x3e00008  jr          $ra
    ctx->pc = 0x184C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184C30u;
}
