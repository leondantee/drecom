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

// Function: entry_0024d0dc
// Address: 0x24d0dc - 0x24d100
void entry_0024d0dc_0x24d0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024d0dc_0x24d0dc");
#endif

    ctx->pc = 0x24d0dcu;

    // 0x24d0dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d0e0: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x24d0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x24d0e4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24d0e8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24d0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24d0ec: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D0ECu;
    {
        const bool branch_taken_0x24d0ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d0ec) {
            ctx->pc = 0x24D100u;
            return;
        }
    }
    ctx->pc = 0x24D0F4u;
    // 0x24d0f4: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24d0f8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24d0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24d0fc: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    ctx->pc = 0x24d100u;
}
