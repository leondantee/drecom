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

// Function: entry_001fafec
// Address: 0x1fafec - 0x1fb00c
void entry_001fafec_0x1fafec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fafec_0x1fafec");
#endif

    ctx->pc = 0x1fafecu;

    // 0x1fafec: 0x0  nop
    ctx->pc = 0x1fafecu;
    // NOP
    // 0x1faff0: 0x0  nop
    ctx->pc = 0x1faff0u;
    // NOP
    // 0x1faff4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1faff4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1faff8: 0x0  nop
    ctx->pc = 0x1faff8u;
    // NOP
    // 0x1faffc: 0x0  nop
    ctx->pc = 0x1faffcu;
    // NOP
    // 0x1fb000: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1fb000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1fb004: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB004u;
    {
        const bool branch_taken_0x1fb004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb004) {
            ctx->pc = 0x1FB018u;
            return;
        }
    }
    ctx->pc = 0x1FB00Cu;
}
