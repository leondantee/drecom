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

// Function: entry_0017278c
// Address: 0x17278c - 0x1727cc
void entry_0017278c_0x17278c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017278c_0x17278c");
#endif

    ctx->pc = 0x17278cu;

    // 0x17278c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x17278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172790: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x172790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x172794: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17279c: 0x0  nop
    ctx->pc = 0x17279cu;
    // NOP
    // 0x1727a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1727a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1727a4: 0x0  nop
    ctx->pc = 0x1727a4u;
    // NOP
    // 0x1727a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1727A8u;
    {
        const bool branch_taken_0x1727a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1727a8) {
            ctx->pc = 0x1727CCu;
            return;
        }
    }
    ctx->pc = 0x1727B0u;
    // 0x1727b0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1727b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1727b4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1727b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1727b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1727b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1727bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1727bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1727c0: 0x0  nop
    ctx->pc = 0x1727c0u;
    // NOP
    // 0x1727c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1727c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1727c8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1727c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->pc = 0x1727ccu;
}
