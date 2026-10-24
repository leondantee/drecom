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

// Function: entry_0013a4a8
// Address: 0x13a4a8 - 0x13a53c
void entry_0013a4a8_0x13a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a4a8_0x13a4a8");
#endif

    switch (ctx->pc) {
        case 0x13a4ccu: goto label_13a4cc;
        case 0x13a4e4u: goto label_13a4e4;
        case 0x13a4f0u: goto label_13a4f0;
        case 0x13a504u: goto label_13a504;
        default: break;
    }

    ctx->pc = 0x13a4a8u;

label_13a4a8:
    // 0x13a4a8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x13a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_13a4ac:
    // 0x13a4ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_13a4b0:
    // 0x13a4b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x13a4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_13a4b4:
    // 0x13a4b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4b8:
    // 0x13a4b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4bc:
    // 0x13a4bc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x13a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13a4c0:
    // 0x13a4c0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x13a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_13a4c4:
    // 0x13a4c4: 0xc058f50  jal         func_163D40
label_13a4c8:
    if (ctx->pc == 0x13A4C8u) {
        ctx->pc = 0x13A4CCu;
        goto label_13a4cc;
    }
    ctx->pc = 0x13A4C4u;
    SET_GPR_U32(ctx, 31, 0x13A4CCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x13A4C4u, 0x13A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4CCu;
label_13a4cc:
    // 0x13a4cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4d0:
    // 0x13a4d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x13a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_13a4d4:
    // 0x13a4d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4d8:
    // 0x13a4d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13a4d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13a4dc:
    // 0x13a4dc: 0xc096b40  jal         func_25AD00
label_13a4e0:
    if (ctx->pc == 0x13A4E0u) {
        ctx->pc = 0x13A4E4u;
        goto label_13a4e4;
    }
    ctx->pc = 0x13A4DCu;
    SET_GPR_U32(ctx, 31, 0x13A4E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13A4DCu, 0x13A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4E4u;
label_13a4e4:
    // 0x13a4e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4e8:
    // 0x13a4e8: 0xc05cd10  jal         func_173440
label_13a4ec:
    if (ctx->pc == 0x13A4ECu) {
        ctx->pc = 0x13A4F0u;
        goto label_13a4f0;
    }
    ctx->pc = 0x13A4E8u;
    SET_GPR_U32(ctx, 31, 0x13A4F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13A4E8u, 0x13A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4F0u;
label_13a4f0:
    // 0x13a4f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13a4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13a4f4:
    // 0x13a4f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4f8:
    // 0x13a4f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13a4fc:
    // 0x13a4fc: 0xc0573d8  jal         func_15CF60
label_13a500:
    if (ctx->pc == 0x13A500u) {
        ctx->pc = 0x13A504u;
        goto label_13a504;
    }
    ctx->pc = 0x13A4FCu;
    SET_GPR_U32(ctx, 31, 0x13A504u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13A4FCu, 0x13A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A504u;
label_13a504:
    // 0x13a504: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a508:
    // 0x13a508: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x13a508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_13a50c:
    // 0x13a50c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x13a50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_13a510:
    // 0x13a510: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13a510u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_13a514:
    // 0x13a514: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x13a514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_13a518:
    // 0x13a518: 0x10200090  beqz        $at, . + 4 + (0x90 << 2)
label_13a51c:
    if (ctx->pc == 0x13A51Cu) {
        ctx->pc = 0x13A520u;
        goto label_13a520;
    }
    ctx->pc = 0x13A518u;
    {
        const bool branch_taken_0x13a518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a518) {
            ctx->pc = 0x13A75Cu;
            return;
        }
    }
    ctx->pc = 0x13A520u;
label_13a520:
    // 0x13a520: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x13a520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_13a524:
    // 0x13a524: 0x2443e640  addiu       $v1, $v0, -0x19C0
    ctx->pc = 0x13a524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
label_13a528:
    // 0x13a528: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13a528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_13a52c:
    // 0x13a52c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13a530:
    // 0x13a530: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13a534:
    // 0x13a534: 0x400008  jr          $v0
label_13a538:
    if (ctx->pc == 0x13A538u) {
        ctx->pc = 0x13A53Cu;
        goto label_fallthrough_0x13a534;
    }
    ctx->pc = 0x13A534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A534u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x13a534:
    ctx->pc = 0x13A53Cu;
}
