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

// Function: entry_0036b5a0
// Address: 0x36b5a0 - 0x36b620
void entry_0036b5a0_0x36b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b5a0_0x36b5a0");
#endif

    ctx->pc = 0x36b5a0u;

    // 0x36b5a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b5a4: 0x9022e651  lbu         $v0, -0x19AF($at)
    ctx->pc = 0x36b5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E651u));
    // 0x36b5a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b5ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x36b5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36b5b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x36B5B0u;
    {
        const bool branch_taken_0x36b5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b5b0) {
            ctx->pc = 0x36B578u;
            return;
        }
    }
    ctx->pc = 0x36B5B8u;
    // 0x36b5b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b5bc: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b5bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b5c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b5c4: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x36b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x36b5c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b5cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b5d0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b5d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b5d8: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b5dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36b5e0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36b5e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36b5e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36b5ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b5f0: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b5f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b5f8: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x36b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x36b5fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b600: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b604: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b60c: 0x8c441390  lw          $a0, 0x1390($v0)
    ctx->pc = 0x36b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b610: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36b614: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36b618: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36b61c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x36b620u;
}
