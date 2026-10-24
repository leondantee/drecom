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

// Function: entry_00134e64
// Address: 0x134e64 - 0x134e84
void entry_00134e64_0x134e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e64_0x134e64");
#endif

    ctx->pc = 0x134e64u;

    // 0x134e64: 0x96030080  lhu         $v1, 0x80($s0)
    ctx->pc = 0x134e64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x134e68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x134E68u;
    {
        const bool branch_taken_0x134e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e68) {
            ctx->pc = 0x134E84u;
            return;
        }
    }
    ctx->pc = 0x134E70u;
    // 0x134e70: 0x96030080  lhu         $v1, 0x80($s0)
    ctx->pc = 0x134e70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x134e74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x134e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x134e78: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x134e78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x134e7c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x134E7Cu;
    {
        const bool branch_taken_0x134e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e7c) {
            ctx->pc = 0x134EE8u;
            return;
        }
    }
    ctx->pc = 0x134E84u;
}
