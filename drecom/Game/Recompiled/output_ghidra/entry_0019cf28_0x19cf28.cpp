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

// Function: entry_0019cf28
// Address: 0x19cf28 - 0x19cf58
void entry_0019cf28_0x19cf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cf28_0x19cf28");
#endif

    ctx->pc = 0x19cf28u;

    // 0x19cf28: 0x3223001f  andi        $v1, $s1, 0x1F
    ctx->pc = 0x19cf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x19cf2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19cf30: 0x622006  srlv        $a0, $v0, $v1
    ctx->pc = 0x19cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19cf34: 0x111143  sra         $v0, $s1, 5
    ctx->pc = 0x19cf34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 5));
    // 0x19cf38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19cf3c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19cf40: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x19cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x19cf44: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cf48: 0x8c6219ec  lw          $v0, 0x19EC($v1)
    ctx->pc = 0x19cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6636)));
    // 0x19cf4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x19cf50: 0xac6219ec  sw          $v0, 0x19EC($v1)
    ctx->pc = 0x19cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6636), GPR_U32(ctx, 2));
    // 0x19cf54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19cf58u;
}
