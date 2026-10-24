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

// Function: entry_00188cfc
// Address: 0x188cfc - 0x188d10
void entry_00188cfc_0x188cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188cfc_0x188cfc");
#endif

    ctx->pc = 0x188cfcu;

    // 0x188cfc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x188CFCu;
    {
        const bool branch_taken_0x188cfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cfc) {
            ctx->pc = 0x188D10u;
            return;
        }
    }
    ctx->pc = 0x188D04u;
    // 0x188d04: 0xc6c00180  lwc1        $f0, 0x180($s6)
    ctx->pc = 0x188d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188d08: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x188D08u;
    {
        const bool branch_taken_0x188d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d08) {
            ctx->pc = 0x188F44u;
            return;
        }
    }
    ctx->pc = 0x188D10u;
}
