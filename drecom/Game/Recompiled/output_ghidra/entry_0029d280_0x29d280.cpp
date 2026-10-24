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

// Function: entry_0029d280
// Address: 0x29d280 - 0x29d2b0
void entry_0029d280_0x29d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d280_0x29d280");
#endif

    switch (ctx->pc) {
        case 0x29d2a4u: goto label_29d2a4;
        default: break;
    }

    ctx->pc = 0x29d280u;

    // 0x29d280: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x29d280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29d284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d288: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29d28c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D28Cu;
    {
        const bool branch_taken_0x29d28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d28c) {
            ctx->pc = 0x29D2B0u;
            return;
        }
    }
    ctx->pc = 0x29D294u;
    // 0x29d294: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x29d294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d298: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x29d298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x29d29c: 0xc05a400  jal         func_169000
    ctx->pc = 0x29D29Cu;
    SET_GPR_U32(ctx, 31, 0x29D2A4u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x29D29Cu, 0x29D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2A4u;
label_29d2a4:
    // 0x29d2a4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d2a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29d2ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x29d2b0u;
}
