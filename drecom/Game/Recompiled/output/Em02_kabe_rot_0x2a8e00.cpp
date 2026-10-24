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

// Function: Em02_kabe_rot
// Address: 0x2a8e00 - 0x2a9120
void Em02_kabe_rot_0x2a8e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_kabe_rot_0x2a8e00");
#endif

    switch (ctx->pc) {
        case 0x2a8e40u: goto label_2a8e40;
        case 0x2a8fa0u: goto label_2a8fa0;
        case 0x2a8fd0u: goto label_2a8fd0;
        case 0x2a8fe8u: goto label_2a8fe8;
        case 0x2a9084u: goto label_2a9084;
        case 0x2a90b4u: goto label_2a90b4;
        case 0x2a90ccu: goto label_2a90cc;
        default: break;
    }

    ctx->pc = 0x2a8e00u;

    // 0x2a8e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a8e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a8e04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a8e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a8e08: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2a8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2a8e0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8e10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8e14: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2a8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a8e18: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8E18u;
    {
        const bool branch_taken_0x2a8e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e18) {
            ctx->pc = 0x2A8E34u;
            goto label_2a8e34;
        }
    }
    ctx->pc = 0x2A8E20u;
    // 0x2a8e20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a8e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8e24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8e28: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2a8e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a8e2c: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x2A8E2Cu;
    {
        const bool branch_taken_0x2a8e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e2c) {
            ctx->pc = 0x2A9024u;
            goto label_2a9024;
        }
    }
    ctx->pc = 0x2A8E34u;
label_2a8e34:
    // 0x2a8e34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a8e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a8e38: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A8E38u;
    SET_GPR_U32(ctx, 31, 0x2A8E40u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A8E38u, 0x2A8E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E40u;
label_2a8e40:
    // 0x2a8e40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8e44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8e48: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a8e4c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A8E4Cu;
    {
        const bool branch_taken_0x2a8e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e4c) {
            ctx->pc = 0x2A8EA8u;
            goto label_2a8ea8;
        }
    }
    ctx->pc = 0x2A8E54u;
    // 0x2a8e54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8e58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8e5c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a8e60: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2a8e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e64: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8e6c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a8e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8e74: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8e78: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a8e7c: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2a8e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e80: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8e88: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a8e8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8e90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8e94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a8e98: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2a8e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e9c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8ea4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2a8ea8:
    // 0x2a8ea8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8eac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8eb0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8eb4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A8EB4u;
    {
        const bool branch_taken_0x2a8eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8eb4) {
            ctx->pc = 0x2A8F10u;
            goto label_2a8f10;
        }
    }
    ctx->pc = 0x2A8EBCu;
    // 0x2a8ebc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8ec0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8ec4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8ec8: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2a8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ecc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ed0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8ed4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a8ed8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8edc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8ee0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8ee4: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2a8ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8ee8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8eec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8ef0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a8ef4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8ef8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8efc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8f00: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2a8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8f04: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8f0c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2a8f10:
    // 0x2a8f10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f18: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8f1c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A8F1Cu;
    {
        const bool branch_taken_0x2a8f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8f1c) {
            ctx->pc = 0x2A8F90u;
            goto label_2a8f90;
        }
    }
    ctx->pc = 0x2A8F24u;
    // 0x2a8f24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a8f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a8f30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8f3c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A8F3Cu;
    {
        const bool branch_taken_0x2a8f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a8f3c) {
            ctx->pc = 0x2A8F90u;
            goto label_2a8f90;
        }
    }
    ctx->pc = 0x2A8F44u;
    // 0x2a8f44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f48: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8f50: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2a8f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f54: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a8f58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8f64: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2a8f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f68: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a8f6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8f74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8f78: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2a8f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8f7c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a8f80: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a8f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8f88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8f8c: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2a8f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
label_2a8f90:
    // 0x2a8f90: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x2a8f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8f94: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2a8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a8f98: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2A8F98u;
    SET_GPR_U32(ctx, 31, 0x2A8FA0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2A8F98u, 0x2A8FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FA0u;
label_2a8fa0:
    // 0x2a8fa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8fa4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8fa8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2a8fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2a8fac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2a8facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8fb0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fb4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2a8fb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8fb8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2a8fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8fbc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a8fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a8fc4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2a8fc4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a8fc8: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2A8FC8u;
    SET_GPR_U32(ctx, 31, 0x2A8FD0u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2A8FC8u, 0x2A8FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FD0u;
label_2a8fd0:
    // 0x2a8fd0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a8fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a8fd4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8fd8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2a8fd8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2a8fdc: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x2a8fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a8fe0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2A8FE0u;
    SET_GPR_U32(ctx, 31, 0x2A8FE8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2A8FE0u, 0x2A8FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FE8u;
label_2a8fe8:
    // 0x2a8fe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8fec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8ff0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2a8ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2a8ff4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2a8ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2a8ff8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8ffc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a8ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a9000: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2a9000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a9004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a9008: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a9008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a900c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2a900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a9010: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a9010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a9014: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a9014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a9018: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2a9018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2a901c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2A901Cu;
    {
        const bool branch_taken_0x2a901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a901c) {
            ctx->pc = 0x2A9110u;
            goto label_2a9110;
        }
    }
    ctx->pc = 0x2A9024u;
label_2a9024:
    // 0x2a9024: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a9024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a9028: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a9028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a902c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2a902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a9030: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A9030u;
    {
        const bool branch_taken_0x2a9030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9030) {
            ctx->pc = 0x2A9110u;
            goto label_2a9110;
        }
    }
    ctx->pc = 0x2A9038u;
    // 0x2a9038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a9038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a903c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a9040: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a9040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a9044: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2A9044u;
    {
        const bool branch_taken_0x2a9044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9044) {
            ctx->pc = 0x2A9110u;
            goto label_2a9110;
        }
    }
    ctx->pc = 0x2A904Cu;
    // 0x2a904c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a904cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9050: 0x0  nop
    ctx->pc = 0x2a9050u;
    // NOP
    // 0x2a9054: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a9054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a9058: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a9058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a905c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a905cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9060: 0x0  nop
    ctx->pc = 0x2a9060u;
    // NOP
    // 0x2a9064: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a9064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a9068: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a906c: 0x0  nop
    ctx->pc = 0x2a906cu;
    // NOP
    // 0x2a9070: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a9070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a9074: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x2a9074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9078: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2a9078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a907c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2A907Cu;
    SET_GPR_U32(ctx, 31, 0x2A9084u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2A907Cu, 0x2A9084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9084u;
label_2a9084:
    // 0x2a9084: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a9084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a9088: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a9088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a908c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2a908cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2a9090: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2a9090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9094: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a9094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9098: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2a9098u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a909c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2a909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a90a0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a90a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a90a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a90a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a90a8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2a90a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a90ac: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2A90ACu;
    SET_GPR_U32(ctx, 31, 0x2A90B4u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2A90ACu, 0x2A90B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90B4u;
label_2a90b4:
    // 0x2a90b4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a90b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a90b8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a90b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a90bc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2a90bcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2a90c0: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x2a90c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a90c4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2A90C4u;
    SET_GPR_U32(ctx, 31, 0x2A90CCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2A90C4u, 0x2A90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90CCu;
label_2a90cc:
    // 0x2a90cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a90ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a90d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a90d4: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2a90d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2a90d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a90d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a90dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a90e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a90e4: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2a90e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a90e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a90ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a90f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2a90f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a90f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a90f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a90fc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2a90fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2a9100: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a9100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a9104: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9108: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2a9108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a910c: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2a910cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
label_2a9110:
    // 0x2a9110: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a9110u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9114: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a9114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a9118: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9120u;
}
