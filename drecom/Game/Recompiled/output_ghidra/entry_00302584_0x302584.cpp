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

// Function: entry_00302584
// Address: 0x302584 - 0x30263c
void entry_00302584_0x302584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302584_0x302584");
#endif

    switch (ctx->pc) {
        case 0x3025b0u: goto label_3025b0;
        case 0x3025c4u: goto label_3025c4;
        case 0x3025dcu: goto label_3025dc;
        case 0x3025e8u: goto label_3025e8;
        case 0x3025f8u: goto label_3025f8;
        case 0x302604u: goto label_302604;
        default: break;
    }

    ctx->pc = 0x302584u;

    // 0x302584: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302588: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x302588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30258c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302590: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x302590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x302594: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x302594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x302598: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30259c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3025a0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x3025a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3025a4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x3025a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x3025a8: 0xc05c848  jal         func_172120
    ctx->pc = 0x3025A8u;
    SET_GPR_U32(ctx, 31, 0x3025B0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3025A8u, 0x3025B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025B0u;
label_3025b0:
    // 0x3025b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3025b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025b4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3025b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3025b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3025b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3025bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3025BCu;
    SET_GPR_U32(ctx, 31, 0x3025C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3025BCu, 0x3025C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025C4u;
label_3025c4:
    // 0x3025c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3025c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3025c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3025cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3025ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3025d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3025d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3025D4u;
    SET_GPR_U32(ctx, 31, 0x3025DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3025D4u, 0x3025DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025DCu;
label_3025dc:
    // 0x3025dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3025dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025e0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3025E0u;
    SET_GPR_U32(ctx, 31, 0x3025E8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3025E0u, 0x3025E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025E8u;
label_3025e8:
    // 0x3025e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3025e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3025ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3025f0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3025F0u;
    SET_GPR_U32(ctx, 31, 0x3025F8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3025F0u, 0x3025F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025F8u;
label_3025f8:
    // 0x3025f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3025f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025fc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3025FCu;
    SET_GPR_U32(ctx, 31, 0x302604u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3025FCu, 0x302604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302604u;
label_302604:
    // 0x302604: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302608: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x302608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30260c: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x30260Cu;
    {
        const bool branch_taken_0x30260c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30260c) {
            ctx->pc = 0x30272Cu;
            return;
        }
    }
    ctx->pc = 0x302614u;
    // 0x302614: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302618: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x302618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30261c: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x30261Cu;
    {
        const bool branch_taken_0x30261c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30261c) {
            ctx->pc = 0x30272Cu;
            return;
        }
    }
    ctx->pc = 0x302624u;
    // 0x302624: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302628: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x302628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30262c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x302630: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x302630u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x302634: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x302634u;
    {
        const bool branch_taken_0x302634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302634) {
            ctx->pc = 0x30272Cu;
            return;
        }
    }
    ctx->pc = 0x30263Cu;
}
