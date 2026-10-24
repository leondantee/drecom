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

// Function: entry_001c48b8
// Address: 0x1c48b8 - 0x1c4980
void entry_001c48b8_0x1c48b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c48b8_0x1c48b8");
#endif

    switch (ctx->pc) {
        case 0x1c48d8u: goto label_1c48d8;
        case 0x1c48e4u: goto label_1c48e4;
        case 0x1c48f8u: goto label_1c48f8;
        case 0x1c4904u: goto label_1c4904;
        case 0x1c490cu: goto label_1c490c;
        case 0x1c4928u: goto label_1c4928;
        default: break;
    }

    ctx->pc = 0x1c48b8u;

    // 0x1c48b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48bc: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c48bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c48c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48c4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c48c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c48c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c48c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c48ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c48d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C48D0u;
    SET_GPR_U32(ctx, 31, 0x1C48D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C48D0u, 0x1C48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48D8u;
label_1c48d8:
    // 0x1c48d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c48d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48dc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C48DCu;
    SET_GPR_U32(ctx, 31, 0x1C48E4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C48DCu, 0x1C48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48E4u;
label_1c48e4:
    // 0x1c48e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c48e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c48e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c48ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c48ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c48f0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C48F0u;
    SET_GPR_U32(ctx, 31, 0x1C48F8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C48F0u, 0x1C48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48F8u;
label_1c48f8:
    // 0x1c48f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c48f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c48fc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C48FCu;
    SET_GPR_U32(ctx, 31, 0x1C4904u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C48FCu, 0x1C4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4904u;
label_1c4904:
    // 0x1c4904: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1C4904u;
    SET_GPR_U32(ctx, 31, 0x1C490Cu);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1C4904u, 0x1C490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C490Cu;
label_1c490c:
    // 0x1c490c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C490Cu;
    {
        const bool branch_taken_0x1c490c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c490c) {
            ctx->pc = 0x1C49C4u;
            return;
        }
    }
    ctx->pc = 0x1C4914u;
    // 0x1c4914: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4918: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c491c: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4920: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C4920u;
    SET_GPR_U32(ctx, 31, 0x1C4928u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C4920u, 0x1C4928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4928u;
label_1c4928:
    // 0x1c4928: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C4928u;
    {
        const bool branch_taken_0x1c4928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4928) {
            ctx->pc = 0x1C49ACu;
            return;
        }
    }
    ctx->pc = 0x1C4930u;
    // 0x1c4930: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c4930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c4934: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c4934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c4938: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C4938u;
    {
        const bool branch_taken_0x1c4938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4938) {
            ctx->pc = 0x1C4980u;
            return;
        }
    }
    ctx->pc = 0x1C4940u;
    // 0x1c4940: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4944: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c4944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c4948: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c4948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c494c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4950: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4950u;
    {
        const bool branch_taken_0x1c4950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4950) {
            ctx->pc = 0x1C4980u;
            return;
        }
    }
    ctx->pc = 0x1C4958u;
    // 0x1c4958: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c4958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c495c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c495cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c4960: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c4960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c4964: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c4964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c4968: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c4968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c496c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c496cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4970: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4974: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c4974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c4978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c497c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c497cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c4980u;
}
