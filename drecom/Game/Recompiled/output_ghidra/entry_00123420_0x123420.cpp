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

// Function: entry_00123420
// Address: 0x123420 - 0x123450
void entry_00123420_0x123420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123420_0x123420");
#endif

    ctx->pc = 0x123420u;

    // 0x123420: 0x2a03000b  slti        $v1, $s0, 0xB
    ctx->pc = 0x123420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x123424: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x123424u;
    {
        const bool branch_taken_0x123424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123424) {
            ctx->pc = 0x1233DCu;
            return;
        }
    }
    ctx->pc = 0x12342Cu;
    // 0x12342c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x123430: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x123430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x123434: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x123434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x123438: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x123438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x12343c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x12343Cu;
    {
        const bool branch_taken_0x12343c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12343c) {
            ctx->pc = 0x1234A4u;
            return;
        }
    }
    ctx->pc = 0x123444u;
    // 0x123444: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123444u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123448: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x123448u;
    {
        const bool branch_taken_0x123448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123448) {
            ctx->pc = 0x123490u;
            return;
        }
    }
    ctx->pc = 0x123450u;
}
