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

// Function: entry_00170cb8
// Address: 0x170cb8 - 0x170cd8
void entry_00170cb8_0x170cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170cb8_0x170cb8");
#endif

    ctx->pc = 0x170cb8u;

    // 0x170cb8: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x170cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x170cbc: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x170cbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x170cc0: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x170CC0u;
    {
        const bool branch_taken_0x170cc0 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x170cc0) {
            ctx->pc = 0x170CD8u;
            return;
        }
    }
    ctx->pc = 0x170CC8u;
    // 0x170cc8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x170cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x170ccc: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x170cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x170cd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170CD0u;
    {
        const bool branch_taken_0x170cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170cd0) {
            ctx->pc = 0x170CE0u;
            return;
        }
    }
    ctx->pc = 0x170CD8u;
}
