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

// Function: Fire_se_check
// Address: 0x27d4b0 - 0x27d6c8
void Fire_se_check_0x27d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Fire_se_check_0x27d4b0");
#endif

    switch (ctx->pc) {
        case 0x27d4fcu: goto label_27d4fc;
        case 0x27d518u: goto label_27d518;
        case 0x27d54cu: goto label_27d54c;
        case 0x27d650u: goto label_27d650;
        case 0x27d680u: goto label_27d680;
        default: break;
    }

    ctx->pc = 0x27d4b0u;

    // 0x27d4b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27d4b4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x27d4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x27d4b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27d4bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27d4c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d4c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27d4c8: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x27d4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x27d4cc: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x27d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x27d4d0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x27d4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x27d4d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27d4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d4d8: 0x0  nop
    ctx->pc = 0x27d4d8u;
    // NOP
    // 0x27d4dc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x27d4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27d4e0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x27d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x27d4e4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x27d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x27d4e8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x27d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x27d4ec: 0x24710dd0  addiu       $s1, $v1, 0xDD0
    ctx->pc = 0x27d4ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3536));
    // 0x27d4f0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d4f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d4f4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27D4F4u;
    {
        const bool branch_taken_0x27d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d4f4) {
            ctx->pc = 0x27D588u;
            goto label_27d588;
        }
    }
    ctx->pc = 0x27D4FCu;
label_27d4fc:
    // 0x27d4fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27d4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27d500: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x27d500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x27d504: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d508: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x27d508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x27d50c: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x27d50cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27d510: 0xc040c80  jal         func_103200
    ctx->pc = 0x27D510u;
    SET_GPR_U32(ctx, 31, 0x27D518u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x27D518u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D518u) { return; }
    ctx->pc = 0x27D518u;
label_27d518:
    // 0x27d518: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x27d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d51c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x27d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d520: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x27d520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d524: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x27d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d528: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x27d528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d52c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27d52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d530: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27d530u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27d534: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x27d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d538: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x27d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d53c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27d53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d540: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x27d540u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27d544: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x27D544u;
    SET_GPR_U32(ctx, 31, 0x27D54Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x27D544u, 0x27D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D54Cu;
label_27d54c:
    // 0x27d54c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27d54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x27d550: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x27d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d554: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x27d554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27d558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d55c: 0x0  nop
    ctx->pc = 0x27d55cu;
    // NOP
    // 0x27d560: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x27D560u;
    {
        const bool branch_taken_0x27d560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d560) {
            ctx->pc = 0x27D580u;
            goto label_27d580;
        }
    }
    ctx->pc = 0x27D568u;
    // 0x27d568: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x27d568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27d56c: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x27d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x27d570: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x27d570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
    // 0x27d574: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x27d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d578: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x27d578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27d57c: 0x0  nop
    ctx->pc = 0x27d57cu;
    // NOP
label_27d580:
    // 0x27d580: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x27d580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x27d584: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27d584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27d588:
    // 0x27d588: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x27d588u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x27d58c: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x27D58Cu;
    {
        const bool branch_taken_0x27d58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d58c) {
            ctx->pc = 0x27D4FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d4fc;
        }
    }
    ctx->pc = 0x27D594u;
    // 0x27d594: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27d594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27d598: 0x8c231b38  lw          $v1, 0x1B38($at)
    ctx->pc = 0x27d598u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B38u));
    // 0x27d59c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D59Cu;
    {
        const bool branch_taken_0x27d59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d59c) {
            ctx->pc = 0x27D5BCu;
            goto label_27d5bc;
        }
    }
    ctx->pc = 0x27D5A4u;
    // 0x27d5a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27d5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27d5a8: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x27d5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x27d5ac: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x27d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x27d5b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27d5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27d5b4: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x27D5B4u;
    {
        const bool branch_taken_0x27d5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d5b4) {
            ctx->pc = 0x27D694u;
            goto label_27d694;
        }
    }
    ctx->pc = 0x27D5BCu;
label_27d5bc:
    // 0x27d5bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27d5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27d5c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27d5c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27d5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27d5c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27d5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d5d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27d5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27d5d4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27d5d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27d5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27d5dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27d5e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27d5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27d5e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27d5e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d5ec: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27d5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27d5f0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27d5f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27d5f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27d5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27d5fc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27d5fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27d600: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27d600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27d604: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27d604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27d608: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x27d608u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x27d60c: 0x0  nop
    ctx->pc = 0x27d60cu;
    // NOP
    // 0x27d610: 0x0  nop
    ctx->pc = 0x27d610u;
    // NOP
    // 0x27d614: 0x1010  mfhi        $v0
    ctx->pc = 0x27d614u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x27d618: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x27d618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x27d61c: 0x34530400  ori         $s3, $v0, 0x400
    ctx->pc = 0x27d61cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x27d620: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x27d620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x27d624: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x27d624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27d628: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27d628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27d62c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d630: 0x24420dd0  addiu       $v0, $v0, 0xDD0
    ctx->pc = 0x27d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3536));
    // 0x27d634: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x27d634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d638: 0x3c02456a  lui         $v0, 0x456A
    ctx->pc = 0x27d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17770 << 16));
    // 0x27d63c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x27d63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x27d640: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27d640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d644: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27d644u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d648: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x27D648u;
    SET_GPR_U32(ctx, 31, 0x27D650u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x27D648u, 0x27D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D650u;
label_27d650:
    // 0x27d650: 0x3c02456a  lui         $v0, 0x456A
    ctx->pc = 0x27d650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17770 << 16));
    // 0x27d654: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x27d654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x27d658: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27d658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d65c: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x27d65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x27d660: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x27d660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x27d664: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27d664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27d668: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d66c: 0x24420dd0  addiu       $v0, $v0, 0xDD0
    ctx->pc = 0x27d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3536));
    // 0x27d670: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x27d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d674: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27d674u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d678: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x27D678u;
    SET_GPR_U32(ctx, 31, 0x27D680u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x27D678u, 0x27D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D680u;
label_27d680:
    // 0x27d680: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x27d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27d684: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27d684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27d688: 0xac231b38  sw          $v1, 0x1B38($at)
    ctx->pc = 0x27d688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B38u, _value); } while (0);
    // 0x27d68c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D68Cu;
    {
        const bool branch_taken_0x27d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d68c) {
            ctx->pc = 0x27D6A8u;
            goto label_27d6a8;
        }
    }
    ctx->pc = 0x27D694u;
label_27d694:
    // 0x27d694: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27d694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27d698: 0x8c231b38  lw          $v1, 0x1B38($at)
    ctx->pc = 0x27d698u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B38u));
    // 0x27d69c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27d6a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27d6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27d6a4: 0xac231b38  sw          $v1, 0x1B38($at)
    ctx->pc = 0x27d6a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B38u, _value); } while (0);
label_27d6a8:
    // 0x27d6a8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x27d6a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d6ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d6acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d6b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d6b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d6b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d6bc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27d6bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27d6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D6C8u;
}
