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

// Function: entry_002160b8
// Address: 0x2160b8 - 0x2160c8
void entry_002160b8_0x2160b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002160b8_0x2160b8");
#endif

    ctx->pc = 0x2160b8u;

    // 0x2160b8: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x2160b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2160bc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2160bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2160c0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2160c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2160c4: 0x0  nop
    ctx->pc = 0x2160c4u;
    // NOP
    ctx->pc = 0x2160c8u;
}
