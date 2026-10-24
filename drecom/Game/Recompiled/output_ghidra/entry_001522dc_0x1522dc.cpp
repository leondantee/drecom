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

// Function: entry_001522dc
// Address: 0x1522dc - 0x1522fc
void entry_001522dc_0x1522dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001522dc_0x1522dc");
#endif

    ctx->pc = 0x1522dcu;

    // 0x1522dc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1522dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1522e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1522e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1522e4: 0x904413f9  lbu         $a0, 0x13F9($v0)
    ctx->pc = 0x1522e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1522e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1522E8u;
    {
        const bool branch_taken_0x1522e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522e8) {
            ctx->pc = 0x1522FCu;
            return;
        }
    }
    ctx->pc = 0x1522F0u;
    // 0x1522f0: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x1522f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1522f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1522F4u;
    {
        const bool branch_taken_0x1522f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522f4) {
            ctx->pc = 0x152300u;
            return;
        }
    }
    ctx->pc = 0x1522FCu;
}
