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

// Function: entry_00189a74
// Address: 0x189a74 - 0x189aa4
void entry_00189a74_0x189a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189a74_0x189a74");
#endif

    ctx->pc = 0x189a74u;

    // 0x189a74: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189a78: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x189a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189a7c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189a80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189a84: 0x0  nop
    ctx->pc = 0x189a84u;
    // NOP
    // 0x189a88: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x189A88u;
    {
        const bool branch_taken_0x189a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189a88) {
            ctx->pc = 0x189AA4u;
            return;
        }
    }
    ctx->pc = 0x189A90u;
    // 0x189a90: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189a94: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189a98: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x189a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x189a9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189A9Cu;
    {
        const bool branch_taken_0x189a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a9c) {
            ctx->pc = 0x189AACu;
            return;
        }
    }
    ctx->pc = 0x189AA4u;
}
