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

// Function: entry_0019f7fc
// Address: 0x19f7fc - 0x19f814
void entry_0019f7fc_0x19f7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f7fc_0x19f7fc");
#endif

    ctx->pc = 0x19f7fcu;

    // 0x19f7fc: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x19f7fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f800: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F800u;
    {
        const bool branch_taken_0x19f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f800) {
            ctx->pc = 0x19F814u;
            return;
        }
    }
    ctx->pc = 0x19F808u;
    // 0x19f808: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19f808u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f80c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19F80Cu;
    {
        const bool branch_taken_0x19f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f80c) {
            ctx->pc = 0x19F81Cu;
            return;
        }
    }
    ctx->pc = 0x19F814u;
}
