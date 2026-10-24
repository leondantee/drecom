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

// Function: entry_001634bc
// Address: 0x1634bc - 0x163520
void entry_001634bc_0x1634bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001634bc_0x1634bc");
#endif

    switch (ctx->pc) {
        case 0x1634ccu: goto label_1634cc;
        default: break;
    }

    ctx->pc = 0x1634bcu;

    // 0x1634bc: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1634bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1634c0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1634c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1634c4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1634C4u;
    SET_GPR_U32(ctx, 31, 0x1634CCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1634C4u, 0x1634CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1634CCu;
label_1634cc:
    // 0x1634cc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1634ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1634d0: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x1634d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1634d4: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x1634d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1634d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1634d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1634dc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1634dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1634e0: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x1634e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1634e4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1634e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1634e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1634e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1634ec: 0x0  nop
    ctx->pc = 0x1634ecu;
    // NOP
    // 0x1634f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1634f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1634f4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1634f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1634f8: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x1634f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1634fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1634fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163500: 0x0  nop
    ctx->pc = 0x163500u;
    // NOP
    // 0x163504: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163508: 0x0  nop
    ctx->pc = 0x163508u;
    // NOP
    // 0x16350c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16350Cu;
    {
        const bool branch_taken_0x16350c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16350c) {
            ctx->pc = 0x163520u;
            return;
        }
    }
    ctx->pc = 0x163514u;
    // 0x163514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163518: 0x0  nop
    ctx->pc = 0x163518u;
    // NOP
    // 0x16351c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x16351cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->pc = 0x163520u;
}
