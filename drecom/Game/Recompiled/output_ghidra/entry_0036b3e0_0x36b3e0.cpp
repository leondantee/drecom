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

// Function: entry_0036b3e0
// Address: 0x36b3e0 - 0x36b460
void entry_0036b3e0_0x36b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b3e0_0x36b3e0");
#endif

    ctx->pc = 0x36b3e0u;

    // 0x36b3e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b3e4: 0x9022e651  lbu         $v0, -0x19AF($at)
    ctx->pc = 0x36b3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E651u));
    // 0x36b3e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b3ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x36b3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36b3f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x36B3F0u;
    {
        const bool branch_taken_0x36b3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b3f0) {
            ctx->pc = 0x36B3B8u;
            return;
        }
    }
    ctx->pc = 0x36B3F8u;
    // 0x36b3f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b3fc: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b400: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b404: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x36b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x36b408: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b40c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b410: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b418: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b41c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36b420: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36b424: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36b428: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36b428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36b42c: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36b42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36b430: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b434: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x36b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x36b438: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36b43c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b440: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b448: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b44c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36b450: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36b454: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36b458: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x36B458u;
    {
        const bool branch_taken_0x36b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b458) {
            ctx->pc = 0x36B620u;
            return;
        }
    }
    ctx->pc = 0x36B460u;
}
