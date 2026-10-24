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

// Function: entry_00239ae4
// Address: 0x239ae4 - 0x239b50
void entry_00239ae4_0x239ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239ae4_0x239ae4");
#endif

    switch (ctx->pc) {
        case 0x239b10u: goto label_239b10;
        case 0x239b2cu: goto label_239b2c;
        case 0x239b44u: goto label_239b44;
        default: break;
    }

    ctx->pc = 0x239ae4u;

    // 0x239ae4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ae8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x239ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239aec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239af0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x239af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239af4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x239af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x239af8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x239af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239afc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x239afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x239b00: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x239b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x239b04: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x239b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x239b08: 0xc05c848  jal         func_172120
    ctx->pc = 0x239B08u;
    SET_GPR_U32(ctx, 31, 0x239B10u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x239B08u, 0x239B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B10u;
label_239b10:
    // 0x239b10: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x239b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239b14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b18: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x239b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239b1c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x239b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239b20: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x239b20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239b24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x239B24u;
    SET_GPR_U32(ctx, 31, 0x239B2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x239B24u, 0x239B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B2Cu;
label_239b2c:
    // 0x239b2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x239b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x239b34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x239b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x239b3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x239B3Cu;
    SET_GPR_U32(ctx, 31, 0x239B44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x239B3Cu, 0x239B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B44u;
label_239b44:
    // 0x239b44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b48: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x239B48u;
    SET_GPR_U32(ctx, 31, 0x239B50u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x239B48u, 0x239B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B50u;
}
