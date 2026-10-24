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

// Function: entry_003302f8
// Address: 0x3302f8 - 0x330358
void entry_003302f8_0x3302f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003302f8_0x3302f8");
#endif

    switch (ctx->pc) {
        case 0x330324u: goto label_330324;
        case 0x330354u: goto label_330354;
        default: break;
    }

    ctx->pc = 0x3302f8u;

    // 0x3302f8: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x3302f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x3302fc: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x3302fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x330300: 0x172900  sll         $a1, $s7, 4
    ctx->pc = 0x330300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x330304: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x330304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x330308: 0x24670180  addiu       $a3, $v1, 0x180
    ctx->pc = 0x330308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x33030c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x33030cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x330310: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x330310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x330314: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x330314u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x330318: 0x244601c0  addiu       $a2, $v0, 0x1C0
    ctx->pc = 0x330318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x33031c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x33031Cu;
    SET_GPR_U32(ctx, 31, 0x330324u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x330324u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x330324u) { return; }
    ctx->pc = 0x330324u;
label_330324:
    // 0x330324: 0x173900  sll         $a3, $s7, 4
    ctx->pc = 0x330324u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x330328: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x330328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x33032c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x33032cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x330330: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x330330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x330334: 0x24430180  addiu       $v1, $v0, 0x180
    ctx->pc = 0x330334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x330338: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x330338u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x33033c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x330340: 0x24429610  addiu       $v0, $v0, -0x69F0
    ctx->pc = 0x330340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940176));
    // 0x330344: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x330344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x330348: 0x24c60180  addiu       $a2, $a2, 0x180
    ctx->pc = 0x330348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x33034c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x33034Cu;
    SET_GPR_U32(ctx, 31, 0x330354u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x330354u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x330354u) { return; }
    ctx->pc = 0x330354u;
label_330354:
    // 0x330354: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x330354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->pc = 0x330358u;
}
