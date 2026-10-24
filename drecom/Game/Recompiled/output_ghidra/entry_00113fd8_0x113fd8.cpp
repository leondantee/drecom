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

// Function: entry_00113fd8
// Address: 0x113fd8 - 0x113fe8
void entry_00113fd8_0x113fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113fd8_0x113fd8");
#endif

    ctx->pc = 0x113fd8u;

    // 0x113fd8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x113fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x113fdc: 0x4c1ffde  bgez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x113FDCu;
    {
        const bool branch_taken_0x113fdc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x113FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FDCu;
        // 0x113fe0: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fdc) {
            ctx->pc = 0x113F58u;
            return;
        }
    }
    ctx->pc = 0x113FE4u;
    // 0x113fe4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x113fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->pc = 0x113fe8u;
}
