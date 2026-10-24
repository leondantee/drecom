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

// Function: entry_00359180
// Address: 0x359180 - 0x3591a4
void entry_00359180_0x359180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359180_0x359180");
#endif

    ctx->pc = 0x359180u;

    // 0x359180: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359184: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x359184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x359188: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x359188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35918c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x35918cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x359190: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x359190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359194: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x359194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x359198: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x359198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x35919c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3591a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3591a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x3591a4u;
}
