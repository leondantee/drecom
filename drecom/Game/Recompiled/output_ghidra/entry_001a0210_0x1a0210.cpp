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

// Function: entry_001a0210
// Address: 0x1a0210 - 0x1a0234
void entry_001a0210_0x1a0210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0210_0x1a0210");
#endif

    ctx->pc = 0x1a0210u;

    // 0x1a0210: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1a0210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0214: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1a0214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0218: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a0218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a021c: 0x0  nop
    ctx->pc = 0x1a021cu;
    // NOP
    // 0x1a0220: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0220u;
    {
        const bool branch_taken_0x1a0220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0220) {
            ctx->pc = 0x1A0234u;
            return;
        }
    }
    ctx->pc = 0x1A0228u;
    // 0x1a0228: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1a0228u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a022c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A022Cu;
    {
        const bool branch_taken_0x1a022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a022c) {
            ctx->pc = 0x1A0278u;
            return;
        }
    }
    ctx->pc = 0x1A0234u;
}
