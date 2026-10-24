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

// Function: entry_001c851c
// Address: 0x1c851c - 0x1c8594
void entry_001c851c_0x1c851c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c851c_0x1c851c");
#endif

    switch (ctx->pc) {
        case 0x1c8558u: goto label_1c8558;
        case 0x1c8584u: goto label_1c8584;
        default: break;
    }

    ctx->pc = 0x1c851cu;

    // 0x1c851c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8520: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c8520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1c8524: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C8524u;
    {
        const bool branch_taken_0x1c8524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8524) {
            ctx->pc = 0x1C8594u;
            return;
        }
    }
    ctx->pc = 0x1C852Cu;
    // 0x1c852c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8530: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c8530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c8534: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C8534u;
    {
        const bool branch_taken_0x1c8534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8534) {
            ctx->pc = 0x1C8594u;
            return;
        }
    }
    ctx->pc = 0x1C853Cu;
    // 0x1c853c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8540: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c8540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8544: 0x8cc213e8  lw          $v0, 0x13E8($a2)
    ctx->pc = 0x1c8544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5096)));
    // 0x1c8548: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c8548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c854c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1c854cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c8550: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1C8550u;
    SET_GPR_U32(ctx, 31, 0x1C8558u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C8550u, 0x1C8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8558u;
label_1c8558:
    // 0x1c8558: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c855c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1c855cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1c8560: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8564: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8568: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1c8568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x1c856c: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1c856cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c8570: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c8570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c8574: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1c8574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c8578: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1c8578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c857c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1C857Cu;
    SET_GPR_U32(ctx, 31, 0x1C8584u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C857Cu, 0x1C8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8584u;
label_1c8584:
    // 0x1c8584: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8588: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c8588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c858c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C858Cu;
    {
        const bool branch_taken_0x1c858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c858c) {
            ctx->pc = 0x1C85C0u;
            return;
        }
    }
    ctx->pc = 0x1C8594u;
}
