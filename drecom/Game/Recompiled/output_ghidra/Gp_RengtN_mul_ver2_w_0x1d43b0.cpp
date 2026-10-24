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

// Function: Gp_RengtN_mul_ver2_w
// Address: 0x1d43b0 - 0x1d4dd8
void Gp_RengtN_mul_ver2_w_0x1d43b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_RengtN_mul_ver2_w_0x1d43b0");
#endif

    switch (ctx->pc) {
        case 0x1d4544u: goto label_1d4544;
        case 0x1d4560u: goto label_1d4560;
        case 0x1d45a4u: goto label_1d45a4;
        case 0x1d45d0u: goto label_1d45d0;
        case 0x1d4600u: goto label_1d4600;
        case 0x1d4630u: goto label_1d4630;
        case 0x1d465cu: goto label_1d465c;
        case 0x1d4688u: goto label_1d4688;
        case 0x1d46b4u: goto label_1d46b4;
        case 0x1d46e4u: goto label_1d46e4;
        case 0x1d4714u: goto label_1d4714;
        case 0x1d4730u: goto label_1d4730;
        case 0x1d4740u: goto label_1d4740;
        case 0x1d4750u: goto label_1d4750;
        case 0x1d4760u: goto label_1d4760;
        case 0x1d4770u: goto label_1d4770;
        case 0x1d4780u: goto label_1d4780;
        case 0x1d4790u: goto label_1d4790;
        case 0x1d47a0u: goto label_1d47a0;
        case 0x1d47bcu: goto label_1d47bc;
        case 0x1d47d8u: goto label_1d47d8;
        case 0x1d47f4u: goto label_1d47f4;
        case 0x1d4810u: goto label_1d4810;
        case 0x1d482cu: goto label_1d482c;
        case 0x1d4848u: goto label_1d4848;
        case 0x1d4864u: goto label_1d4864;
        case 0x1d4880u: goto label_1d4880;
        case 0x1d489cu: goto label_1d489c;
        case 0x1d48d4u: goto label_1d48d4;
        case 0x1d4958u: goto label_1d4958;
        case 0x1d4978u: goto label_1d4978;
        case 0x1d4a54u: goto label_1d4a54;
        case 0x1d4a6cu: goto label_1d4a6c;
        case 0x1d4a78u: goto label_1d4a78;
        case 0x1d4b6cu: goto label_1d4b6c;
        case 0x1d4b80u: goto label_1d4b80;
        case 0x1d4b8cu: goto label_1d4b8c;
        case 0x1d4c58u: goto label_1d4c58;
        case 0x1d4c74u: goto label_1d4c74;
        case 0x1d4c8cu: goto label_1d4c8c;
        case 0x1d4ca4u: goto label_1d4ca4;
        case 0x1d4d2cu: goto label_1d4d2c;
        default: break;
    }

    ctx->pc = 0x1d43b0u;

    // 0x1d43b0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1d43b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1d43b4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1d43b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1d43b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d43b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d43bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d43bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d43c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d43c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d43c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d43c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d43c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d43c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d43cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d43ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d43d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d43d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d43d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d43d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d43d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d43d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d43dc: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x1d43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
    // 0x1d43e0: 0xafa50168  sw          $a1, 0x168($sp)
    ctx->pc = 0x1d43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 5));
    // 0x1d43e4: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x1d43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
    // 0x1d43e8: 0xafa80180  sw          $t0, 0x180($sp)
    ctx->pc = 0x1d43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 8));
    // 0x1d43ec: 0xafa90188  sw          $t1, 0x188($sp)
    ctx->pc = 0x1d43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 9));
    // 0x1d43f0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1d43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1d43f4: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x1d43f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d43f8: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x1d43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x1d43fc: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1d43fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1d4400: 0x24a70080  addiu       $a3, $a1, 0x80
    ctx->pc = 0x1d4400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1d4404: 0xafa70144  sw          $a3, 0x144($sp)
    ctx->pc = 0x1d4404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 7));
    // 0x1d4408: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d4408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d440c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d440cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d4410: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1d4410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1d4414: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d4414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d4418: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4418u;
    {
        const bool branch_taken_0x1d4418 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d4418) {
            ctx->pc = 0x1D4434u;
            goto label_1d4434;
        }
    }
    ctx->pc = 0x1D4420u;
    // 0x1d4420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4424: 0x0  nop
    ctx->pc = 0x1d4424u;
    // NOP
    // 0x1d4428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d442c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D442Cu;
    {
        const bool branch_taken_0x1d442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d442c) {
            ctx->pc = 0x1D4450u;
            goto label_1d4450;
        }
    }
    ctx->pc = 0x1D4434u;
label_1d4434:
    // 0x1d4434: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1d4434u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1d4438: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1d4438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d443c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d443cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1d4440: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d4440u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4444: 0x0  nop
    ctx->pc = 0x1d4444u;
    // NOP
    // 0x1d4448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d444c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d444cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d4450:
    // 0x1d4450: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1d4450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1d4454: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1d4458: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D4458u;
    {
        const bool branch_taken_0x1d4458 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4458) {
            ctx->pc = 0x1D44A4u;
            goto label_1d44a4;
        }
    }
    ctx->pc = 0x1D4460u;
    // 0x1d4460: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x1d4460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d4464: 0xafa70138  sw          $a3, 0x138($sp)
    ctx->pc = 0x1d4464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
    // 0x1d4468: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d4468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d446c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d446cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d4470: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d4470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4474: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d4478: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d4478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d447c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d447cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4480: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d4480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4484: 0xa7a2015e  sh          $v0, 0x15E($sp)
    ctx->pc = 0x1d4484u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d4488: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d4488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d448c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d448cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d4490: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1d4490u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4494: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d4494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d4498: 0xa4530006  sh          $s3, 0x6($v0)
    ctx->pc = 0x1d4498u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 19));
    // 0x1d449c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D449Cu;
    {
        const bool branch_taken_0x1d449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d449c) {
            ctx->pc = 0x1D44E0u;
            goto label_1d44e0;
        }
    }
    ctx->pc = 0x1D44A4u;
label_1d44a4:
    // 0x1d44a4: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1d44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d44a8: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x1d44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x1d44ac: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d44b0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d44b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d44b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d44b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d44b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d44b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d44bc: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d44c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d44c4: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x1d44c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d44c8: 0xa7b4015e  sh          $s4, 0x15E($sp)
    ctx->pc = 0x1d44c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 20));
    // 0x1d44cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d44ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d44d0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d44d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d44d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d44d8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d44dc: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1d44dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
label_1d44e0:
    // 0x1d44e0: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x1d44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1d44e4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1d44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1d44e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D44E8u;
    {
        const bool branch_taken_0x1d44e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d44e8) {
            ctx->pc = 0x1D4518u;
            goto label_1d4518;
        }
    }
    ctx->pc = 0x1D44F0u;
    // 0x1d44f0: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d44f4: 0xa7a2015a  sh          $v0, 0x15A($sp)
    ctx->pc = 0x1d44f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d44f8: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d44fc: 0xa7a2015c  sh          $v0, 0x15C($sp)
    ctx->pc = 0x1d44fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d4500: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1d4500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1d4504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4508: 0x0  nop
    ctx->pc = 0x1d4508u;
    // NOP
    // 0x1d450c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1d4510: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4510u;
    {
        const bool branch_taken_0x1d4510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4510) {
            ctx->pc = 0x1D452Cu;
            goto label_1d452c;
        }
    }
    ctx->pc = 0x1D4518u;
label_1d4518:
    // 0x1d4518: 0xa7a0015a  sh          $zero, 0x15A($sp)
    ctx->pc = 0x1d4518u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 346), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d451c: 0xa7a0015c  sh          $zero, 0x15C($sp)
    ctx->pc = 0x1d451cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d4520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4524: 0x0  nop
    ctx->pc = 0x1d4524u;
    // NOP
    // 0x1d4528: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d4528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1d452c:
    // 0x1d452c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1d452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4530: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4530u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4534: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1d4534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1d4538: 0x2465e550  addiu       $a1, $v1, -0x1AB0
    ctx->pc = 0x1d4538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960464));
    // 0x1d453c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D453Cu;
    SET_GPR_U32(ctx, 31, 0x1D4544u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D4544u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4544u) { return; }
    ctx->pc = 0x1D4544u;
label_1d4544:
    // 0x1d4544: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1d4544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4548: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d454c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d454cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d4550: 0x2442e510  addiu       $v0, $v0, -0x1AF0
    ctx->pc = 0x1d4550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1d4554: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d4554u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4558: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D4558u;
    SET_GPR_U32(ctx, 31, 0x1D4560u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D4560u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4560u) { return; }
    ctx->pc = 0x1D4560u;
label_1d4560:
    // 0x1d4560: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d4560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d4564: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d4564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4568: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d4568u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d456c: 0x8fb50170  lw          $s5, 0x170($sp)
    ctx->pc = 0x1d456cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d4570: 0x97a2015e  lhu         $v0, 0x15E($sp)
    ctx->pc = 0x1d4570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 350)));
    // 0x1d4574: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d4574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d457c: 0x1462008a  bne         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1D457Cu;
    {
        const bool branch_taken_0x1d457c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d457c) {
            ctx->pc = 0x1D47A8u;
            goto label_1d47a8;
        }
    }
    ctx->pc = 0x1D4584u;
    // 0x1d4584: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d4584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d4588: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d4588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d458c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d458cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4590: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d4590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4594: 0x101882  srl         $v1, $s0, 2
    ctx->pc = 0x1d4594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1d4598: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1d4598u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d459c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1D459Cu;
    {
        const bool branch_taken_0x1d459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d459c) {
            ctx->pc = 0x1D4718u;
            goto label_1d4718;
        }
    }
    ctx->pc = 0x1D45A4u;
label_1d45a4:
    // 0x1d45a4: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1d45a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d45a8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1d45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d45ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d45acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d45b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d45b4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d45b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d45b8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d45bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d45c0: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x1d45c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d45c4: 0x2645fff0  addiu       $a1, $s2, -0x10
    ctx->pc = 0x1d45c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x1d45c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D45C8u;
    SET_GPR_U32(ctx, 31, 0x1D45D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D45D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D45D0u) { return; }
    ctx->pc = 0x1D45D0u;
label_1d45d0:
    // 0x1d45d0: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1d45d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d45d4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1d45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d45d8: 0x2457fffe  addiu       $s7, $v0, -0x2
    ctx->pc = 0x1d45d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1d45dc: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x1d45dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1d45e0: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x1d45e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d45e4: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x1d45e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d45e8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1d45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d45ec: 0x222b821  addu        $s7, $s1, $v0
    ctx->pc = 0x1d45ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d45f0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1d45f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d45f4: 0x26e5ffe0  addiu       $a1, $s7, -0x20
    ctx->pc = 0x1d45f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
    // 0x1d45f8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D45F8u;
    SET_GPR_U32(ctx, 31, 0x1D4600u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4600u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4600u) { return; }
    ctx->pc = 0x1D4600u;
label_1d4600:
    // 0x1d4600: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1d4600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4604: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1d4604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d4608: 0x2446fffd  addiu       $a2, $v0, -0x3
    ctx->pc = 0x1d4608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1d460c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1d460cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d4610: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x1d4610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d4614: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4618: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x1d4618u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d461c: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x1d461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1d4620: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1d4620u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d4624: 0x2445ffd0  addiu       $a1, $v0, -0x30
    ctx->pc = 0x1d4624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1d4628: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4628u;
    SET_GPR_U32(ctx, 31, 0x1D4630u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4630u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4630u) { return; }
    ctx->pc = 0x1D4630u;
label_1d4630:
    // 0x1d4630: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d4630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4634: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d4634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d4638: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1d4638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1d463c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d463cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4640: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d4640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4644: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4648: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d4648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d464c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1d464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d4650: 0x2445ffc0  addiu       $a1, $v0, -0x40
    ctx->pc = 0x1d4650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1d4654: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4654u;
    SET_GPR_U32(ctx, 31, 0x1D465Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D465Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D465Cu) { return; }
    ctx->pc = 0x1D465Cu;
label_1d465c:
    // 0x1d465c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4660: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d4660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d4664: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x1d4664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x1d4668: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d466c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4670: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4674: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d4674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4678: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1d4678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d467c: 0x2445ffb0  addiu       $a1, $v0, -0x50
    ctx->pc = 0x1d467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x1d4680: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4680u;
    SET_GPR_U32(ctx, 31, 0x1D4688u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4688u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4688u) { return; }
    ctx->pc = 0x1D4688u;
label_1d4688:
    // 0x1d4688: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d4688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d468c: 0x2b8c0  sll         $s7, $v0, 3
    ctx->pc = 0x1d468cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d4690: 0x26e3fffa  addiu       $v1, $s7, -0x6
    ctx->pc = 0x1d4690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967290));
    // 0x1d4694: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4698: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1d4698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d469c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d46a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d46a4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d46a8: 0x2465ffa0  addiu       $a1, $v1, -0x60
    ctx->pc = 0x1d46a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
    // 0x1d46ac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D46ACu;
    SET_GPR_U32(ctx, 31, 0x1D46B4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D46B4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D46B4u) { return; }
    ctx->pc = 0x1D46B4u;
label_1d46b4:
    // 0x1d46b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d46b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d46b8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1d46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d46bc: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1d46bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d46c0: 0x24c3fff9  addiu       $v1, $a2, -0x7
    ctx->pc = 0x1d46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967289));
    // 0x1d46c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d46c8: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1d46c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d46cc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d46d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d46d4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d46d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d46d8: 0x2465ff90  addiu       $a1, $v1, -0x70
    ctx->pc = 0x1d46d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967184));
    // 0x1d46dc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D46DCu;
    SET_GPR_U32(ctx, 31, 0x1D46E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D46E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D46E4u) { return; }
    ctx->pc = 0x1D46E4u;
label_1d46e4:
    // 0x1d46e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d46e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d46e8: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1d46e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d46ec: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1d46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d46f0: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x1d46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1d46f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d46f8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d46fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4700: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4704: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d4704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4708: 0x2445ff80  addiu       $a1, $v0, -0x80
    ctx->pc = 0x1d4708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x1d470c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D470Cu;
    SET_GPR_U32(ctx, 31, 0x1D4714u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4714u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4714u) { return; }
    ctx->pc = 0x1D4714u;
label_1d4714:
    // 0x1d4714: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d4714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d4718:
    // 0x1d4718: 0x1600ffa2  bnez        $s0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x1D4718u;
    {
        const bool branch_taken_0x1d4718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4718) {
            ctx->pc = 0x1D45A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d45a4;
        }
    }
    ctx->pc = 0x1D4720u;
    // 0x1d4720: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1d4720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d4724: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1d4724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d4728: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4728u;
    SET_GPR_U32(ctx, 31, 0x1D4730u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4730u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4730u) { return; }
    ctx->pc = 0x1D4730u;
label_1d4730:
    // 0x1d4730: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1d4730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4734: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x1d4734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d4738: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4738u;
    SET_GPR_U32(ctx, 31, 0x1D4740u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4740u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4740u) { return; }
    ctx->pc = 0x1D4740u;
label_1d4740:
    // 0x1d4740: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1d4740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d4744: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x1d4744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1d4748: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4748u;
    SET_GPR_U32(ctx, 31, 0x1D4750u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4750u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4750u) { return; }
    ctx->pc = 0x1D4750u;
label_1d4750:
    // 0x1d4750: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1d4750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d4754: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x1d4754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1d4758: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4758u;
    SET_GPR_U32(ctx, 31, 0x1D4760u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4760u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4760u) { return; }
    ctx->pc = 0x1D4760u;
label_1d4760:
    // 0x1d4760: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1d4760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1d4764: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x1d4764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1d4768: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4768u;
    SET_GPR_U32(ctx, 31, 0x1D4770u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4770u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4770u) { return; }
    ctx->pc = 0x1D4770u;
label_1d4770:
    // 0x1d4770: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1d4770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1d4774: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x1d4774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1d4778: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4778u;
    SET_GPR_U32(ctx, 31, 0x1D4780u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4780u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4780u) { return; }
    ctx->pc = 0x1D4780u;
label_1d4780:
    // 0x1d4780: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1d4780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1d4784: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x1d4784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1d4788: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4788u;
    SET_GPR_U32(ctx, 31, 0x1D4790u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4790u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4790u) { return; }
    ctx->pc = 0x1D4790u;
label_1d4790:
    // 0x1d4790: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1d4790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1d4794: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x1d4794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x1d4798: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4798u;
    SET_GPR_U32(ctx, 31, 0x1D47A0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D47A0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D47A0u) { return; }
    ctx->pc = 0x1D47A0u;
label_1d47a0:
    // 0x1d47a0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1D47A0u;
    {
        const bool branch_taken_0x1d47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47a0) {
            ctx->pc = 0x1D48A8u;
            goto label_1d48a8;
        }
    }
    ctx->pc = 0x1D47A8u;
label_1d47a8:
    // 0x1d47a8: 0x8fb00180  lw          $s0, 0x180($sp)
    ctx->pc = 0x1d47a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d47ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d47acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d47b0: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1d47b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1d47b4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1D47B4u;
    {
        const bool branch_taken_0x1d47b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47b4) {
            ctx->pc = 0x1D48A0u;
            goto label_1d48a0;
        }
    }
    ctx->pc = 0x1D47BCu;
label_1d47bc:
    // 0x1d47bc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d47c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d47c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d47c8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d47c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d47cc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1d47ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d47d0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D47D0u;
    SET_GPR_U32(ctx, 31, 0x1D47D8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D47D8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D47D8u) { return; }
    ctx->pc = 0x1D47D8u;
label_1d47d8:
    // 0x1d47d8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d47dc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1d47e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d47e4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d47e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d47e8: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x1d47e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d47ec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D47ECu;
    SET_GPR_U32(ctx, 31, 0x1D47F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D47F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D47F4u) { return; }
    ctx->pc = 0x1D47F4u;
label_1d47f4:
    // 0x1d47f4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d47f8: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1d47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1d47fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4800: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4804: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x1d4804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1d4808: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4808u;
    SET_GPR_U32(ctx, 31, 0x1D4810u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4810u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4810u) { return; }
    ctx->pc = 0x1D4810u;
label_1d4810:
    // 0x1d4810: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4814: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1d4814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1d4818: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d481c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4820: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x1d4820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1d4824: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4824u;
    SET_GPR_U32(ctx, 31, 0x1D482Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D482Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D482Cu) { return; }
    ctx->pc = 0x1D482Cu;
label_1d482c:
    // 0x1d482c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d482cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4830: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x1d4830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x1d4834: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4838: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d4838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d483c: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x1d483cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1d4840: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4840u;
    SET_GPR_U32(ctx, 31, 0x1D4848u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4848u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4848u) { return; }
    ctx->pc = 0x1D4848u;
label_1d4848:
    // 0x1d4848: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d484c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1d484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x1d4850: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4854: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4858: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x1d4858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1d485c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D485Cu;
    SET_GPR_U32(ctx, 31, 0x1D4864u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4864u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4864u) { return; }
    ctx->pc = 0x1D4864u;
label_1d4864:
    // 0x1d4864: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4868: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x1d4868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x1d486c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d486cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4870: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d4870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4874: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x1d4874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1d4878: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4878u;
    SET_GPR_U32(ctx, 31, 0x1D4880u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D4880u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4880u) { return; }
    ctx->pc = 0x1D4880u;
label_1d4880:
    // 0x1d4880: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d4884: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d4884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1d4888: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d488c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4890: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x1d4890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x1d4894: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D4894u;
    SET_GPR_U32(ctx, 31, 0x1D489Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D489Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D489Cu) { return; }
    ctx->pc = 0x1D489Cu;
label_1d489c:
    // 0x1d489c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d489cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d48a0:
    // 0x1d48a0: 0x1600ffc6  bnez        $s0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1D48A0u;
    {
        const bool branch_taken_0x1d48a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d48a0) {
            ctx->pc = 0x1D47BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47bc;
        }
    }
    ctx->pc = 0x1D48A8u;
label_1d48a8:
    // 0x1d48a8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1d48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1d48ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d48acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d48b0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1d48b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1d48b4: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1d48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1d48b8: 0x24560080  addiu       $s6, $v0, 0x80
    ctx->pc = 0x1d48b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d48bc: 0x8fb00180  lw          $s0, 0x180($sp)
    ctx->pc = 0x1d48bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d48c0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d48c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d48c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d48c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d48c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d48cc: 0x0  nop
    ctx->pc = 0x1d48ccu;
    // NOP
    // 0x1d48d0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d48d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1d48d4:
    // 0x1d48d4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d48d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d48dc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1d48dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d48e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d48e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d48e4: 0x0  nop
    ctx->pc = 0x1d48e4u;
    // NOP
    // 0x1d48e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d48e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d48ec: 0x0  nop
    ctx->pc = 0x1d48ecu;
    // NOP
    // 0x1d48f0: 0x450100c7  bc1t        . + 4 + (0xC7 << 2)
    ctx->pc = 0x1D48F0u;
    {
        const bool branch_taken_0x1d48f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d48f0) {
            ctx->pc = 0x1D4C10u;
            goto label_1d4c10;
        }
    }
    ctx->pc = 0x1D48F8u;
    // 0x1d48f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d48fc: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4900: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4908: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d490c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d490cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4910: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d4910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4914: 0x245e0020  addiu       $fp, $v0, 0x20
    ctx->pc = 0x1d4914u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d4918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d491c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d491cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4920: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4928: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d492c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d492cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4930: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d4930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4934: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1d4934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1d4938: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x1d4938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x1d493c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d493cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d4940: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1d4940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4944: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x1d4944u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1d4948: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d4948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d494c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d494cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4950: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D4950u;
    SET_GPR_U32(ctx, 31, 0x1D4958u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D4958u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4958u) { return; }
    ctx->pc = 0x1D4958u;
label_1d4958:
    // 0x1d4958: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d4958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d495c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4960: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x1d4960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d4964: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d4964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4968: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1d4968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d496c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d496cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4970: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D4970u;
    SET_GPR_U32(ctx, 31, 0x1D4978u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D4978u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D4978u) { return; }
    ctx->pc = 0x1D4978u;
label_1d4978:
    // 0x1d4978: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d497c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d497cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4980: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4988: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d498c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d498cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4990: 0x2c29821  addu        $s3, $s6, $v0
    ctx->pc = 0x1d4990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4998: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d4998u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d499c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d499cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d49a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d49a4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d49a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d49a8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1d49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d49ac: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d49acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d49b0: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x1d49b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d49b4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1d49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d49b8: 0x24439000  addiu       $v1, $v0, -0x7000
    ctx->pc = 0x1d49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1d49bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d49bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d49c0: 0x0  nop
    ctx->pc = 0x1d49c0u;
    // NOP
    // 0x1d49c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d49c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d49c8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d49c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1d49cc: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x1d49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x1d49d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d49d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d49d4: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d49d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d49d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d49d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d49dc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d49dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d49e0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1d49e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d49e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d49e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d49e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d49ec: 0x0  nop
    ctx->pc = 0x1d49ecu;
    // NOP
    // 0x1d49f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d49f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d49f4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d49f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d49f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d49fc: 0x0  nop
    ctx->pc = 0x1d49fcu;
    // NOP
    // 0x1d4a00: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d4a00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4a04: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4a08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4a0c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d4a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4a10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4a14: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d4a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d4a18: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1d4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1d4a1c: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x1d4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x1d4a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4a24: 0x0  nop
    ctx->pc = 0x1d4a24u;
    // NOP
    // 0x1d4a28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4a2c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1d4a30: 0x3c024560  lui         $v0, 0x4560
    ctx->pc = 0x1d4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17760 << 16));
    // 0x1d4a34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4a38: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4a3c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1d4a3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d4a40: 0x0  nop
    ctx->pc = 0x1d4a40u;
    // NOP
    // 0x1d4a44: 0x0  nop
    ctx->pc = 0x1d4a44u;
    // NOP
    // 0x1d4a48: 0x0  nop
    ctx->pc = 0x1d4a48u;
    // NOP
    // 0x1d4a4c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1D4A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A54u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1D4A4Cu, 0x1D4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A54u;
label_1d4a54:
    // 0x1d4a54: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1d4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1d4a58: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1d4a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d4a5c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1d4a5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d4a60: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d4a60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4a64: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1D4A64u;
    SET_GPR_U32(ctx, 31, 0x1D4A6Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1D4A64u, 0x1D4A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A6Cu;
label_1d4a6c:
    // 0x1d4a6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4a6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4a70: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1D4A70u;
    SET_GPR_U32(ctx, 31, 0x1D4A78u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1D4A70u, 0x1D4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A78u;
label_1d4a78:
    // 0x1d4a78: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d4a7c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1d4a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4a80: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d4a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4a84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d4a88: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d4a8c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1d4a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4a90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4a98: 0x0  nop
    ctx->pc = 0x1d4a98u;
    // NOP
    // 0x1d4a9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4a9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4aa0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d4aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4aa8: 0x0  nop
    ctx->pc = 0x1d4aa8u;
    // NOP
    // 0x1d4aac: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d4aacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4ab0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4ab4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4ab8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4abc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4ac0: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d4ac4: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1d4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d4ac8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4acc: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1d4ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4ad4: 0x0  nop
    ctx->pc = 0x1d4ad4u;
    // NOP
    // 0x1d4ad8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4adc: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1d4ae0: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x1d4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x1d4ae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4ae8: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4aec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d4aecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d4af0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1d4af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1d4af4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1d4af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4af8: 0x3c153f00  lui         $s5, 0x3F00
    ctx->pc = 0x1d4af8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4afc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1d4afcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b00: 0x0  nop
    ctx->pc = 0x1d4b00u;
    // NOP
    // 0x1d4b04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4b04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4b08: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d4b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b10: 0x0  nop
    ctx->pc = 0x1d4b10u;
    // NOP
    // 0x1d4b14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d4b14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4b18: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4b1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4b1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4b20: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1d4b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4b24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4b28: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1d4b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1d4b2c: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1d4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d4b30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d4b34: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x1d4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x1d4b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b3c: 0x0  nop
    ctx->pc = 0x1d4b3cu;
    // NOP
    // 0x1d4b40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4b44: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1d4b48: 0x3c024560  lui         $v0, 0x4560
    ctx->pc = 0x1d4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17760 << 16));
    // 0x1d4b4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4b50: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1d4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4b54: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1d4b54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d4b58: 0x0  nop
    ctx->pc = 0x1d4b58u;
    // NOP
    // 0x1d4b5c: 0x0  nop
    ctx->pc = 0x1d4b5cu;
    // NOP
    // 0x1d4b60: 0x0  nop
    ctx->pc = 0x1d4b60u;
    // NOP
    // 0x1d4b64: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1D4B64u;
    SET_GPR_U32(ctx, 31, 0x1D4B6Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1D4B64u, 0x1D4B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B6Cu;
label_1d4b6c:
    // 0x1d4b6c: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1d4b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1d4b70: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d4b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d4b74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d4b74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4b78: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1D4B78u;
    SET_GPR_U32(ctx, 31, 0x1D4B80u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1D4B78u, 0x1D4B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B80u;
label_1d4b80:
    // 0x1d4b80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4b80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4b84: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1D4B84u;
    SET_GPR_U32(ctx, 31, 0x1D4B8Cu);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1D4B84u, 0x1D4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B8Cu;
label_1d4b8c:
    // 0x1d4b8c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d4b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d4b90: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d4b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4b94: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d4b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4b98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d4b9c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d4b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d4ba0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d4ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4ba4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4bac: 0x0  nop
    ctx->pc = 0x1d4bacu;
    // NOP
    // 0x1d4bb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4bb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4bb4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d4bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4bbc: 0x0  nop
    ctx->pc = 0x1d4bbcu;
    // NOP
    // 0x1d4bc0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d4bc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4bc4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4bc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4bcc: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1d4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4bd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4bd4: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d4bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d4bd8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d4bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4bdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d4bdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4be0: 0x0  nop
    ctx->pc = 0x1d4be0u;
    // NOP
    // 0x1d4be4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1d4be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1d4be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4bec: 0x0  nop
    ctx->pc = 0x1d4becu;
    // NOP
    // 0x1d4bf0: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1d4bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1d4bf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4bfc: 0x0  nop
    ctx->pc = 0x1d4bfcu;
    // NOP
    // 0x1d4c00: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1d4c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1d4c04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4c08: 0x0  nop
    ctx->pc = 0x1d4c08u;
    // NOP
    // 0x1d4c0c: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x1d4c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1d4c10:
    // 0x1d4c10: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x1d4c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d4c14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4c18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4c1c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1d4c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4c20: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d4c20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4c24: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1d4c24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1d4c28: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d4c2c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d4c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d4c30: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x1d4c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d4c34: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1d4c34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d4c38: 0x14a0ff26  bnez        $a1, . + 4 + (-0xDA << 2)
    ctx->pc = 0x1D4C38u;
    {
        const bool branch_taken_0x1d4c38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c38) {
            ctx->pc = 0x1D48D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d48d4;
        }
    }
    ctx->pc = 0x1D4C40u;
    // 0x1d4c40: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1d4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d4c44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4c44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4c48: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d4c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4c4c: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1d4c4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d4c50: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4C50u;
    SET_GPR_U32(ctx, 31, 0x1D4C58u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4C50u, 0x1D4C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C58u;
label_1d4c58:
    // 0x1d4c58: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1d4c58u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4c5c: 0x17b980  sll         $s7, $s7, 6
    ctx->pc = 0x1d4c5cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1d4c60: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d4c64: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d4c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4c68: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1d4c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4c6c: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C74u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4C6Cu, 0x1D4C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C74u;
label_1d4c74:
    // 0x1d4c74: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1d4c74u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4c78: 0x17b980  sll         $s7, $s7, 6
    ctx->pc = 0x1d4c78u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1d4c7c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d4c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d4c80: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1d4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d4c84: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d4c84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4c88: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1d4c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4c8c:
    // 0x1d4c8c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d4c90: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1d4c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4c94: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d4c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d4c98: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d4c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4c9c: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D4CA4u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4C9Cu, 0x1D4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CA4u;
label_1d4ca4:
    // 0x1d4ca4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1d4ca4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4ca8: 0x17b980  sll         $s7, $s7, 6
    ctx->pc = 0x1d4ca8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1d4cac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4cb0: 0x122842  srl         $a1, $s2, 1
    ctx->pc = 0x1d4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4cb4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1d4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d4cb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4cbc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4cc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4cc4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4cc8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1d4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d4ccc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1d4cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1d4cd0: 0x1713bc  dsll32      $v0, $s7, 14
    ctx->pc = 0x1d4cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 14));
    // 0x1d4cd4: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x1d4cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
    // 0x1d4cd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4CD8u;
    {
        const bool branch_taken_0x1d4cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4cd8) {
            ctx->pc = 0x1D4D08u;
            goto label_1d4d08;
        }
    }
    ctx->pc = 0x1D4CE0u;
    // 0x1d4ce0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d4ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d4ce4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4ce8: 0x122842  srl         $a1, $s2, 1
    ctx->pc = 0x1d4ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4cec: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1d4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d4cf0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4cf4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4cf8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4cfc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4d00: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1d4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d4d04: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1d4d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1d4d08:
    // 0x1d4d08: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d4d0c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1d4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4d10: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1d4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d4d14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4d14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4d18: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d4d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4d1c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1d4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d4d20: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1d4d20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4d24: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4D24u;
    SET_GPR_U32(ctx, 31, 0x1D4D2Cu);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4D24u, 0x1D4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D2Cu;
label_1d4d2c:
    // 0x1d4d2c: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1d4d2cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4d30: 0x17b980  sll         $s7, $s7, 6
    ctx->pc = 0x1d4d30u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1d4d34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4d38: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d4d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4d3c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1d4d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4d40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d4d44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4d48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4d4c: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x1d4d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1d4d50: 0x24a30050  addiu       $v1, $a1, 0x50
    ctx->pc = 0x1d4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x1d4d54: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d4d58: 0x171bbc  dsll32      $v1, $s7, 14
    ctx->pc = 0x1d4d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 14));
    // 0x1d4d5c: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x1d4d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
    // 0x1d4d60: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4D60u;
    {
        const bool branch_taken_0x1d4d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d60) {
            ctx->pc = 0x1D4D90u;
            goto label_1d4d90;
        }
    }
    ctx->pc = 0x1D4D68u;
    // 0x1d4d68: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1d4d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d4d6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4d70: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d4d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4d74: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1d4d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4d78: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d4d7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4d80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4d84: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x1d4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1d4d88: 0x24a30050  addiu       $v1, $a1, 0x50
    ctx->pc = 0x1d4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x1d4d8c: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1d4d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_1d4d90:
    // 0x1d4d90: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d4d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d4d94: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1d4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d4d98: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1d4d98u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d4d9c: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1D4D9Cu;
    {
        const bool branch_taken_0x1d4d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d9c) {
            ctx->pc = 0x1D4C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4c8c;
        }
    }
    ctx->pc = 0x1D4DA4u;
    // 0x1d4da4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d4da4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d4da8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d4da8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d4dac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d4dacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4db0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d4db0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4db4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d4db4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4db8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d4db8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4dbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4dc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4dc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4dcc: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x1d4dccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d4dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4DD8u;
}
