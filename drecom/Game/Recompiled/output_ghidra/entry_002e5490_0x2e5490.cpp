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

// Function: entry_002e5490
// Address: 0x2e5490 - 0x2e54e4
void entry_002e5490_0x2e5490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5490_0x2e5490");
#endif

    switch (ctx->pc) {
        case 0x2e54a0u: goto label_2e54a0;
        case 0x2e54acu: goto label_2e54ac;
        case 0x2e54dcu: goto label_2e54dc;
        default: break;
    }

    ctx->pc = 0x2e5490u;

    // 0x2e5490: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5494: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e5494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5498: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E5498u;
    SET_GPR_U32(ctx, 31, 0x2E54A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E5498u, 0x2E54A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54A0u;
label_2e54a0:
    // 0x2e54a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e54a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54a4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E54A4u;
    SET_GPR_U32(ctx, 31, 0x2E54ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E54A4u, 0x2E54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54ACu;
label_2e54ac:
    // 0x2e54ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e54acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54b0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2e54b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2e54b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E54B4u;
    {
        const bool branch_taken_0x2e54b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e54b4) {
            ctx->pc = 0x2E54E4u;
            return;
        }
    }
    ctx->pc = 0x2E54BCu;
    // 0x2e54bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54c0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2e54c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e54c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e54c8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2e54c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e54cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e54ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e54d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e54d4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E54D4u;
    SET_GPR_U32(ctx, 31, 0x2E54DCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E54D4u, 0x2E54DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54DCu;
label_2e54dc:
    // 0x2e54dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E54DCu;
    {
        const bool branch_taken_0x2e54dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e54dc) {
            ctx->pc = 0x2E54F4u;
            return;
        }
    }
    ctx->pc = 0x2E54E4u;
}
