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

// Function: entry_001759b8
// Address: 0x1759b8 - 0x1759ec
void entry_001759b8_0x1759b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001759b8_0x1759b8");
#endif

    ctx->pc = 0x1759b8u;

    // 0x1759b8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1759b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1759bc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1759bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1759c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1759c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1759c4: 0x0  nop
    ctx->pc = 0x1759c4u;
    // NOP
    // 0x1759c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1759c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1759cc: 0x0  nop
    ctx->pc = 0x1759ccu;
    // NOP
    // 0x1759d0: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x1759D0u;
    {
        const bool branch_taken_0x1759d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1759d0) {
            ctx->pc = 0x175A80u;
            return;
        }
    }
    ctx->pc = 0x1759D8u;
    // 0x1759d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1759d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1759dc: 0x2450c7b0  addiu       $s0, $v0, -0x3850
    ctx->pc = 0x1759dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952880));
    // 0x1759e0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1759e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1759e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1759E4u;
    {
        const bool branch_taken_0x1759e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1759e4) {
            ctx->pc = 0x175A70u;
            return;
        }
    }
    ctx->pc = 0x1759ECu;
}
