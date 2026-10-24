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

// Function: caseD_5
// Address: 0x1cd540 - 0x1cd5d4
void caseD_5_0x1cd540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1cd540");
#endif

    switch (ctx->pc) {
        case 0x1cd598u: goto label_1cd598;
        case 0x1cd5c4u: goto label_1cd5c4;
        default: break;
    }

    ctx->pc = 0x1cd540u;

    // 0x1cd540: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd544: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1cd544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cd548: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1cd548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1cd54c: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1cd54cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1cd550: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x1cd550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x1cd554: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd558: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1cd558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1cd55c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cd55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cd560: 0x30440020  andi        $a0, $v0, 0x20
    ctx->pc = 0x1cd560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1cd564: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CD564u;
    {
        const bool branch_taken_0x1cd564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd564) {
            ctx->pc = 0x1CD600u;
            return;
        }
    }
    ctx->pc = 0x1CD56Cu;
    // 0x1cd56c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd570: 0x8ca213e8  lw          $v0, 0x13E8($a1)
    ctx->pc = 0x1cd570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1cd574: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CD574u;
    {
        const bool branch_taken_0x1cd574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd574) {
            ctx->pc = 0x1CD5D4u;
            return;
        }
    }
    ctx->pc = 0x1CD57Cu;
    // 0x1cd57c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd580: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd584: 0x8c6213e8  lw          $v0, 0x13E8($v1)
    ctx->pc = 0x1cd584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cd588: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1cd588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1cd58c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1cd58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1cd590: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CD590u;
    SET_GPR_U32(ctx, 31, 0x1CD598u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CD590u, 0x1CD598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD598u;
label_1cd598:
    // 0x1cd598: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd59c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cd59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cd5a0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cd5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd5a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd5a8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cd5ac: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1cd5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cd5b0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cd5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cd5b4: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1cd5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd5b8: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1cd5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd5bc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CD5BCu;
    SET_GPR_U32(ctx, 31, 0x1CD5C4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CD5BCu, 0x1CD5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5C4u;
label_1cd5c4:
    // 0x1cd5c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd5c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cd5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1cd5cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CD5CCu;
    {
        const bool branch_taken_0x1cd5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5cc) {
            ctx->pc = 0x1CD600u;
            return;
        }
    }
    ctx->pc = 0x1CD5D4u;
}
