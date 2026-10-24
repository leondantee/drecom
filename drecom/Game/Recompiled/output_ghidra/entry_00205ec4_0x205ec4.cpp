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

// Function: entry_00205ec4
// Address: 0x205ec4 - 0x205f08
void entry_00205ec4_0x205ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205ec4_0x205ec4");
#endif

    ctx->pc = 0x205ec4u;

    // 0x205ec4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205ec8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x205ec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x205ecc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x205eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x205ed0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x205ed0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x205ed4: 0x28610259  slti        $at, $v1, 0x259
    ctx->pc = 0x205ed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)601) ? 1 : 0);
    // 0x205ed8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x205ED8u;
    {
        const bool branch_taken_0x205ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ed8) {
            ctx->pc = 0x205F30u;
            return;
        }
    }
    ctx->pc = 0x205EE0u;
    // 0x205ee0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205ee4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x205ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x205ee8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x205ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x205eec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x205eecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x205ef0: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x205ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x205ef4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x205EF4u;
    {
        const bool branch_taken_0x205ef4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x205ef4) {
            ctx->pc = 0x205F08u;
            return;
        }
    }
    ctx->pc = 0x205EFCu;
    // 0x205efc: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x205efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x205f00: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x205F00u;
    {
        const bool branch_taken_0x205f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f00) {
            ctx->pc = 0x205F30u;
            return;
        }
    }
    ctx->pc = 0x205F08u;
}
