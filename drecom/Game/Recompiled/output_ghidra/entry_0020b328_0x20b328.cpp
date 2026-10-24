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

// Function: entry_0020b328
// Address: 0x20b328 - 0x20b37c
void entry_0020b328_0x20b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b328_0x20b328");
#endif

    ctx->pc = 0x20b328u;

    // 0x20b328: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b32c: 0xc42094b8  lwc1        $f0, -0x6B48($at)
    ctx->pc = 0x20b32cu;
    { uint32_t bits = FAST_READ32(0x6194B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b330: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b334: 0x8c229310  lw          $v0, -0x6CF0($at)
    ctx->pc = 0x20b334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x619310u));
    // 0x20b338: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x20b338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x20b33c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b340: 0xc42194c0  lwc1        $f1, -0x6B40($at)
    ctx->pc = 0x20b340u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b348: 0x0  nop
    ctx->pc = 0x20b348u;
    // NOP
    // 0x20b34c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20b34cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b350: 0x0  nop
    ctx->pc = 0x20b350u;
    // NOP
    // 0x20b354: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x20B354u;
    {
        const bool branch_taken_0x20b354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b354) {
            ctx->pc = 0x20B37Cu;
            return;
        }
    }
    ctx->pc = 0x20B35Cu;
    // 0x20b35c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b360: 0xc42194c0  lwc1        $f1, -0x6B40($at)
    ctx->pc = 0x20b360u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b364: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x20b364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x20b368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b36c: 0x0  nop
    ctx->pc = 0x20b36cu;
    // NOP
    // 0x20b370: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20b370u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20b374: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b378: 0xe42094c0  swc1        $f0, -0x6B40($at)
    ctx->pc = 0x20b378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194C0u, _value); } while (0); }
    ctx->pc = 0x20b37cu;
}
