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

// Function: entry_001c4ffc
// Address: 0x1c4ffc - 0x1c50a8
void entry_001c4ffc_0x1c4ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4ffc_0x1c4ffc");
#endif

    switch (ctx->pc) {
        case 0x1c500cu: goto label_1c500c;
        case 0x1c5018u: goto label_1c5018;
        case 0x1c502cu: goto label_1c502c;
        case 0x1c5038u: goto label_1c5038;
        case 0x1c504cu: goto label_1c504c;
        default: break;
    }

    ctx->pc = 0x1c4ffcu;

    // 0x1c4ffc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5000: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5004: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C5004u;
    SET_GPR_U32(ctx, 31, 0x1C500Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C5004u, 0x1C500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C500Cu;
label_1c500c:
    // 0x1c500c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c500cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5010: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5010u;
    SET_GPR_U32(ctx, 31, 0x1C5018u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5010u, 0x1C5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5018u;
label_1c5018:
    // 0x1c5018: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c501c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5020: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5020u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5024: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C5024u;
    SET_GPR_U32(ctx, 31, 0x1C502Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C5024u, 0x1C502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C502Cu;
label_1c502c:
    // 0x1c502c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5030: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5030u;
    SET_GPR_U32(ctx, 31, 0x1C5038u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5030u, 0x1C5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5038u;
label_1c5038:
    // 0x1c5038: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c503c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c503cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5040: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c5040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5044: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C5044u;
    SET_GPR_U32(ctx, 31, 0x1C504Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C5044u, 0x1C504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C504Cu;
label_1c504c:
    // 0x1c504c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C504Cu;
    {
        const bool branch_taken_0x1c504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c504c) {
            ctx->pc = 0x1C50D8u;
            return;
        }
    }
    ctx->pc = 0x1C5054u;
    // 0x1c5054: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c5054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c5058: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c5058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c505c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C505Cu;
    {
        const bool branch_taken_0x1c505c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c505c) {
            ctx->pc = 0x1C50A8u;
            return;
        }
    }
    ctx->pc = 0x1C5064u;
    // 0x1c5064: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5068: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c5068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c506c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c506cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c5070: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5074: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5074u;
    {
        const bool branch_taken_0x1c5074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5074) {
            ctx->pc = 0x1C50A8u;
            return;
        }
    }
    ctx->pc = 0x1C507Cu;
    // 0x1c507c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c507cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5080: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c5080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c5084: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c5084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5088: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c5088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c508c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c508cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c5090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5094: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5098: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c509c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c509cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c50a4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c50a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c50a8u;
}
