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

// Function: entry_002f2b40
// Address: 0x2f2b40 - 0x2f2d80
void entry_002f2b40_0x2f2b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2b40_0x2f2b40");
#endif

    switch (ctx->pc) {
        case 0x2f2c48u: goto label_2f2c48;
        case 0x2f2d6cu: goto label_2f2d6c;
        default: break;
    }

    ctx->pc = 0x2f2b40u;

label_2f2b40:
    // 0x2f2b40: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2f2b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2f2b44:
    // 0x2f2b44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2b48:
    // 0x2f2b48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2b48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f2b4c:
    // 0x2f2b4c: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x2f2b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_2f2b50:
    // 0x2f2b50: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2f2b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2f2b54:
    // 0x2f2b54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2b58:
    // 0x2f2b58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2b58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f2b5c:
    // 0x2f2b5c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2f2b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2f2b60:
    // 0x2f2b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2b64:
    // 0x2f2b64: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2f2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
label_2f2b68:
    // 0x2f2b68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2b6c:
    // 0x2f2b6c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2f2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2f2b70:
    // 0x2f2b70: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2f2b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2f2b74:
    // 0x2f2b74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2f2b78:
    // 0x2f2b78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2b7c:
    // 0x2f2b7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f2b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f2b80:
    // 0x2f2b80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2b84:
    // 0x2f2b84: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2f2b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2b88:
    // 0x2f2b88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2f2b8c:
    // 0x2f2b8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f2b90:
    // 0x2f2b90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f2b94:
    // 0x2f2b94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f2b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f2b98:
    // 0x2f2b98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f2b9c:
    // 0x2f2b9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2ba0:
    // 0x2f2ba0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f2ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2ba4:
    // 0x2f2ba4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f2ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2f2ba8:
    // 0x2f2ba8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2f2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2f2bac:
    // 0x2f2bac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f2bb0:
    // 0x2f2bb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f2bb4:
    // 0x2f2bb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f2bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f2bb8:
    // 0x2f2bb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f2bbc:
    // 0x2f2bbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2bc0:
    // 0x2f2bc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f2bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2bc4:
    // 0x2f2bc4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2f2bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2f2bc8:
    // 0x2f2bc8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2f2bcc:
    // 0x2f2bcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f2bd0:
    // 0x2f2bd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f2bd4:
    // 0x2f2bd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f2bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f2bd8:
    // 0x2f2bd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f2bdc:
    // 0x2f2bdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2be0:
    // 0x2f2be0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f2be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2be4:
    // 0x2f2be4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f2be4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2f2be8:
    // 0x2f2be8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f2be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2f2bec:
    // 0x2f2bec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2f2bf0:
    // 0x2f2bf0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f2bf4:
    // 0x2f2bf4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f2bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f2bf8:
    // 0x2f2bf8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f2bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2f2bfc:
    // 0x2f2bfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f2c00:
    // 0x2f2c00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f2c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f2c04:
    // 0x2f2c04: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2f2c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2f2c08:
    // 0x2f2c08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2f2c0c:
    // 0x2f2c0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2c10:
    // 0x2f2c10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2c14:
    // 0x2f2c14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2c14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f2c18:
    // 0x2f2c18: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2f2c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2f2c1c:
    // 0x2f2c1c: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2f2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
label_2f2c20:
    // 0x2f2c20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2c24:
    // 0x2f2c24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2f2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2f2c28:
    // 0x2f2c28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2c2c:
    // 0x2f2c2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f2c30:
    // 0x2f2c30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2c30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f2c34:
    // 0x2f2c34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2f2c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f2c38:
    // 0x2f2c38: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f2c38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2f2c3c:
    // 0x2f2c3c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2f2c3cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2f2c40:
    // 0x2f2c40: 0xc0634c8  jal         func_18D320
label_2f2c44:
    if (ctx->pc == 0x2F2C44u) {
        ctx->pc = 0x2F2C48u;
        goto label_2f2c48;
    }
    ctx->pc = 0x2F2C40u;
    SET_GPR_U32(ctx, 31, 0x2F2C48u);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2F2C40u, 0x2F2C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C48u;
label_2f2c48:
    // 0x2f2c48: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f2c48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f2c4c:
    // 0x2f2c4c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f2c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2f2c50:
    // 0x2f2c50: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f2c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2f2c54:
    // 0x2f2c54: 0x1203004a  beq         $s0, $v1, . + 4 + (0x4A << 2)
label_2f2c58:
    if (ctx->pc == 0x2F2C58u) {
        ctx->pc = 0x2F2C5Cu;
        goto label_2f2c5c;
    }
    ctx->pc = 0x2F2C54u;
    {
        const bool branch_taken_0x2f2c54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f2c54) {
            ctx->pc = 0x2F2D80u;
            return;
        }
    }
    ctx->pc = 0x2F2C5Cu;
label_2f2c5c:
    // 0x2f2c5c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2f2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2f2c60:
    // 0x2f2c60: 0xa202034d  sb          $v0, 0x34D($s0)
    ctx->pc = 0x2f2c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 2));
label_2f2c64:
    // 0x2f2c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2c68:
    // 0x2f2c68: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2f2c68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2f2c6c:
    // 0x2f2c6c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f2c70:
    // 0x2f2c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c74:
    // 0x2f2c74: 0x0  nop
    ctx->pc = 0x2f2c74u;
    // NOP
label_2f2c78:
    // 0x2f2c78: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f2c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2f2c7c:
    // 0x2f2c7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f2c80:
    // 0x2f2c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c84:
    // 0x2f2c84: 0x0  nop
    ctx->pc = 0x2f2c84u;
    // NOP
label_2f2c88:
    // 0x2f2c88: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f2c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2f2c8c:
    // 0x2f2c8c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f2c90:
    // 0x2f2c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2c94:
    // 0x2f2c94: 0x0  nop
    ctx->pc = 0x2f2c94u;
    // NOP
label_2f2c98:
    // 0x2f2c98: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f2c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2f2c9c:
    // 0x2f2c9c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2f2ca0:
    // 0x2f2ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2ca4:
    // 0x2f2ca4: 0x0  nop
    ctx->pc = 0x2f2ca4u;
    // NOP
label_2f2ca8:
    // 0x2f2ca8: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f2ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2f2cac:
    // 0x2f2cac: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x2f2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_2f2cb0:
    // 0x2f2cb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f2cb4:
    // 0x2f2cb4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2f2cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2cb8:
    // 0x2f2cb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f2cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f2cbc:
    // 0x2f2cbc: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f2cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2f2cc0:
    // 0x2f2cc0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2cc4:
    // 0x2f2cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2cc8:
    // 0x2f2cc8: 0x0  nop
    ctx->pc = 0x2f2cc8u;
    // NOP
label_2f2ccc:
    // 0x2f2ccc: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2f2cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2f2cd0:
    // 0x2f2cd0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2cd4:
    // 0x2f2cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2cd8:
    // 0x2f2cd8: 0x0  nop
    ctx->pc = 0x2f2cd8u;
    // NOP
label_2f2cdc:
    // 0x2f2cdc: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2f2cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2f2ce0:
    // 0x2f2ce0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2f2ce4:
    // 0x2f2ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2ce8:
    // 0x2f2ce8: 0x0  nop
    ctx->pc = 0x2f2ce8u;
    // NOP
label_2f2cec:
    // 0x2f2cec: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2f2cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2f2cf0:
    // 0x2f2cf0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2cf4:
    // 0x2f2cf4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f2cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2cf8:
    // 0x2f2cf8: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2f2cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2f2cfc:
    // 0x2f2cfc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2d00:
    // 0x2f2d00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f2d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2d04:
    // 0x2f2d04: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2f2d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2f2d08:
    // 0x2f2d08: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2f2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2f2d0c:
    // 0x2f2d0c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f2d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2d10:
    // 0x2f2d10: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2f2d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2f2d14:
    // 0x2f2d14: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2f2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_2f2d18:
    // 0x2f2d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f2d1c:
    // 0x2f2d1c: 0x0  nop
    ctx->pc = 0x2f2d1cu;
    // NOP
label_2f2d20:
    // 0x2f2d20: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2f2d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2f2d24:
    // 0x2f2d24: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2f2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2f2d28:
    // 0x2f2d28: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2f2d28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2f2d2c:
    // 0x2f2d2c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2f2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2f2d30:
    // 0x2f2d30: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2f2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2f2d34:
    // 0x2f2d34: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2f2d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2f2d38:
    // 0x2f2d38: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2f2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2f2d3c:
    // 0x2f2d3c: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x2f2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
label_2f2d40:
    // 0x2f2d40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f2d44:
    // 0x2f2d44: 0xa20202ab  sb          $v0, 0x2AB($s0)
    ctx->pc = 0x2f2d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 683), (uint8_t)GPR_U32(ctx, 2));
label_2f2d48:
    // 0x2f2d48: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f2d48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2f2d4c:
    // 0x2f2d4c: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2f2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2f2d50:
    // 0x2f2d50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f2d54:
    // 0x2f2d54: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2f2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2f2d58:
    // 0x2f2d58: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2f2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2f2d5c:
    // 0x2f2d5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f2d60:
    // 0x2f2d60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2d64:
    // 0x2f2d64: 0x40f809  jalr        $v0
label_2f2d68:
    if (ctx->pc == 0x2F2D68u) {
        ctx->pc = 0x2F2D6Cu;
        goto label_2f2d6c;
    }
    ctx->pc = 0x2F2D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F2D6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2D64u, 0x2F2D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2D6Cu;
label_2f2d6c:
    // 0x2f2d6c: 0x8e020ab8  lw          $v0, 0xAB8($s0)
    ctx->pc = 0x2f2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2f2d70:
    // 0x2f2d70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f2d74:
    // 0x2f2d74: 0xae020ab8  sw          $v0, 0xAB8($s0)
    ctx->pc = 0x2f2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 2));
label_2f2d78:
    // 0x2f2d78: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f2d7c:
    if (ctx->pc == 0x2F2D7Cu) {
        ctx->pc = 0x2F2D80u;
        goto label_fallthrough_0x2f2d78;
    }
    ctx->pc = 0x2F2D78u;
    {
        const bool branch_taken_0x2f2d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2d78) {
            ctx->pc = 0x2F2D88u;
            return;
        }
    }
label_fallthrough_0x2f2d78:
    ctx->pc = 0x2F2D80u;
}
