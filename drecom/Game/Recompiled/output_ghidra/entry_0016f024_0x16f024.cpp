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

// Function: entry_0016f024
// Address: 0x16f024 - 0x16f040
void entry_0016f024_0x16f024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f024_0x16f024");
#endif

    ctx->pc = 0x16f024u;

    // 0x16f024: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x16f024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x16f028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f02c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x16f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16f030: 0xac4001ac  sw          $zero, 0x1AC($v0)
    ctx->pc = 0x16f030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 0));
    // 0x16f034: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x16f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16f038: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x16f038u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f03c: 0x0  nop
    ctx->pc = 0x16f03cu;
    // NOP
    ctx->pc = 0x16f040u;
}
