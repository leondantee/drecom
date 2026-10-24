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

// Function: entry_0017dc34
// Address: 0x17dc34 - 0x17dc70
void entry_0017dc34_0x17dc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc34_0x17dc34");
#endif

    ctx->pc = 0x17dc34u;

    // 0x17dc34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17dc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dc38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dc3c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17dc40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dc44: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17dc48: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17dc4c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17dc50: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dc54: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dc58: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17dc5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dc60: 0xa4650190  sh          $a1, 0x190($v1)
    ctx->pc = 0x17dc60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 400), (uint16_t)GPR_U32(ctx, 5));
    // 0x17dc64: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17dc68: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x17dc68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17dc6c: 0x0  nop
    ctx->pc = 0x17dc6cu;
    // NOP
    ctx->pc = 0x17dc70u;
}
