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

// Function: entry_002d39c4
// Address: 0x2d39c4 - 0x2d3a7c
void entry_002d39c4_0x2d39c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d39c4_0x2d39c4");
#endif

    switch (ctx->pc) {
        case 0x2d39f0u: goto label_2d39f0;
        case 0x2d3a04u: goto label_2d3a04;
        case 0x2d3a2cu: goto label_2d3a2c;
        case 0x2d3a38u: goto label_2d3a38;
        case 0x2d3a48u: goto label_2d3a48;
        case 0x2d3a54u: goto label_2d3a54;
        default: break;
    }

    ctx->pc = 0x2d39c4u;

    // 0x2d39c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d39c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39c8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d39c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39d0: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d39d4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d39d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d39d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d39d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d39dc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d39dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d39e0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2d39e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d39e4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2d39e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2d39e8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D39E8u;
    SET_GPR_U32(ctx, 31, 0x2D39F0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D39E8u, 0x2D39F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39F0u;
label_2d39f0:
    // 0x2d39f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d39f4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d39f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d39f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d39f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d39fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D39FCu;
    SET_GPR_U32(ctx, 31, 0x2D3A04u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D39FCu, 0x2D3A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A04u;
label_2d3a04:
    // 0x2d3a04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d3a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d3a0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a10: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d3a14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3a18: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3a18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3a1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3a20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3a24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D3A24u;
    SET_GPR_U32(ctx, 31, 0x2D3A2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D3A24u, 0x2D3A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A2Cu;
label_2d3a2c:
    // 0x2d3a2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a30: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D3A30u;
    SET_GPR_U32(ctx, 31, 0x2D3A38u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D3A30u, 0x2D3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A38u;
label_2d3a38:
    // 0x2d3a38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3a3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3a40: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D3A40u;
    SET_GPR_U32(ctx, 31, 0x2D3A48u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D3A40u, 0x2D3A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A48u;
label_2d3a48:
    // 0x2d3a48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a4c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3A4Cu;
    SET_GPR_U32(ctx, 31, 0x2D3A54u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3A4Cu, 0x2D3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A54u;
label_2d3a54:
    // 0x2d3a54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a58: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3a5c: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2D3A5Cu;
    {
        const bool branch_taken_0x2d3a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3a5c) {
            ctx->pc = 0x2D3B44u;
            return;
        }
    }
    ctx->pc = 0x2D3A64u;
    // 0x2d3a64: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3a68: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d3a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d3a6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3a70: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d3a70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d3a74: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2D3A74u;
    {
        const bool branch_taken_0x2d3a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3a74) {
            ctx->pc = 0x2D3B44u;
            return;
        }
    }
    ctx->pc = 0x2D3A7Cu;
}
