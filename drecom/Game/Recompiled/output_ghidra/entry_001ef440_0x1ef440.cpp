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

// Function: entry_001ef440
// Address: 0x1ef440 - 0x1ef484
void entry_001ef440_0x1ef440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef440_0x1ef440");
#endif

    switch (ctx->pc) {
        case 0x1ef480u: goto label_1ef480;
        default: break;
    }

    ctx->pc = 0x1ef440u;

    // 0x1ef440: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef444: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef448: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef44c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ef44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ef450: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef458: 0x0  nop
    ctx->pc = 0x1ef458u;
    // NOP
    // 0x1ef45c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ef45cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef460: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef464: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ef464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef468: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ef468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ef46c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ef46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ef470: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ef470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ef474: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ef474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef478: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EF478u;
    SET_GPR_U32(ctx, 31, 0x1EF480u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EF478u, 0x1EF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF480u;
label_1ef480:
    // 0x1ef480: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ef480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x1ef484u;
}
