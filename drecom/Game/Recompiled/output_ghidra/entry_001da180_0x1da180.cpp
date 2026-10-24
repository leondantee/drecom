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

// Function: entry_001da180
// Address: 0x1da180 - 0x1da1c8
void entry_001da180_0x1da180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da180_0x1da180");
#endif

    ctx->pc = 0x1da180u;

    // 0x1da180: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da184: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1da184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da188: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1da188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1da18c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1da18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da190: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1da190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1da194: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1da194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1da198: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1da198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1da19c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da1a0: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1da1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1da1a4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1da1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da1a8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1da1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1da1ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1da1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da1b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da1b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da1b8: 0xac4400f0  sw          $a0, 0xF0($v0)
    ctx->pc = 0x1da1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 4));
    // 0x1da1bc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1da1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1da1c0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1da1c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1da1c4: 0x0  nop
    ctx->pc = 0x1da1c4u;
    // NOP
    ctx->pc = 0x1da1c8u;
}
