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

// Function: entry_00342170
// Address: 0x342170 - 0x342198
void entry_00342170_0x342170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00342170_0x342170");
#endif

    ctx->pc = 0x342170u;

    // 0x342170: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342174: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x342174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x342178: 0x84620034  lh          $v0, 0x34($v1)
    ctx->pc = 0x342178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34217c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34217Cu;
    {
        const bool branch_taken_0x34217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34217c) {
            ctx->pc = 0x342198u;
            return;
        }
    }
    ctx->pc = 0x342184u;
    // 0x342184: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342188: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x342188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34218c: 0x84a40034  lh          $a0, 0x34($a1)
    ctx->pc = 0x34218cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x342190: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x342190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x342194: 0xa4b10034  sh          $s1, 0x34($a1)
    ctx->pc = 0x342194u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 17));
    ctx->pc = 0x342198u;
}
