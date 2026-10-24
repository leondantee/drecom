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

// Function: entry_001ff418
// Address: 0x1ff418 - 0x1ff43c
void entry_001ff418_0x1ff418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff418_0x1ff418");
#endif

    ctx->pc = 0x1ff418u;

    // 0x1ff418: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff41c: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1ff41cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ff420: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff424: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1ff424u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ff428: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FF428u;
    {
        const bool branch_taken_0x1ff428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff428) {
            ctx->pc = 0x1FF3DCu;
            return;
        }
    }
    ctx->pc = 0x1FF430u;
    // 0x1ff430: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1ff430u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff434: 0x100002d4  b           . + 4 + (0x2D4 << 2)
    ctx->pc = 0x1FF434u;
    {
        const bool branch_taken_0x1ff434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff434) {
            ctx->pc = 0x1FFF88u;
            return;
        }
    }
    ctx->pc = 0x1FF43Cu;
}
