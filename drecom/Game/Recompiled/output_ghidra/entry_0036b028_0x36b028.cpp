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

// Function: entry_0036b028
// Address: 0x36b028 - 0x36b0a8
void entry_0036b028_0x36b028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b028_0x36b028");
#endif

    ctx->pc = 0x36b028u;

    // 0x36b028: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b02c: 0x9022e651  lbu         $v0, -0x19AF($at)
    ctx->pc = 0x36b02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E651u));
    // 0x36b030: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b034: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x36b034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36b038: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x36B038u;
    {
        const bool branch_taken_0x36b038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b038) {
            ctx->pc = 0x36AFFCu;
            return;
        }
    }
    ctx->pc = 0x36B040u;
    // 0x36b040: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b044: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b048: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b04c: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x36b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x36b050: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b054: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b058: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b060: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b064: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36b068: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36b06c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36b070: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36b074: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b078: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b07c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b080: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x36b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x36b084: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b088: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b08c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b094: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b098: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36b09c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36b0a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36b0a4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x36b0a8u;
}
