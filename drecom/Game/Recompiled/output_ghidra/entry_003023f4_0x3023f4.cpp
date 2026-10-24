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

// Function: entry_003023f4
// Address: 0x3023f4 - 0x30248c
void entry_003023f4_0x3023f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003023f4_0x3023f4");
#endif

    switch (ctx->pc) {
        case 0x302420u: goto label_302420;
        case 0x302434u: goto label_302434;
        case 0x30245cu: goto label_30245c;
        case 0x302468u: goto label_302468;
        case 0x302478u: goto label_302478;
        case 0x302484u: goto label_302484;
        default: break;
    }

    ctx->pc = 0x3023f4u;

    // 0x3023f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3023f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3023f8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x3023f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3023fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3023fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302400: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x302400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x302404: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x302404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x302408: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30240c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30240cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x302410: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x302410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302414: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x302414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x302418: 0xc05c848  jal         func_172120
    ctx->pc = 0x302418u;
    SET_GPR_U32(ctx, 31, 0x302420u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x302418u, 0x302420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302420u;
label_302420:
    // 0x302420: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302424: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x302424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302428: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x302428u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30242c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30242Cu;
    SET_GPR_U32(ctx, 31, 0x302434u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30242Cu, 0x302434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302434u;
label_302434:
    // 0x302434: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x302434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302438: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x302438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30243c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302440: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x302440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x302444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302448: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x302448u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30244c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30244cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302450: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302454: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x302454u;
    SET_GPR_U32(ctx, 31, 0x30245Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x302454u, 0x30245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30245Cu;
label_30245c:
    // 0x30245c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302460: 0xc05cd10  jal         func_173440
    ctx->pc = 0x302460u;
    SET_GPR_U32(ctx, 31, 0x302468u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x302460u, 0x302468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302468u;
label_302468:
    // 0x302468: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x302468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30246c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30246cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302470: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x302470u;
    SET_GPR_U32(ctx, 31, 0x302478u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x302470u, 0x302478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302478u;
label_302478:
    // 0x302478: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x302478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30247c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30247Cu;
    SET_GPR_U32(ctx, 31, 0x302484u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30247Cu, 0x302484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302484u;
label_302484:
    // 0x302484: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x302484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302488: 0x0  nop
    ctx->pc = 0x302488u;
    // NOP
    ctx->pc = 0x30248cu;
}
