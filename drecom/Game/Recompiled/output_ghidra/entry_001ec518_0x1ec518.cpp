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

// Function: entry_001ec518
// Address: 0x1ec518 - 0x1ec55c
void entry_001ec518_0x1ec518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec518_0x1ec518");
#endif

    ctx->pc = 0x1ec518u;

    // 0x1ec518: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec51c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec520: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x1ec520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x1ec524: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1ec524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ec528: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1ec528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1ec52c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC52Cu;
    {
        const bool branch_taken_0x1ec52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec52c) {
            ctx->pc = 0x1EC55Cu;
            return;
        }
    }
    ctx->pc = 0x1EC534u;
    // 0x1ec534: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec538: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec53c: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x1ec53cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1ec540: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC540u;
    {
        const bool branch_taken_0x1ec540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec540) {
            ctx->pc = 0x1EC55Cu;
            return;
        }
    }
    ctx->pc = 0x1EC548u;
    // 0x1ec548: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec54c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ec54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec550: 0x8482005c  lh          $v0, 0x5C($a0)
    ctx->pc = 0x1ec550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1ec554: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1ec554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ec558: 0xa483005c  sh          $v1, 0x5C($a0)
    ctx->pc = 0x1ec558u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ec55cu;
}
