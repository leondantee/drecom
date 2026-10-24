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

// Function: entry_002d3db4
// Address: 0x2d3db4 - 0x2d3e6c
void entry_002d3db4_0x2d3db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3db4_0x2d3db4");
#endif

    switch (ctx->pc) {
        case 0x2d3de0u: goto label_2d3de0;
        case 0x2d3df4u: goto label_2d3df4;
        case 0x2d3e1cu: goto label_2d3e1c;
        case 0x2d3e28u: goto label_2d3e28;
        case 0x2d3e38u: goto label_2d3e38;
        case 0x2d3e44u: goto label_2d3e44;
        default: break;
    }

    ctx->pc = 0x2d3db4u;

    // 0x2d3db4: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d3db8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d3db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d3dbc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d3dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d3dc0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3dc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3dc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3dcc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d3dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d3dd0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d3dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3dd4: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2d3dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2d3dd8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D3DD8u;
    SET_GPR_U32(ctx, 31, 0x2D3DE0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D3DD8u, 0x2D3DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3DE0u;
label_2d3de0:
    // 0x2d3de0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3de4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d3de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3de8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d3de8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d3dec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D3DECu;
    SET_GPR_U32(ctx, 31, 0x2D3DF4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D3DECu, 0x2D3DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3DF4u;
label_2d3df4:
    // 0x2d3df4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3df8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d3df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d3dfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e00: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d3e04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3e08: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3e08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3e0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3e10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3e14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D3E14u;
    SET_GPR_U32(ctx, 31, 0x2D3E1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D3E14u, 0x2D3E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E1Cu;
label_2d3e1c:
    // 0x2d3e1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e20: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D3E20u;
    SET_GPR_U32(ctx, 31, 0x2D3E28u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D3E20u, 0x2D3E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E28u;
label_2d3e28:
    // 0x2d3e28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3e30: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D3E30u;
    SET_GPR_U32(ctx, 31, 0x2D3E38u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D3E30u, 0x2D3E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E38u;
label_2d3e38:
    // 0x2d3e38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e3c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D3E44u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3E3Cu, 0x2D3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E44u;
label_2d3e44:
    // 0x2d3e44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e48: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3e4c: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2D3E4Cu;
    {
        const bool branch_taken_0x2d3e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e4c) {
            ctx->pc = 0x2D3F34u;
            return;
        }
    }
    ctx->pc = 0x2D3E54u;
    // 0x2d3e54: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3e58: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d3e58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d3e5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d3e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3e60: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d3e60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d3e64: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2D3E64u;
    {
        const bool branch_taken_0x2d3e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3e64) {
            ctx->pc = 0x2D3F34u;
            return;
        }
    }
    ctx->pc = 0x2D3E6Cu;
}
