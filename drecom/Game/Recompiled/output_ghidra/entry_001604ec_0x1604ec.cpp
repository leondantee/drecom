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

// Function: entry_001604ec
// Address: 0x1604ec - 0x160508
void entry_001604ec_0x1604ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001604ec_0x1604ec");
#endif

    ctx->pc = 0x1604ecu;

    // 0x1604ec: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1604ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1604f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1604f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1604f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1604F4u;
    {
        const bool branch_taken_0x1604f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1604f4) {
            ctx->pc = 0x160508u;
            return;
        }
    }
    ctx->pc = 0x1604FCu;
    // 0x1604fc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1604fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160500: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x160500u;
    {
        const bool branch_taken_0x160500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160500) {
            ctx->pc = 0x160678u;
            return;
        }
    }
    ctx->pc = 0x160508u;
}
