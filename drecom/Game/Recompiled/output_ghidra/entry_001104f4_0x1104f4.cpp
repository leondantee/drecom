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

// Function: entry_001104f4
// Address: 0x1104f4 - 0x110520
void entry_001104f4_0x1104f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001104f4_0x1104f4");
#endif

    ctx->pc = 0x1104f4u;

    // 0x1104f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1104f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1104f8: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x1104f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1104fc: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x1104fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x110500: 0x2504fff0  addiu       $a0, $t0, -0x10
    ctx->pc = 0x110500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x110504: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x110504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x110508: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x110508u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11050c: 0xc22823  subu        $a1, $a2, $v0
    ctx->pc = 0x11050cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x110510: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x110510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x110514: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x110514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x110518: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x110518u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x11051c: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x11051cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x110520u;
}
