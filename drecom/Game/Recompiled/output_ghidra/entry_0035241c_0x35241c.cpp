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

// Function: entry_0035241c
// Address: 0x35241c - 0x352488
void entry_0035241c_0x35241c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035241c_0x35241c");
#endif

    ctx->pc = 0x35241cu;

    // 0x35241c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35241cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352420: 0x0  nop
    ctx->pc = 0x352420u;
    // NOP
    // 0x352424: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x352424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x352428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35242c: 0x0  nop
    ctx->pc = 0x35242cu;
    // NOP
    // 0x352430: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352438: 0x0  nop
    ctx->pc = 0x352438u;
    // NOP
    // 0x35243c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x35243cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x352440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352444: 0x0  nop
    ctx->pc = 0x352444u;
    // NOP
    // 0x352448: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x352448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x35244c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35244cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352450: 0x0  nop
    ctx->pc = 0x352450u;
    // NOP
    // 0x352454: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x352454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x352458: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35245c: 0x0  nop
    ctx->pc = 0x35245cu;
    // NOP
    // 0x352460: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x352460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x352464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352468: 0x0  nop
    ctx->pc = 0x352468u;
    // NOP
    // 0x35246c: 0xe640011c  swc1        $f0, 0x11C($s2)
    ctx->pc = 0x35246cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x352470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352474: 0x0  nop
    ctx->pc = 0x352474u;
    // NOP
    // 0x352478: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x352478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x35247c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35247cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352480: 0x0  nop
    ctx->pc = 0x352480u;
    // NOP
    // 0x352484: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x352484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    ctx->pc = 0x352488u;
}
