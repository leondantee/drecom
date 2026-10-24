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

// Function: caseD_3
// Address: 0x2de01c - 0x2de0d4
void caseD_3_0x2de01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2de01c");
#endif

    switch (ctx->pc) {
        case 0x2de02cu: goto label_2de02c;
        case 0x2de038u: goto label_2de038;
        case 0x2de048u: goto label_2de048;
        case 0x2de054u: goto label_2de054;
        case 0x2de078u: goto label_2de078;
        case 0x2de0bcu: goto label_2de0bc;
        case 0x2de0ccu: goto label_2de0cc;
        default: break;
    }

    ctx->pc = 0x2de01cu;

    // 0x2de01c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de020: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2de020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2de024: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DE024u;
    SET_GPR_U32(ctx, 31, 0x2DE02Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE024u, 0x2DE02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE02Cu;
label_2de02c:
    // 0x2de02c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de030: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DE030u;
    SET_GPR_U32(ctx, 31, 0x2DE038u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE030u, 0x2DE038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE038u;
label_2de038:
    // 0x2de038: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de03c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de03cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2de040: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DE040u;
    SET_GPR_U32(ctx, 31, 0x2DE048u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE040u, 0x2DE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE048u;
label_2de048:
    // 0x2de048: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de04c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DE04Cu;
    SET_GPR_U32(ctx, 31, 0x2DE054u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE04Cu, 0x2DE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE054u;
label_2de054:
    // 0x2de054: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de058: 0x904209df  lbu         $v0, 0x9DF($v0)
    ctx->pc = 0x2de058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
    // 0x2de05c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2de05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2de060: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2de060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2de064: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2DE064u;
    {
        const bool branch_taken_0x2de064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de064) {
            ctx->pc = 0x2DE130u;
            return;
        }
    }
    ctx->pc = 0x2DE06Cu;
    // 0x2de06c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2de06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de070: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DE070u;
    SET_GPR_U32(ctx, 31, 0x2DE078u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DE070u, 0x2DE078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE078u;
label_2de078:
    // 0x2de078: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de07c: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x2de07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x2de080: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DE080u;
    {
        const bool branch_taken_0x2de080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de080) {
            ctx->pc = 0x2DE0D4u;
            return;
        }
    }
    ctx->pc = 0x2DE088u;
    // 0x2de088: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2de088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2de08c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de090: 0x0  nop
    ctx->pc = 0x2de090u;
    // NOP
    // 0x2de094: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2de094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2de098: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de09c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de0a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2de0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2de0a4: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2de0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2de0a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2de0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de0ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2de0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2de0b0: 0x24478e0c  addiu       $a3, $v0, -0x71F4
    ctx->pc = 0x2de0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938124));
    // 0x2de0b4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DE0B4u;
    SET_GPR_U32(ctx, 31, 0x2DE0BCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DE0B4u, 0x2DE0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0BCu;
label_2de0bc:
    // 0x2de0bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE0BCu;
    {
        const bool branch_taken_0x2de0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de0bc) {
            ctx->pc = 0x2DE0D4u;
            return;
        }
    }
    ctx->pc = 0x2DE0C4u;
    // 0x2de0c4: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DE0C4u;
    SET_GPR_U32(ctx, 31, 0x2DE0CCu);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DE0C4u, 0x2DE0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0CCu;
label_2de0cc:
    // 0x2de0cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de0d0: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2de0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2de0d4u;
}
