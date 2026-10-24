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

// Function: Sort_scr_parts
// Address: 0x13bf60 - 0x13c088
void Sort_scr_parts_0x13bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sort_scr_parts_0x13bf60");
#endif

    switch (ctx->pc) {
        case 0x13bf94u: goto label_13bf94;
        case 0x13bfacu: goto label_13bfac;
        case 0x13bfd4u: goto label_13bfd4;
        case 0x13c02cu: goto label_13c02c;
        case 0x13c05cu: goto label_13c05c;
        default: break;
    }

    ctx->pc = 0x13bf60u;

    // 0x13bf60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13bf64: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x13bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x13bf68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bf6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bf70: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x13bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x13bf74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13bf78: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x13bf78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x13bf7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bf80: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13bf84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13bf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13bf88: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x13bf88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13bf8c: 0xc04f024  jal         func_13C090
    ctx->pc = 0x13BF8Cu;
    SET_GPR_U32(ctx, 31, 0x13BF94u);
    ctx->pc = 0x13C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C090u, 0x13BF8Cu, 0x13BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF94u;
label_13bf94:
    // 0x13bf94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bf98: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13bf9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13bf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13bfa0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x13bfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13bfa4: 0xc06aeb0  jal         func_1ABAC0
    ctx->pc = 0x13BFA4u;
    SET_GPR_U32(ctx, 31, 0x13BFACu);
    ctx->pc = 0x1ABAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABAC0u, 0x13BFA4u, 0x13BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFACu;
label_13bfac:
    // 0x13bfac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13bfb0: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x13bfb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x13bfb4: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x13bfb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13bfb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13bfbc: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x13bfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13bfc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13bfc4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x13bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13bfc8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13bfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13bfcc: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x13BFCCu;
    {
        const bool branch_taken_0x13bfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bfcc) {
            ctx->pc = 0x13C070u;
            goto label_13c070;
        }
    }
    ctx->pc = 0x13BFD4u;
label_13bfd4:
    // 0x13bfd4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13bfd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13bfd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13bfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13bfdc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x13bfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x13bfe0: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x13BFE0u;
    {
        const bool branch_taken_0x13bfe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bfe0) {
            ctx->pc = 0x13C060u;
            goto label_13c060;
        }
    }
    ctx->pc = 0x13BFE8u;
    // 0x13bfe8: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x13bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13bfec: 0x1860001c  blez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13BFECu;
    {
        const bool branch_taken_0x13bfec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x13bfec) {
            ctx->pc = 0x13C060u;
            goto label_13c060;
        }
    }
    ctx->pc = 0x13BFF4u;
    // 0x13bff4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x13bff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13bff8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13bff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13bffc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x13bffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x13c000: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13C000u;
    {
        const bool branch_taken_0x13c000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c000) {
            ctx->pc = 0x13C034u;
            goto label_13c034;
        }
    }
    ctx->pc = 0x13C008u;
    // 0x13c008: 0x8e0600a4  lw          $a2, 0xA4($s0)
    ctx->pc = 0x13c008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13c00c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13c00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13c010: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13c010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13c014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13c014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13c018: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x13c018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c01c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x13c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13c020: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x13c020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x13c024: 0xc06aef8  jal         func_1ABBE0
    ctx->pc = 0x13C024u;
    SET_GPR_U32(ctx, 31, 0x13C02Cu);
    ctx->pc = 0x1ABBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBE0u, 0x13C024u, 0x13C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C02Cu;
label_13c02c:
    // 0x13c02c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13C02Cu;
    {
        const bool branch_taken_0x13c02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c02c) {
            ctx->pc = 0x13C060u;
            goto label_13c060;
        }
    }
    ctx->pc = 0x13C034u;
label_13c034:
    // 0x13c034: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x13c034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13c038: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x13c038u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x13c03c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13c03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13c040: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13c040u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13c044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13c044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13c048: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x13c048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c04c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x13c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13c050: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x13c050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x13c054: 0xc04f054  jal         func_13C150
    ctx->pc = 0x13C054u;
    SET_GPR_U32(ctx, 31, 0x13C05Cu);
    ctx->pc = 0x13C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C150u, 0x13C054u, 0x13C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C05Cu;
label_13c05c:
    // 0x13c05c: 0x0  nop
    ctx->pc = 0x13c05cu;
    // NOP
label_13c060:
    // 0x13c060: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13c060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13c064: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x13c064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13c068: 0x1620ffda  bnez        $s1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x13C068u;
    {
        const bool branch_taken_0x13c068 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c068) {
            ctx->pc = 0x13BFD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bfd4;
        }
    }
    ctx->pc = 0x13C070u;
label_13c070:
    // 0x13c070: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x13c070u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c07c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13c07cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c080: 0x3e00008  jr          $ra
    ctx->pc = 0x13C080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C088u;
}
