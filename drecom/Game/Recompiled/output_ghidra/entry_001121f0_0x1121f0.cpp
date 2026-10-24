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

// Function: entry_001121f0
// Address: 0x1121f0 - 0x112204
void entry_001121f0_0x1121f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001121f0_0x1121f0");
#endif

    ctx->pc = 0x1121f0u;

    // 0x1121f0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1121f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1121f4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1121f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1121f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1121f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1121fc: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1121FCu;
    {
        const bool branch_taken_0x1121fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121FCu;
        // 0x112200: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121fc) {
            ctx->pc = 0x11230Cu;
            return;
        }
    }
    ctx->pc = 0x112204u;
}
