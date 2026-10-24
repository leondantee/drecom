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

// Function: entry_001c4460
// Address: 0x1c4460 - 0x1c44ac
void entry_001c4460_0x1c4460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4460_0x1c4460");
#endif

    switch (ctx->pc) {
        case 0x1c4490u: goto label_1c4490;
        default: break;
    }

    ctx->pc = 0x1c4460u;

    // 0x1c4460: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4464: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1c4464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1c4468: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1C4468u;
    {
        const bool branch_taken_0x1c4468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4468) {
            ctx->pc = 0x1C45FCu;
            return;
        }
    }
    ctx->pc = 0x1C4470u;
    // 0x1c4470: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4474: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c447c: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1c447cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4480: 0xc46d1568  lwc1        $f13, 0x1568($v1)
    ctx->pc = 0x1c4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4484: 0x9044156c  lbu         $a0, 0x156C($v0)
    ctx->pc = 0x1c4484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
    // 0x1c4488: 0xc058978  jal         func_1625E0
    ctx->pc = 0x1C4488u;
    SET_GPR_U32(ctx, 31, 0x1C4490u);
    ctx->pc = 0x1625E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1625E0u, 0x1C4488u, 0x1C4490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4490u;
label_1c4490:
    // 0x1c4490: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1c4490u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4494: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c4494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1c4498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c449c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C449Cu;
    {
        const bool branch_taken_0x1c449c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c449c) {
            ctx->pc = 0x1C44ACu;
            return;
        }
    }
    ctx->pc = 0x1C44A4u;
    // 0x1c44a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c44a8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1c44a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x1c44acu;
}
