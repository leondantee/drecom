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

// Function: entry_00216c14
// Address: 0x216c14 - 0x216c24
void entry_00216c14_0x216c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216c14_0x216c14");
#endif

    ctx->pc = 0x216c14u;

    // 0x216c14: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x216c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x216c18: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x216c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x216c1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x216c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x216c20: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x216c20u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x216c24u;
}
