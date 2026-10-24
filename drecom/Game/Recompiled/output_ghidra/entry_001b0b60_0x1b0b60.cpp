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

// Function: entry_001b0b60
// Address: 0x1b0b60 - 0x1b0ba8
void entry_001b0b60_0x1b0b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0b60_0x1b0b60");
#endif

    ctx->pc = 0x1b0b60u;

    // 0x1b0b60: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1b0b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b0b64: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1b0b64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0b68: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x1b0b68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1b0b6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0b70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0b74: 0x3c28821  addu        $s1, $fp, $v0
    ctx->pc = 0x1b0b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b0b78: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x1b0b78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1b0b7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0b80: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0b84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1b0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1b0b88: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1b0b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0b8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b0b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b0b90: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1b0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1b0b94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0b98: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1b0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b0b9c: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x1b0b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1b0ba0: 0x0  nop
    ctx->pc = 0x1b0ba0u;
    // NOP
    // 0x1b0ba4: 0x0  nop
    ctx->pc = 0x1b0ba4u;
    // NOP
    ctx->pc = 0x1b0ba8u;
}
