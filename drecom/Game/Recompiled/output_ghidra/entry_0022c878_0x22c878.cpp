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

// Function: entry_0022c878
// Address: 0x22c878 - 0x22c8bc
void entry_0022c878_0x22c878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c878_0x22c878");
#endif

    ctx->pc = 0x22c878u;

    // 0x22c878: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c87c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22c87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c880: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x22c880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x22c884: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22c884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22c888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c88c: 0x0  nop
    ctx->pc = 0x22c88cu;
    // NOP
    // 0x22c890: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c894: 0x0  nop
    ctx->pc = 0x22c894u;
    // NOP
    // 0x22c898: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22C898u;
    {
        const bool branch_taken_0x22c898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c898) {
            ctx->pc = 0x22C8BCu;
            return;
        }
    }
    ctx->pc = 0x22C8A0u;
    // 0x22c8a0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x22c8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c8a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c8ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c8b0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22c8b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22C8B4u;
    {
        const bool branch_taken_0x22c8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c8b4) {
            ctx->pc = 0x22C8D0u;
            return;
        }
    }
    ctx->pc = 0x22C8BCu;
}
