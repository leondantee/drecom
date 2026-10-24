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

// Function: entry_001302ac
// Address: 0x1302ac - 0x1302e4
void entry_001302ac_0x1302ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001302ac_0x1302ac");
#endif

    ctx->pc = 0x1302acu;

    // 0x1302ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1302acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1302b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1302b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1302b4: 0x106000f0  beqz        $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x1302B4u;
    {
        const bool branch_taken_0x1302b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302b4) {
            ctx->pc = 0x130678u;
            return;
        }
    }
    ctx->pc = 0x1302BCu;
    // 0x1302bc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1302bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1302c0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1302c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1302c4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1302C4u;
    {
        const bool branch_taken_0x1302c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302c4) {
            ctx->pc = 0x1302E4u;
            return;
        }
    }
    ctx->pc = 0x1302CCu;
    // 0x1302cc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1302ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1302d0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1302d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1302d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1302d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1302d8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1302d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1302dc: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x1302DCu;
    {
        const bool branch_taken_0x1302dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302dc) {
            ctx->pc = 0x130678u;
            return;
        }
    }
    ctx->pc = 0x1302E4u;
}
