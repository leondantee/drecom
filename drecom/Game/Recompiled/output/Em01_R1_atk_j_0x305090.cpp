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

// Function: Em01_R1_atk_j
// Address: 0x305090 - 0x305308
void Em01_R1_atk_j_0x305090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_atk_j_0x305090");
#endif

    switch (ctx->pc) {
        case 0x3050ecu: goto label_3050ec;
        case 0x30516cu: goto label_30516c;
        case 0x3051d4u: goto label_3051d4;
        case 0x3051f4u: goto label_3051f4;
        case 0x305270u: goto label_305270;
        case 0x305288u: goto label_305288;
        case 0x305294u: goto label_305294;
        case 0x3052a4u: goto label_3052a4;
        case 0x3052b0u: goto label_3052b0;
        default: break;
    }

    ctx->pc = 0x305090u;

    // 0x305090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x305090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x305094: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x305094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x305098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x305098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30509c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3050a0: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x3050a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x3050a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3050a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3050a8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3050a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3050ac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3050acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3050b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3050b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3050b4: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3050B4u;
    {
        const bool branch_taken_0x3050b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3050b4) {
            ctx->pc = 0x30510Cu;
            goto label_30510c;
        }
    }
    ctx->pc = 0x3050BCu;
    // 0x3050bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3050BCu;
    {
        const bool branch_taken_0x3050bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3050bc) {
            ctx->pc = 0x3050CCu;
            goto label_3050cc;
        }
    }
    ctx->pc = 0x3050C4u;
    // 0x3050c4: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x3050C4u;
    {
        const bool branch_taken_0x3050c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3050c4) {
            ctx->pc = 0x3052F0u;
            goto label_3052f0;
        }
    }
    ctx->pc = 0x3050CCu;
label_3050cc:
    // 0x3050cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3050ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3050d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x3050d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3050d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3050d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3050d8: 0x24062811  addiu       $a2, $zero, 0x2811
    ctx->pc = 0x3050d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10257));
    // 0x3050dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3050dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3050e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3050e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3050e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3050E4u;
    SET_GPR_U32(ctx, 31, 0x3050ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3050E4u, 0x3050ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3050ECu;
label_3050ec:
    // 0x3050ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3050ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3050f0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3050f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3050f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3050f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3050f8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x3050f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x3050fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3050fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305100: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x305100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x305104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305108: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x305108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30510c:
    // 0x30510c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305110: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x305110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x305114: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x305114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x305118: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x305118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30511c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x30511Cu;
    {
        const bool branch_taken_0x30511c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30511c) {
            ctx->pc = 0x3051F4u;
            goto label_3051f4;
        }
    }
    ctx->pc = 0x305124u;
    // 0x305124: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305128: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x305128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30512c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x30512Cu;
    {
        const bool branch_taken_0x30512c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30512c) {
            ctx->pc = 0x3051F4u;
            goto label_3051f4;
        }
    }
    ctx->pc = 0x305134u;
    // 0x305134: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305138: 0x244295c0  addiu       $v0, $v0, -0x6A40
    ctx->pc = 0x305138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940096));
    // 0x30513c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x30513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305140: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305140u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995C0u));
    // 0x305144: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305144u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305148: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30514c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305150: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305154: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x305154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305158: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x305158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30515c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30515cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x305160: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x305160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x305164: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x305164u;
    SET_GPR_U32(ctx, 31, 0x30516Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x305164u, 0x30516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30516Cu;
label_30516c:
    // 0x30516c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30516cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305170: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x305170u;
    {
        const bool branch_taken_0x305170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305170) {
            ctx->pc = 0x3051F4u;
            goto label_3051f4;
        }
    }
    ctx->pc = 0x305178u;
    // 0x305178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30517c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305180: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x305180u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x305184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305188: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30518c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30518cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x305190: 0x24020509  addiu       $v0, $zero, 0x509
    ctx->pc = 0x305190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x305194: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x305194u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x305198: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30519c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3051a0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3051a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3051a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3051a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3051a8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3051a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3051ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3051acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3051b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3051b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3051b4: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x3051b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x3051b8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x3051b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x3051bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3051bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3051c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3051c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3051c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3051c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3051c8: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x3051c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3051cc: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x3051CCu;
    SET_GPR_U32(ctx, 31, 0x3051D4u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x3051D4u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3051D4u) { return; }
    ctx->pc = 0x3051D4u;
label_3051d4:
    // 0x3051d4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x3051d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x3051d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3051d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3051dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3051dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3051e0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3051e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3051e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3051e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3051e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3051e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3051ec: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x3051ECu;
    SET_GPR_U32(ctx, 31, 0x3051F4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x3051ECu, 0x3051F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051F4u;
label_3051f4:
    // 0x3051f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3051f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3051f8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x3051f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x3051fc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3051FCu;
    {
        const bool branch_taken_0x3051fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3051fc) {
            ctx->pc = 0x305278u;
            goto label_305278;
        }
    }
    ctx->pc = 0x305204u;
    // 0x305204: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305208: 0x244295d0  addiu       $v0, $v0, -0x6A30
    ctx->pc = 0x305208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940112));
    // 0x30520c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x30520cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305210: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305210u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995D0u));
    // 0x305214: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305214u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305218: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30521c: 0x244295e0  addiu       $v0, $v0, -0x6A20
    ctx->pc = 0x30521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940128));
    // 0x305220: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x305220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305224: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305224u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995E0u));
    // 0x305228: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305228u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30522c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305230: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x305230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305234: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x305234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x305238: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x305238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30523c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x305240: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x305244: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x305244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x305248: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x305248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30524c: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x30524cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x305250: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305254: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305258: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x305258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30525c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x30525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305260: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x305260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305264: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x305264u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305268: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x305268u;
    SET_GPR_U32(ctx, 31, 0x305270u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x305268u, 0x305270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305270u;
label_305270:
    // 0x305270: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305274: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305274u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_305278:
    // 0x305278: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30527c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30527cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305280: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305280u;
    SET_GPR_U32(ctx, 31, 0x305288u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305280u, 0x305288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305288u;
label_305288:
    // 0x305288: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30528c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30528Cu;
    SET_GPR_U32(ctx, 31, 0x305294u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30528Cu, 0x305294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305294u;
label_305294:
    // 0x305294: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305298: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305298u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30529c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30529Cu;
    SET_GPR_U32(ctx, 31, 0x3052A4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30529Cu, 0x3052A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052A4u;
label_3052a4:
    // 0x3052a4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x3052a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052a8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3052A8u;
    SET_GPR_U32(ctx, 31, 0x3052B0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3052A8u, 0x3052B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052B0u;
label_3052b0:
    // 0x3052b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052b4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3052b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3052b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3052B8u;
    {
        const bool branch_taken_0x3052b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3052b8) {
            ctx->pc = 0x3052F0u;
            goto label_3052f0;
        }
    }
    ctx->pc = 0x3052C0u;
    // 0x3052c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3052c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3052c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3052c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3052cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3052ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3052d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3052d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3052d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3052dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3052e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3052e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3052e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3052ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3052f0:
    // 0x3052f0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3052f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3052f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3052f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3052f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3052f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3052fc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3052fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x305300: 0x3e00008  jr          $ra
    ctx->pc = 0x305300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305308u;
}
