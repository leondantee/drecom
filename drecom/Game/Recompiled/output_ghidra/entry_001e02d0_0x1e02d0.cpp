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

// Function: entry_001e02d0
// Address: 0x1e02d0 - 0x1e03c8
void entry_001e02d0_0x1e02d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e02d0_0x1e02d0");
#endif

    switch (ctx->pc) {
        case 0x1e030cu: goto label_1e030c;
        case 0x1e0328u: goto label_1e0328;
        case 0x1e03c0u: goto label_1e03c0;
        default: break;
    }

    ctx->pc = 0x1e02d0u;

    // 0x1e02d0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1e02d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e02d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e02d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e02d8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1e02d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1e02dc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E02DCu;
    {
        const bool branch_taken_0x1e02dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e02dc) {
            ctx->pc = 0x1E03C8u;
            return;
        }
    }
    ctx->pc = 0x1E02E4u;
    // 0x1e02e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e02e8: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e02ec: 0x26a2fffe  addiu       $v0, $s5, -0x2
    ctx->pc = 0x1e02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x1e02f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e02f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e02f4: 0xa6020100  sh          $v0, 0x100($s0)
    ctx->pc = 0x1e02f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 256), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e02f8: 0xae12010c  sw          $s2, 0x10C($s0)
    ctx->pc = 0x1e02f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 18));
    // 0x1e02fc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1e02fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e0300: 0x26c5fff8  addiu       $a1, $s6, -0x8
    ctx->pc = 0x1e0300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967288));
    // 0x1e0304: 0xc078248  jal         func_1E0920
    ctx->pc = 0x1E0304u;
    SET_GPR_U32(ctx, 31, 0x1E030Cu);
    ctx->pc = 0x1E0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0920u, 0x1E0304u, 0x1E030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E030Cu;
label_1e030c:
    // 0x1e030c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1e030cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e0310: 0x2721023  subu        $v0, $s3, $s2
    ctx->pc = 0x1e0310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1e0314: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x1e0314u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1e0318: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x1e0318u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e031c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e031cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e0320: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E0320u;
    SET_GPR_U32(ctx, 31, 0x1E0328u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E0328u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E0328u) { return; }
    ctx->pc = 0x1E0328u;
label_1e0328:
    // 0x1e0328: 0xc621ffe8  lwc1        $f1, -0x18($s1)
    ctx->pc = 0x1e0328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e032c: 0xc620fff4  lwc1        $f0, -0xC($s1)
    ctx->pc = 0x1e032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0330: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e0330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0334: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e0334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0338: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e0338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e033c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e0340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0344: 0x0  nop
    ctx->pc = 0x1e0344u;
    // NOP
    // 0x1e0348: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0348u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e034c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e0350: 0xc621ffec  lwc1        $f1, -0x14($s1)
    ctx->pc = 0x1e0350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0354: 0xc620fff8  lwc1        $f0, -0x8($s1)
    ctx->pc = 0x1e0354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0358: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e0358u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e035c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0360: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e0360u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0364: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e0364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e0368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e036c: 0x0  nop
    ctx->pc = 0x1e036cu;
    // NOP
    // 0x1e0370: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0370u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e0374: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e0374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e0378: 0xc621fff0  lwc1        $f1, -0x10($s1)
    ctx->pc = 0x1e0378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e037c: 0xc620fffc  lwc1        $f0, -0x4($s1)
    ctx->pc = 0x1e037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0380: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e0380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0384: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e0384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0388: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e0388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e038c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e038cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e0390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0394: 0x0  nop
    ctx->pc = 0x1e0394u;
    // NOP
    // 0x1e0398: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0398u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e039c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e03a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e03a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e03a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e03a8: 0x0  nop
    ctx->pc = 0x1e03a8u;
    // NOP
    // 0x1e03ac: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1e03acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1e03b0: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1e03b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e03b4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e03b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e03b8: 0xc040c44  jal         func_103110
    ctx->pc = 0x1E03B8u;
    SET_GPR_U32(ctx, 31, 0x1E03C0u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1E03C0u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E03C0u) { return; }
    ctx->pc = 0x1E03C0u;
label_1e03c0:
    // 0x1e03c0: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e03c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e03c4: 0x0  nop
    ctx->pc = 0x1e03c4u;
    // NOP
    ctx->pc = 0x1e03c8u;
}
