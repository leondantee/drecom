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

// Function: entry_00189cf0
// Address: 0x189cf0 - 0x189d28
void entry_00189cf0_0x189cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189cf0_0x189cf0");
#endif

    ctx->pc = 0x189cf0u;

    // 0x189cf0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x189cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189cf4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189cf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x189cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189cfc: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x189cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189d00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189d00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x189d04: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d08: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x189d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x189d0c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189d10: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189d14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x189d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189d18: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x189d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189d1c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189d1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x189d20: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d24: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x189d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    ctx->pc = 0x189d28u;
}
