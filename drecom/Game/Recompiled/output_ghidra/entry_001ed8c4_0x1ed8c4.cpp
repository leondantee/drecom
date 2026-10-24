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

// Function: entry_001ed8c4
// Address: 0x1ed8c4 - 0x1ed908
void entry_001ed8c4_0x1ed8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed8c4_0x1ed8c4");
#endif

    switch (ctx->pc) {
        case 0x1ed904u: goto label_1ed904;
        default: break;
    }

    ctx->pc = 0x1ed8c4u;

    // 0x1ed8c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed8cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ed8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed8d0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ed8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ed8d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ed8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed8dc: 0x0  nop
    ctx->pc = 0x1ed8dcu;
    // NOP
    // 0x1ed8e0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ed8e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ed8e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed8e8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed8ec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ed8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ed8f0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ed8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ed8f4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ed8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ed8f8: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ed8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ed8fc: 0xc05c848  jal         func_172120
    ctx->pc = 0x1ED8FCu;
    SET_GPR_U32(ctx, 31, 0x1ED904u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1ED8FCu, 0x1ED904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED904u;
label_1ed904:
    // 0x1ed904: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ed904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x1ed908u;
}
