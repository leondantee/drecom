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

// Function: entry_001588c0
// Address: 0x1588c0 - 0x1588f4
void entry_001588c0_0x1588c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001588c0_0x1588c0");
#endif

    ctx->pc = 0x1588c0u;

    // 0x1588c0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1588c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1588c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1588c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1588c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1588c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1588cc: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1588CCu;
    {
        const bool branch_taken_0x1588cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588cc) {
            ctx->pc = 0x158970u;
            return;
        }
    }
    ctx->pc = 0x1588D4u;
    // 0x1588d4: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1588d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1588d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1588D8u;
    {
        const bool branch_taken_0x1588d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588d8) {
            ctx->pc = 0x1588F4u;
            return;
        }
    }
    ctx->pc = 0x1588E0u;
    // 0x1588e0: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1588e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1588e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1588e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1588e8: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1588e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1588ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1588ECu;
    {
        const bool branch_taken_0x1588ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588ec) {
            ctx->pc = 0x158970u;
            return;
        }
    }
    ctx->pc = 0x1588F4u;
}
