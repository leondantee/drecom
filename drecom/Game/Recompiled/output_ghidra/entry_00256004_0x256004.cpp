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

// Function: entry_00256004
// Address: 0x256004 - 0x256030
void entry_00256004_0x256004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256004_0x256004");
#endif

    ctx->pc = 0x256004u;

    // 0x256004: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x256004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x256008: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x256008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x25600c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x25600cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x256010: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x256010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x256014: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x256014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x256018: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x256018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x25601c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x256020: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x256020u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256024: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x256024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x256028: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x256028u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25602c: 0x0  nop
    ctx->pc = 0x25602cu;
    // NOP
    ctx->pc = 0x256030u;
}
