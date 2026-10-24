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

// Function: entry_002d2684
// Address: 0x2d2684 - 0x2d26f0
void entry_002d2684_0x2d2684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2684_0x2d2684");
#endif

    switch (ctx->pc) {
        case 0x2d26a4u: goto label_2d26a4;
        case 0x2d26e8u: goto label_2d26e8;
        default: break;
    }

    ctx->pc = 0x2d2684u;

    // 0x2d2684: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2688: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d268c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d268cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d2690: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d2690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2694: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d2694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d2698: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d2698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d269c: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D269Cu;
    SET_GPR_U32(ctx, 31, 0x2D26A4u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D269Cu, 0x2D26A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D26A4u;
label_2d26a4:
    // 0x2d26a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d26a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d26a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d26a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d26ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d26acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d26b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d26b4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d26b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d26b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d26bc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d26bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d26c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D26C0u;
    {
        const bool branch_taken_0x2d26c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d26c0) {
            ctx->pc = 0x2D26F0u;
            return;
        }
    }
    ctx->pc = 0x2D26C8u;
    // 0x2d26c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d26cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d26ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d26d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d26d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d26d4: 0x24063c20  addiu       $a2, $zero, 0x3C20
    ctx->pc = 0x2d26d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15392));
    // 0x2d26d8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d26d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d26dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d26dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d26e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D26E0u;
    SET_GPR_U32(ctx, 31, 0x2D26E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D26E0u, 0x2D26E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D26E8u;
label_2d26e8:
    // 0x2d26e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D26E8u;
    {
        const bool branch_taken_0x2d26e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d26e8) {
            ctx->pc = 0x2D2710u;
            return;
        }
    }
    ctx->pc = 0x2D26F0u;
}
