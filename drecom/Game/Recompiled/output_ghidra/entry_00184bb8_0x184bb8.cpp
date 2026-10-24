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

// Function: entry_00184bb8
// Address: 0x184bb8 - 0x184bc8
void entry_00184bb8_0x184bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184bb8_0x184bb8");
#endif

    ctx->pc = 0x184bb8u;

    // 0x184bb8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x184bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x184bbc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x184bbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184bc0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x184bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x184bc4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x184bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x184bc8u;
}
