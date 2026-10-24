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

// Function: entry_00378264
// Address: 0x378264 - 0x378284
void entry_00378264_0x378264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378264_0x378264");
#endif

    ctx->pc = 0x378264u;

    // 0x378264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378268: 0x12230019  beq         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x378268u;
    {
        const bool branch_taken_0x378268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x378268) {
            ctx->pc = 0x3782D0u;
            return;
        }
    }
    ctx->pc = 0x378270u;
    // 0x378270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378274: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x378274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x378278: 0xa0230397  sb          $v1, 0x397($at)
    ctx->pc = 0x378278u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0397u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A0397u, _value); } while (0);
    // 0x37827c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x37827Cu;
    {
        const bool branch_taken_0x37827c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37827c) {
            ctx->pc = 0x3782D0u;
            return;
        }
    }
    ctx->pc = 0x378284u;
}
