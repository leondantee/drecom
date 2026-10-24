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

// Function: entry_00256b20
// Address: 0x256b20 - 0x256b68
void entry_00256b20_0x256b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256b20_0x256b20");
#endif

    ctx->pc = 0x256b20u;

    // 0x256b20: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256b24: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x256b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x256b28: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x256b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x256b2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x256b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256b30: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x256b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x256b34: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x256b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x256b38: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x256b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x256b3c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256b40: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x256b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x256b44: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x256b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256b48: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x256b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x256b4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x256b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x256b50: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x256b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256b58: 0xac4400f0  sw          $a0, 0xF0($v0)
    ctx->pc = 0x256b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 4));
    // 0x256b5c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x256b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x256b60: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x256b60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x256b64: 0x0  nop
    ctx->pc = 0x256b64u;
    // NOP
    ctx->pc = 0x256b68u;
}
