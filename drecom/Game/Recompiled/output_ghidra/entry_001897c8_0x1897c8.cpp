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

// Function: entry_001897c8
// Address: 0x1897c8 - 0x1897f8
void entry_001897c8_0x1897c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001897c8_0x1897c8");
#endif

    ctx->pc = 0x1897c8u;

    // 0x1897c8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1897c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1897cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1897ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1897d0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1897d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1897d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1897d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1897d8: 0x0  nop
    ctx->pc = 0x1897d8u;
    // NOP
    // 0x1897dc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1897DCu;
    {
        const bool branch_taken_0x1897dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1897dc) {
            ctx->pc = 0x1897F8u;
            return;
        }
    }
    ctx->pc = 0x1897E4u;
    // 0x1897e4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1897e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1897e8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1897e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1897ec: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1897ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1897f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1897F0u;
    {
        const bool branch_taken_0x1897f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1897f0) {
            ctx->pc = 0x189800u;
            return;
        }
    }
    ctx->pc = 0x1897F8u;
}
