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

// Function: entry_001d1544
// Address: 0x1d1544 - 0x1d1578
void entry_001d1544_0x1d1544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1544_0x1d1544");
#endif

    ctx->pc = 0x1d1544u;

    // 0x1d1544: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1548: 0xa0600060  sb          $zero, 0x60($v1)
    ctx->pc = 0x1d1548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d154c: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1d154cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1d1550: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d1554: 0x90630061  lbu         $v1, 0x61($v1)
    ctx->pc = 0x1d1554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
    // 0x1d1558: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d1558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d155c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1d155cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d1560: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1560u;
    {
        const bool branch_taken_0x1d1560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1560) {
            ctx->pc = 0x1D1578u;
            return;
        }
    }
    ctx->pc = 0x1D1568u;
    // 0x1d1568: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d156c: 0x90630061  lbu         $v1, 0x61($v1)
    ctx->pc = 0x1d156cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
    // 0x1d1570: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d1574: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x1d1574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    ctx->pc = 0x1d1578u;
}
