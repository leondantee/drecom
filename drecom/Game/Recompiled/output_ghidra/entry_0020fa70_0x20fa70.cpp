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

// Function: entry_0020fa70
// Address: 0x20fa70 - 0x20fb0c
void entry_0020fa70_0x20fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fa70_0x20fa70");
#endif

    switch (ctx->pc) {
        case 0x20fadcu: goto label_20fadc;
        default: break;
    }

    ctx->pc = 0x20fa70u;

    // 0x20fa70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fa74: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fa78: 0x8ca61310  lw          $a2, 0x1310($a1)
    ctx->pc = 0x20fa78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4880)));
    // 0x20fa7c: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x20fa7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x20fa80: 0x3c043da3  lui         $a0, 0x3DA3
    ctx->pc = 0x20fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15779 << 16));
    // 0x20fa84: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x20fa84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x20fa88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20fa88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fa8c: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fa90: 0x8ca61310  lw          $a2, 0x1310($a1)
    ctx->pc = 0x20fa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4880)));
    // 0x20fa94: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x20fa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x20fa98: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fa9c: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x20fa9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20faa0: 0x3063fff9  andi        $v1, $v1, 0xFFF9
    ctx->pc = 0x20faa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65529);
    // 0x20faa4: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x20faa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x20faa8: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20faac: 0x9485000c  lhu         $a1, 0xC($a0)
    ctx->pc = 0x20faacu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20fab0: 0x34a60001  ori         $a2, $a1, 0x1
    ctx->pc = 0x20fab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x20fab4: 0xa486000c  sh          $a2, 0xC($a0)
    ctx->pc = 0x20fab4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x20fab8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20fab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20fabc: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x20fabcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x20fac0: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x20fac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x20fac4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fac8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x20fac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x20facc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20faccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fad0: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x20fad0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x20fad4: 0xc095fe0  jal         func_257F80
    ctx->pc = 0x20FAD4u;
    SET_GPR_U32(ctx, 31, 0x20FADCu);
    ctx->pc = 0x257F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F80u, 0x20FAD4u, 0x20FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FADCu;
label_20fadc:
    // 0x20fadc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20fadcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20fae0: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20fae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fae4: 0x84c91278  lh          $t1, 0x1278($a2)
    ctx->pc = 0x20fae4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x20fae8: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x20fae8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
    // 0x20faec: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x20faecu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x20faf0: 0x240b02bc  addiu       $t3, $zero, 0x2BC
    ctx->pc = 0x20faf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x20faf4: 0x114b0014  beq         $t2, $t3, . + 4 + (0x14 << 2)
    ctx->pc = 0x20FAF4u;
    {
        const bool branch_taken_0x20faf4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 11));
        if (branch_taken_0x20faf4) {
            ctx->pc = 0x20FB48u;
            return;
        }
    }
    ctx->pc = 0x20FAFCu;
    // 0x20fafc: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x20fafcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fb00: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fb04: 0x8c720058  lw          $s2, 0x58($v1)
    ctx->pc = 0x20fb04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20fb08: 0x0  nop
    ctx->pc = 0x20fb08u;
    // NOP
    ctx->pc = 0x20fb0cu;
}
