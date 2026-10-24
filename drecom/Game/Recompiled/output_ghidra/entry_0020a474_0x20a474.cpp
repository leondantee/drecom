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

// Function: entry_0020a474
// Address: 0x20a474 - 0x20a4c0
void entry_0020a474_0x20a474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a474_0x20a474");
#endif

    ctx->pc = 0x20a474u;

    // 0x20a474: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a478: 0xc4219488  lwc1        $f1, -0x6B78($at)
    ctx->pc = 0x20a478u;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a47c: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x20a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x20a480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a484: 0x0  nop
    ctx->pc = 0x20a484u;
    // NOP
    // 0x20a488: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20a488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a48c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a490: 0xe4209488  swc1        $f0, -0x6B78($at)
    ctx->pc = 0x20a490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619488u, _value); } while (0); }
    // 0x20a494: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a498: 0xc4219488  lwc1        $f1, -0x6B78($at)
    ctx->pc = 0x20a498u;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a49c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a4a0: 0x0  nop
    ctx->pc = 0x20a4a0u;
    // NOP
    // 0x20a4a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20a4a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a4a8: 0x0  nop
    ctx->pc = 0x20a4a8u;
    // NOP
    // 0x20a4ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20A4ACu;
    {
        const bool branch_taken_0x20a4ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a4ac) {
            ctx->pc = 0x20A4C0u;
            return;
        }
    }
    ctx->pc = 0x20A4B4u;
    // 0x20a4b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a4b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a4b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a4bc: 0xe4209488  swc1        $f0, -0x6B78($at)
    ctx->pc = 0x20a4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619488u, _value); } while (0); }
    ctx->pc = 0x20a4c0u;
}
