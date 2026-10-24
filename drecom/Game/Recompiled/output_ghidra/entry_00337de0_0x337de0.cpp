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

// Function: entry_00337de0
// Address: 0x337de0 - 0x337df0
void entry_00337de0_0x337de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337de0_0x337de0");
#endif

    ctx->pc = 0x337de0u;

    // 0x337de0: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x337de0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x337de4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x337de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x337de8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x337de8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x337dec: 0xae026850  sw          $v0, 0x6850($s0)
    ctx->pc = 0x337decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 2));
    ctx->pc = 0x337df0u;
}
