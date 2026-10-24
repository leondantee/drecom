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

// Function: entry_0030f5bc
// Address: 0x30f5bc - 0x30f5e4
void entry_0030f5bc_0x30f5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f5bc_0x30f5bc");
#endif

    ctx->pc = 0x30f5bcu;

    // 0x30f5bc: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f5c0: 0x8c661338  lw          $a2, 0x1338($v1)
    ctx->pc = 0x30f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30f5c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x30f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x30f5c8: 0x3465fe00  ori         $a1, $v1, 0xFE00
    ctx->pc = 0x30f5c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65024);
    // 0x30f5cc: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x30f5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x30f5d0: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x30F5D0u;
    {
        const bool branch_taken_0x30f5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f5d0) {
            ctx->pc = 0x30F6B0u;
            return;
        }
    }
    ctx->pc = 0x30F5D8u;
    // 0x30f5d8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x30f5d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f5dc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30F5DCu;
    {
        const bool branch_taken_0x30f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f5dc) {
            ctx->pc = 0x30F6A0u;
            return;
        }
    }
    ctx->pc = 0x30F5E4u;
}
