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

// Function: entry_00190704
// Address: 0x190704 - 0x190784
void entry_00190704_0x190704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190704_0x190704");
#endif

    switch (ctx->pc) {
        case 0x190744u: goto label_190744;
        case 0x19076cu: goto label_19076c;
        default: break;
    }

    ctx->pc = 0x190704u;

    // 0x190704: 0x8e2201fc  lw          $v0, 0x1FC($s1)
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x190708: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x190708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x19070c: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x190710: 0x92220210  lbu         $v0, 0x210($s1)
    ctx->pc = 0x190710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x190714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x190714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x190718: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19071c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x19071cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x190720: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x190720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x190724: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x190724u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190728: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x190728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19072c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19072cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x190730: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x190730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x190734: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x190734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x190738: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x190738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19073c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19073Cu;
    SET_GPR_U32(ctx, 31, 0x190744u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x190744u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190744u) { return; }
    ctx->pc = 0x190744u;
label_190744:
    // 0x190744: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x190744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190748: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x190748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x19074c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x19074cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x190750: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x190750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x190754: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x190754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x190758: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x190758u;
    {
        const bool branch_taken_0x190758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190758) {
            ctx->pc = 0x190790u;
            return;
        }
    }
    ctx->pc = 0x190760u;
    // 0x190760: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x190760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190764: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x190764u;
    SET_GPR_U32(ctx, 31, 0x19076Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x190764u, 0x19076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19076Cu;
label_19076c:
    // 0x19076c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x19076cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190770: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x190770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x190774: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x190774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190778: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190778u;
    {
        const bool branch_taken_0x190778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190778) {
            ctx->pc = 0x190784u;
            return;
        }
    }
    ctx->pc = 0x190780u;
    // 0x190780: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x190780u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x190784u;
}
