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

// Function: entry_00270a10
// Address: 0x270a10 - 0x270a9c
void entry_00270a10_0x270a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270a10_0x270a10");
#endif

    ctx->pc = 0x270a10u;

    // 0x270a10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a14: 0x8c421b68  lw          $v0, 0x1B68($v0)
    ctx->pc = 0x270a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x270a18: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x270A18u;
    {
        const bool branch_taken_0x270a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a18) {
            ctx->pc = 0x270B3Cu;
            return;
        }
    }
    ctx->pc = 0x270A20u;
    // 0x270a20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a24: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x270a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270a28: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x270a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x270a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270a30: 0x0  nop
    ctx->pc = 0x270a30u;
    // NOP
    // 0x270a34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x270a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x270a38: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x270a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x270a3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a40: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x270a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x270a44: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x270A44u;
    {
        const bool branch_taken_0x270a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a44) {
            ctx->pc = 0x270A9Cu;
            return;
        }
    }
    ctx->pc = 0x270A4Cu;
    // 0x270a4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a50: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x270a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270a54: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x270a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x270a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270a5c: 0x0  nop
    ctx->pc = 0x270a5cu;
    // NOP
    // 0x270a60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x270a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x270a64: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x270a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
    // 0x270a68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a6c: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x270a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270a74: 0x0  nop
    ctx->pc = 0x270a74u;
    // NOP
    // 0x270a78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270a7c: 0x0  nop
    ctx->pc = 0x270a7cu;
    // NOP
    // 0x270a80: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x270A80u;
    {
        const bool branch_taken_0x270a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270a80) {
            ctx->pc = 0x270AECu;
            return;
        }
    }
    ctx->pc = 0x270A88u;
    // 0x270a88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270a88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270a8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270a90: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x270a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x270a94: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x270A94u;
    {
        const bool branch_taken_0x270a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a94) {
            ctx->pc = 0x270AECu;
            return;
        }
    }
    ctx->pc = 0x270A9Cu;
}
