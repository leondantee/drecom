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

// Function: entry_0034accc
// Address: 0x34accc - 0x34ace0
void entry_0034accc_0x34accc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034accc_0x34accc");
#endif

    ctx->pc = 0x34acccu;

    // 0x34accc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34acccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34acd0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34acd4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34acd8: 0x34830020  ori         $v1, $a0, 0x20
    ctx->pc = 0x34acd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x34acdc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x34ace0u;
}
