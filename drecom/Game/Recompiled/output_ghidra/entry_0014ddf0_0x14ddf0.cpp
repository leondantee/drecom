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

// Function: entry_0014ddf0
// Address: 0x14ddf0 - 0x14de38
void entry_0014ddf0_0x14ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ddf0_0x14ddf0");
#endif

    ctx->pc = 0x14ddf0u;

    // 0x14ddf0: 0x920213a4  lbu         $v0, 0x13A4($s0)
    ctx->pc = 0x14ddf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5028)));
    // 0x14ddf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ddf8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14ddfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14de00: 0x24425300  addiu       $v0, $v0, 0x5300
    ctx->pc = 0x14de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x14de04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14de08: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x14de08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14de0c: 0xa602122c  sh          $v0, 0x122C($s0)
    ctx->pc = 0x14de0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4652), (uint16_t)GPR_U32(ctx, 2));
    // 0x14de10: 0x920213a4  lbu         $v0, 0x13A4($s0)
    ctx->pc = 0x14de10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5028)));
    // 0x14de14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14de14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14de18: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14de18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14de1c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14de20: 0x24425308  addiu       $v0, $v0, 0x5308
    ctx->pc = 0x14de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21256));
    // 0x14de24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14de24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14de28: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x14de28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14de2c: 0xa602122e  sh          $v0, 0x122E($s0)
    ctx->pc = 0x14de2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4654), (uint16_t)GPR_U32(ctx, 2));
    // 0x14de30: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x14DE30u;
    {
        const bool branch_taken_0x14de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de30) {
            ctx->pc = 0x14DF80u;
            return;
        }
    }
    ctx->pc = 0x14DE38u;
}
