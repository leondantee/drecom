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

// Function: entry_001084b8
// Address: 0x1084b8 - 0x108500
void entry_001084b8_0x1084b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001084b8_0x1084b8");
#endif

    ctx->pc = 0x1084b8u;

    // 0x1084b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1084b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1084bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1084bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1084c0: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x1084c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
    // 0x1084c4: 0x3484d410  ori         $a0, $a0, 0xD410
    ctx->pc = 0x1084c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54288);
    // 0x1084c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1084c8u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0));
    // 0x1084cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1084ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1084d0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1084d0u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 9));
    // 0x1084d4: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x1084d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x1084d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1084d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1084dc: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1084dcu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 10));
    // 0x1084e0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x1084e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x1084e4: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1084e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1084e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1084e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1084ec: 0x12b2821  addu        $a1, $t1, $t3
    ctx->pc = 0x1084ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1084f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1084f0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2));
    // 0x1084f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1084f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1084f8: 0x10e4821  addu        $t1, $t0, $t6
    ctx->pc = 0x1084f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1084fc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1084fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    ctx->pc = 0x108500u;
}
