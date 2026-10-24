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

// Function: entry_0018e364
// Address: 0x18e364 - 0x18e390
void entry_0018e364_0x18e364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e364_0x18e364");
#endif

    ctx->pc = 0x18e364u;

    // 0x18e364: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x18e364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x18e368: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x18e368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x18e36c: 0x8e020294  lw          $v0, 0x294($s0)
    ctx->pc = 0x18e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x18e370: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x18e370u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18e374: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E374u;
    {
        const bool branch_taken_0x18e374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e374) {
            ctx->pc = 0x18E390u;
            return;
        }
    }
    ctx->pc = 0x18E37Cu;
    // 0x18e37c: 0x92020240  lbu         $v0, 0x240($s0)
    ctx->pc = 0x18e37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x18e380: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18e380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e384: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x18e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x18e388: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e388u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e38c: 0xae02023c  sw          $v0, 0x23C($s0)
    ctx->pc = 0x18e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    ctx->pc = 0x18e390u;
}
