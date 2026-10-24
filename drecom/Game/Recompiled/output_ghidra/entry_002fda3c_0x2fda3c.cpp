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

// Function: entry_002fda3c
// Address: 0x2fda3c - 0x2fda64
void entry_002fda3c_0x2fda3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fda3c_0x2fda3c");
#endif

    ctx->pc = 0x2fda3cu;

    // 0x2fda3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2fda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fda40: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fda40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fda44: 0x28630032  slti        $v1, $v1, 0x32
    ctx->pc = 0x2fda44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2fda48: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDA48u;
    {
        const bool branch_taken_0x2fda48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fda48) {
            ctx->pc = 0x2FDA64u;
            return;
        }
    }
    ctx->pc = 0x2FDA50u;
    // 0x2fda50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2fda50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fda54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fda54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fda58: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2fda58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2fda5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2fda5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fda60: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fda60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2fda64u;
}
