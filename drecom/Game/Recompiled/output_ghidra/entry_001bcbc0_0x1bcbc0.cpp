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

// Function: entry_001bcbc0
// Address: 0x1bcbc0 - 0x1bcc8c
void entry_001bcbc0_0x1bcbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcbc0_0x1bcbc0");
#endif

    switch (ctx->pc) {
        case 0x1bcbe0u: goto label_1bcbe0;
        case 0x1bcbecu: goto label_1bcbec;
        case 0x1bcc08u: goto label_1bcc08;
        case 0x1bcc24u: goto label_1bcc24;
        default: break;
    }

    ctx->pc = 0x1bcbc0u;

    // 0x1bcbc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcbc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcbc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcbcc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1bcbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1bcbd0: 0x24651b40  addiu       $a1, $v1, 0x1B40
    ctx->pc = 0x1bcbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x1bcbd4: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1bcbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bcbd8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BCBD8u;
    SET_GPR_U32(ctx, 31, 0x1BCBE0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BCBE0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BCBE0u) { return; }
    ctx->pc = 0x1BCBE0u;
label_1bcbe0:
    // 0x1bcbe0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcbe4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BCBE4u;
    SET_GPR_U32(ctx, 31, 0x1BCBECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BCBE4u, 0x1BCBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBECu;
label_1bcbec:
    // 0x1bcbec: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1bcbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1bcbf0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bcbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1bcbf4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bcbf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bcbf8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcbfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bcbfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bcc00: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BCC00u;
    SET_GPR_U32(ctx, 31, 0x1BCC08u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BCC00u, 0x1BCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC08u;
label_1bcc08:
    // 0x1bcc08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bcc08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bcc0c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bcc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcc10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcc14: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x1bcc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1bcc18: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1bcc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1bcc1c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BCC1Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC24u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BCC1Cu, 0x1BCC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC24u;
label_1bcc24:
    // 0x1bcc24: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bcc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1bcc28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcc2c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1bcc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcc30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcc34: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1bcc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcc38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bcc38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bcc3c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1bcc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1bcc40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcc44: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1bcc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcc48: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bcc48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcc4c: 0xc4c01284  lwc1        $f0, 0x1284($a2)
    ctx->pc = 0x1bcc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcc50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bcc50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bcc54: 0xe4c01284  swc1        $f0, 0x1284($a2)
    ctx->pc = 0x1bcc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4740), bits); }
    // 0x1bcc58: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcc5c: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1bcc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcc60: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bcc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcc64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bcc64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcc68: 0x0  nop
    ctx->pc = 0x1bcc68u;
    // NOP
    // 0x1bcc6c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BCC6Cu;
    {
        const bool branch_taken_0x1bcc6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcc6c) {
            ctx->pc = 0x1BCC8Cu;
            return;
        }
    }
    ctx->pc = 0x1BCC74u;
    // 0x1bcc74: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bcc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcc78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bcc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcc7c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1bcc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1bcc80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bcc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcc84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcc88: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1bcc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1bcc8cu;
}
