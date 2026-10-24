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

// Function: entry_001700ec
// Address: 0x1700ec - 0x170104
void entry_001700ec_0x1700ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001700ec_0x1700ec");
#endif

    ctx->pc = 0x1700ecu;

    // 0x1700ec: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1700ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1700f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1700f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1700f4: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1700f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1700f8: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x1700f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x1700fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1700fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170100: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x170100u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    ctx->pc = 0x170104u;
}
