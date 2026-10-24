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

// Function: caseD_2
// Address: 0x366ed4 - 0x366f30
void caseD_2_0x366ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x366ed4");
#endif

    switch (ctx->pc) {
        case 0x366ef4u: goto label_366ef4;
        case 0x366f18u: goto label_366f18;
        default: break;
    }

    ctx->pc = 0x366ed4u;

    // 0x366ed4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366ed8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366edc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x366ee0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x366ee0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366ee8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366eec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366EECu;
    SET_GPR_U32(ctx, 31, 0x366EF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366EECu, 0x366EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EF4u;
label_366ef4:
    // 0x366ef4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366ef8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x366ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366efc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x366efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x366f00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x366f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x366f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366f08: 0x0  nop
    ctx->pc = 0x366f08u;
    // NOP
    // 0x366f0c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x366f0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x366f10: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x366F10u;
    SET_GPR_U32(ctx, 31, 0x366F18u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x366F10u, 0x366F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F18u;
label_366f18:
    // 0x366f18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f1c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x366f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x366f20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f24: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366f2c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x366f30u;
}
