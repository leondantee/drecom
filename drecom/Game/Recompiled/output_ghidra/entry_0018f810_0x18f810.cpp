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

// Function: entry_0018f810
// Address: 0x18f810 - 0x18f840
void entry_0018f810_0x18f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f810_0x18f810");
#endif

    ctx->pc = 0x18f810u;

    // 0x18f810: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f814: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x18f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f818: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x18f818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x18f81c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f820: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x18f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f824: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x18f824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x18f828: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f82c: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x18f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f830: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x18f830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x18f834: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f838: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x18f838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f83c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x18f83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->pc = 0x18f840u;
}
