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

// Function: entry_0015b340
// Address: 0x15b340 - 0x15b374
void entry_0015b340_0x15b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b340_0x15b340");
#endif

    ctx->pc = 0x15b340u;

    // 0x15b340: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b344: 0x906211ec  lbu         $v0, 0x11EC($v1)
    ctx->pc = 0x15b344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x15b348: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x15b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x15b34c: 0xa06211ec  sb          $v0, 0x11EC($v1)
    ctx->pc = 0x15b34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b350: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b354: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x15b354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x15b358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b35c: 0x28410030  slti        $at, $v0, 0x30
    ctx->pc = 0x15b35cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x15b360: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B360u;
    {
        const bool branch_taken_0x15b360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b360) {
            ctx->pc = 0x15B374u;
            return;
        }
    }
    ctx->pc = 0x15B368u;
    // 0x15b368: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x15b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x15b36c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b370: 0xa04311ec  sb          $v1, 0x11EC($v0)
    ctx->pc = 0x15b370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15b374u;
}
