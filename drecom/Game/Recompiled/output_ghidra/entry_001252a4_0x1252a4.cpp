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

// Function: entry_001252a4
// Address: 0x1252a4 - 0x1252b8
void entry_001252a4_0x1252a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001252a4_0x1252a4");
#endif

    ctx->pc = 0x1252a4u;

    // 0x1252a4: 0x96020084  lhu         $v0, 0x84($s0)
    ctx->pc = 0x1252a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1252a8: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x1252a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x1252ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1252acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1252b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1252b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1252b4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1252b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x1252b8u;
}
