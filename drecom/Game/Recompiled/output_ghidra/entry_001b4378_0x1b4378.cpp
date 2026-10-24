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

// Function: entry_001b4378
// Address: 0x1b4378 - 0x1b43c0
void entry_001b4378_0x1b4378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4378_0x1b4378");
#endif

    ctx->pc = 0x1b4378u;

    // 0x1b4378: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b437c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b437cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b4380: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4384: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b4384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b4388: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1B4388u;
    {
        const bool branch_taken_0x1b4388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4388) {
            ctx->pc = 0x1B44D4u;
            return;
        }
    }
    ctx->pc = 0x1B4390u;
    // 0x1b4390: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b4390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b4394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4398: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b4398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b439c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B439Cu;
    {
        const bool branch_taken_0x1b439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b439c) {
            ctx->pc = 0x1B43C0u;
            return;
        }
    }
    ctx->pc = 0x1B43A4u;
    // 0x1b43a4: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1b43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b43a8: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b43a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b43ac: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b43acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b43b0: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1b43b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b43b4: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b43b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b43b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B43B8u;
    {
        const bool branch_taken_0x1b43b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b43b8) {
            ctx->pc = 0x1B4408u;
            return;
        }
    }
    ctx->pc = 0x1B43C0u;
}
