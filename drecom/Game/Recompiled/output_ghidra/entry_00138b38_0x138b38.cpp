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

// Function: entry_00138b38
// Address: 0x138b38 - 0x138b80
void entry_00138b38_0x138b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b38_0x138b38");
#endif

    ctx->pc = 0x138b38u;

    // 0x138b38: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x138b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138b3c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x138b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138b40: 0x24634ee0  addiu       $v1, $v1, 0x4EE0
    ctx->pc = 0x138b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20192));
    // 0x138b44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x138b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138b48: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x138b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138b4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x138b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138b50: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x138b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x138b54: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x138b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x138b58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x138b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138b5c: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x138b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x138b60: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138b64: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x138b64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x138b68: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x138b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138b6c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x138b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138b70: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x138b70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x138b74: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138b74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138b7c: 0x0  nop
    ctx->pc = 0x138b7cu;
    // NOP
    ctx->pc = 0x138b80u;
}
