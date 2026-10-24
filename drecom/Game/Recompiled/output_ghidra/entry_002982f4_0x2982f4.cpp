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

// Function: entry_002982f4
// Address: 0x2982f4 - 0x298304
void entry_002982f4_0x2982f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002982f4_0x2982f4");
#endif

    ctx->pc = 0x2982f4u;

    // 0x2982f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2982f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2982f8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2982f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2982fc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2982fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x298300: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x298300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x298304u;
}
