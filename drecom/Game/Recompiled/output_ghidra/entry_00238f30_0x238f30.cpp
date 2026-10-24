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

// Function: entry_00238f30
// Address: 0x238f30 - 0x238fe0
void entry_00238f30_0x238f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238f30_0x238f30");
#endif

    ctx->pc = 0x238f30u;

    // 0x238f30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x238f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x238f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x238f38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238f3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x238f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x238f40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f48: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238f4c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x238f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x238f50: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x238f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x238f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238f60: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x238f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x238f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x238f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x238f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238f74: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x238f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x238f78: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x238f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x238f7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x238f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x238f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238f8c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x238f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x238f90: 0x3c023b0e  lui         $v0, 0x3B0E
    ctx->pc = 0x238f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15118 << 16));
    // 0x238f94: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x238f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x238f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238f9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fa0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238fa4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x238fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x238fa8: 0x3c023998  lui         $v0, 0x3998
    ctx->pc = 0x238fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14744 << 16));
    // 0x238fac: 0x3442825b  ori         $v0, $v0, 0x825B
    ctx->pc = 0x238facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33371);
    // 0x238fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238fb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fb8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238fbc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x238fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x238fc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x238fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238fc8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x238fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x238fcc: 0x3406b404  ori         $a2, $zero, 0xB404
    ctx->pc = 0x238fccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46084);
    // 0x238fd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x238fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238fd4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x238fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x238fd8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x238FD8u;
    SET_GPR_U32(ctx, 31, 0x238FE0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x238FD8u, 0x238FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FE0u;
}
