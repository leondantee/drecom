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

// Function: entry_001736a4
// Address: 0x1736a4 - 0x1736e4
void entry_001736a4_0x1736a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001736a4_0x1736a4");
#endif

    ctx->pc = 0x1736a4u;

    // 0x1736a4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1736a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1736a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1736ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1736acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1736b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1736b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1736b4: 0x0  nop
    ctx->pc = 0x1736b4u;
    // NOP
    // 0x1736b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1736b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1736bc: 0x0  nop
    ctx->pc = 0x1736bcu;
    // NOP
    // 0x1736c0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1736C0u;
    {
        const bool branch_taken_0x1736c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1736c0) {
            ctx->pc = 0x1736E4u;
            return;
        }
    }
    ctx->pc = 0x1736C8u;
    // 0x1736c8: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1736c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1736cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1736ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1736d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1736d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1736d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1736d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1736d8: 0x0  nop
    ctx->pc = 0x1736d8u;
    // NOP
    // 0x1736dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1736dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1736e0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1736e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->pc = 0x1736e4u;
}
