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

// Function: entry_001ca808
// Address: 0x1ca808 - 0x1ca884
void entry_001ca808_0x1ca808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca808_0x1ca808");
#endif

    switch (ctx->pc) {
        case 0x1ca82cu: goto label_1ca82c;
        case 0x1ca858u: goto label_1ca858;
        default: break;
    }

    ctx->pc = 0x1ca808u;

    // 0x1ca808: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca80c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1ca80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca810: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca814: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1ca814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca818: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ca818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ca81c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1ca81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1ca820: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ca820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca824: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CA824u;
    SET_GPR_U32(ctx, 31, 0x1CA82Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CA824u, 0x1CA82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA82Cu;
label_1ca82c:
    // 0x1ca82c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca830: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ca830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ca834: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca838: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ca838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ca83c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA83Cu;
    {
        const bool branch_taken_0x1ca83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca83c) {
            ctx->pc = 0x1CA88Cu;
            return;
        }
    }
    ctx->pc = 0x1CA844u;
    // 0x1ca844: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca848: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ca848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ca84c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca850: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1CA850u;
    SET_GPR_U32(ctx, 31, 0x1CA858u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1CA850u, 0x1CA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA858u;
label_1ca858:
    // 0x1ca858: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1ca858u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ca85c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA85Cu;
    {
        const bool branch_taken_0x1ca85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca85c) {
            ctx->pc = 0x1CA88Cu;
            return;
        }
    }
    ctx->pc = 0x1CA864u;
    // 0x1ca864: 0x32430008  andi        $v1, $s2, 0x8
    ctx->pc = 0x1ca864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x1ca868: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA868u;
    {
        const bool branch_taken_0x1ca868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca868) {
            ctx->pc = 0x1CA884u;
            return;
        }
    }
    ctx->pc = 0x1CA870u;
    // 0x1ca870: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ca870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca874: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ca874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ca878: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1ca878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1ca87c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ca87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ca880: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ca880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1ca884u;
}
