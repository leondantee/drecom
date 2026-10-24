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

// Function: Em0d_dm_ck
// Address: 0x234b20 - 0x234ff0
void Em0d_dm_ck_0x234b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_dm_ck_0x234b20");
#endif

    switch (ctx->pc) {
        case 0x234bc0u: goto label_234bc0;
        case 0x234bccu: goto label_234bcc;
        case 0x234be4u: goto label_234be4;
        case 0x234bf0u: goto label_234bf0;
        case 0x234c14u: goto label_234c14;
        case 0x234c4cu: goto label_234c4c;
        case 0x234cc8u: goto label_234cc8;
        case 0x234d1cu: goto label_234d1c;
        case 0x234d48u: goto label_234d48;
        case 0x234d90u: goto label_234d90;
        case 0x234ddcu: goto label_234ddc;
        case 0x234de8u: goto label_234de8;
        case 0x234e00u: goto label_234e00;
        case 0x234e0cu: goto label_234e0c;
        case 0x234e24u: goto label_234e24;
        case 0x234e30u: goto label_234e30;
        case 0x234e48u: goto label_234e48;
        case 0x234e54u: goto label_234e54;
        case 0x234e6cu: goto label_234e6c;
        case 0x234e78u: goto label_234e78;
        case 0x234e90u: goto label_234e90;
        case 0x234e9cu: goto label_234e9c;
        default: break;
    }

    ctx->pc = 0x234b20u;

    // 0x234b20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x234b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x234b24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x234b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x234b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x234b2c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x234b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x234b30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234b34: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x234b34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x234b38: 0x10600128  beqz        $v1, . + 4 + (0x128 << 2)
    ctx->pc = 0x234B38u;
    {
        const bool branch_taken_0x234b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b38) {
            ctx->pc = 0x234FDCu;
            goto label_234fdc;
        }
    }
    ctx->pc = 0x234B40u;
    // 0x234b40: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234b44: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x234b44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x234b48: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234b4c: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x234b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x234b50: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234b54: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x234b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x234b58: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234b5c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x234b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x234b60: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234b64: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x234b64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x234b68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x234b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x234b6c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x234B6Cu;
    {
        const bool branch_taken_0x234b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234b6c) {
            ctx->pc = 0x234C1Cu;
            goto label_234c1c;
        }
    }
    ctx->pc = 0x234B74u;
    // 0x234b74: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234b78: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x234b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234b7c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x234b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x234b80: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234b84: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x234b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234b88: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x234b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x234b8c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234b90: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x234b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234b94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x234b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x234b98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x234b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x234b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234ba0: 0x0  nop
    ctx->pc = 0x234ba0u;
    // NOP
    // 0x234ba4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x234ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x234ba8: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x234ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x234bac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234bacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234bb0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x234bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x234bb4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234bb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234bb8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234BB8u;
    SET_GPR_U32(ctx, 31, 0x234BC0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234BB8u, 0x234BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BC0u;
label_234bc0:
    // 0x234bc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234bc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234bc4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234BC4u;
    SET_GPR_U32(ctx, 31, 0x234BCCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234BC4u, 0x234BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BCCu;
label_234bcc:
    // 0x234bcc: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x234bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x234bd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234bd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234bd4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x234bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x234bd8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234bd8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234bdc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234BDCu;
    SET_GPR_U32(ctx, 31, 0x234BE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234BDCu, 0x234BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BE4u;
label_234be4:
    // 0x234be4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234be4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234be8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234BE8u;
    SET_GPR_U32(ctx, 31, 0x234BF0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234BE8u, 0x234BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BF0u;
label_234bf0:
    // 0x234bf0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234bf4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x234bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x234bf8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x234bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x234bfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x234bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234c00: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x234c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x234c04: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x234c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x234c08: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x234c08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234c0c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x234C0Cu;
    SET_GPR_U32(ctx, 31, 0x234C14u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x234C0Cu, 0x234C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C14u;
label_234c14:
    // 0x234c14: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x234C14u;
    {
        const bool branch_taken_0x234c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234c14) {
            ctx->pc = 0x234FDCu;
            goto label_234fdc;
        }
    }
    ctx->pc = 0x234C1Cu;
label_234c1c:
    // 0x234c1c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c20: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x234c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x234c24: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x234c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234c28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x234c28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x234c2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234c30: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x234c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x234c34: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x234c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234c38: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x234c38u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x234c3c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x234c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c40: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x234c40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x234c44: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x234C44u;
    SET_GPR_U32(ctx, 31, 0x234C4Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x234C44u, 0x234C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C4Cu;
label_234c4c:
    // 0x234c4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c50: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x234c50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x234c54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234c58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x234c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x234c5c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234C5Cu;
    {
        const bool branch_taken_0x234c5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x234c5c) {
            ctx->pc = 0x234C70u;
            goto label_234c70;
        }
    }
    ctx->pc = 0x234C64u;
    // 0x234c64: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x234c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234c6c: 0xa440005e  sh          $zero, 0x5E($v0)
    ctx->pc = 0x234c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 0));
label_234c70:
    // 0x234c70: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c74: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x234c74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x234c78: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x234c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x234c7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x234c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x234c80: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x234c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x234c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234c88: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x234c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234c8c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x234c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x234c90: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c94: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x234c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234c98: 0x8462005e  lh          $v0, 0x5E($v1)
    ctx->pc = 0x234c98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x234c9c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x234c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x234ca0: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x234ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x234ca4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ca8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x234ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234cac: 0x8442005e  lh          $v0, 0x5E($v0)
    ctx->pc = 0x234cacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
    // 0x234cb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234cb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x234cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x234cb8: 0x441001a  bgez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x234CB8u;
    {
        const bool branch_taken_0x234cb8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x234cb8) {
            ctx->pc = 0x234D24u;
            goto label_234d24;
        }
    }
    ctx->pc = 0x234CC0u;
    // 0x234cc0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x234CC0u;
    SET_GPR_U32(ctx, 31, 0x234CC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x234CC0u, 0x234CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CC8u;
label_234cc8:
    // 0x234cc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x234cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x234ccc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x234cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x234cd0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x234cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x234cd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x234cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x234cd8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x234cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234cdc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x234cdcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x234ce0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ce4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x234ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234ce8: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x234ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x234cec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234cf0: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x234cf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x234cf4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x234cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234cf8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x234cf8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x234cfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234d00: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x234d00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x234d04: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x234d04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234d08: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x234d08u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x234d0c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x234d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d10: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x234d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x234d14: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x234D14u;
    SET_GPR_U32(ctx, 31, 0x234D1Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x234D14u, 0x234D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D1Cu;
label_234d1c:
    // 0x234d1c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x234D1Cu;
    {
        const bool branch_taken_0x234d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d1c) {
            ctx->pc = 0x234EA4u;
            goto label_234ea4;
        }
    }
    ctx->pc = 0x234D24u;
label_234d24:
    // 0x234d24: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d28: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x234d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x234d2c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x234d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x234d30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x234d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234d34: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x234d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x234d38: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x234d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x234d3c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x234d3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234d40: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x234D40u;
    SET_GPR_U32(ctx, 31, 0x234D48u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x234D40u, 0x234D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D48u;
label_234d48:
    // 0x234d48: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d4c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x234d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234d50: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x234d50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x234d54: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x234d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x234d58: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x234d58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x234d5c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x234d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234d64: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x234d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x234d68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234d6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x234d6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x234d70: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234D70u;
    {
        const bool branch_taken_0x234d70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x234d70) {
            ctx->pc = 0x234D84u;
            goto label_234d84;
        }
    }
    ctx->pc = 0x234D78u;
    // 0x234d78: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x234d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234d80: 0xa440005c  sh          $zero, 0x5C($v0)
    ctx->pc = 0x234d80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 0));
label_234d84:
    // 0x234d84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x234d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x234d88: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x234D88u;
    SET_GPR_U32(ctx, 31, 0x234D90u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x234D90u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234D90u) { return; }
    ctx->pc = 0x234D90u;
label_234d90:
    // 0x234d90: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d94: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x234d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234d98: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x234d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x234d9c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234da0: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x234da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234da4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x234da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x234da8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234dac: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x234dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234db0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x234db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x234db4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x234db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x234db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234dbc: 0x0  nop
    ctx->pc = 0x234dbcu;
    // NOP
    // 0x234dc0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x234dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x234dc4: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234dc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234dc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234dcc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234dd0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234dd0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234dd4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234DD4u;
    SET_GPR_U32(ctx, 31, 0x234DDCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234DD4u, 0x234DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DDCu;
label_234ddc:
    // 0x234ddc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234ddcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234de0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234DE0u;
    SET_GPR_U32(ctx, 31, 0x234DE8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234DE0u, 0x234DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DE8u;
label_234de8:
    // 0x234de8: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234dec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234df0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234df4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234df4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234df8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234DF8u;
    SET_GPR_U32(ctx, 31, 0x234E00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234DF8u, 0x234E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E00u;
label_234e00:
    // 0x234e00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234e00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234e04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234E04u;
    SET_GPR_U32(ctx, 31, 0x234E0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234E04u, 0x234E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E0Cu;
label_234e0c:
    // 0x234e0c: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234e10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234e10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e14: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234e18: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234e18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e1c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234E1Cu;
    SET_GPR_U32(ctx, 31, 0x234E24u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234E1Cu, 0x234E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E24u;
label_234e24:
    // 0x234e24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234e24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234e28: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234E28u;
    SET_GPR_U32(ctx, 31, 0x234E30u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234E28u, 0x234E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E30u;
label_234e30:
    // 0x234e30: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234e34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234e34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e38: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234e3c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234e3cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e40: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234E40u;
    SET_GPR_U32(ctx, 31, 0x234E48u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234E40u, 0x234E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E48u;
label_234e48:
    // 0x234e48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234e48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234e4c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234E4Cu;
    SET_GPR_U32(ctx, 31, 0x234E54u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234E4Cu, 0x234E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E54u;
label_234e54:
    // 0x234e54: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234e58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234e58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e5c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234e60: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234e60u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e64: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234E64u;
    SET_GPR_U32(ctx, 31, 0x234E6Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234E64u, 0x234E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E6Cu;
label_234e6c:
    // 0x234e6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234e6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234e70: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234E70u;
    SET_GPR_U32(ctx, 31, 0x234E78u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234E70u, 0x234E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E78u;
label_234e78:
    // 0x234e78: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234e7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234e7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e80: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234e84: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234e84u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e88: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234E88u;
    SET_GPR_U32(ctx, 31, 0x234E90u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234E88u, 0x234E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E90u;
label_234e90:
    // 0x234e90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234e90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234e94: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234E94u;
    SET_GPR_U32(ctx, 31, 0x234E9Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234E94u, 0x234E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E9Cu;
label_234e9c:
    // 0x234e9c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x234E9Cu;
    {
        const bool branch_taken_0x234e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234e9c) {
            ctx->pc = 0x234FDCu;
            goto label_234fdc;
        }
    }
    ctx->pc = 0x234EA4u;
label_234ea4:
    // 0x234ea4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ea8: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x234ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x234eac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x234eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x234eb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x234eb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x234eb4: 0x4600026  bltz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x234EB4u;
    {
        const bool branch_taken_0x234eb4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x234eb4) {
            ctx->pc = 0x234F50u;
            goto label_234f50;
        }
    }
    ctx->pc = 0x234EBCu;
    // 0x234ebc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ec0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x234ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x234ec4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x234ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x234ec8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x234ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x234ecc: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x234ECCu;
    {
        const bool branch_taken_0x234ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x234ecc) {
            ctx->pc = 0x234F1Cu;
            goto label_234f1c;
        }
    }
    ctx->pc = 0x234ED4u;
    // 0x234ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234ed8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234ED8u;
    {
        const bool branch_taken_0x234ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x234ed8) {
            ctx->pc = 0x234EE8u;
            goto label_234ee8;
        }
    }
    ctx->pc = 0x234EE0u;
    // 0x234ee0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x234EE0u;
    {
        const bool branch_taken_0x234ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ee0) {
            ctx->pc = 0x234EE8u;
            goto label_234ee8;
        }
    }
    ctx->pc = 0x234EE8u;
label_234ee8:
    // 0x234ee8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234eec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ef0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x234ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x234ef4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ef8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x234ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x234efc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x234f00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f04: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x234f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f0c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x234f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x234f14: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x234F14u;
    {
        const bool branch_taken_0x234f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234f14) {
            ctx->pc = 0x234FDCu;
            goto label_234fdc;
        }
    }
    ctx->pc = 0x234F1Cu;
label_234f1c:
    // 0x234f1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234f20: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x234f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x234f28: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f2c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x234f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x234f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x234f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f40: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x234f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x234f48: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x234F48u;
    {
        const bool branch_taken_0x234f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234f48) {
            ctx->pc = 0x234FDCu;
            goto label_234fdc;
        }
    }
    ctx->pc = 0x234F50u;
label_234f50:
    // 0x234f50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f54: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x234f54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x234f58: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x234f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x234f5c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x234f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x234f60: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x234F60u;
    {
        const bool branch_taken_0x234f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x234f60) {
            ctx->pc = 0x234FB0u;
            goto label_234fb0;
        }
    }
    ctx->pc = 0x234F68u;
    // 0x234f68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234f6c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234F6Cu;
    {
        const bool branch_taken_0x234f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x234f6c) {
            ctx->pc = 0x234F7Cu;
            goto label_234f7c;
        }
    }
    ctx->pc = 0x234F74u;
    // 0x234f74: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x234F74u;
    {
        const bool branch_taken_0x234f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234f74) {
            ctx->pc = 0x234F7Cu;
            goto label_234f7c;
        }
    }
    ctx->pc = 0x234F7Cu;
label_234f7c:
    // 0x234f7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x234f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234f80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x234f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x234f88: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f8c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x234f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x234f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f98: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x234f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x234fa0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234fa4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x234fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x234fa8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x234FA8u;
    {
        const bool branch_taken_0x234fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234fa8) {
            ctx->pc = 0x234FDCu;
            goto label_234fdc;
        }
    }
    ctx->pc = 0x234FB0u;
label_234fb0:
    // 0x234fb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x234fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234fb4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234fb8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x234fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x234fbc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234fc0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x234fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x234fc4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234fc8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x234fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x234fcc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234fd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x234fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x234fd4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234fd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x234fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_234fdc:
    // 0x234fdc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x234fdcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234fe4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x234fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x234fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x234FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234FF0u;
}
