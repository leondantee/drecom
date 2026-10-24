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

// Function: entry_00124ef8
// Address: 0x124ef8 - 0x124fac
void entry_00124ef8_0x124ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124ef8_0x124ef8");
#endif

    switch (ctx->pc) {
        case 0x124f14u: goto label_124f14;
        case 0x124f38u: goto label_124f38;
        case 0x124f6cu: goto label_124f6c;
        default: break;
    }

    ctx->pc = 0x124ef8u;

    // 0x124ef8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x124ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124efc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x124efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x124f00: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x124f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x124f04: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x124f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x124f08: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x124f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x124f0c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x124F0Cu;
    SET_GPR_U32(ctx, 31, 0x124F14u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x124F0Cu, 0x124F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F14u;
label_124f14:
    // 0x124f14: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x124f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124f18: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x124f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124f1c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x124f1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x124f20: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x124f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124f24: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x124f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124f28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x124f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x124f2c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x124f2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x124f30: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x124F30u;
    SET_GPR_U32(ctx, 31, 0x124F38u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x124F30u, 0x124F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F38u;
label_124f38:
    // 0x124f38: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x124f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x124f3c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x124f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124f40: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x124f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x124f44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x124f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124f48: 0x0  nop
    ctx->pc = 0x124f48u;
    // NOP
    // 0x124f4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x124f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124f50: 0x0  nop
    ctx->pc = 0x124f50u;
    // NOP
    // 0x124f54: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x124F54u;
    {
        const bool branch_taken_0x124f54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124f54) {
            ctx->pc = 0x124FACu;
            return;
        }
    }
    ctx->pc = 0x124F5Cu;
    // 0x124f5c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x124f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x124f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124f64: 0xc05d25c  jal         func_174970
    ctx->pc = 0x124F64u;
    SET_GPR_U32(ctx, 31, 0x124F6Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x124F64u, 0x124F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F6Cu;
label_124f6c:
    // 0x124f6c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x124F6Cu;
    {
        const bool branch_taken_0x124f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f6c) {
            ctx->pc = 0x124FACu;
            return;
        }
    }
    ctx->pc = 0x124F74u;
    // 0x124f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124f78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124f80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x124f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124f84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f88: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124f88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124f8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124f94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124f98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124f9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124fa0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x124fa4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x124FA4u;
    {
        const bool branch_taken_0x124fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124fa4) {
            ctx->pc = 0x124FACu;
            return;
        }
    }
    ctx->pc = 0x124FACu;
}
