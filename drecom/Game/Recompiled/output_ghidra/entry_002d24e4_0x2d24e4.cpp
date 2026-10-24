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

// Function: entry_002d24e4
// Address: 0x2d24e4 - 0x2d2550
void entry_002d24e4_0x2d24e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d24e4_0x2d24e4");
#endif

    switch (ctx->pc) {
        case 0x2d2504u: goto label_2d2504;
        case 0x2d2548u: goto label_2d2548;
        default: break;
    }

    ctx->pc = 0x2d24e4u;

    // 0x2d24e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d24e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d24e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d24ec: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d24f0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d24f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d24f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d24f8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d24f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d24fc: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D24FCu;
    SET_GPR_U32(ctx, 31, 0x2D2504u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D24FCu, 0x2D2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2504u;
label_2d2504:
    // 0x2d2504: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d2504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d2508: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d2508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d250c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d250cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d2510: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2514: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d2514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d2518: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d251c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d251cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d2520: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2520u;
    {
        const bool branch_taken_0x2d2520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2520) {
            ctx->pc = 0x2D2550u;
            return;
        }
    }
    ctx->pc = 0x2D2528u;
    // 0x2d2528: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d252c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2530: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d2530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d2534: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x2d2534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x2d2538: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d2538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d253c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d253cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2540: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D2540u;
    SET_GPR_U32(ctx, 31, 0x2D2548u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D2540u, 0x2D2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2548u;
label_2d2548:
    // 0x2d2548: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2548u;
    {
        const bool branch_taken_0x2d2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2548) {
            ctx->pc = 0x2D2570u;
            return;
        }
    }
    ctx->pc = 0x2D2550u;
}
