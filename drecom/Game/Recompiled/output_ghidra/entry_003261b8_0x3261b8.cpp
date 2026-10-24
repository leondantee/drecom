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

// Function: entry_003261b8
// Address: 0x3261b8 - 0x3261d8
void entry_003261b8_0x3261b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003261b8_0x3261b8");
#endif

    ctx->pc = 0x3261b8u;

    // 0x3261b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3261b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3261bc: 0x90620210  lbu         $v0, 0x210($v1)
    ctx->pc = 0x3261bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x3261c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3261c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3261c4: 0xa0620210  sb          $v0, 0x210($v1)
    ctx->pc = 0x3261c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 528), (uint8_t)GPR_U32(ctx, 2));
    // 0x3261c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3261c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3261cc: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x3261ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x3261d0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3261d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3261d4: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x3261d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
    ctx->pc = 0x3261d8u;
}
