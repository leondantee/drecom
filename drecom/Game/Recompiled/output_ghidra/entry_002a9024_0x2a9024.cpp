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

// Function: entry_002a9024
// Address: 0x2a9024 - 0x2a9110
void entry_002a9024_0x2a9024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a9024_0x2a9024");
#endif

    switch (ctx->pc) {
        case 0x2a9084u: goto label_2a9084;
        case 0x2a90b4u: goto label_2a90b4;
        case 0x2a90ccu: goto label_2a90cc;
        default: break;
    }

    ctx->pc = 0x2a9024u;

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
            return;
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
            return;
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
    ctx->pc = 0x2a9110u;
}
