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

// Function: entry_00321780
// Address: 0x321780 - 0x321898
void entry_00321780_0x321780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321780_0x321780");
#endif

    switch (ctx->pc) {
        case 0x3217ecu: goto label_3217ec;
        case 0x3217fcu: goto label_3217fc;
        case 0x32180cu: goto label_32180c;
        case 0x321840u: goto label_321840;
        case 0x321894u: goto label_321894;
        default: break;
    }

    ctx->pc = 0x321780u;

    // 0x321780: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321784: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x321784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x321788: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x321788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32178c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x32178cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x321790: 0x1020ffee  beqz        $at, . + 4 + (-0x12 << 2)
    ctx->pc = 0x321790u;
    {
        const bool branch_taken_0x321790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321790) {
            ctx->pc = 0x32174Cu;
            return;
        }
    }
    ctx->pc = 0x321798u;
    // 0x321798: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32179c: 0x90630b1c  lbu         $v1, 0xB1C($v1)
    ctx->pc = 0x32179cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x3217a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3217a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3217a4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3217a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3217a8: 0x148300b0  bne         $a0, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x3217A8u;
    {
        const bool branch_taken_0x3217a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3217a8) {
            ctx->pc = 0x321A6Cu;
            return;
        }
    }
    ctx->pc = 0x3217B0u;
    // 0x3217b0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3217b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3217b4: 0x8c830280  lw          $v1, 0x280($a0)
    ctx->pc = 0x3217b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x3217b8: 0x146000ac  bnez        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x3217B8u;
    {
        const bool branch_taken_0x3217b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3217b8) {
            ctx->pc = 0x321A6Cu;
            return;
        }
    }
    ctx->pc = 0x3217C0u;
    // 0x3217c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3217c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3217c4: 0x24429db0  addiu       $v0, $v0, -0x6250
    ctx->pc = 0x3217c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942128));
    // 0x3217c8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x3217c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3217cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3217ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399DB0u));
    // 0x3217d0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3217d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3217d4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3217d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3217d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3217d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3217dc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3217dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3217e0: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x3217e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x3217e4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3217E4u;
    SET_GPR_U32(ctx, 31, 0x3217ECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3217ECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3217ECu) { return; }
    ctx->pc = 0x3217ECu;
label_3217ec:
    // 0x3217ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3217ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3217f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3217f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3217f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3217F4u;
    SET_GPR_U32(ctx, 31, 0x3217FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3217FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3217FCu) { return; }
    ctx->pc = 0x3217FCu;
label_3217fc:
    // 0x3217fc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3217fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x321800: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x321800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x321804: 0xc040c9e  jal         func_103278
    ctx->pc = 0x321804u;
    SET_GPR_U32(ctx, 31, 0x32180Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x32180Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32180Cu) { return; }
    ctx->pc = 0x32180Cu;
label_32180c:
    // 0x32180c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x32180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321810: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x321810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x321814: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x321814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x321818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32181c: 0x0  nop
    ctx->pc = 0x32181cu;
    // NOP
    // 0x321820: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x321820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x321824: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x321824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x321828: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x321828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x32182c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x32182cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x321830: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x321830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x321834: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x321834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x321838: 0xc059e1c  jal         func_167870
    ctx->pc = 0x321838u;
    SET_GPR_U32(ctx, 31, 0x321840u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x321838u, 0x321840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321840u;
label_321840:
    // 0x321840: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x321840u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321844: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x321844u;
    {
        const bool branch_taken_0x321844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x321844) {
            ctx->pc = 0x321898u;
            return;
        }
    }
    ctx->pc = 0x32184Cu;
    // 0x32184c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x32184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321850: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x321850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x321854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321858: 0x0  nop
    ctx->pc = 0x321858u;
    // NOP
    // 0x32185c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32185cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x321860: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x321860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x321864: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x321864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x321868: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x321868u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32186c: 0x0  nop
    ctx->pc = 0x32186cu;
    // NOP
    // 0x321870: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x321870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x321874: 0x24040117  addiu       $a0, $zero, 0x117
    ctx->pc = 0x321874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    // 0x321878: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x321878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x32187c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32187cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321880: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x321880u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321884: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x321884u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321888: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x321888u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32188c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x32188Cu;
    SET_GPR_U32(ctx, 31, 0x321894u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x32188Cu, 0x321894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321894u;
label_321894:
    // 0x321894: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x321894u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x321898u;
}
