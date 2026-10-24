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

// Function: entry_001f3ce0
// Address: 0x1f3ce0 - 0x1f3d24
void entry_001f3ce0_0x1f3ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3ce0_0x1f3ce0");
#endif

    switch (ctx->pc) {
        case 0x1f3d20u: goto label_1f3d20;
        default: break;
    }

    ctx->pc = 0x1f3ce0u;

    // 0x1f3ce0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ce4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f3ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3ce8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1f3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1f3cec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f3cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f3cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3cf4: 0x0  nop
    ctx->pc = 0x1f3cf4u;
    // NOP
    // 0x1f3cf8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f3cf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f3cfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d04: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3d08: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f3d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f3d0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f3d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f3d10: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f3d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f3d14: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f3d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f3d18: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F3D18u;
    SET_GPR_U32(ctx, 31, 0x1F3D20u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F3D18u, 0x1F3D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D20u;
label_1f3d20:
    // 0x1f3d20: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f3d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x1f3d24u;
}
