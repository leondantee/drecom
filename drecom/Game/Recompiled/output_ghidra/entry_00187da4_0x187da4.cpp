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

// Function: entry_00187da4
// Address: 0x187da4 - 0x187dd0
void entry_00187da4_0x187da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187da4_0x187da4");
#endif

    ctx->pc = 0x187da4u;

    // 0x187da4: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x187da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x187da8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x187da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x187dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187db0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187db4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187db8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187dc0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x187dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x187dc4: 0x904200d0  lbu         $v0, 0xD0($v0)
    ctx->pc = 0x187dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x187dc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x187dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x187dcc: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x187dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    ctx->pc = 0x187dd0u;
}
