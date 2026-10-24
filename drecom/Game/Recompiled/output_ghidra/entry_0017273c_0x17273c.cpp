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

// Function: entry_0017273c
// Address: 0x17273c - 0x17278c
void entry_0017273c_0x17273c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017273c_0x17273c");
#endif

    ctx->pc = 0x17273cu;

    // 0x17273c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x17273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172740: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x172740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172744: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172748: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17274c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x17274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172750: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x172750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x172754: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17275c: 0x0  nop
    ctx->pc = 0x17275cu;
    // NOP
    // 0x172760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172764: 0x0  nop
    ctx->pc = 0x172764u;
    // NOP
    // 0x172768: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172768u;
    {
        const bool branch_taken_0x172768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172768) {
            ctx->pc = 0x17278Cu;
            return;
        }
    }
    ctx->pc = 0x172770u;
    // 0x172770: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172774: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x172774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x172778: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x17277c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17277cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172780: 0x0  nop
    ctx->pc = 0x172780u;
    // NOP
    // 0x172784: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172788: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->pc = 0x17278cu;
}
