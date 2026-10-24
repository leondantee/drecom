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

// Function: entry_00364bf8
// Address: 0x364bf8 - 0x364c48
void entry_00364bf8_0x364bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364bf8_0x364bf8");
#endif

    switch (ctx->pc) {
        case 0x364c1cu: goto label_364c1c;
        case 0x364c38u: goto label_364c38;
        default: break;
    }

    ctx->pc = 0x364bf8u;

    // 0x364bf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364bfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x364bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c04: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x364c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x364c08: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x364c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x364c0c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x364c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x364c10: 0xc60d0064  lwc1        $f13, 0x64($s0)
    ctx->pc = 0x364c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x364c14: 0xc05c848  jal         func_172120
    ctx->pc = 0x364C14u;
    SET_GPR_U32(ctx, 31, 0x364C1Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x364C14u, 0x364C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C1Cu;
label_364c1c:
    // 0x364c1c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x364c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x364c20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c24: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x364c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364c28: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x364c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364c2c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x364c2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x364c30: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x364C30u;
    SET_GPR_U32(ctx, 31, 0x364C38u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x364C30u, 0x364C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C38u;
label_364c38:
    // 0x364c38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c3c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x364c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x364c40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x364C40u;
    {
        const bool branch_taken_0x364c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c40) {
            ctx->pc = 0x364C54u;
            return;
        }
    }
    ctx->pc = 0x364C48u;
}
