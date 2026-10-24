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

// Function: entry_0024d0b8
// Address: 0x24d0b8 - 0x24d0dc
void entry_0024d0b8_0x24d0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024d0b8_0x24d0b8");
#endif

    ctx->pc = 0x24d0b8u;

    // 0x24d0b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d0bc: 0x8c700104  lw          $s0, 0x104($v1)
    ctx->pc = 0x24d0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x24d0c0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24d0c4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24d0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24d0c8: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D0C8u;
    {
        const bool branch_taken_0x24d0c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d0c8) {
            ctx->pc = 0x24D0DCu;
            return;
        }
    }
    ctx->pc = 0x24D0D0u;
    // 0x24d0d0: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24d0d4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24d0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24d0d8: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    ctx->pc = 0x24d0dcu;
}
