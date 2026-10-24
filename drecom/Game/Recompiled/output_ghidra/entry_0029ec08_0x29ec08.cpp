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

// Function: entry_0029ec08
// Address: 0x29ec08 - 0x29ec48
void entry_0029ec08_0x29ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ec08_0x29ec08");
#endif

    switch (ctx->pc) {
        case 0x29ec38u: goto label_29ec38;
        default: break;
    }

    ctx->pc = 0x29ec08u;

    // 0x29ec08: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec0c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x29ec0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x29ec10: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29EC10u;
    {
        const bool branch_taken_0x29ec10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ec10) {
            ctx->pc = 0x29EC48u;
            return;
        }
    }
    ctx->pc = 0x29EC18u;
    // 0x29ec18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29ec20: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x29ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ec24: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec28: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x29ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ec2c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x29ec2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29ec30: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29EC30u;
    SET_GPR_U32(ctx, 31, 0x29EC38u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29EC30u, 0x29EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC38u;
label_29ec38:
    // 0x29ec38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec3c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29ec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x29ec40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29EC40u;
    {
        const bool branch_taken_0x29ec40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ec40) {
            ctx->pc = 0x29EC98u;
            return;
        }
    }
    ctx->pc = 0x29EC48u;
}
