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

// Function: entry_00124408
// Address: 0x124408 - 0x124470
void entry_00124408_0x124408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124408_0x124408");
#endif

    ctx->pc = 0x124408u;

    // 0x124408: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x124408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12440c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x12440cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x124410: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x124410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x124414: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x124414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x124418: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x124418u;
    {
        const bool branch_taken_0x124418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124418) {
            ctx->pc = 0x124470u;
            return;
        }
    }
    ctx->pc = 0x124420u;
    // 0x124420: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124424: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x124424u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x124428: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x124428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12442c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x12442cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x124430: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x124430u;
    {
        const bool branch_taken_0x124430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124430) {
            ctx->pc = 0x1244B8u;
            return;
        }
    }
    ctx->pc = 0x124438u;
    // 0x124438: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12443c: 0x90530012  lbu         $s3, 0x12($v0)
    ctx->pc = 0x12443cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x124440: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x124440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x124444: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x124444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x124448: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x124448u;
    {
        const bool branch_taken_0x124448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124448) {
            ctx->pc = 0x1244B8u;
            return;
        }
    }
    ctx->pc = 0x124450u;
    // 0x124450: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124454: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x124454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x124458: 0xa0400d80  sb          $zero, 0xD80($v0)
    ctx->pc = 0x124458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3456), (uint8_t)GPR_U32(ctx, 0));
    // 0x12445c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124460: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x124460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x124464: 0xa0400e10  sb          $zero, 0xE10($v0)
    ctx->pc = 0x124464u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3600), (uint8_t)GPR_U32(ctx, 0));
    // 0x124468: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x124468u;
    {
        const bool branch_taken_0x124468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124468) {
            ctx->pc = 0x1244B8u;
            return;
        }
    }
    ctx->pc = 0x124470u;
}
