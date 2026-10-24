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

// Function: entry_0014e354
// Address: 0x14e354 - 0x14e3a0
void entry_0014e354_0x14e354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e354_0x14e354");
#endif

    ctx->pc = 0x14e354u;

    // 0x14e354: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14e354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e358: 0x3c02ffea  lui         $v0, 0xFFEA
    ctx->pc = 0x14e358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65514 << 16));
    // 0x14e35c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x14e35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14e360: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x14e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14e364: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14e364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x14e368: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x14e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x14e36c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14e36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14e370: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14E370u;
    {
        const bool branch_taken_0x14e370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e370) {
            ctx->pc = 0x14E3A0u;
            return;
        }
    }
    ctx->pc = 0x14E378u;
    // 0x14e378: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14e378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e37c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14e380: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e384: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E384u;
    {
        const bool branch_taken_0x14e384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e384) {
            ctx->pc = 0x14E3A0u;
            return;
        }
    }
    ctx->pc = 0x14E38Cu;
    // 0x14e38c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e390: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e390u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e394: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x14e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x14e398: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14E398u;
    {
        const bool branch_taken_0x14e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e398) {
            ctx->pc = 0x14E3A4u;
            return;
        }
    }
    ctx->pc = 0x14E3A0u;
}
