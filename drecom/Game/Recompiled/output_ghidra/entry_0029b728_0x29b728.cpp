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

// Function: entry_0029b728
// Address: 0x29b728 - 0x29b834
void entry_0029b728_0x29b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b728_0x29b728");
#endif

    switch (ctx->pc) {
        case 0x29b758u: goto label_29b758;
        case 0x29b778u: goto label_29b778;
        case 0x29b7acu: goto label_29b7ac;
        case 0x29b7c4u: goto label_29b7c4;
        case 0x29b7f0u: goto label_29b7f0;
        case 0x29b80cu: goto label_29b80c;
        default: break;
    }

    ctx->pc = 0x29b728u;

    // 0x29b728: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29b728u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b72c: 0xdfa201d0  ld          $v0, 0x1D0($sp)
    ctx->pc = 0x29b72cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x29b730: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x29b730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b734: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x29b734u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x29b738: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x29b738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b73c: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x29b73cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29b740: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x29b740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b744: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b744u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b748: 0x24c20120  addiu       $v0, $a2, 0x120
    ctx->pc = 0x29b748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x29b74c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b74cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b750: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B750u;
    SET_GPR_U32(ctx, 31, 0x29B758u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B758u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B758u) { return; }
    ctx->pc = 0x29B758u;
label_29b758:
    // 0x29b758: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29b758u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b75c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x29b75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b760: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x29b760u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29b764: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b764u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b768: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x29b768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29b76c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b76cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b770: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B770u;
    SET_GPR_U32(ctx, 31, 0x29B778u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B778u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B778u) { return; }
    ctx->pc = 0x29B778u;
label_29b778:
    // 0x29b778: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29b778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b77c: 0xde050008  ld          $a1, 0x8($s0)
    ctx->pc = 0x29b77cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b780: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b788: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x29b788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x29b78c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x29b78cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x29b790: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b794: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b794u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b798: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29b79c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b79cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b7a0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29b7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29b7a4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B7A4u;
    SET_GPR_U32(ctx, 31, 0x29B7ACu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B7ACu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B7ACu) { return; }
    ctx->pc = 0x29B7ACu;
label_29b7ac:
    // 0x29b7ac: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b7b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b7b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b7b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b7b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b7b8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x29b7bc: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B7BCu;
    SET_GPR_U32(ctx, 31, 0x29B7C4u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B7C4u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B7C4u) { return; }
    ctx->pc = 0x29B7C4u;
label_29b7c4:
    // 0x29b7c4: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x29b7c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b7c8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x29b7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b7cc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x29b7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29b7d0: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x29b7d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x29b7d4: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x29b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x29b7d8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b7dc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b7dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b7e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b7e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b7e4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x29b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29b7e8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29B7E8u;
    SET_GPR_U32(ctx, 31, 0x29B7F0u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29B7F0u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B7F0u) { return; }
    ctx->pc = 0x29B7F0u;
label_29b7f0:
    // 0x29b7f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29b7f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b7f4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x29b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29b7f8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29b7f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b7fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29b7fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29b800: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29b800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29b804: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29B804u;
    SET_GPR_U32(ctx, 31, 0x29B80Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29B80Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B80Cu) { return; }
    ctx->pc = 0x29B80Cu;
label_29b80c:
    // 0x29b80c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b80cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b810: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x29b810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x29b814: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b818: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B818u;
    {
        const bool branch_taken_0x29b818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b818) {
            ctx->pc = 0x29B834u;
            return;
        }
    }
    ctx->pc = 0x29B820u;
    // 0x29b820: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b824: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b828: 0xffa201d8  sd          $v0, 0x1D8($sp)
    ctx->pc = 0x29b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 2));
    // 0x29b82c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B82Cu;
    {
        const bool branch_taken_0x29b82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b82c) {
            ctx->pc = 0x29B838u;
            return;
        }
    }
    ctx->pc = 0x29B834u;
}
