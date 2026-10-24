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

// Function: entry_002e6a18
// Address: 0x2e6a18 - 0x2e6a90
void entry_002e6a18_0x2e6a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6a18_0x2e6a18");
#endif

    ctx->pc = 0x2e6a18u;

    // 0x2e6a18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a1c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e6a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e6a20: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e6a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e6a24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6a28: 0xc4601290  lwc1        $f0, 0x1290($v1)
    ctx->pc = 0x2e6a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6a2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6a30: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2e6a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x2e6a34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a38: 0xc4411290  lwc1        $f1, 0x1290($v0)
    ctx->pc = 0x2e6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6a3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6a40: 0x0  nop
    ctx->pc = 0x2e6a40u;
    // NOP
    // 0x2e6a44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6a44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6a48: 0x0  nop
    ctx->pc = 0x2e6a48u;
    // NOP
    // 0x2e6a4c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2E6A4Cu;
    {
        const bool branch_taken_0x2e6a4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6a4c) {
            ctx->pc = 0x2E6A90u;
            return;
        }
    }
    ctx->pc = 0x2E6A54u;
    // 0x2e6a54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a58: 0xc4411290  lwc1        $f1, 0x1290($v0)
    ctx->pc = 0x2e6a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6a5c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x2e6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x2e6a60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e6a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e6a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6a68: 0x0  nop
    ctx->pc = 0x2e6a68u;
    // NOP
    // 0x2e6a6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6a70: 0x0  nop
    ctx->pc = 0x2e6a70u;
    // NOP
    // 0x2e6a74: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2E6A74u;
    {
        const bool branch_taken_0x2e6a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6a74) {
            ctx->pc = 0x2E6AC4u;
            return;
        }
    }
    ctx->pc = 0x2E6A7Cu;
    // 0x2e6a7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6a80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a84: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e6a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e6a88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E6A88u;
    {
        const bool branch_taken_0x2e6a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a88) {
            ctx->pc = 0x2E6AC4u;
            return;
        }
    }
    ctx->pc = 0x2E6A90u;
}
