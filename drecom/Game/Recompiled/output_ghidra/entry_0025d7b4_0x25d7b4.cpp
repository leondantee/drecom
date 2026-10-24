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

// Function: entry_0025d7b4
// Address: 0x25d7b4 - 0x25d868
void entry_0025d7b4_0x25d7b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d7b4_0x25d7b4");
#endif

    switch (ctx->pc) {
        case 0x25d7c0u: goto label_25d7c0;
        case 0x25d7d4u: goto label_25d7d4;
        case 0x25d7e8u: goto label_25d7e8;
        case 0x25d800u: goto label_25d800;
        case 0x25d810u: goto label_25d810;
        case 0x25d840u: goto label_25d840;
        default: break;
    }

    ctx->pc = 0x25d7b4u;

    // 0x25d7b4: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7b8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25D7B8u;
    SET_GPR_U32(ctx, 31, 0x25D7C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25D7C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D7C0u) { return; }
    ctx->pc = 0x25D7C0u;
label_25d7c0:
    // 0x25d7c0: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7c4: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x25d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7c8: 0xc60c00d0  lwc1        $f12, 0xD0($s0)
    ctx->pc = 0x25d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d7cc: 0xc040d0e  jal         func_103438
    ctx->pc = 0x25D7CCu;
    SET_GPR_U32(ctx, 31, 0x25D7D4u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25D7D4u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D7D4u) { return; }
    ctx->pc = 0x25D7D4u;
label_25d7d4:
    // 0x25d7d4: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7d8: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x25d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7dc: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x25d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d7e0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x25D7E0u;
    SET_GPR_U32(ctx, 31, 0x25D7E8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25D7E8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D7E8u) { return; }
    ctx->pc = 0x25D7E8u;
label_25d7e8:
    // 0x25d7e8: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7ec: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x25d7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7f0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x25d7f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x25d7f4: 0xc60c00d8  lwc1        $f12, 0xD8($s0)
    ctx->pc = 0x25d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d7f8: 0xc040ce4  jal         func_103390
    ctx->pc = 0x25D7F8u;
    SET_GPR_U32(ctx, 31, 0x25D800u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25D800u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D800u) { return; }
    ctx->pc = 0x25D800u;
label_25d800:
    // 0x25d800: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x25d800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25d804: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x25d804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x25d808: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25D808u;
    SET_GPR_U32(ctx, 31, 0x25D810u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25D810u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D810u) { return; }
    ctx->pc = 0x25D810u;
label_25d810:
    // 0x25d810: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x25d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x25d814: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x25D814u;
    {
        const bool branch_taken_0x25d814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d814) {
            ctx->pc = 0x25D908u;
            return;
        }
    }
    ctx->pc = 0x25D81Cu;
    // 0x25d81c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x25d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25d820: 0xa7a400da  sh          $a0, 0xDA($sp)
    ctx->pc = 0x25d820u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 4));
    // 0x25d824: 0x8e0505f4  lw          $a1, 0x5F4($s0)
    ctx->pc = 0x25d824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x25d828: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x25d828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x25d82c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x25d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25d830: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x25d830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x25d834: 0x26060602  addiu       $a2, $s0, 0x602
    ctx->pc = 0x25d834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1538));
    // 0x25d838: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25D838u;
    SET_GPR_U32(ctx, 31, 0x25D840u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25D838u, 0x25D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D840u;
label_25d840:
    // 0x25d840: 0x960509e0  lhu         $a1, 0x9E0($s0)
    ctx->pc = 0x25d840u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25d844: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x25d844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x25d848: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x25d848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25d84c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D84Cu;
    {
        const bool branch_taken_0x25d84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d84c) {
            ctx->pc = 0x25D868u;
            return;
        }
    }
    ctx->pc = 0x25D854u;
    // 0x25d854: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x25d854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x25d858: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x25d858u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d85c: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x25d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d860: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25d860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d864: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x25d864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    ctx->pc = 0x25d868u;
}
