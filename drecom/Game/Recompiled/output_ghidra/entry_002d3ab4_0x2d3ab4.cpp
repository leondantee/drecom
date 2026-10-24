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

// Function: entry_002d3ab4
// Address: 0x2d3ab4 - 0x2d3b30
void entry_002d3ab4_0x2d3ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3ab4_0x2d3ab4");
#endif

    switch (ctx->pc) {
        case 0x2d3ae0u: goto label_2d3ae0;
        case 0x2d3af4u: goto label_2d3af4;
        case 0x2d3b1cu: goto label_2d3b1c;
        case 0x2d3b28u: goto label_2d3b28;
        default: break;
    }

    ctx->pc = 0x2d3ab4u;

    // 0x2d3ab4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ab8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d3ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3abc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ac0: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d3ac4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d3ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d3ac8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d3ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d3acc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d3accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d3ad0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2d3ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3ad4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2d3ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2d3ad8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D3AD8u;
    SET_GPR_U32(ctx, 31, 0x2D3AE0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D3AD8u, 0x2D3AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3AE0u;
label_2d3ae0:
    // 0x2d3ae0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ae4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d3ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3ae8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d3ae8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d3aec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D3AECu;
    SET_GPR_U32(ctx, 31, 0x2D3AF4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D3AECu, 0x2D3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3AF4u;
label_2d3af4:
    // 0x2d3af4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3af8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d3af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d3afc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3b00: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3b00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d3b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3b08: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3b08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3b0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3b10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3b10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3b14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D3B14u;
    SET_GPR_U32(ctx, 31, 0x2D3B1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D3B14u, 0x2D3B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B1Cu;
label_2d3b1c:
    // 0x2d3b1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3b20: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D3B20u;
    SET_GPR_U32(ctx, 31, 0x2D3B28u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D3B20u, 0x2D3B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B28u;
label_2d3b28:
    // 0x2d3b28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2d3b30u;
}
