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

// Function: entry_001ee814
// Address: 0x1ee814 - 0x1ee858
void entry_001ee814_0x1ee814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee814_0x1ee814");
#endif

    switch (ctx->pc) {
        case 0x1ee854u: goto label_1ee854;
        default: break;
    }

    ctx->pc = 0x1ee814u;

    // 0x1ee814: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee818: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ee818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee81c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ee81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ee820: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee828: 0x0  nop
    ctx->pc = 0x1ee828u;
    // NOP
    // 0x1ee82c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ee82cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee830: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee834: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee838: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee83c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ee83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ee840: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ee840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ee844: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ee844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ee848: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ee848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ee84c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EE84Cu;
    SET_GPR_U32(ctx, 31, 0x1EE854u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EE84Cu, 0x1EE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE854u;
label_1ee854:
    // 0x1ee854: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x1ee858u;
}
