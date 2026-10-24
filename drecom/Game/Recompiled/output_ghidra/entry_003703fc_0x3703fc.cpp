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

// Function: entry_003703fc
// Address: 0x3703fc - 0x3704c4
void entry_003703fc_0x3703fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003703fc_0x3703fc");
#endif

    switch (ctx->pc) {
        case 0x370428u: goto label_370428;
        case 0x370444u: goto label_370444;
        case 0x37045cu: goto label_37045c;
        case 0x370468u: goto label_370468;
        case 0x370474u: goto label_370474;
        case 0x370480u: goto label_370480;
        default: break;
    }

    ctx->pc = 0x3703fcu;

    // 0x3703fc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3703fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x370400: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x370400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x370404: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x370404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x370408: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37040c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370410: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x370410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x370414: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x370414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x370418: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x370418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37041c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x37041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x370420: 0xc05c848  jal         func_172120
    ctx->pc = 0x370420u;
    SET_GPR_U32(ctx, 31, 0x370428u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x370420u, 0x370428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370428u;
label_370428:
    // 0x370428: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x370428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x37042c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370430: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x370430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370434: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x370434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370438: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x370438u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37043c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x37043Cu;
    SET_GPR_U32(ctx, 31, 0x370444u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x37043Cu, 0x370444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370444u;
label_370444:
    // 0x370444: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370448: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x370448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x37044c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37044cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370450: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370454: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370454u;
    SET_GPR_U32(ctx, 31, 0x37045Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370454u, 0x37045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37045Cu;
label_37045c:
    // 0x37045c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37045cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370460: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x370460u;
    SET_GPR_U32(ctx, 31, 0x370468u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x370460u, 0x370468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370468u;
label_370468:
    // 0x370468: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37046c: 0xc0dd008  jal         func_374020
    ctx->pc = 0x37046Cu;
    SET_GPR_U32(ctx, 31, 0x370474u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x37046Cu, 0x370474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370474u;
label_370474:
    // 0x370474: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370478: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370478u;
    SET_GPR_U32(ctx, 31, 0x370480u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370478u, 0x370480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370480u;
label_370480:
    // 0x370480: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x370480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370484: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x370484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x370488: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x370488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37048c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x37048cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x370490: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x370490u;
    {
        const bool branch_taken_0x370490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x370490) {
            ctx->pc = 0x3704C4u;
            return;
        }
    }
    ctx->pc = 0x370498u;
    // 0x370498: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x370498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37049c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3704a0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3704a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3704a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3704a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3704a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3704a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3704ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3704acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3704b0: 0x24061e06  addiu       $a2, $zero, 0x1E06
    ctx->pc = 0x3704b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7686));
    // 0x3704b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3704b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3704b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3704b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3704bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3704BCu;
    SET_GPR_U32(ctx, 31, 0x3704C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3704BCu, 0x3704C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704C4u;
}
