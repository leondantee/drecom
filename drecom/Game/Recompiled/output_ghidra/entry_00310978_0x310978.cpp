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

// Function: entry_00310978
// Address: 0x310978 - 0x3109a8
void entry_00310978_0x310978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310978_0x310978");
#endif

    ctx->pc = 0x310978u;

    // 0x310978: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31097c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x31097cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x310980: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x310980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x310984: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x310984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x310988: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x310988u;
    {
        const bool branch_taken_0x310988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310988) {
            ctx->pc = 0x3109A8u;
            return;
        }
    }
    ctx->pc = 0x310990u;
    // 0x310990: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310994: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x310994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x310998: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x310998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31099c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x31099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3109a0: 0x148300af  bne         $a0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x3109A0u;
    {
        const bool branch_taken_0x3109a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3109a0) {
            ctx->pc = 0x310C60u;
            return;
        }
    }
    ctx->pc = 0x3109A8u;
}
