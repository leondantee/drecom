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

// Function: entry_001d8038
// Address: 0x1d8038 - 0x1d8070
void entry_001d8038_0x1d8038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8038_0x1d8038");
#endif

    ctx->pc = 0x1d8038u;

    // 0x1d8038: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1d8038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d803c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1d803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8040: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d8040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d8044: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d8044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1d8048: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1d8048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d804c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d804cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8050: 0x0  nop
    ctx->pc = 0x1d8050u;
    // NOP
    // 0x1d8054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8058: 0x0  nop
    ctx->pc = 0x1d8058u;
    // NOP
    // 0x1d805c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D805Cu;
    {
        const bool branch_taken_0x1d805c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d805c) {
            ctx->pc = 0x1D8070u;
            return;
        }
    }
    ctx->pc = 0x1D8064u;
    // 0x1d8064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8068: 0x0  nop
    ctx->pc = 0x1d8068u;
    // NOP
    // 0x1d806c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d806cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->pc = 0x1d8070u;
}
