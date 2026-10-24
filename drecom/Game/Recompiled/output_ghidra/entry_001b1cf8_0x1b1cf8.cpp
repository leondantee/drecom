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

// Function: entry_001b1cf8
// Address: 0x1b1cf8 - 0x1b1d4c
void entry_001b1cf8_0x1b1cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1cf8_0x1b1cf8");
#endif

    switch (ctx->pc) {
        case 0x1b1d08u: goto label_1b1d08;
        case 0x1b1d20u: goto label_1b1d20;
        case 0x1b1d2cu: goto label_1b1d2c;
        case 0x1b1d40u: goto label_1b1d40;
        default: break;
    }

    ctx->pc = 0x1b1cf8u;

    // 0x1b1cf8: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1b1cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1b1cfc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b1cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1d00: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B1D00u;
    SET_GPR_U32(ctx, 31, 0x1B1D08u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B1D08u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1D08u) { return; }
    ctx->pc = 0x1B1D08u;
label_1b1d08:
    // 0x1b1d08: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1b1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b1d0c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1d10: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b1d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1d14: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1b1d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b1d18: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B1D18u;
    SET_GPR_U32(ctx, 31, 0x1B1D20u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B1D18u, 0x1B1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D20u;
label_1b1d20:
    // 0x1b1d20: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1d24: 0xc067588  jal         func_19D620
    ctx->pc = 0x1B1D24u;
    SET_GPR_U32(ctx, 31, 0x1B1D2Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1B1D24u, 0x1B1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D2Cu;
label_1b1d2c:
    // 0x1b1d2c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1b1d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1b1d30: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b1d34: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x1b1d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b1d38: 0xc040c44  jal         func_103110
    ctx->pc = 0x1B1D38u;
    SET_GPR_U32(ctx, 31, 0x1B1D40u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1B1D40u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1D40u) { return; }
    ctx->pc = 0x1B1D40u;
label_1b1d40:
    // 0x1b1d40: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1b1d40u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1d44: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1B1D44u;
    {
        const bool branch_taken_0x1b1d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d44) {
            ctx->pc = 0x1B2138u;
            return;
        }
    }
    ctx->pc = 0x1B1D4Cu;
}
