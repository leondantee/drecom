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

// Function: entry_0013c658
// Address: 0x13c658 - 0x13c674
void entry_0013c658_0x13c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c658_0x13c658");
#endif

    ctx->pc = 0x13c658u;

    // 0x13c658: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c65c: 0x94430052  lhu         $v1, 0x52($v0)
    ctx->pc = 0x13c65cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x13c660: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x13c660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13c664: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13c664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x13c668: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c66c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x13c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x13c670: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x13c670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    ctx->pc = 0x13c674u;
}
