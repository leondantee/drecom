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

// Function: entry_0024d100
// Address: 0x24d100 - 0x24d124
void entry_0024d100_0x24d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024d100_0x24d100");
#endif

    ctx->pc = 0x24d100u;

    // 0x24d100: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24d100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d104: 0x8c70010c  lw          $s0, 0x10C($v1)
    ctx->pc = 0x24d104u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x24d108: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24d108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24d10c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24d10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24d110: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D110u;
    {
        const bool branch_taken_0x24d110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d110) {
            ctx->pc = 0x24D124u;
            return;
        }
    }
    ctx->pc = 0x24D118u;
    // 0x24d118: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24d118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24d11c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24d11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24d120: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24d120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    ctx->pc = 0x24d124u;
}
