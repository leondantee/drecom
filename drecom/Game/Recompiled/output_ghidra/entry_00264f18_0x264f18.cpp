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

// Function: entry_00264f18
// Address: 0x264f18 - 0x264f58
void entry_00264f18_0x264f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264f18_0x264f18");
#endif

    ctx->pc = 0x264f18u;

    // 0x264f18: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x264f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x264f1c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x264f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x264f20: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x264f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x264f24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264f28: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x264f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x264f2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264f30: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x264f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x264f34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264f38: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x264f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x264f3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264f40: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x264f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x264f44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264f48: 0xae03124c  sw          $v1, 0x124C($s0)
    ctx->pc = 0x264f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4684), GPR_U32(ctx, 3));
    // 0x264f4c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264f50: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264f54: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    ctx->pc = 0x264f58u;
}
