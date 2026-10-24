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

// Function: entry_002dc4d8
// Address: 0x2dc4d8 - 0x2dc564
void entry_002dc4d8_0x2dc4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc4d8_0x2dc4d8");
#endif

    switch (ctx->pc) {
        case 0x2dc50cu: goto label_2dc50c;
        case 0x2dc540u: goto label_2dc540;
        case 0x2dc55cu: goto label_2dc55c;
        default: break;
    }

    ctx->pc = 0x2dc4d8u;

    // 0x2dc4d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc4dc: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dc4dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dc4e0: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dc4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dc4e4: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dc4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc4e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc4ec: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dc4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dc4f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc4f4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dc4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dc4f8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DC4F8u;
    {
        const bool branch_taken_0x2dc4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4f8) {
            ctx->pc = 0x2DC564u;
            return;
        }
    }
    ctx->pc = 0x2DC500u;
    // 0x2dc500: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dc500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc504: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DC504u;
    SET_GPR_U32(ctx, 31, 0x2DC50Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DC504u, 0x2DC50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC50Cu;
label_2dc50c:
    // 0x2dc50c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc510: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dc510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dc514: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DC514u;
    {
        const bool branch_taken_0x2dc514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc514) {
            ctx->pc = 0x2DC564u;
            return;
        }
    }
    ctx->pc = 0x2DC51Cu;
    // 0x2dc51c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc520: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc524: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dc524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dc528: 0x24450680  addiu       $a1, $v0, 0x680
    ctx->pc = 0x2dc528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x2dc52c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dc52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc530: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dc530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dc534: 0x24478ddc  addiu       $a3, $v0, -0x7224
    ctx->pc = 0x2dc534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938076));
    // 0x2dc538: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DC538u;
    SET_GPR_U32(ctx, 31, 0x2DC540u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DC538u, 0x2DC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC540u;
label_2dc540:
    // 0x2dc540: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC540u;
    {
        const bool branch_taken_0x2dc540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc540) {
            ctx->pc = 0x2DC564u;
            return;
        }
    }
    ctx->pc = 0x2DC548u;
    // 0x2dc548: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dc548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dc54c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc550: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dc550u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc554: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DC554u;
    SET_GPR_U32(ctx, 31, 0x2DC55Cu);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DC554u, 0x2DC55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC55Cu;
label_2dc55c:
    // 0x2dc55c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc560: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dc560u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2dc564u;
}
