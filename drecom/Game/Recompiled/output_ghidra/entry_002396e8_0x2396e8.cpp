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

// Function: entry_002396e8
// Address: 0x2396e8 - 0x2397b4
void entry_002396e8_0x2396e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002396e8_0x2396e8");
#endif

    switch (ctx->pc) {
        case 0x239714u: goto label_239714;
        case 0x239730u: goto label_239730;
        case 0x239748u: goto label_239748;
        case 0x239754u: goto label_239754;
        case 0x2397acu: goto label_2397ac;
        default: break;
    }

    ctx->pc = 0x2396e8u;

    // 0x2396e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2396e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396ec: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2396ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2396f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2396f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2396f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2396f8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2396f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2396fc: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2396fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239700: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x239700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x239704: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x239704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x239708: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x239708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23970c: 0xc05c848  jal         func_172120
    ctx->pc = 0x23970Cu;
    SET_GPR_U32(ctx, 31, 0x239714u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23970Cu, 0x239714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239714u;
label_239714:
    // 0x239714: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x239714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239718: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23971c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239720: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x239720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239724: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x239724u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239728: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x239728u;
    SET_GPR_U32(ctx, 31, 0x239730u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x239728u, 0x239730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239730u;
label_239730:
    // 0x239730: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239734: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x239734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x239738: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23973c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x239740: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x239740u;
    SET_GPR_U32(ctx, 31, 0x239748u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x239740u, 0x239748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239748u;
label_239748:
    // 0x239748: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23974c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23974Cu;
    SET_GPR_U32(ctx, 31, 0x239754u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23974Cu, 0x239754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239754u;
label_239754:
    // 0x239754: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239758: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x239758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23975c: 0x106000fc  beqz        $v1, . + 4 + (0xFC << 2)
    ctx->pc = 0x23975Cu;
    {
        const bool branch_taken_0x23975c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23975c) {
            ctx->pc = 0x239B50u;
            return;
        }
    }
    ctx->pc = 0x239764u;
    // 0x239764: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239768: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x239768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x23976c: 0x146000f8  bnez        $v1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x23976Cu;
    {
        const bool branch_taken_0x23976c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23976c) {
            ctx->pc = 0x239B50u;
            return;
        }
    }
    ctx->pc = 0x239774u;
    // 0x239774: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239778: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x239778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x23977c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x239780: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x239780u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x239784: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x239784u;
    {
        const bool branch_taken_0x239784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239784) {
            ctx->pc = 0x2397B4u;
            return;
        }
    }
    ctx->pc = 0x23978Cu;
    // 0x23978c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239790: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239794: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239798: 0x3406f009  ori         $a2, $zero, 0xF009
    ctx->pc = 0x239798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61449);
    // 0x23979c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23979cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2397a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2397a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2397a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2397A4u;
    SET_GPR_U32(ctx, 31, 0x2397ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2397A4u, 0x2397ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397ACu;
label_2397ac:
    // 0x2397ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2397ACu;
    {
        const bool branch_taken_0x2397ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2397ac) {
            ctx->pc = 0x2397D4u;
            return;
        }
    }
    ctx->pc = 0x2397B4u;
}
