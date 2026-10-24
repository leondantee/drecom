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

// Function: caseD_3
// Address: 0x147ac8 - 0x147b90
void caseD_3_0x147ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x147ac8");
#endif

    switch (ctx->pc) {
        case 0x147ad8u: goto label_147ad8;
        case 0x147aecu: goto label_147aec;
        case 0x147b00u: goto label_147b00;
        case 0x147b1cu: goto label_147b1c;
        case 0x147b58u: goto label_147b58;
        default: break;
    }

    ctx->pc = 0x147ac8u;

    // 0x147ac8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147acc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x147accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x147ad0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x147AD0u;
    SET_GPR_U32(ctx, 31, 0x147AD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147AD0u, 0x147AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AD8u;
label_147ad8:
    // 0x147ad8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147adc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147ae0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x147ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147ae4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x147AE4u;
    SET_GPR_U32(ctx, 31, 0x147AECu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x147AE4u, 0x147AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AECu;
label_147aec:
    // 0x147aec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x147af0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x147af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147af8: 0xc057480  jal         func_15D200
    ctx->pc = 0x147AF8u;
    SET_GPR_U32(ctx, 31, 0x147B00u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x147AF8u, 0x147B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B00u;
label_147b00:
    // 0x147b00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147b04: 0x8c4212f4  lw          $v0, 0x12F4($v0)
    ctx->pc = 0x147b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4852)));
    // 0x147b08: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x147b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x147b0c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x147B0Cu;
    {
        const bool branch_taken_0x147b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b0c) {
            ctx->pc = 0x147B90u;
            return;
        }
    }
    ctx->pc = 0x147B14u;
    // 0x147b14: 0xc058234  jal         func_1608D0
    ctx->pc = 0x147B14u;
    SET_GPR_U32(ctx, 31, 0x147B1Cu);
    ctx->pc = 0x1608D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1608D0u, 0x147B14u, 0x147B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B1Cu;
label_147b1c:
    // 0x147b1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147b20: 0xe4401b5c  swc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x147b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7004), bits); }
    // 0x147b24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147b28: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x147b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147b2c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x147b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x147b30: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x147b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x147b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147b38: 0x0  nop
    ctx->pc = 0x147b38u;
    // NOP
    // 0x147b3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x147b3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147b40: 0x0  nop
    ctx->pc = 0x147b40u;
    // NOP
    // 0x147b44: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x147B44u;
    {
        const bool branch_taken_0x147b44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147b44) {
            ctx->pc = 0x147B90u;
            return;
        }
    }
    ctx->pc = 0x147B4Cu;
    // 0x147b4c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147b4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147b50: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x147B50u;
    SET_GPR_U32(ctx, 31, 0x147B58u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147B50u, 0x147B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B58u;
label_147b58:
    // 0x147b58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147b5c: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x147b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147b60: 0x3c03447c  lui         $v1, 0x447C
    ctx->pc = 0x147b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17532 << 16));
    // 0x147b64: 0x3463208b  ori         $v1, $v1, 0x208B
    ctx->pc = 0x147b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8331);
    // 0x147b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147b6c: 0x0  nop
    ctx->pc = 0x147b6cu;
    // NOP
    // 0x147b70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147b74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147b78: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x147b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x147b7c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x147b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x147b80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147b84: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x147b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x147b88: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x147B88u;
    {
        const bool branch_taken_0x147b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b88) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147B90u;
}
