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

// Function: entry_001aa7d4
// Address: 0x1aa7d4 - 0x1aa810
void entry_001aa7d4_0x1aa7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa7d4_0x1aa7d4");
#endif

    ctx->pc = 0x1aa7d4u;

    // 0x1aa7d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa7d8: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1aa7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa7dc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa7e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa7e4: 0x0  nop
    ctx->pc = 0x1aa7e4u;
    // NOP
    // 0x1aa7e8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA7E8u;
    {
        const bool branch_taken_0x1aa7e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa7e8) {
            ctx->pc = 0x1AA810u;
            return;
        }
    }
    ctx->pc = 0x1AA7F0u;
    // 0x1aa7f0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa7f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa7f8: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1aa7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x1aa7fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa800: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa808: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa80c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x1aa80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    ctx->pc = 0x1aa810u;
}
