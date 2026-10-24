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

// Function: entry_001b44d4
// Address: 0x1b44d4 - 0x1b4504
void entry_001b44d4_0x1b44d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b44d4_0x1b44d4");
#endif

    ctx->pc = 0x1b44d4u;

    // 0x1b44d4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b44d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b44d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b44d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b44dc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b44dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b44e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B44E0u;
    {
        const bool branch_taken_0x1b44e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44e0) {
            ctx->pc = 0x1B4504u;
            return;
        }
    }
    ctx->pc = 0x1B44E8u;
    // 0x1b44e8: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b44ec: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b44ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b44f0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b44f4: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1b44f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b44f8: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b44f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b44fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B44FCu;
    {
        const bool branch_taken_0x1b44fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44fc) {
            ctx->pc = 0x1B4520u;
            return;
        }
    }
    ctx->pc = 0x1B4504u;
}
