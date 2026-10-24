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

// Function: entry_001615f4
// Address: 0x1615f4 - 0x16162c
void entry_001615f4_0x1615f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001615f4_0x1615f4");
#endif

    ctx->pc = 0x1615f4u;

    // 0x1615f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1615f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1615f8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1615f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1615fc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1615fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x161600: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x161600u;
    {
        const bool branch_taken_0x161600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161600) {
            ctx->pc = 0x16162Cu;
            return;
        }
    }
    ctx->pc = 0x161608u;
    // 0x161608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16160c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16160cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161610: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x161610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x161614: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161618: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16161c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16161cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161620: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x161624u;
    {
        const bool branch_taken_0x161624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161624) {
            ctx->pc = 0x161648u;
            return;
        }
    }
    ctx->pc = 0x16162Cu;
}
