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
// Address: 0x1b4f9c - 0x1b4fd0
void caseD_2_0x1b4f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1b4f9c");
#endif

    switch (ctx->pc) {
        case 0x1b4fc4u: goto label_1b4fc4;
        default: break;
    }

    ctx->pc = 0x1b4f9cu;

    // 0x1b4f9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4fa0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b4fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4fa4: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x1b4fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4fa8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b4fac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b4fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4fb4: 0x0  nop
    ctx->pc = 0x1b4fb4u;
    // NOP
    // 0x1b4fb8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b4fb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4fbc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B4FBCu;
    SET_GPR_U32(ctx, 31, 0x1B4FC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B4FBCu, 0x1B4FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FC4u;
label_1b4fc4:
    // 0x1b4fc4: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b4fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x1b4fc8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1B4FC8u;
    {
        const bool branch_taken_0x1b4fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4fc8) {
            ctx->pc = 0x1B5088u;
            return;
        }
    }
    ctx->pc = 0x1B4FD0u;
}
