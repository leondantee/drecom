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

// Function: entry_00189b1c
// Address: 0x189b1c - 0x189b4c
void entry_00189b1c_0x189b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189b1c_0x189b1c");
#endif

    ctx->pc = 0x189b1cu;

    // 0x189b1c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189b20: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x189b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189b24: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189b28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189b2c: 0x0  nop
    ctx->pc = 0x189b2cu;
    // NOP
    // 0x189b30: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x189B30u;
    {
        const bool branch_taken_0x189b30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189b30) {
            ctx->pc = 0x189B4Cu;
            return;
        }
    }
    ctx->pc = 0x189B38u;
    // 0x189b38: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189b3c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b40: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x189b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x189b44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189B44u;
    {
        const bool branch_taken_0x189b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b44) {
            ctx->pc = 0x189B54u;
            return;
        }
    }
    ctx->pc = 0x189B4Cu;
}
