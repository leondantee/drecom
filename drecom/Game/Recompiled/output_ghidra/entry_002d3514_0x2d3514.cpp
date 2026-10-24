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

// Function: entry_002d3514
// Address: 0x2d3514 - 0x2d3580
void entry_002d3514_0x2d3514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3514_0x2d3514");
#endif

    switch (ctx->pc) {
        case 0x2d3534u: goto label_2d3534;
        case 0x2d3578u: goto label_2d3578;
        default: break;
    }

    ctx->pc = 0x2d3514u;

    // 0x2d3514: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3518: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d351c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d3520: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d3520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3524: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d3524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d3528: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d3528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d352c: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D352Cu;
    SET_GPR_U32(ctx, 31, 0x2D3534u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D352Cu, 0x2D3534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3534u;
label_2d3534:
    // 0x2d3534: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d3534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d3538: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d3538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d353c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d353cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d3540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3544: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d3544u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d3548: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d354c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d354cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d3550: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D3550u;
    {
        const bool branch_taken_0x2d3550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3550) {
            ctx->pc = 0x2D3580u;
            return;
        }
    }
    ctx->pc = 0x2D3558u;
    // 0x2d3558: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d355c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d355cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3560: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3564: 0x24063c13  addiu       $a2, $zero, 0x3C13
    ctx->pc = 0x2d3564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15379));
    // 0x2d3568: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d356c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d356cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3570: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3570u;
    SET_GPR_U32(ctx, 31, 0x2D3578u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3570u, 0x2D3578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3578u;
label_2d3578:
    // 0x2d3578: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3578u;
    {
        const bool branch_taken_0x2d3578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3578) {
            ctx->pc = 0x2D35A0u;
            return;
        }
    }
    ctx->pc = 0x2D3580u;
}
