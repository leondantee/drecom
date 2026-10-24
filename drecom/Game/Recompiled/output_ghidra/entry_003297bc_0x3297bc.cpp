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

// Function: entry_003297bc
// Address: 0x3297bc - 0x3297dc
void entry_003297bc_0x3297bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003297bc_0x3297bc");
#endif

    ctx->pc = 0x3297bcu;

    // 0x3297bc: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x3297bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x3297c0: 0xa603290c  sh          $v1, 0x290C($s0)
    ctx->pc = 0x3297c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10508), (uint16_t)GPR_U32(ctx, 3));
    // 0x3297c4: 0xa2002904  sb          $zero, 0x2904($s0)
    ctx->pc = 0x3297c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10500), (uint8_t)GPR_U32(ctx, 0));
    // 0x3297c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3297c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3297cc: 0xa2032905  sb          $v1, 0x2905($s0)
    ctx->pc = 0x3297ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10501), (uint8_t)GPR_U32(ctx, 3));
    // 0x3297d0: 0xa2002909  sb          $zero, 0x2909($s0)
    ctx->pc = 0x3297d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10505), (uint8_t)GPR_U32(ctx, 0));
    // 0x3297d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3297D4u;
    {
        const bool branch_taken_0x3297d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3297d4) {
            ctx->pc = 0x3297E8u;
            return;
        }
    }
    ctx->pc = 0x3297DCu;
}
