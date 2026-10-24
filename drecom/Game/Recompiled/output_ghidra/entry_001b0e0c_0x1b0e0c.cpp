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

// Function: entry_001b0e0c
// Address: 0x1b0e0c - 0x1b0e88
void entry_001b0e0c_0x1b0e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0e0c_0x1b0e0c");
#endif

    ctx->pc = 0x1b0e0cu;

    // 0x1b0e0c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x1b0e0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b0e10: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x1b0e10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0e14: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x1b0e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1b0e18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0e1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0e20: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1b0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1b0e24: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1b0e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0e28: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x1b0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1b0e2c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b0e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b0e30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0e34: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0e38: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1b0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1b0e3c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1b0e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0e40: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1b0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1b0e44: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b0e44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b0e48: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0e4c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0e50: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1b0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1b0e54: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1b0e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0e58: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1b0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1b0e5c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1b0e5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b0e60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0e64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0e68: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1b0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b0e6c: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1b0e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0e70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b0e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b0e74: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1b0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1b0e78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0e7c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1b0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1b0e80: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x1b0e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1b0e84: 0x0  nop
    ctx->pc = 0x1b0e84u;
    // NOP
    ctx->pc = 0x1b0e88u;
}
