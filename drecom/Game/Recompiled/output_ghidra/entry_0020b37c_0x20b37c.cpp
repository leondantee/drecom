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

// Function: entry_0020b37c
// Address: 0x20b37c - 0x20b3b0
void entry_0020b37c_0x20b37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b37c_0x20b37c");
#endif

    ctx->pc = 0x20b37cu;

    // 0x20b37c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b380: 0xc42194c0  lwc1        $f1, -0x6B40($at)
    ctx->pc = 0x20b380u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b384: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20b384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20b388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b38c: 0x0  nop
    ctx->pc = 0x20b38cu;
    // NOP
    // 0x20b390: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b394: 0x0  nop
    ctx->pc = 0x20b394u;
    // NOP
    // 0x20b398: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20B398u;
    {
        const bool branch_taken_0x20b398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b398) {
            ctx->pc = 0x20B3B0u;
            return;
        }
    }
    ctx->pc = 0x20B3A0u;
    // 0x20b3a0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20b3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b3a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b3ac: 0xe42094c0  swc1        $f0, -0x6B40($at)
    ctx->pc = 0x20b3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194C0u, _value); } while (0); }
    ctx->pc = 0x20b3b0u;
}
