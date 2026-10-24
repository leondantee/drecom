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

// Function: entry_002d30b4
// Address: 0x2d30b4 - 0x2d3120
void entry_002d30b4_0x2d30b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d30b4_0x2d30b4");
#endif

    switch (ctx->pc) {
        case 0x2d30d4u: goto label_2d30d4;
        case 0x2d3118u: goto label_2d3118;
        default: break;
    }

    ctx->pc = 0x2d30b4u;

    // 0x2d30b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d30b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d30bc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d30bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d30c0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d30c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d30c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d30c8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d30c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d30cc: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D30CCu;
    SET_GPR_U32(ctx, 31, 0x2D30D4u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D30CCu, 0x2D30D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30D4u;
label_2d30d4:
    // 0x2d30d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d30d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d30d8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d30d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d30dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d30dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d30e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d30e4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d30e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d30e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d30ec: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d30ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d30f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D30F0u;
    {
        const bool branch_taken_0x2d30f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30f0) {
            ctx->pc = 0x2D3120u;
            return;
        }
    }
    ctx->pc = 0x2D30F8u;
    // 0x2d30f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d30fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d30fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3100: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3104: 0x24063c14  addiu       $a2, $zero, 0x3C14
    ctx->pc = 0x2d3104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15380));
    // 0x2d3108: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d310c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d310cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3110: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3110u;
    SET_GPR_U32(ctx, 31, 0x2D3118u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3110u, 0x2D3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3118u;
label_2d3118:
    // 0x2d3118: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3118u;
    {
        const bool branch_taken_0x2d3118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3118) {
            ctx->pc = 0x2D3140u;
            return;
        }
    }
    ctx->pc = 0x2D3120u;
}
