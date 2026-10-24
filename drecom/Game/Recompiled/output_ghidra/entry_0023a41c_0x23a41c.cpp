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

// Function: entry_0023a41c
// Address: 0x23a41c - 0x23a4cc
void entry_0023a41c_0x23a41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a41c_0x23a41c");
#endif

    switch (ctx->pc) {
        case 0x23a448u: goto label_23a448;
        case 0x23a488u: goto label_23a488;
        case 0x23a4acu: goto label_23a4ac;
        default: break;
    }

    ctx->pc = 0x23a41cu;

    // 0x23a41c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x23a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x23a420: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23a420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23a424: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23a424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23a428: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a42c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a430: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23a430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23a434: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23a434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23a438: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23a43c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23a440: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23A440u;
    SET_GPR_U32(ctx, 31, 0x23A448u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23A440u, 0x23A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A448u;
label_23a448:
    // 0x23a448: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23A448u;
    {
        const bool branch_taken_0x23a448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a448) {
            ctx->pc = 0x23A4CCu;
            return;
        }
    }
    ctx->pc = 0x23A450u;
    // 0x23a450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a454: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a458: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23a458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a45c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a460: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a464: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23a464u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a468: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a46c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23a46cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a470: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a474: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23a474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a478: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a47c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23a480: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A480u;
    SET_GPR_U32(ctx, 31, 0x23A488u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A480u, 0x23A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A488u;
label_23a488:
    // 0x23a488: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a48c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23a490: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x23a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x23a494: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23a494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23a498: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23a498u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23a49c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a4a0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23a4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a4a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A4A4u;
    SET_GPR_U32(ctx, 31, 0x23A4ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A4A4u, 0x23A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4ACu;
label_23a4ac:
    // 0x23a4ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23a4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a4b0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23a4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23a4b4: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x23a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x23a4b8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23a4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23a4bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23a4bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23a4c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a4c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a4c8: 0xa4640074  sh          $a0, 0x74($v1)
    ctx->pc = 0x23a4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 116), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x23a4ccu;
}
