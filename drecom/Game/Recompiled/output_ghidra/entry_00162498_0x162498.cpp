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

// Function: entry_00162498
// Address: 0x162498 - 0x1624d0
void entry_00162498_0x162498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162498_0x162498");
#endif

    ctx->pc = 0x162498u;

    // 0x162498: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x162498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x16249c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x16249cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1624a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1624A0u;
    {
        const bool branch_taken_0x1624a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1624a0) {
            ctx->pc = 0x162508u;
            return;
        }
    }
    ctx->pc = 0x1624A8u;
    // 0x1624a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1624a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1624ac: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1624acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1624b0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1624b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1624b4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1624b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1624b8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1624b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1624bc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1624bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1624c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1624c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1624c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1624c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1624c8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1624C8u;
    {
        const bool branch_taken_0x1624c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1624c8) {
            ctx->pc = 0x1625A8u;
            return;
        }
    }
    ctx->pc = 0x1624D0u;
}
