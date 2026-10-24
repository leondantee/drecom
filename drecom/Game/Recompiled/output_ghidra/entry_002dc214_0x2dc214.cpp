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

// Function: entry_002dc214
// Address: 0x2dc214 - 0x2dc290
void entry_002dc214_0x2dc214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc214_0x2dc214");
#endif

    switch (ctx->pc) {
        case 0x2dc224u: goto label_2dc224;
        case 0x2dc230u: goto label_2dc230;
        case 0x2dc240u: goto label_2dc240;
        case 0x2dc24cu: goto label_2dc24c;
        case 0x2dc258u: goto label_2dc258;
        default: break;
    }

    ctx->pc = 0x2dc214u;

    // 0x2dc214: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc218: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc218u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc21c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DC21Cu;
    SET_GPR_U32(ctx, 31, 0x2DC224u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DC21Cu, 0x2DC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC224u;
label_2dc224:
    // 0x2dc224: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc228: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DC228u;
    SET_GPR_U32(ctx, 31, 0x2DC230u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DC228u, 0x2DC230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC230u;
label_2dc230:
    // 0x2dc230: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc234: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dc234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dc238: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DC238u;
    SET_GPR_U32(ctx, 31, 0x2DC240u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DC238u, 0x2DC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC240u;
label_2dc240:
    // 0x2dc240: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc244: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DC244u;
    SET_GPR_U32(ctx, 31, 0x2DC24Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DC244u, 0x2DC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC24Cu;
label_2dc24c:
    // 0x2dc24c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc250: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x2DC250u;
    SET_GPR_U32(ctx, 31, 0x2DC258u);
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x2DC250u, 0x2DC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC258u;
label_2dc258:
    // 0x2dc258: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc25c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2dc25cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dc260: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC260u;
    {
        const bool branch_taken_0x2dc260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc260) {
            ctx->pc = 0x2DC290u;
            return;
        }
    }
    ctx->pc = 0x2DC268u;
    // 0x2dc268: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc26c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dc26cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dc270: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dc270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dc274: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dc274u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc278: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dc278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc27c: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dc27cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dc280: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2dc280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2dc284: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dc284u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc288: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DC288u;
    {
        const bool branch_taken_0x2dc288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc288) {
            ctx->pc = 0x2DC31Cu;
            return;
        }
    }
    ctx->pc = 0x2DC290u;
}
