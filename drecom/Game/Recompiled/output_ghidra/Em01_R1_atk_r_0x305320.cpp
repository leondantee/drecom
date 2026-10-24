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

// Function: Em01_R1_atk_r
// Address: 0x305320 - 0x305598
void Em01_R1_atk_r_0x305320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_atk_r_0x305320");
#endif

    switch (ctx->pc) {
        case 0x30537cu: goto label_30537c;
        case 0x3053fcu: goto label_3053fc;
        case 0x305464u: goto label_305464;
        case 0x305484u: goto label_305484;
        case 0x305500u: goto label_305500;
        case 0x305518u: goto label_305518;
        case 0x305524u: goto label_305524;
        case 0x305534u: goto label_305534;
        case 0x305540u: goto label_305540;
        default: break;
    }

    ctx->pc = 0x305320u;

    // 0x305320: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x305320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x305324: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x305324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x305328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x305328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30532c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x305330: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x305330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x305334: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305338: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x305338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30533c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30533cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x305340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305344: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x305344u;
    {
        const bool branch_taken_0x305344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x305344) {
            ctx->pc = 0x30539Cu;
            goto label_30539c;
        }
    }
    ctx->pc = 0x30534Cu;
    // 0x30534c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30534Cu;
    {
        const bool branch_taken_0x30534c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30534c) {
            ctx->pc = 0x30535Cu;
            goto label_30535c;
        }
    }
    ctx->pc = 0x305354u;
    // 0x305354: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x305354u;
    {
        const bool branch_taken_0x305354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305354) {
            ctx->pc = 0x305580u;
            goto label_305580;
        }
    }
    ctx->pc = 0x30535Cu;
label_30535c:
    // 0x30535c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305360: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305364: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x305364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x305368: 0x24062812  addiu       $a2, $zero, 0x2812
    ctx->pc = 0x305368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10258));
    // 0x30536c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30536cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305370: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x305370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305374: 0xc0965d0  jal         func_259740
    ctx->pc = 0x305374u;
    SET_GPR_U32(ctx, 31, 0x30537Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x305374u, 0x30537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30537Cu;
label_30537c:
    // 0x30537c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305380: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x305380u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x305384: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305388: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305388u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30538c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305390: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x305390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x305394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305398: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x305398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30539c:
    // 0x30539c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3053a0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3053a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3053a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3053a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3053a8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3053a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3053ac: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3053ACu;
    {
        const bool branch_taken_0x3053ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3053ac) {
            ctx->pc = 0x305484u;
            goto label_305484;
        }
    }
    ctx->pc = 0x3053B4u;
    // 0x3053b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3053b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3053b8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3053b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x3053bc: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3053BCu;
    {
        const bool branch_taken_0x3053bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3053bc) {
            ctx->pc = 0x305484u;
            goto label_305484;
        }
    }
    ctx->pc = 0x3053C4u;
    // 0x3053c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3053c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3053c8: 0x244295f0  addiu       $v0, $v0, -0x6A10
    ctx->pc = 0x3053c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940144));
    // 0x3053cc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3053ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3053d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3053d0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995F0u));
    // 0x3053d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3053d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3053d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3053d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3053dc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3053dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3053e0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x3053e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3053e4: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x3053e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x3053e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3053e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3053ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3053ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3053f0: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x3053f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x3053f4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x3053F4u;
    SET_GPR_U32(ctx, 31, 0x3053FCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3053F4u, 0x3053FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053FCu;
label_3053fc:
    // 0x3053fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3053fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305400: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x305400u;
    {
        const bool branch_taken_0x305400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305400) {
            ctx->pc = 0x305484u;
            goto label_305484;
        }
    }
    ctx->pc = 0x305408u;
    // 0x305408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30540c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305410: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x305410u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x305414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305418: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30541c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30541cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x305420: 0x24020509  addiu       $v0, $zero, 0x509
    ctx->pc = 0x305420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x305424: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x305424u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x305428: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30542c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305430: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x305430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x305434: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x305434u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305438: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x305438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30543c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30543cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x305440: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x305440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x305444: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x305444u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x305448: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x305448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x30544c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30544cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305450: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x305450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305454: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305458: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x305458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30545c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x30545Cu;
    SET_GPR_U32(ctx, 31, 0x305464u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x305464u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x305464u) { return; }
    ctx->pc = 0x305464u;
label_305464:
    // 0x305464: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x305464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x305468: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x305468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30546c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30546cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305470: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x305470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x305474: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305478: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x305478u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30547c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x30547Cu;
    SET_GPR_U32(ctx, 31, 0x305484u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x30547Cu, 0x305484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305484u;
label_305484:
    // 0x305484: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305488: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x305488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30548c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x30548Cu;
    {
        const bool branch_taken_0x30548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30548c) {
            ctx->pc = 0x305508u;
            goto label_305508;
        }
    }
    ctx->pc = 0x305494u;
    // 0x305494: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305498: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x305498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x30549c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x30549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3054a0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3054a0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399600u));
    // 0x3054a4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3054a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3054a8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3054a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3054ac: 0x24429610  addiu       $v0, $v0, -0x69F0
    ctx->pc = 0x3054acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940176));
    // 0x3054b0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3054b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3054b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3054b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399610u));
    // 0x3054b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3054b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3054bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3054bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3054c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3054c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3054c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3054c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3054c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3054c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3054cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3054ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3054d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3054d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3054d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3054d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3054d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3054d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3054dc: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x3054dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x3054e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3054e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3054e4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3054e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3054e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3054e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3054ec: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3054ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3054f0: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x3054f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x3054f4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3054f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3054f8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3054F8u;
    SET_GPR_U32(ctx, 31, 0x305500u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3054F8u, 0x305500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305500u;
label_305500:
    // 0x305500: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305504: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305504u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_305508:
    // 0x305508: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30550c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30550cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305510: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305510u;
    SET_GPR_U32(ctx, 31, 0x305518u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305510u, 0x305518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305518u;
label_305518:
    // 0x305518: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30551c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30551Cu;
    SET_GPR_U32(ctx, 31, 0x305524u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30551Cu, 0x305524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305524u;
label_305524:
    // 0x305524: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305528: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305528u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30552c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30552Cu;
    SET_GPR_U32(ctx, 31, 0x305534u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30552Cu, 0x305534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305534u;
label_305534:
    // 0x305534: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305538: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305538u;
    SET_GPR_U32(ctx, 31, 0x305540u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305538u, 0x305540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305540u;
label_305540:
    // 0x305540: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305544: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305548: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305548u;
    {
        const bool branch_taken_0x305548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305548) {
            ctx->pc = 0x305580u;
            goto label_305580;
        }
    }
    ctx->pc = 0x305550u;
    // 0x305550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305554: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305558: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x305558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30555c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30555cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305560: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305564: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x305564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x305568: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30556c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30556cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x305570: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305574: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x305574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x305578: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30557c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30557cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_305580:
    // 0x305580: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x305580u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30558c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x30558cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x305590: 0x3e00008  jr          $ra
    ctx->pc = 0x305590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305598u;
}
