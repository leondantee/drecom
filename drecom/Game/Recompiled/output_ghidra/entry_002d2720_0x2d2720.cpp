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

// Function: entry_002d2720
// Address: 0x2d2720 - 0x2d27b0
void entry_002d2720_0x2d2720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2720_0x2d2720");
#endif

    switch (ctx->pc) {
        case 0x2d272cu: goto label_2d272c;
        case 0x2d2738u: goto label_2d2738;
        default: break;
    }

    ctx->pc = 0x2d2720u;

    // 0x2d2720: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2724: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x2D2724u;
    SET_GPR_U32(ctx, 31, 0x2D272Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x2D2724u, 0x2D272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D272Cu;
label_2d272c:
    // 0x2d272c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d272cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2730: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2D2730u;
    SET_GPR_U32(ctx, 31, 0x2D2738u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2D2730u, 0x2D2738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2738u;
label_2d2738:
    // 0x2d2738: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d273c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d273cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d2740: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D2740u;
    {
        const bool branch_taken_0x2d2740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2740) {
            ctx->pc = 0x2D27C8u;
            return;
        }
    }
    ctx->pc = 0x2D2748u;
    // 0x2d2748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d274c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2750: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d2750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2754: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2758: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d2758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d275c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2760: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d2760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2764: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2768: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d2768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d276c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2770: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d2770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d2774: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d2774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2778: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d277c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2d277cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2780: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2784: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2d2784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d2788: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2788u;
    {
        const bool branch_taken_0x2d2788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2788) {
            ctx->pc = 0x2D27B0u;
            return;
        }
    }
    ctx->pc = 0x2D2790u;
    // 0x2d2790: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2d2790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2d2794: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d2794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d2798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d279c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d27a0: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d27a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d27a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d27a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D27A8u;
    {
        const bool branch_taken_0x2d27a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d27a8) {
            ctx->pc = 0x2D27C8u;
            return;
        }
    }
    ctx->pc = 0x2D27B0u;
}
