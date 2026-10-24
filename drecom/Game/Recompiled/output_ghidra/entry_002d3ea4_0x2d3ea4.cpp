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

// Function: entry_002d3ea4
// Address: 0x2d3ea4 - 0x2d3f20
void entry_002d3ea4_0x2d3ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3ea4_0x2d3ea4");
#endif

    switch (ctx->pc) {
        case 0x2d3ed0u: goto label_2d3ed0;
        case 0x2d3ee4u: goto label_2d3ee4;
        case 0x2d3f0cu: goto label_2d3f0c;
        case 0x2d3f18u: goto label_2d3f18;
        default: break;
    }

    ctx->pc = 0x2d3ea4u;

    // 0x2d3ea4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ea8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3eac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3eb0: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x2d3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x2d3eb4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d3eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d3eb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d3eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d3ebc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d3ec0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2d3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3ec4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2d3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2d3ec8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D3EC8u;
    SET_GPR_U32(ctx, 31, 0x2D3ED0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D3EC8u, 0x2D3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3ED0u;
label_2d3ed0:
    // 0x2d3ed0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ed4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d3ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3ed8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d3ed8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d3edc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D3EDCu;
    SET_GPR_U32(ctx, 31, 0x2D3EE4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D3EDCu, 0x2D3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EE4u;
label_2d3ee4:
    // 0x2d3ee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ee8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d3ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d3eec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ef0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3ef0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d3ef4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3ef8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3efc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3f00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3f00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3f04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D3F04u;
    SET_GPR_U32(ctx, 31, 0x2D3F0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D3F04u, 0x2D3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F0Cu;
label_2d3f0c:
    // 0x2d3f0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3f10: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D3F10u;
    SET_GPR_U32(ctx, 31, 0x2D3F18u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D3F10u, 0x2D3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F18u;
label_2d3f18:
    // 0x2d3f18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3f1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3f1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2d3f20u;
}
