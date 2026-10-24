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

// Function: entry_0022df38
// Address: 0x22df38 - 0x22dfe0
void entry_0022df38_0x22df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022df38_0x22df38");
#endif

    switch (ctx->pc) {
        case 0x22df48u: goto label_22df48;
        case 0x22df54u: goto label_22df54;
        case 0x22df9cu: goto label_22df9c;
        case 0x22dfc0u: goto label_22dfc0;
        default: break;
    }

    ctx->pc = 0x22df38u;

    // 0x22df38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x22df38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df3c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22df3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22df40: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22DF40u;
    SET_GPR_U32(ctx, 31, 0x22DF48u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22DF40u, 0x22DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF48u;
label_22df48:
    // 0x22df48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x22df48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df4c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22DF4Cu;
    SET_GPR_U32(ctx, 31, 0x22DF54u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22DF4Cu, 0x22DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF54u;
label_22df54:
    // 0x22df54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df58: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22df58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22df5c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22DF5Cu;
    {
        const bool branch_taken_0x22df5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22df5c) {
            ctx->pc = 0x22DFE0u;
            return;
        }
    }
    ctx->pc = 0x22DF64u;
    // 0x22df64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22df64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22df68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df6c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22df6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22df70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22df70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22df74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df78: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22df78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22df7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df80: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22df80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22df84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df88: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22df88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22df8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22df90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22df94: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22DF94u;
    SET_GPR_U32(ctx, 31, 0x22DF9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22DF94u, 0x22DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF9Cu;
label_22df9c:
    // 0x22df9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22dfa0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22dfa4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x22dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x22dfa8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22dfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22dfac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22dfacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22dfb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dfb4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22dfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22dfb8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22DFB8u;
    SET_GPR_U32(ctx, 31, 0x22DFC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22DFB8u, 0x22DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFC0u;
label_22dfc0:
    // 0x22dfc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22dfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22dfc4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22dfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22dfc8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22dfcc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22dfccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22dfd0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22dfd0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22dfd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dfd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22dfdc: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22dfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x22dfe0u;
}
