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

// Function: caseD_1
// Address: 0x1cc848 - 0x1cc8dc
void caseD_1_0x1cc848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1cc848");
#endif

    switch (ctx->pc) {
        case 0x1cc8a0u: goto label_1cc8a0;
        case 0x1cc8ccu: goto label_1cc8cc;
        default: break;
    }

    ctx->pc = 0x1cc848u;

    // 0x1cc848: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc84c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cc84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cc850: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc854: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1cc854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cc858: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1cc858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1cc85c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc860: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x1cc860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x1cc864: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1cc864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cc868: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1cc868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1cc86c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CC86Cu;
    {
        const bool branch_taken_0x1cc86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc86c) {
            ctx->pc = 0x1CC908u;
            return;
        }
    }
    ctx->pc = 0x1CC874u;
    // 0x1cc874: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc878: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1cc878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1cc87c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CC87Cu;
    {
        const bool branch_taken_0x1cc87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc87c) {
            ctx->pc = 0x1CC8DCu;
            return;
        }
    }
    ctx->pc = 0x1CC884u;
    // 0x1cc884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc888: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc88c: 0x8c4613e8  lw          $a2, 0x13E8($v0)
    ctx->pc = 0x1cc88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1cc890: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1cc890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cc894: 0x24c50120  addiu       $a1, $a2, 0x120
    ctx->pc = 0x1cc894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1cc898: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CC898u;
    SET_GPR_U32(ctx, 31, 0x1CC8A0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CC898u, 0x1CC8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8A0u;
label_1cc8a0:
    // 0x1cc8a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8a4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cc8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cc8a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8b0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cc8b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cc8b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cc8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cc8bc: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1cc8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc8c0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cc8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cc8c4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CC8C4u;
    SET_GPR_U32(ctx, 31, 0x1CC8CCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CC8C4u, 0x1CC8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC8CCu;
label_1cc8cc:
    // 0x1cc8cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cc8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1cc8d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CC8D4u;
    {
        const bool branch_taken_0x1cc8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc8d4) {
            ctx->pc = 0x1CC908u;
            return;
        }
    }
    ctx->pc = 0x1CC8DCu;
}
