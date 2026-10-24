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

// Function: entry_002e2798
// Address: 0x2e2798 - 0x2e27e8
void entry_002e2798_0x2e2798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2798_0x2e2798");
#endif

    ctx->pc = 0x2e2798u;

    // 0x2e2798: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x2e2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e279c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e279cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e27a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e27a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e27a4: 0x0  nop
    ctx->pc = 0x2e27a4u;
    // NOP
    // 0x2e27a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e27a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e27ac: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e27acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x2e27b0: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x2e27b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e27b4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x2e27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x2e27b8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e27b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e27bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e27bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e27c0: 0x0  nop
    ctx->pc = 0x2e27c0u;
    // NOP
    // 0x2e27c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e27c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e27c8: 0x0  nop
    ctx->pc = 0x2e27c8u;
    // NOP
    // 0x2e27cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E27CCu;
    {
        const bool branch_taken_0x2e27cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e27cc) {
            ctx->pc = 0x2E27E8u;
            return;
        }
    }
    ctx->pc = 0x2E27D4u;
    // 0x2e27d4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x2e27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x2e27d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e27d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e27dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e27dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e27e0: 0x0  nop
    ctx->pc = 0x2e27e0u;
    // NOP
    // 0x2e27e4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e27e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    ctx->pc = 0x2e27e8u;
}
