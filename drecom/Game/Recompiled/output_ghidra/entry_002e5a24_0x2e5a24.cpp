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

// Function: entry_002e5a24
// Address: 0x2e5a24 - 0x2e5ac8
void entry_002e5a24_0x2e5a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5a24_0x2e5a24");
#endif

    switch (ctx->pc) {
        case 0x2e5a48u: goto label_2e5a48;
        case 0x2e5a6cu: goto label_2e5a6c;
        default: break;
    }

    ctx->pc = 0x2e5a24u;

    // 0x2e5a24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e5a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e5a28: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2e5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2e5a2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a30: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e5a34: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e5a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e5a38: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2e5a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2e5a3c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x2e5a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2e5a40: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2E5A40u;
    SET_GPR_U32(ctx, 31, 0x2E5A48u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2E5A40u, 0x2E5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A48u;
label_2e5a48:
    // 0x2e5a48: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2e5a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5a4c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2e5a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5a50: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2e5a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5a54: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2e5a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5a58: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2e5a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5a5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5a60: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2e5a60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2e5a64: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x2E5A64u;
    SET_GPR_U32(ctx, 31, 0x2E5A6Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x2E5A64u, 0x2E5A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A6Cu;
label_2e5a6c:
    // 0x2e5a6c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e5a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e5a70: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2e5a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5a74: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x2e5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x2e5a78: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2e5a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2e5a7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5a80: 0x0  nop
    ctx->pc = 0x2e5a80u;
    // NOP
    // 0x2e5a84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5a88: 0x0  nop
    ctx->pc = 0x2e5a88u;
    // NOP
    // 0x2e5a8c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2E5A8Cu;
    {
        const bool branch_taken_0x2e5a8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5a8c) {
            ctx->pc = 0x2E5AC8u;
            return;
        }
    }
    ctx->pc = 0x2E5A94u;
    // 0x2e5a94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5a98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e5a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5aa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5aa4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e5aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5aa8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5aac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5ab0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5ab4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e5ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5ab8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5abc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e5ac0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5AC0u;
    {
        const bool branch_taken_0x2e5ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ac0) {
            ctx->pc = 0x2E5AC8u;
            return;
        }
    }
    ctx->pc = 0x2E5AC8u;
}
