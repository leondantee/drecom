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

// Function: entry_00362d1c
// Address: 0x362d1c - 0x362d40
void entry_00362d1c_0x362d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362d1c_0x362d1c");
#endif

    ctx->pc = 0x362d1cu;

    // 0x362d1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x362d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d20: 0x8ca4133c  lw          $a0, 0x133C($a1)
    ctx->pc = 0x362d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4924)));
    // 0x362d24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x362d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x362d28: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x362d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x362d2c: 0xaca3133c  sw          $v1, 0x133C($a1)
    ctx->pc = 0x362d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4924), GPR_U32(ctx, 3));
    // 0x362d30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x362d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d34: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x362d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x362d38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x362d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x362d3c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x362d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x362d40u;
}
