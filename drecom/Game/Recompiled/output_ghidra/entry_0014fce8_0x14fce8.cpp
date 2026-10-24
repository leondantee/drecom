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

// Function: entry_0014fce8
// Address: 0x14fce8 - 0x14fd44
void entry_0014fce8_0x14fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fce8_0x14fce8");
#endif

    ctx->pc = 0x14fce8u;

    // 0x14fce8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x14fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fcec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14fcecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fcf0: 0x0  nop
    ctx->pc = 0x14fcf0u;
    // NOP
    // 0x14fcf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fcf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fcf8: 0x0  nop
    ctx->pc = 0x14fcf8u;
    // NOP
    // 0x14fcfc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x14FCFCu;
    {
        const bool branch_taken_0x14fcfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fcfc) {
            ctx->pc = 0x14FD44u;
            return;
        }
    }
    ctx->pc = 0x14FD04u;
    // 0x14fd04: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x14fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd08: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x14fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x14fd0c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14fd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14fd10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd14: 0x0  nop
    ctx->pc = 0x14fd14u;
    // NOP
    // 0x14fd18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fd18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fd1c: 0x0  nop
    ctx->pc = 0x14fd1cu;
    // NOP
    // 0x14fd20: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x14FD20u;
    {
        const bool branch_taken_0x14fd20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fd20) {
            ctx->pc = 0x14FD80u;
            return;
        }
    }
    ctx->pc = 0x14FD28u;
    // 0x14fd28: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x14fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x14fd2c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14fd30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd34: 0x0  nop
    ctx->pc = 0x14fd34u;
    // NOP
    // 0x14fd38: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14fd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14fd3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14FD3Cu;
    {
        const bool branch_taken_0x14fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fd3c) {
            ctx->pc = 0x14FD80u;
            return;
        }
    }
    ctx->pc = 0x14FD44u;
}
