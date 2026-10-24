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

// Function: entry_0030510c
// Address: 0x30510c - 0x3051f4
void entry_0030510c_0x30510c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030510c_0x30510c");
#endif

    switch (ctx->pc) {
        case 0x30516cu: goto label_30516c;
        case 0x3051d4u: goto label_3051d4;
        default: break;
    }

    ctx->pc = 0x30510cu;

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
            return;
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
            return;
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
            return;
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
}
