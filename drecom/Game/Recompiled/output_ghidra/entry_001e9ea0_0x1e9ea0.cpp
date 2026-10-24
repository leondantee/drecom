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

// Function: entry_001e9ea0
// Address: 0x1e9ea0 - 0x1e9ee4
void entry_001e9ea0_0x1e9ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9ea0_0x1e9ea0");
#endif

    switch (ctx->pc) {
        case 0x1e9ed4u: goto label_1e9ed4;
        default: break;
    }

    ctx->pc = 0x1e9ea0u;

    // 0x1e9ea0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9ea4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1e9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9ea8: 0x3c154049  lui         $s5, 0x4049
    ctx->pc = 0x1e9ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16457 << 16));
    // 0x1e9eac: 0x36a20fdb  ori         $v0, $s5, 0xFDB
    ctx->pc = 0x1e9eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4059);
    // 0x1e9eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9eb4: 0x0  nop
    ctx->pc = 0x1e9eb4u;
    // NOP
    // 0x1e9eb8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e9eb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e9ebc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9ec0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1e9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1e9ec4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e9ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ec8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1e9ec8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e9ecc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1E9ECCu;
    SET_GPR_U32(ctx, 31, 0x1E9ED4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9ECCu, 0x1E9ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9ED4u;
label_1e9ed4:
    // 0x1e9ed4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9ed8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e9ed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e9edc: 0xc05cd78  jal         func_1735E0
    ctx->pc = 0x1E9EDCu;
    SET_GPR_U32(ctx, 31, 0x1E9EE4u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x1E9EDCu, 0x1E9EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EE4u;
}
