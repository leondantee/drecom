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

// Function: entry_001fb7ec
// Address: 0x1fb7ec - 0x1fb828
void entry_001fb7ec_0x1fb7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb7ec_0x1fb7ec");
#endif

    ctx->pc = 0x1fb7ecu;

    // 0x1fb7ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb7f0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fb7f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fb7f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb7f8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fb7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fb7fc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fb7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb800: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb804: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fb804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb808: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x1fb808u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb80c: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x1fb80cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb810: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb814: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1fb814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fb818: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1fb818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fb81c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fb81cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fb820: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1fb820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb824: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1fb824u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1fb828u;
}
