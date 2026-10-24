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

// Function: entry_0017e848
// Address: 0x17e848 - 0x17e884
void entry_0017e848_0x17e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e848_0x17e848");
#endif

    ctx->pc = 0x17e848u;

    // 0x17e848: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e84c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x17e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x17e850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e854: 0x0  nop
    ctx->pc = 0x17e854u;
    // NOP
    // 0x17e858: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17e858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e85c: 0x0  nop
    ctx->pc = 0x17e85cu;
    // NOP
    // 0x17e860: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x17E860u;
    {
        const bool branch_taken_0x17e860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e860) {
            ctx->pc = 0x17E884u;
            return;
        }
    }
    ctx->pc = 0x17E868u;
    // 0x17e868: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x17e868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x17e86c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x17e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x17e870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e874: 0x0  nop
    ctx->pc = 0x17e874u;
    // NOP
    // 0x17e878: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17e87c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17E87Cu;
    {
        const bool branch_taken_0x17e87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e87c) {
            ctx->pc = 0x17E89Cu;
            return;
        }
    }
    ctx->pc = 0x17E884u;
}
