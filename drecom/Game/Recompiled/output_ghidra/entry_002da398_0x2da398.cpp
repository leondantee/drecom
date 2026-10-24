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

// Function: entry_002da398
// Address: 0x2da398 - 0x2da404
void entry_002da398_0x2da398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da398_0x2da398");
#endif

    ctx->pc = 0x2da398u;

    // 0x2da398: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da39c: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x2da39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x2da3a0: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2da3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2da3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3a8: 0x0  nop
    ctx->pc = 0x2da3a8u;
    // NOP
    // 0x2da3ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da3b0: 0x0  nop
    ctx->pc = 0x2da3b0u;
    // NOP
    // 0x2da3b4: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x2DA3B4u;
    {
        const bool branch_taken_0x2da3b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da3b4) {
            ctx->pc = 0x2DA434u;
            return;
        }
    }
    ctx->pc = 0x2DA3BCu;
    // 0x2da3bc: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da3c0: 0x3c023f1a  lui         $v0, 0x3F1A
    ctx->pc = 0x2da3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16154 << 16));
    // 0x2da3c4: 0x344290fd  ori         $v0, $v0, 0x90FD
    ctx->pc = 0x2da3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37117);
    // 0x2da3c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3cc: 0x0  nop
    ctx->pc = 0x2da3ccu;
    // NOP
    // 0x2da3d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da3d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da3d4: 0x0  nop
    ctx->pc = 0x2da3d4u;
    // NOP
    // 0x2da3d8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2DA3D8u;
    {
        const bool branch_taken_0x2da3d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da3d8) {
            ctx->pc = 0x2DA404u;
            return;
        }
    }
    ctx->pc = 0x2DA3E0u;
    // 0x2da3e0: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da3e4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2da3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2da3e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2da3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da3f0: 0x0  nop
    ctx->pc = 0x2da3f0u;
    // NOP
    // 0x2da3f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2da3f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da3f8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da3fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2DA3FCu;
    {
        const bool branch_taken_0x2da3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da3fc) {
            ctx->pc = 0x2DA470u;
            return;
        }
    }
    ctx->pc = 0x2DA404u;
}
