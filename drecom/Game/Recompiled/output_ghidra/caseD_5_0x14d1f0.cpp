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
// Address: 0x14d1f0 - 0x14d27c
void caseD_5_0x14d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14d1f0");
#endif

    switch (ctx->pc) {
        case 0x14d200u: goto label_14d200;
        case 0x14d20cu: goto label_14d20c;
        case 0x14d220u: goto label_14d220;
        case 0x14d22cu: goto label_14d22c;
        case 0x14d23cu: goto label_14d23c;
        case 0x14d264u: goto label_14d264;
        default: break;
    }

    ctx->pc = 0x14d1f0u;

    // 0x14d1f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d1f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d1f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d1f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D1F8u;
    SET_GPR_U32(ctx, 31, 0x14D200u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D1F8u, 0x14D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D200u;
label_14d200:
    // 0x14d200: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d204: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14D204u;
    SET_GPR_U32(ctx, 31, 0x14D20Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14D204u, 0x14D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D20Cu;
label_14d20c:
    // 0x14d20c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d210: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d214: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d218: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D218u;
    SET_GPR_U32(ctx, 31, 0x14D220u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D218u, 0x14D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D220u;
label_14d220:
    // 0x14d220: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d220u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d224: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14D224u;
    SET_GPR_U32(ctx, 31, 0x14D22Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D224u, 0x14D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D22Cu;
label_14d22c:
    // 0x14d22c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d230: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14d230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14d234: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x14D234u;
    SET_GPR_U32(ctx, 31, 0x14D23Cu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x14D234u, 0x14D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D23Cu;
label_14d23c:
    // 0x14d23c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x14D23Cu;
    {
        const bool branch_taken_0x14d23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d23c) {
            ctx->pc = 0x14D2CCu;
            return;
        }
    }
    ctx->pc = 0x14D244u;
    // 0x14d244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d248: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14d248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x14d24c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14d24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14d250: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14d250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14d254: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D254u;
    {
        const bool branch_taken_0x14d254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d254) {
            ctx->pc = 0x14D27Cu;
            return;
        }
    }
    ctx->pc = 0x14D25Cu;
    // 0x14d25c: 0xc0585dc  jal         func_161770
    ctx->pc = 0x14D25Cu;
    SET_GPR_U32(ctx, 31, 0x14D264u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14D25Cu, 0x14D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D264u;
label_14d264:
    // 0x14d264: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D264u;
    {
        const bool branch_taken_0x14d264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d264) {
            ctx->pc = 0x14D27Cu;
            return;
        }
    }
    ctx->pc = 0x14D26Cu;
    // 0x14d26c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d270: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14d270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d274: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14D274u;
    {
        const bool branch_taken_0x14d274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d274) {
            ctx->pc = 0x14D2CCu;
            return;
        }
    }
    ctx->pc = 0x14D27Cu;
}
