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

// Function: entry_002482cc
// Address: 0x2482cc - 0x2482f4
void entry_002482cc_0x2482cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002482cc_0x2482cc");
#endif

    ctx->pc = 0x2482ccu;

    // 0x2482cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2482ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2482d0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x2482d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2482d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2482d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2482d8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2482d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2482dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2482DCu;
    {
        const bool branch_taken_0x2482dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2482dc) {
            ctx->pc = 0x2482F4u;
            return;
        }
    }
    ctx->pc = 0x2482E4u;
    // 0x2482e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2482e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2482e8: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2482e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x2482ec: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2482ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2482f0: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x2482f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2482f4u;
}
