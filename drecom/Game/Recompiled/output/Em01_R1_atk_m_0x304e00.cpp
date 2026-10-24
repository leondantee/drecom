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

// Function: Em01_R1_atk_m
// Address: 0x304e00 - 0x305078
void Em01_R1_atk_m_0x304e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_atk_m_0x304e00");
#endif

    switch (ctx->pc) {
        case 0x304e5cu: goto label_304e5c;
        case 0x304edcu: goto label_304edc;
        case 0x304f44u: goto label_304f44;
        case 0x304f64u: goto label_304f64;
        case 0x304fe0u: goto label_304fe0;
        case 0x304ff8u: goto label_304ff8;
        case 0x305004u: goto label_305004;
        case 0x305014u: goto label_305014;
        case 0x305020u: goto label_305020;
        default: break;
    }

    ctx->pc = 0x304e00u;

    // 0x304e00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x304e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x304e04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x304e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x304e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x304e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x304e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x304e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x304e10: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x304e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x304e14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e18: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x304e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304e1c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x304e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x304e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304e24: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x304E24u;
    {
        const bool branch_taken_0x304e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304e24) {
            ctx->pc = 0x304E7Cu;
            goto label_304e7c;
        }
    }
    ctx->pc = 0x304E2Cu;
    // 0x304e2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304E2Cu;
    {
        const bool branch_taken_0x304e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x304e2c) {
            ctx->pc = 0x304E3Cu;
            goto label_304e3c;
        }
    }
    ctx->pc = 0x304E34u;
    // 0x304e34: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x304E34u;
    {
        const bool branch_taken_0x304e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304e34) {
            ctx->pc = 0x305060u;
            goto label_305060;
        }
    }
    ctx->pc = 0x304E3Cu;
label_304e3c:
    // 0x304e3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e40: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e44: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x304e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304e48: 0x24063210  addiu       $a2, $zero, 0x3210
    ctx->pc = 0x304e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x304e4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304e50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x304e54: 0xc0965d0  jal         func_259740
    ctx->pc = 0x304E54u;
    SET_GPR_U32(ctx, 31, 0x304E5Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x304E54u, 0x304E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E5Cu;
label_304e5c:
    // 0x304e5c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e60: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x304e60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x304e64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e68: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304e68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x304e6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e70: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304e78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x304e78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_304e7c:
    // 0x304e7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e80: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x304e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x304e84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304e88: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x304e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x304e8c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x304E8Cu;
    {
        const bool branch_taken_0x304e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304e8c) {
            ctx->pc = 0x304F64u;
            goto label_304f64;
        }
    }
    ctx->pc = 0x304E94u;
    // 0x304e94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304e98: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x304e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x304e9c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x304E9Cu;
    {
        const bool branch_taken_0x304e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304e9c) {
            ctx->pc = 0x304F64u;
            goto label_304f64;
        }
    }
    ctx->pc = 0x304EA4u;
    // 0x304ea4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304ea8: 0x24429590  addiu       $v0, $v0, -0x6A70
    ctx->pc = 0x304ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940048));
    // 0x304eac: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x304eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304eb0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304eb0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399590u));
    // 0x304eb4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304eb8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ebc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304ec0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ec4: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x304ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304ec8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x304ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304ecc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x304eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x304ed0: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x304ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x304ed4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x304ED4u;
    SET_GPR_U32(ctx, 31, 0x304EDCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x304ED4u, 0x304EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304EDCu;
label_304edc:
    // 0x304edc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x304edcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x304ee0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x304EE0u;
    {
        const bool branch_taken_0x304ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ee0) {
            ctx->pc = 0x304F64u;
            goto label_304f64;
        }
    }
    ctx->pc = 0x304EE8u;
    // 0x304ee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304eec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ef0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x304ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x304ef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304ef8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304efc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x304efcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x304f00: 0x24020509  addiu       $v0, $zero, 0x509
    ctx->pc = 0x304f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x304f04: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x304f04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x304f08: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304f0c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304f10: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x304f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x304f14: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x304f14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304f18: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x304f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304f1c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x304f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x304f20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x304f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x304f24: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x304f24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x304f28: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x304f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x304f2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304f30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x304f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304f34: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304f38: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x304f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x304f3c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x304F3Cu;
    SET_GPR_U32(ctx, 31, 0x304F44u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x304F44u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x304F44u) { return; }
    ctx->pc = 0x304F44u;
label_304f44:
    // 0x304f44: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x304f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x304f48: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x304f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x304f4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304f50: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x304f50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x304f54: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304f58: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x304f58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304f5c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x304F5Cu;
    SET_GPR_U32(ctx, 31, 0x304F64u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x304F5Cu, 0x304F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F64u;
label_304f64:
    // 0x304f64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304f68: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x304f68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x304f6c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x304F6Cu;
    {
        const bool branch_taken_0x304f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304f6c) {
            ctx->pc = 0x304FE8u;
            goto label_304fe8;
        }
    }
    ctx->pc = 0x304F74u;
    // 0x304f74: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304f78: 0x244295a0  addiu       $v0, $v0, -0x6A60
    ctx->pc = 0x304f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x304f7c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x304f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304f80: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304f80u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995A0u));
    // 0x304f84: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304f84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304f88: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304f8c: 0x244295b0  addiu       $v0, $v0, -0x6A50
    ctx->pc = 0x304f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940080));
    // 0x304f90: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x304f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304f94: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304f94u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995B0u));
    // 0x304f98: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304f98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304f9c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304fa0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x304fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304fa4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x304fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x304fa8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x304fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x304fac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x304facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x304fb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304fb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x304fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x304fb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x304fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304fbc: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x304fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x304fc0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304fc4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x304fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304fc8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x304fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304fcc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x304fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304fd0: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x304fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304fd4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x304fd4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304fd8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x304FD8u;
    SET_GPR_U32(ctx, 31, 0x304FE0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x304FD8u, 0x304FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FE0u;
label_304fe0:
    // 0x304fe0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304fe4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x304fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_304fe8:
    // 0x304fe8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304fec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304fecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304ff0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x304FF0u;
    SET_GPR_U32(ctx, 31, 0x304FF8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x304FF0u, 0x304FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FF8u;
label_304ff8:
    // 0x304ff8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ffc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x304FFCu;
    SET_GPR_U32(ctx, 31, 0x305004u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x304FFCu, 0x305004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305004u;
label_305004:
    // 0x305004: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305008: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305008u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30500c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30500Cu;
    SET_GPR_U32(ctx, 31, 0x305014u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30500Cu, 0x305014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305014u;
label_305014:
    // 0x305014: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305018: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305018u;
    SET_GPR_U32(ctx, 31, 0x305020u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305018u, 0x305020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305020u;
label_305020:
    // 0x305020: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305024: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305028: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305028u;
    {
        const bool branch_taken_0x305028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305028) {
            ctx->pc = 0x305060u;
            goto label_305060;
        }
    }
    ctx->pc = 0x305030u;
    // 0x305030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305034: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305038: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x305038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30503c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305040: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305044: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x305044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x305048: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30504c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30504cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x305050: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305054: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x305054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x305058: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30505c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30505cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_305060:
    // 0x305060: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x305060u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30506c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x30506cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x305070: 0x3e00008  jr          $ra
    ctx->pc = 0x305070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305078u;
}
