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

// Function: entry_00134728
// Address: 0x134728 - 0x134748
void entry_00134728_0x134728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134728_0x134728");
#endif

    ctx->pc = 0x134728u;

    // 0x134728: 0x96030080  lhu         $v1, 0x80($s0)
    ctx->pc = 0x134728u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x13472c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13472Cu;
    {
        const bool branch_taken_0x13472c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13472c) {
            ctx->pc = 0x134748u;
            return;
        }
    }
    ctx->pc = 0x134734u;
    // 0x134734: 0x96030080  lhu         $v1, 0x80($s0)
    ctx->pc = 0x134734u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x134738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x134738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13473c: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x13473cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x134740: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x134740u;
    {
        const bool branch_taken_0x134740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134740) {
            ctx->pc = 0x134EE8u;
            return;
        }
    }
    ctx->pc = 0x134748u;
}
