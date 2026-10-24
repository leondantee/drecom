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

// Function: entry_00194360
// Address: 0x194360 - 0x194378
void entry_00194360_0x194360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194360_0x194360");
#endif

    ctx->pc = 0x194360u;

    // 0x194360: 0x92c30348  lbu         $v1, 0x348($s6)
    ctx->pc = 0x194360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x194364: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x194364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194368: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x194368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19436c: 0x1460ff55  bnez        $v1, . + 4 + (-0xAB << 2)
    ctx->pc = 0x19436Cu;
    {
        const bool branch_taken_0x19436c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19436c) {
            ctx->pc = 0x1940C4u;
            return;
        }
    }
    ctx->pc = 0x194374u;
    // 0x194374: 0x0  nop
    ctx->pc = 0x194374u;
    // NOP
    ctx->pc = 0x194378u;
}
