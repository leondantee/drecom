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

// Function: entry_0019f598
// Address: 0x19f598 - 0x19f5c0
void entry_0019f598_0x19f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f598_0x19f598");
#endif

    ctx->pc = 0x19f598u;

    // 0x19f598: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f59c: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f5a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19f5a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19f5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f5a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19f5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f5ac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x19f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19f5b0: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x19f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x19f5b4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x19f5b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x19f5b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19f5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19f5bc: 0x0  nop
    ctx->pc = 0x19f5bcu;
    // NOP
    ctx->pc = 0x19f5c0u;
}
