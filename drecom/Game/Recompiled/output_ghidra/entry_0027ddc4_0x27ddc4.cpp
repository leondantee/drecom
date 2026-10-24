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

// Function: entry_0027ddc4
// Address: 0x27ddc4 - 0x27de08
void entry_0027ddc4_0x27ddc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ddc4_0x27ddc4");
#endif

    ctx->pc = 0x27ddc4u;

    // 0x27ddc4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ddc8: 0x3c024691  lui         $v0, 0x4691
    ctx->pc = 0x27ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18065 << 16));
    // 0x27ddcc: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x27ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x27ddd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ddd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ddd4: 0x0  nop
    ctx->pc = 0x27ddd4u;
    // NOP
    // 0x27ddd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ddd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dddc: 0x0  nop
    ctx->pc = 0x27dddcu;
    // NOP
    // 0x27dde0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x27DDE0u;
    {
        const bool branch_taken_0x27dde0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dde0) {
            ctx->pc = 0x27DE08u;
            return;
        }
    }
    ctx->pc = 0x27DDE8u;
    // 0x27dde8: 0x3c024691  lui         $v0, 0x4691
    ctx->pc = 0x27dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18065 << 16));
    // 0x27ddec: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x27ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x27ddf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ddf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ddf4: 0x0  nop
    ctx->pc = 0x27ddf4u;
    // NOP
    // 0x27ddf8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27ddf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27ddfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27ddfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de00: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de04: 0xe4201b50  swc1        $f0, 0x1B50($at)
    ctx->pc = 0x27de04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B50u, _value); } while (0); }
    ctx->pc = 0x27de08u;
}
