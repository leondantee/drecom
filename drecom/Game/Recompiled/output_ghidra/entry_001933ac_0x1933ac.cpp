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

// Function: entry_001933ac
// Address: 0x1933ac - 0x1933e8
void entry_001933ac_0x1933ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001933ac_0x1933ac");
#endif

    ctx->pc = 0x1933acu;

    // 0x1933ac: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1933acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1933b0: 0x8c352580  lw          $s5, 0x2580($at)
    ctx->pc = 0x1933b0u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x532580u));
    // 0x1933b4: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1933b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1933b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1933b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1933bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1933bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1933c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1933c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1933c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1933c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1933c8: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x1933c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1933cc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1933ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1933d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1933d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1933d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1933d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1933d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1933d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1933dc: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x1933dcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1933e0: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x1933e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1933e4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1933e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x1933e8u;
}
