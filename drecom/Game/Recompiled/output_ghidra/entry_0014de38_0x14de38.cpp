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

// Function: entry_0014de38
// Address: 0x14de38 - 0x14de80
void entry_0014de38_0x14de38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014de38_0x14de38");
#endif

    ctx->pc = 0x14de38u;

    // 0x14de38: 0x920213a5  lbu         $v0, 0x13A5($s0)
    ctx->pc = 0x14de38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5029)));
    // 0x14de3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14de3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14de40: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14de40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14de44: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14de44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14de48: 0x24425300  addiu       $v0, $v0, 0x5300
    ctx->pc = 0x14de48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x14de4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14de50: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x14de50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14de54: 0xa602122c  sh          $v0, 0x122C($s0)
    ctx->pc = 0x14de54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4652), (uint16_t)GPR_U32(ctx, 2));
    // 0x14de58: 0x920213a5  lbu         $v0, 0x13A5($s0)
    ctx->pc = 0x14de58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5029)));
    // 0x14de5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14de60: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14de60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14de64: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14de64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14de68: 0x24425308  addiu       $v0, $v0, 0x5308
    ctx->pc = 0x14de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21256));
    // 0x14de6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14de70: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x14de70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14de74: 0xa602122e  sh          $v0, 0x122E($s0)
    ctx->pc = 0x14de74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4654), (uint16_t)GPR_U32(ctx, 2));
    // 0x14de78: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x14DE78u;
    {
        const bool branch_taken_0x14de78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de78) {
            ctx->pc = 0x14DF80u;
            return;
        }
    }
    ctx->pc = 0x14DE80u;
}
