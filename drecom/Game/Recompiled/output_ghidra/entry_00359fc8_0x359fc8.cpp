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

// Function: entry_00359fc8
// Address: 0x359fc8 - 0x359fec
void entry_00359fc8_0x359fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359fc8_0x359fc8");
#endif

    ctx->pc = 0x359fc8u;

    // 0x359fc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x359fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359fcc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x359fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x359fd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x359fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x359fd4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x359fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x359fd8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x359FD8u;
    {
        const bool branch_taken_0x359fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359fd8) {
            ctx->pc = 0x35A080u;
            return;
        }
    }
    ctx->pc = 0x359FE0u;
    // 0x359fe0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x359fe0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359fe4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x359FE4u;
    {
        const bool branch_taken_0x359fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359fe4) {
            ctx->pc = 0x35A070u;
            return;
        }
    }
    ctx->pc = 0x359FECu;
}
