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

// Function: entry_0026a94c
// Address: 0x26a94c - 0x26a96c
void entry_0026a94c_0x26a94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a94c_0x26a94c");
#endif

    ctx->pc = 0x26a94cu;

    // 0x26a94c: 0x86021278  lh          $v0, 0x1278($s0)
    ctx->pc = 0x26a94cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x26a950: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A950u;
    {
        const bool branch_taken_0x26a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a950) {
            ctx->pc = 0x26A96Cu;
            return;
        }
    }
    ctx->pc = 0x26A958u;
    // 0x26a958: 0x86021278  lh          $v0, 0x1278($s0)
    ctx->pc = 0x26a958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x26a95c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26a960: 0xa6021278  sh          $v0, 0x1278($s0)
    ctx->pc = 0x26a960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x26a964: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26A964u;
    {
        const bool branch_taken_0x26a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a964) {
            ctx->pc = 0x26A9D0u;
            return;
        }
    }
    ctx->pc = 0x26A96Cu;
}
