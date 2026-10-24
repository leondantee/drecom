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

// Function: entry_001a4614
// Address: 0x1a4614 - 0x1a463c
void entry_001a4614_0x1a4614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4614_0x1a4614");
#endif

    ctx->pc = 0x1a4614u;

    // 0x1a4614: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4618: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4618u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a461c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a461cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4620: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1a4620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1a4624: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4624u;
    {
        const bool branch_taken_0x1a4624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4624) {
            ctx->pc = 0x1A463Cu;
            return;
        }
    }
    ctx->pc = 0x1A462Cu;
    // 0x1a462c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4630: 0x80830310  lb          $v1, 0x310($a0)
    ctx->pc = 0x1a4630u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1a4634: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4638: 0xa0830310  sb          $v1, 0x310($a0)
    ctx->pc = 0x1a4638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 784), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a463cu;
}
