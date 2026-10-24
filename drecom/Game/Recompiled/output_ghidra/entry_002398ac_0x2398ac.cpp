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

// Function: entry_002398ac
// Address: 0x2398ac - 0x239984
void entry_002398ac_0x2398ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002398ac_0x2398ac");
#endif

    switch (ctx->pc) {
        case 0x2398d8u: goto label_2398d8;
        case 0x2398f4u: goto label_2398f4;
        case 0x23990cu: goto label_23990c;
        case 0x239918u: goto label_239918;
        case 0x239970u: goto label_239970;
        default: break;
    }

    ctx->pc = 0x2398acu;

    // 0x2398ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2398acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398b0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2398b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2398b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2398b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2398bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2398bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2398c0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2398c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2398c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2398c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2398c8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2398c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2398cc: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x2398ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2398d0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2398D0u;
    SET_GPR_U32(ctx, 31, 0x2398D8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2398D0u, 0x2398D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398D8u;
label_2398d8:
    // 0x2398d8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2398d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2398dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2398dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398e0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2398e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2398e4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2398e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2398e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2398e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2398ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2398ECu;
    SET_GPR_U32(ctx, 31, 0x2398F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2398ECu, 0x2398F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2398F4u;
label_2398f4:
    // 0x2398f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2398f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2398f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2398f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2398fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2398fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239900: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x239900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x239904: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x239904u;
    SET_GPR_U32(ctx, 31, 0x23990Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x239904u, 0x23990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23990Cu;
label_23990c:
    // 0x23990c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23990cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239910: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x239910u;
    SET_GPR_U32(ctx, 31, 0x239918u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x239910u, 0x239918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239918u;
label_239918:
    // 0x239918: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23991c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23991cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x239920: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x239920u;
    {
        const bool branch_taken_0x239920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239920) {
            ctx->pc = 0x239B50u;
            return;
        }
    }
    ctx->pc = 0x239928u;
    // 0x239928: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23992c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x23992cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x239930: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x239930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x239934: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x239934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x239938: 0x14600085  bnez        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x239938u;
    {
        const bool branch_taken_0x239938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239938) {
            ctx->pc = 0x239B50u;
            return;
        }
    }
    ctx->pc = 0x239940u;
    // 0x239940: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239944: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x239944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x239948: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x239948u;
    {
        const bool branch_taken_0x239948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239948) {
            ctx->pc = 0x239B50u;
            return;
        }
    }
    ctx->pc = 0x239950u;
    // 0x239950: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239954: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239958: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23995c: 0x3406f009  ori         $a2, $zero, 0xF009
    ctx->pc = 0x23995cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61449);
    // 0x239960: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239964: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239968: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239968u;
    SET_GPR_U32(ctx, 31, 0x239970u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239968u, 0x239970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239970u;
label_239970:
    // 0x239970: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239974: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239978: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x239978u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x23997c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x23997Cu;
    {
        const bool branch_taken_0x23997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23997c) {
            ctx->pc = 0x239B50u;
            return;
        }
    }
    ctx->pc = 0x239984u;
}
