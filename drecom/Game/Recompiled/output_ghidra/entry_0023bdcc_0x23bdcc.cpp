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

// Function: entry_0023bdcc
// Address: 0x23bdcc - 0x23be80
void entry_0023bdcc_0x23bdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023bdcc_0x23bdcc");
#endif

    switch (ctx->pc) {
        case 0x23be14u: goto label_23be14;
        case 0x23be38u: goto label_23be38;
        case 0x23be4cu: goto label_23be4c;
        case 0x23be60u: goto label_23be60;
        default: break;
    }

    ctx->pc = 0x23bdccu;

    // 0x23bdcc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bdd0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23bdd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23bdd4: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x23BDD4u;
    {
        const bool branch_taken_0x23bdd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bdd4) {
            ctx->pc = 0x23BE80u;
            return;
        }
    }
    ctx->pc = 0x23BDDCu;
    // 0x23bddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bde0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bde4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23bde4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23bde8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23bdec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bdf0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23bdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23bdf4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bdf8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23bdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23bdfc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23be00: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23be00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23be04: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23be08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23be08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23be0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BE0Cu;
    SET_GPR_U32(ctx, 31, 0x23BE14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BE0Cu, 0x23BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE14u;
label_23be14:
    // 0x23be14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23be18: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23be18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23be1c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x23be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x23be20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23be20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23be24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23be24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23be28: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23be2c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23be2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23be30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BE30u;
    SET_GPR_U32(ctx, 31, 0x23BE38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BE30u, 0x23BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE38u;
label_23be38:
    // 0x23be38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23be38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23be3c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23be40: 0x2451000a  addiu       $s1, $v0, 0xA
    ctx->pc = 0x23be40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23be44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BE44u;
    SET_GPR_U32(ctx, 31, 0x23BE4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BE44u, 0x23BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE4Cu;
label_23be4c:
    // 0x23be4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23be4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23be50: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23be50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23be54: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23be54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23be58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BE58u;
    SET_GPR_U32(ctx, 31, 0x23BE60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BE58u, 0x23BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE60u;
label_23be60:
    // 0x23be60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23be60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23be64: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x23be64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x23be68: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23be68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23be6c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23be6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23be70: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23be70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23be74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23be74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23be78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23be7c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x23be7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x23be80u;
}
