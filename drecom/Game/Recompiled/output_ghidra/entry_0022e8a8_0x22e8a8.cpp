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

// Function: entry_0022e8a8
// Address: 0x22e8a8 - 0x22e8ec
void entry_0022e8a8_0x22e8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e8a8_0x22e8a8");
#endif

    switch (ctx->pc) {
        case 0x22e8e8u: goto label_22e8e8;
        default: break;
    }

    ctx->pc = 0x22e8a8u;

    // 0x22e8a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e8ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e8b0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22e8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e8b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x22e8b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22e8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e8c0: 0x0  nop
    ctx->pc = 0x22e8c0u;
    // NOP
    // 0x22e8c4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x22e8c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22e8c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e8cc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e8d0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22e8d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22e8d8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22e8dc: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22e8e0: 0xc05c848  jal         func_172120
    ctx->pc = 0x22E8E0u;
    SET_GPR_U32(ctx, 31, 0x22E8E8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22E8E0u, 0x22E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8E8u;
label_22e8e8:
    // 0x22e8e8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22e8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x22e8ecu;
}
