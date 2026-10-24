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

// Function: entry_001fd2f0
// Address: 0x1fd2f0 - 0x1fd308
void entry_001fd2f0_0x1fd2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd2f0_0x1fd2f0");
#endif

    ctx->pc = 0x1fd2f0u;

    // 0x1fd2f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd2f4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fd2f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fd2f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd2fc: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fd2fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fd300: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FD300u;
    {
        const bool branch_taken_0x1fd300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd300) {
            ctx->pc = 0x1FD2B4u;
            return;
        }
    }
    ctx->pc = 0x1FD308u;
}
