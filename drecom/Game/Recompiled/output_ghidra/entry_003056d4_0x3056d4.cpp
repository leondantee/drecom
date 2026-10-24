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

// Function: entry_003056d4
// Address: 0x3056d4 - 0x3057bc
void entry_003056d4_0x3056d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003056d4_0x3056d4");
#endif

    switch (ctx->pc) {
        case 0x305734u: goto label_305734;
        case 0x30579cu: goto label_30579c;
        default: break;
    }

    ctx->pc = 0x3056d4u;

    // 0x3056d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3056d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3056d8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3056d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3056dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3056dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3056e0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3056e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3056e4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3056E4u;
    {
        const bool branch_taken_0x3056e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3056e4) {
            ctx->pc = 0x3057BCu;
            return;
        }
    }
    ctx->pc = 0x3056ECu;
    // 0x3056ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3056ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3056f0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3056f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x3056f4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3056F4u;
    {
        const bool branch_taken_0x3056f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3056f4) {
            ctx->pc = 0x3057BCu;
            return;
        }
    }
    ctx->pc = 0x3056FCu;
    // 0x3056fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3056fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305700: 0x24429620  addiu       $v0, $v0, -0x69E0
    ctx->pc = 0x305700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940192));
    // 0x305704: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x305704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305708: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305708u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399620u));
    // 0x30570c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30570cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305710: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305714: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305718: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30571c: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x30571cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305720: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x305720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305724: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x305724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x305728: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x305728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x30572c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30572Cu;
    SET_GPR_U32(ctx, 31, 0x305734u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30572Cu, 0x305734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305734u;
label_305734:
    // 0x305734: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x305734u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305738: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x305738u;
    {
        const bool branch_taken_0x305738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305738) {
            ctx->pc = 0x3057BCu;
            return;
        }
    }
    ctx->pc = 0x305740u;
    // 0x305740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305744: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305748: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x305748u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30574c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30574cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305750: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305754: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x305754u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x305758: 0x24020509  addiu       $v0, $zero, 0x509
    ctx->pc = 0x305758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x30575c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x30575cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x305760: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305764: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305768: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x305768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x30576c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30576cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305770: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x305770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305774: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x305774u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x305778: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x305778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x30577c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30577cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305780: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x305780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x305784: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x305784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x305788: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x305788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30578c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x30578cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305790: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x305790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x305794: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x305794u;
    SET_GPR_U32(ctx, 31, 0x30579Cu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x30579Cu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30579Cu) { return; }
    ctx->pc = 0x30579Cu;
label_30579c:
    // 0x30579c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x30579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x3057a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3057a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3057a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3057a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3057a8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3057a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3057ac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3057acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3057b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3057b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3057b4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x3057B4u;
    SET_GPR_U32(ctx, 31, 0x3057BCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x3057B4u, 0x3057BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057BCu;
}
