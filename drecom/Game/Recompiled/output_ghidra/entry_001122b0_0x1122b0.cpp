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

// Function: entry_001122b0
// Address: 0x1122b0 - 0x1122bc
void entry_001122b0_0x1122b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001122b0_0x1122b0");
#endif

    ctx->pc = 0x1122b0u;

    // 0x1122b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1122b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1122b4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1122B4u;
    {
        const bool branch_taken_0x1122b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122B4u;
        // 0x1122b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122b4) {
            ctx->pc = 0x11230Cu;
            return;
        }
    }
    ctx->pc = 0x1122BCu;
}
