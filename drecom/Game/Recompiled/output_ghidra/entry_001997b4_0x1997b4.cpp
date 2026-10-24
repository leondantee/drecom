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

// Function: entry_001997b4
// Address: 0x1997b4 - 0x1997cc
void entry_001997b4_0x1997b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001997b4_0x1997b4");
#endif

    ctx->pc = 0x1997b4u;

    // 0x1997b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1997b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1997b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1997bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1997bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1997c0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1997c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1997c4: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x1997C4u;
    {
        const bool branch_taken_0x1997c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1997c4) {
            ctx->pc = 0x199BD0u;
            return;
        }
    }
    ctx->pc = 0x1997CCu;
}
