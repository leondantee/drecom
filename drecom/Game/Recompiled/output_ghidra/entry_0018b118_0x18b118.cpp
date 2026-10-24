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

// Function: entry_0018b118
// Address: 0x18b118 - 0x18b14c
void entry_0018b118_0x18b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b118_0x18b118");
#endif

    ctx->pc = 0x18b118u;

    // 0x18b118: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x18b118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x18b11c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x18b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x18b120: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18b124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b128: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x18b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18b12c: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x18b12cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b130: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18b134: 0x578821  addu        $s1, $v0, $s7
    ctx->pc = 0x18b134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x18b138: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x18b138u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18b13c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x18b13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18b140: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x18b140u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b144: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x18B144u;
    {
        const bool branch_taken_0x18b144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b144) {
            ctx->pc = 0x18B1E0u;
            return;
        }
    }
    ctx->pc = 0x18B14Cu;
}
