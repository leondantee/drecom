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

// Function: entry_00256fc0
// Address: 0x256fc0 - 0x256fd0
void entry_00256fc0_0x256fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256fc0_0x256fc0");
#endif

    ctx->pc = 0x256fc0u;

    // 0x256fc0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x256fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x256fc4: 0x3443010d  ori         $v1, $v0, 0x10D
    ctx->pc = 0x256fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)269);
    // 0x256fc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x256fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256fcc: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x256fccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    ctx->pc = 0x256fd0u;
}
