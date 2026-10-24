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

// Function: entry_00257620
// Address: 0x257620 - 0x257654
void entry_00257620_0x257620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257620_0x257620");
#endif

    ctx->pc = 0x257620u;

    // 0x257620: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x257620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x257624: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x257624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x257628: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25762c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x25762cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257630: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x257630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x257634: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257638: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x257638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25763c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x25763Cu;
    {
        const bool branch_taken_0x25763c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25763c) {
            ctx->pc = 0x2575B8u;
            return;
        }
    }
    ctx->pc = 0x257644u;
    // 0x257644: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257644u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257648: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x257648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25764c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x25764cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x257650: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x257650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->pc = 0x257654u;
}
