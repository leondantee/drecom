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

// Function: entry_00321ab0
// Address: 0x321ab0 - 0x321ac4
void entry_00321ab0_0x321ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321ab0_0x321ab0");
#endif

    ctx->pc = 0x321ab0u;

    // 0x321ab0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x321ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321ab4: 0x90c40348  lbu         $a0, 0x348($a2)
    ctx->pc = 0x321ab4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 840)));
    // 0x321ab8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x321ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x321abc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321ac0: 0xac640278  sw          $a0, 0x278($v1)
    ctx->pc = 0x321ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 4));
    ctx->pc = 0x321ac4u;
}
