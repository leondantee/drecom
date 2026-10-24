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

// Function: entry_001b1d98
// Address: 0x1b1d98 - 0x1b1f78
void entry_001b1d98_0x1b1d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1d98_0x1b1d98");
#endif

    switch (ctx->pc) {
        case 0x1b1e04u: goto label_1b1e04;
        case 0x1b1e18u: goto label_1b1e18;
        case 0x1b1e40u: goto label_1b1e40;
        case 0x1b1f70u: goto label_1b1f70;
        default: break;
    }

    ctx->pc = 0x1b1d98u;

    // 0x1b1d98: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1b1d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b1d9c: 0x12c0008c  beqz        $s6, . + 4 + (0x8C << 2)
    ctx->pc = 0x1B1D9Cu;
    {
        const bool branch_taken_0x1b1d9c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d9c) {
            ctx->pc = 0x1B1FD0u;
            return;
        }
    }
    ctx->pc = 0x1B1DA4u;
    // 0x1b1da4: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1b1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b1da8: 0x2821006  srlv        $v0, $v0, $s4
    ctx->pc = 0x1b1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1b1dac: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1b1dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b1db0: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1B1DB0u;
    {
        const bool branch_taken_0x1b1db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1db0) {
            ctx->pc = 0x1B1FB0u;
            return;
        }
    }
    ctx->pc = 0x1B1DB8u;
    // 0x1b1db8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1b1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b1dbc: 0x401027  not         $v0, $v0
    ctx->pc = 0x1b1dbcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1b1dc0: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x1b1dc0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b1dc4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b1dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b1dc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1dcc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b1dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b1dd0: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1B1DD0u;
    {
        const bool branch_taken_0x1b1dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1dd0) {
            ctx->pc = 0x1B1FB0u;
            return;
        }
    }
    ctx->pc = 0x1B1DD8u;
    // 0x1b1dd8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b1dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1ddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1de0: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1b1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1b1de4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1b1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b1de8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b1dec: 0x8ea20130  lw          $v0, 0x130($s5)
    ctx->pc = 0x1b1decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x1b1df0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b1df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1df4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b1df8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1b1df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b1dfc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B1DFCu;
    SET_GPR_U32(ctx, 31, 0x1B1E04u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B1E04u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1E04u) { return; }
    ctx->pc = 0x1B1E04u;
label_1b1e04:
    // 0x1b1e04: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1e08: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b1e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b1e0c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1b1e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b1e10: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B1E10u;
    SET_GPR_U32(ctx, 31, 0x1B1E18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B1E18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1E18u) { return; }
    ctx->pc = 0x1B1E18u;
label_1b1e18:
    // 0x1b1e18: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1b1e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1e20: 0x0  nop
    ctx->pc = 0x1b1e20u;
    // NOP
    // 0x1b1e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b1e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1e28: 0x0  nop
    ctx->pc = 0x1b1e28u;
    // NOP
    // 0x1b1e2c: 0x45010060  bc1t        . + 4 + (0x60 << 2)
    ctx->pc = 0x1B1E2Cu;
    {
        const bool branch_taken_0x1b1e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1e2c) {
            ctx->pc = 0x1B1FB0u;
            return;
        }
    }
    ctx->pc = 0x1B1E34u;
    // 0x1b1e34: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1e38: 0xc067588  jal         func_19D620
    ctx->pc = 0x1B1E38u;
    SET_GPR_U32(ctx, 31, 0x1B1E40u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1B1E38u, 0x1B1E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E40u;
label_1b1e40:
    // 0x1b1e40: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1b1e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1e44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b1e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b1e48: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1b1e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1b1e4c: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x1b1e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1e50: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1b1e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1e54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b1e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1e58: 0x0  nop
    ctx->pc = 0x1b1e58u;
    // NOP
    // 0x1b1e5c: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x1B1E5Cu;
    {
        const bool branch_taken_0x1b1e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1e5c) {
            ctx->pc = 0x1B1FB0u;
            return;
        }
    }
    ctx->pc = 0x1B1E64u;
    // 0x1b1e64: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1e68: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1b1e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1e6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b1e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1e70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b1e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b1e74: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1b1e78: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1e7c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b1e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1e80: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b1e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1e84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b1e84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b1e88: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1e8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b1e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b1e90: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1b1e90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1b1e94: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1b1e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1e98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b1e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1e9c: 0x0  nop
    ctx->pc = 0x1b1e9cu;
    // NOP
    // 0x1b1ea0: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x1B1EA0u;
    {
        const bool branch_taken_0x1b1ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1ea0) {
            ctx->pc = 0x1B1FB0u;
            return;
        }
    }
    ctx->pc = 0x1B1EA8u;
    // 0x1b1ea8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1eac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b1eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1eb0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b1eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1eb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b1eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b1eb8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1ebc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b1ebcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b1ec0: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1b1ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1ec4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b1ec4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1ec8: 0x0  nop
    ctx->pc = 0x1b1ec8u;
    // NOP
    // 0x1b1ecc: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B1ECCu;
    {
        const bool branch_taken_0x1b1ecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1ecc) {
            ctx->pc = 0x1B1FB0u;
            return;
        }
    }
    ctx->pc = 0x1B1ED4u;
    // 0x1b1ed4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1ed8: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1b1ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1edc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1b1edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1ee0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b1ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b1ee4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1b1ee8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1eec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b1eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1ef0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b1ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1ef4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b1ef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b1ef8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1efc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b1efcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b1f00: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1b1f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b1f04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1f08: 0x0  nop
    ctx->pc = 0x1b1f08u;
    // NOP
    // 0x1b1f0c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1B1F0Cu;
    {
        const bool branch_taken_0x1b1f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1f0c) {
            ctx->pc = 0x1B1FB0u;
            return;
        }
    }
    ctx->pc = 0x1B1F14u;
    // 0x1b1f14: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b1f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1f18: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1f1c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b1f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b1f20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b1f24: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b1f28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b1f2c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1b1f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b1f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1f34: 0x0  nop
    ctx->pc = 0x1b1f34u;
    // NOP
    // 0x1b1f38: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1B1F38u;
    {
        const bool branch_taken_0x1b1f38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1f38) {
            ctx->pc = 0x1B1FB0u;
            return;
        }
    }
    ctx->pc = 0x1B1F40u;
    // 0x1b1f40: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b1f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b1f44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1f48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b1f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b1f4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1F4Cu;
    {
        const bool branch_taken_0x1b1f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f4c) {
            ctx->pc = 0x1B1F78u;
            return;
        }
    }
    ctx->pc = 0x1B1F54u;
    // 0x1b1f54: 0xafb40158  sw          $s4, 0x158($sp)
    ctx->pc = 0x1b1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 20));
    // 0x1b1f58: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1b1f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f5c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1b1f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1b1f60: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1b1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b1f64: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1b1f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b1f68: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B1F68u;
    SET_GPR_U32(ctx, 31, 0x1B1F70u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B1F70u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1F70u) { return; }
    ctx->pc = 0x1B1F70u;
label_1b1f70:
    // 0x1b1f70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1F70u;
    {
        const bool branch_taken_0x1b1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f70) {
            ctx->pc = 0x1B1FD0u;
            return;
        }
    }
    ctx->pc = 0x1B1F78u;
}
