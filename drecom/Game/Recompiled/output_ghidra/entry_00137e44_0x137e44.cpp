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

// Function: entry_00137e44
// Address: 0x137e44 - 0x137e78
void entry_00137e44_0x137e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e44_0x137e44");
#endif

    ctx->pc = 0x137e44u;

    // 0x137e44: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137e48: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x137e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x137e4c: 0x24424eb8  addiu       $v0, $v0, 0x4EB8
    ctx->pc = 0x137e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20152));
    // 0x137e50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x137e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x137e54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x137e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137e58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137e5c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x137e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x137e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137e64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x137e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x137e68: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x137e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x137e6c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x137e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137e70: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x137e70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x137e74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x137e78u;
}
