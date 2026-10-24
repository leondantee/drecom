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

// Function: caseD_4
// Address: 0x26cd64 - 0x26cdb8
void caseD_4_0x26cd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x26cd64");
#endif

    switch (ctx->pc) {
        case 0x26cd84u: goto label_26cd84;
        default: break;
    }

    ctx->pc = 0x26cd64u;

    // 0x26cd64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cd68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cd6c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26cd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26cd70: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x26cd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x26cd74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26cd74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cd78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26cd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26cd7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26CD7Cu;
    SET_GPR_U32(ctx, 31, 0x26CD84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26CD7Cu, 0x26CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD84u;
label_26cd84:
    // 0x26cd84: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x26cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x26cd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cd8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cd90: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x26cd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x26cd94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x26cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26cd98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cd9c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x26cd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x26cda0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cda4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x26cda4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x26cda8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cdac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26cdacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26cdb0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x26cdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26cdb4: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x26cdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x26cdb8u;
}
