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

// Function: entry_00137df8
// Address: 0x137df8 - 0x137e24
void entry_00137df8_0x137df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137df8_0x137df8");
#endif

    ctx->pc = 0x137df8u;

    // 0x137df8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x137df8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x137dfc: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x137DFCu;
    {
        const bool branch_taken_0x137dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137dfc) {
            ctx->pc = 0x137D14u;
            return;
        }
    }
    ctx->pc = 0x137E04u;
    // 0x137e04: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x137e04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x137e08: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x137E08u;
    {
        const bool branch_taken_0x137e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e08) {
            ctx->pc = 0x137E24u;
            return;
        }
    }
    ctx->pc = 0x137E10u;
    // 0x137e10: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x137e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x137e14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x137e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x137e18: 0xa663008e  sh          $v1, 0x8E($s3)
    ctx->pc = 0x137e18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x137e1c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x137E1Cu;
    {
        const bool branch_taken_0x137e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e1c) {
            ctx->pc = 0x138110u;
            return;
        }
    }
    ctx->pc = 0x137E24u;
}
