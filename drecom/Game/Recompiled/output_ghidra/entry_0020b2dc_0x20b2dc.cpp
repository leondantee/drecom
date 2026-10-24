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

// Function: entry_0020b2dc
// Address: 0x20b2dc - 0x20b328
void entry_0020b2dc_0x20b2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b2dc_0x20b2dc");
#endif

    ctx->pc = 0x20b2dcu;

    // 0x20b2dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b2e0: 0xc42194b8  lwc1        $f1, -0x6B48($at)
    ctx->pc = 0x20b2e0u;
    { uint32_t bits = FAST_READ32(0x6194B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b2e4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x20b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x20b2e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b2ec: 0x0  nop
    ctx->pc = 0x20b2ecu;
    // NOP
    // 0x20b2f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20b2f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20b2f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b2f8: 0xe42094b8  swc1        $f0, -0x6B48($at)
    ctx->pc = 0x20b2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B8u, _value); } while (0); }
    // 0x20b2fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b300: 0xc42194b8  lwc1        $f1, -0x6B48($at)
    ctx->pc = 0x20b300u;
    { uint32_t bits = FAST_READ32(0x6194B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b308: 0x0  nop
    ctx->pc = 0x20b308u;
    // NOP
    // 0x20b30c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b30cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b310: 0x0  nop
    ctx->pc = 0x20b310u;
    // NOP
    // 0x20b314: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20B314u;
    {
        const bool branch_taken_0x20b314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b314) {
            ctx->pc = 0x20B328u;
            return;
        }
    }
    ctx->pc = 0x20B31Cu;
    // 0x20b31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b320: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b324: 0xe42094b8  swc1        $f0, -0x6B48($at)
    ctx->pc = 0x20b324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B8u, _value); } while (0); }
    ctx->pc = 0x20b328u;
}
