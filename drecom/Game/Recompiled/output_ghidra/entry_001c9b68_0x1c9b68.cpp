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

// Function: entry_001c9b68
// Address: 0x1c9b68 - 0x1c9c78
void entry_001c9b68_0x1c9b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9b68_0x1c9b68");
#endif

    switch (ctx->pc) {
        case 0x1c9b78u: goto label_1c9b78;
        case 0x1c9b84u: goto label_1c9b84;
        case 0x1c9b9cu: goto label_1c9b9c;
        case 0x1c9bacu: goto label_1c9bac;
        case 0x1c9bc8u: goto label_1c9bc8;
        case 0x1c9c20u: goto label_1c9c20;
        case 0x1c9c38u: goto label_1c9c38;
        default: break;
    }

    ctx->pc = 0x1c9b68u;

    // 0x1c9b68: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9b6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c9b6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9b70: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C9B70u;
    SET_GPR_U32(ctx, 31, 0x1C9B78u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C9B70u, 0x1C9B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B78u;
label_1c9b78:
    // 0x1c9b78: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9b7c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C9B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B84u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C9B7Cu, 0x1C9B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B84u;
label_1c9b84:
    // 0x1c9b84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9b88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9b8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c9b8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c9b90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c9b90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9b94: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C9B94u;
    SET_GPR_U32(ctx, 31, 0x1C9B9Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C9B94u, 0x1C9B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B9Cu;
label_1c9b9c:
    // 0x1c9b9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c9b9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c9ba0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c9ba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9ba4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C9BA4u;
    SET_GPR_U32(ctx, 31, 0x1C9BACu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C9BA4u, 0x1C9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BACu;
label_1c9bac:
    // 0x1c9bac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c9bacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c9bb0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9bb4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9bb8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c9bbc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1c9bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1c9bc0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1C9BC0u;
    SET_GPR_U32(ctx, 31, 0x1C9BC8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1C9BC0u, 0x1C9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BC8u;
label_1c9bc8:
    // 0x1c9bc8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c9bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c9bcc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9bd0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1c9bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9bd4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1c9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1c9bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9bdc: 0x0  nop
    ctx->pc = 0x1c9bdcu;
    // NOP
    // 0x1c9be0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c9be0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c9be4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c9be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9be8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c9be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9bec: 0x0  nop
    ctx->pc = 0x1c9becu;
    // NOP
    // 0x1c9bf0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1C9BF0u;
    {
        const bool branch_taken_0x1c9bf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9bf0) {
            ctx->pc = 0x1C9C78u;
            return;
        }
    }
    ctx->pc = 0x1C9BF8u;
    // 0x1c9bf8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9bfc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c04: 0x24851b40  addiu       $a1, $a0, 0x1B40
    ctx->pc = 0x1c9c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1c9c08: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c9c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c9c0c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1c9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c9c10: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c9c10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c9c14: 0x24660170  addiu       $a2, $v1, 0x170
    ctx->pc = 0x1c9c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x1c9c18: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C9C18u;
    SET_GPR_U32(ctx, 31, 0x1C9C20u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C9C18u, 0x1C9C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C20u;
label_1c9c20:
    // 0x1c9c20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c24: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c28: 0xc44c1b40  lwc1        $f12, 0x1B40($v0)
    ctx->pc = 0x1c9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9c2c: 0xc48d1b48  lwc1        $f13, 0x1B48($a0)
    ctx->pc = 0x1c9c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9c30: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1C9C30u;
    SET_GPR_U32(ctx, 31, 0x1C9C38u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1C9C30u, 0x1C9C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C38u;
label_1c9c38:
    // 0x1c9c38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c3c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1c9c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1c9c40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c44: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c9c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c9c4c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1c9c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1c9c50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c9c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c9c58: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c9c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9c60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c9c64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9c68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9c6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c9c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c9c70: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1C9C70u;
    {
        const bool branch_taken_0x1c9c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c70) {
            ctx->pc = 0x1C9F10u;
            return;
        }
    }
    ctx->pc = 0x1C9C78u;
}
