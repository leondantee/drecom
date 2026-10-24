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

// Function: entry_002576c0
// Address: 0x2576c0 - 0x2576f4
void entry_002576c0_0x2576c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002576c0_0x2576c0");
#endif

    ctx->pc = 0x2576c0u;

    // 0x2576c0: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x2576c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2576c4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2576c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2576c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2576c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2576cc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2576ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2576d0: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x2576d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2576d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2576d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2576d8: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2576d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2576dc: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2576DCu;
    {
        const bool branch_taken_0x2576dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2576dc) {
            ctx->pc = 0x257654u;
            return;
        }
    }
    ctx->pc = 0x2576E4u;
    // 0x2576e4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2576e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2576e8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2576e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2576ec: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x2576ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2576f0: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x2576f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->pc = 0x2576f4u;
}
