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

// Function: entry_0025d164
// Address: 0x25d164 - 0x25d1a4
void entry_0025d164_0x25d164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d164_0x25d164");
#endif

    ctx->pc = 0x25d164u;

    // 0x25d164: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25d168: 0x8c6305f4  lw          $v1, 0x5F4($v1)
    ctx->pc = 0x25d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
    // 0x25d16c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25D16Cu;
    {
        const bool branch_taken_0x25d16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d16c) {
            ctx->pc = 0x25D1A4u;
            return;
        }
    }
    ctx->pc = 0x25D174u;
    // 0x25d174: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x25d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d178: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25d17c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x25d180: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25d180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25d184: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x25d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d188: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25d18c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x25d190: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25d190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25d194: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x25d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d198: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25d19c: 0x8c650330  lw          $a1, 0x330($v1)
    ctx->pc = 0x25d19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x25d1a0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x25d1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->pc = 0x25d1a4u;
}
