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

// Function: entry_0013d808
// Address: 0x13d808 - 0x13d850
void entry_0013d808_0x13d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d808_0x13d808");
#endif

    ctx->pc = 0x13d808u;

    // 0x13d808: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x13d808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x13d80c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13d80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13d810: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x13d810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x13d814: 0x3464000f  ori         $a0, $v1, 0xF
    ctx->pc = 0x13d814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x13d818: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x13d818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x13d81c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13d81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13d820: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x13d820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x13d824: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13d824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13d828: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x13d828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x13d82c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13d82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13d830: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x13d830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x13d834: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x13d834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13d838: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x13d838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x13d83c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13d83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13d840: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x13d840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x13d844: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x13d844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13d848: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d84c: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x13d84cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    ctx->pc = 0x13d850u;
}
