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

// Function: entry_0016287c
// Address: 0x16287c - 0x1628ac
void entry_0016287c_0x16287c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016287c_0x16287c");
#endif

    ctx->pc = 0x16287cu;

    // 0x16287c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x16287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162880: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x162884: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16288c: 0x0  nop
    ctx->pc = 0x16288cu;
    // NOP
    // 0x162890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162894: 0x0  nop
    ctx->pc = 0x162894u;
    // NOP
    // 0x162898: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x162898u;
    {
        const bool branch_taken_0x162898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162898) {
            ctx->pc = 0x1628ACu;
            return;
        }
    }
    ctx->pc = 0x1628A0u;
    // 0x1628a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1628a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1628a4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1628A4u;
    {
        const bool branch_taken_0x1628a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1628a4) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x1628ACu;
}
