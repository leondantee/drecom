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

// Function: entry_0032b3ec
// Address: 0x32b3ec - 0x32b414
void entry_0032b3ec_0x32b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b3ec_0x32b3ec");
#endif

    ctx->pc = 0x32b3ecu;

    // 0x32b3ec: 0x8e0328c4  lw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x32b3f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32b3f4: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
    // 0x32b3f8: 0x8e0328c4  lw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10436)));
    // 0x32b3fc: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x32b3fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x32b400: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B400u;
    {
        const bool branch_taken_0x32b400 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b400) {
            ctx->pc = 0x32B414u;
            return;
        }
    }
    ctx->pc = 0x32B408u;
    // 0x32b408: 0xa20028c0  sb          $zero, 0x28C0($s0)
    ctx->pc = 0x32b408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b40c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32b410: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
    ctx->pc = 0x32b414u;
}
