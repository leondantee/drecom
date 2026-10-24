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

// Function: entry_00239090
// Address: 0x239090 - 0x23912c
void entry_00239090_0x239090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239090_0x239090");
#endif

    switch (ctx->pc) {
        case 0x2390bcu: goto label_2390bc;
        case 0x2390d8u: goto label_2390d8;
        case 0x2390f0u: goto label_2390f0;
        case 0x2390fcu: goto label_2390fc;
        default: break;
    }

    ctx->pc = 0x239090u;

    // 0x239090: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239094: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x239094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239098: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23909c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2390a0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2390a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2390a4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2390a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2390a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2390a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2390ac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2390acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2390b0: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x2390b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2390b4: 0xc05c848  jal         func_172120
    ctx->pc = 0x2390B4u;
    SET_GPR_U32(ctx, 31, 0x2390BCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2390B4u, 0x2390BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390BCu;
label_2390bc:
    // 0x2390bc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2390bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2390c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2390c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2390c4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2390c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2390c8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2390c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2390cc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2390ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2390d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2390D0u;
    SET_GPR_U32(ctx, 31, 0x2390D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2390D0u, 0x2390D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390D8u;
label_2390d8:
    // 0x2390d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2390d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2390dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2390dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2390e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2390e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2390e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2390e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2390E8u;
    SET_GPR_U32(ctx, 31, 0x2390F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2390E8u, 0x2390F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390F0u;
label_2390f0:
    // 0x2390f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2390f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2390f4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2390F4u;
    SET_GPR_U32(ctx, 31, 0x2390FCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2390F4u, 0x2390FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2390FCu;
label_2390fc:
    // 0x2390fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2390fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239100: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x239100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x239104: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x239104u;
    {
        const bool branch_taken_0x239104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239104) {
            ctx->pc = 0x23912Cu;
            return;
        }
    }
    ctx->pc = 0x23910Cu;
    // 0x23910c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239110: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239114: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239118: 0x24061e05  addiu       $a2, $zero, 0x1E05
    ctx->pc = 0x239118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7685));
    // 0x23911c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23911cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239120: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239124: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239124u;
    SET_GPR_U32(ctx, 31, 0x23912Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239124u, 0x23912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23912Cu;
}
