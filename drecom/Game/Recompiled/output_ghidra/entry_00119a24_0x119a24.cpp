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

// Function: entry_00119a24
// Address: 0x119a24 - 0x119a44
void entry_00119a24_0x119a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119a24_0x119a24");
#endif

    ctx->pc = 0x119a24u;

    // 0x119a24: 0x61023  negu        $v0, $a2
    ctx->pc = 0x119a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x119a28: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x119a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x119a2c: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x119a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x119a30: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x119a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119a34: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x119a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x119a38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x119a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x119a3c: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x119a3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x119a40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x119a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    ctx->pc = 0x119a44u;
}
