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

// Function: Em18_dm_effect
// Address: 0x2d8fa0 - 0x2d94d0
void Em18_dm_effect_0x2d8fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_dm_effect_0x2d8fa0");
#endif

    switch (ctx->pc) {
        case 0x2d8fc4u: goto label_2d8fc4;
        case 0x2d8fdcu: goto label_2d8fdc;
        case 0x2d8fe8u: goto label_2d8fe8;
        case 0x2d9024u: goto label_2d9024;
        case 0x2d9040u: goto label_2d9040;
        case 0x2d905cu: goto label_2d905c;
        case 0x2d909cu: goto label_2d909c;
        case 0x2d90b4u: goto label_2d90b4;
        case 0x2d90f0u: goto label_2d90f0;
        case 0x2d9120u: goto label_2d9120;
        case 0x2d912cu: goto label_2d912c;
        case 0x2d9140u: goto label_2d9140;
        case 0x2d9148u: goto label_2d9148;
        case 0x2d916cu: goto label_2d916c;
        case 0x2d9190u: goto label_2d9190;
        case 0x2d91c4u: goto label_2d91c4;
        case 0x2d91d0u: goto label_2d91d0;
        case 0x2d91e4u: goto label_2d91e4;
        case 0x2d92b0u: goto label_2d92b0;
        case 0x2d9350u: goto label_2d9350;
        case 0x2d9358u: goto label_2d9358;
        case 0x2d93f4u: goto label_2d93f4;
        case 0x2d94bcu: goto label_2d94bc;
        default: break;
    }

    ctx->pc = 0x2d8fa0u;

    // 0x2d8fa0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2d8fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d8fa4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d8fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2d8fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8fac: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2d8facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x2d8fb0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d8fb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d8fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d8fb8: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2d8fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d8fbc: 0xc040c44  jal         func_103110
    ctx->pc = 0x2D8FBCu;
    SET_GPR_U32(ctx, 31, 0x2D8FC4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x2D8FC4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D8FC4u) { return; }
    ctx->pc = 0x2D8FC4u;
label_2d8fc4:
    // 0x2d8fc4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d8fc8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d8fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d8fcc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2d8fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d8fd0: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2d8fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2d8fd4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2D8FD4u;
    SET_GPR_U32(ctx, 31, 0x2D8FDCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2D8FDCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D8FDCu) { return; }
    ctx->pc = 0x2D8FDCu;
label_2d8fdc:
    // 0x2d8fdc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d8fdcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d8fe0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2D8FE0u;
    {
        const bool branch_taken_0x2d8fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8fe0) {
            ctx->pc = 0x2D90F8u;
            goto label_2d90f8;
        }
    }
    ctx->pc = 0x2D8FE8u;
label_2d8fe8:
    // 0x2d8fe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d8fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8fec: 0x0  nop
    ctx->pc = 0x2d8fecu;
    // NOP
    // 0x2d8ff0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d8ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d8ff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d8ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8ff8: 0x0  nop
    ctx->pc = 0x2d8ff8u;
    // NOP
    // 0x2d8ffc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2d8ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d9000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9004: 0x0  nop
    ctx->pc = 0x2d9004u;
    // NOP
    // 0x2d9008: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d9008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d900c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9014: 0x0  nop
    ctx->pc = 0x2d9014u;
    // NOP
    // 0x2d9018: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2d9018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2d901c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D901Cu;
    SET_GPR_U32(ctx, 31, 0x2D9024u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D901Cu, 0x2D9024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9024u;
label_2d9024:
    // 0x2d9024: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2d9024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2d9028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d9028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d902c: 0x0  nop
    ctx->pc = 0x2d902cu;
    // NOP
    // 0x2d9030: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d9030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d9034: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d9034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d9038: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D9038u;
    SET_GPR_U32(ctx, 31, 0x2D9040u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D9038u, 0x2D9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9040u;
label_2d9040:
    // 0x2d9040: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2d9040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2d9044: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d9044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9048: 0x0  nop
    ctx->pc = 0x2d9048u;
    // NOP
    // 0x2d904c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d904cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d9050: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2d9050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d9054: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D9054u;
    SET_GPR_U32(ctx, 31, 0x2D905Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D9054u, 0x2D905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D905Cu;
label_2d905c:
    // 0x2d905c: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2d905cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2d9060: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d9060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9064: 0x0  nop
    ctx->pc = 0x2d9064u;
    // NOP
    // 0x2d9068: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d9068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d906c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2d906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d9070: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2d9070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x2d9074: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2d9074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2d9078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d907c: 0x0  nop
    ctx->pc = 0x2d907cu;
    // NOP
    // 0x2d9080: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d9080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d9084: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d9084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9088: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d9088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d908c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2d908cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d9090: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2d9090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2d9094: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2D9094u;
    SET_GPR_U32(ctx, 31, 0x2D909Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2D9094u, 0x2D909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D909Cu;
label_2d909c:
    // 0x2d909c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d90a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d90a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d90a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2d90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d90a8: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2d90a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2d90ac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2D90ACu;
    SET_GPR_U32(ctx, 31, 0x2D90B4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2D90ACu, 0x2D90B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90B4u;
label_2d90b4:
    // 0x2d90b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2d90b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2d90b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d90b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d90bc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2d90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2d90c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d90c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d90c4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2d90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2d90c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2d90c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2d90cc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2d90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2d90d0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2d90d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2d90d4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2d90d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d90d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d90d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d90dc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d90dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d90e0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2d90e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d90e4: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2d90e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2d90e8: 0xc0866ac  jal         func_219AB0
    ctx->pc = 0x2D90E8u;
    SET_GPR_U32(ctx, 31, 0x2D90F0u);
    ctx->pc = 0x219AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AB0u, 0x2D90E8u, 0x2D90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90F0u;
label_2d90f0:
    // 0x2d90f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d90f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d90f4: 0x0  nop
    ctx->pc = 0x2d90f4u;
    // NOP
label_2d90f8:
    // 0x2d90f8: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2d90f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2d90fc: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2D90FCu;
    {
        const bool branch_taken_0x2d90fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d90fc) {
            ctx->pc = 0x2D8FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8fe8;
        }
    }
    ctx->pc = 0x2D9104u;
    // 0x2d9104: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d9104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9108: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2d9108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2d910c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d910cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9110: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2d9110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2d9114: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2d9114u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9118: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2D9118u;
    SET_GPR_U32(ctx, 31, 0x2D9120u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2D9118u, 0x2D9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9120u;
label_2d9120:
    // 0x2d9120: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d9120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d9124: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2D9124u;
    SET_GPR_U32(ctx, 31, 0x2D912Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2D9124u, 0x2D912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D912Cu;
label_2d912c:
    // 0x2d912c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9130: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d9130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d9134: 0x24451200  addiu       $a1, $v0, 0x1200
    ctx->pc = 0x2d9134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2d9138: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2D9138u;
    SET_GPR_U32(ctx, 31, 0x2D9140u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2D9140u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D9140u) { return; }
    ctx->pc = 0x2D9140u;
label_2d9140:
    // 0x2d9140: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D9140u;
    SET_GPR_U32(ctx, 31, 0x2D9148u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D9140u, 0x2D9148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9148u;
label_2d9148:
    // 0x2d9148: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d9148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d914c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d914cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9150: 0x0  nop
    ctx->pc = 0x2d9150u;
    // NOP
    // 0x2d9154: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d9154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d9158: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2d9158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d915c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d915cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d9160: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2d9160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d9164: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D9164u;
    SET_GPR_U32(ctx, 31, 0x2D916Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D9164u, 0x2D916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D916Cu;
label_2d916c:
    // 0x2d916c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d9170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d9170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9174: 0x0  nop
    ctx->pc = 0x2d9174u;
    // NOP
    // 0x2d9178: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d9178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d917c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2d917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d9180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d9180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d9184: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2d9184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2d9188: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D9188u;
    SET_GPR_U32(ctx, 31, 0x2D9190u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D9188u, 0x2D9190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9190u;
label_2d9190:
    // 0x2d9190: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d9190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d9194: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d9194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9198: 0x0  nop
    ctx->pc = 0x2d9198u;
    // NOP
    // 0x2d919c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d919cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d91a0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2d91a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d91a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d91a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d91a8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2d91a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2d91ac: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2d91acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2d91b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d91b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d91b4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2d91b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d91b8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2d91b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d91bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2D91BCu;
    SET_GPR_U32(ctx, 31, 0x2D91C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2D91BCu, 0x2D91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91C4u;
label_2d91c4:
    // 0x2d91c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d91c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d91c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2D91C8u;
    SET_GPR_U32(ctx, 31, 0x2D91D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2D91C8u, 0x2D91D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91D0u;
label_2d91d0:
    // 0x2d91d0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2d91d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d91d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d91d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d91d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2d91d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d91dc: 0xc0c9184  jal         func_324610
    ctx->pc = 0x2D91DCu;
    SET_GPR_U32(ctx, 31, 0x2D91E4u);
    ctx->pc = 0x324610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324610u, 0x2D91DCu, 0x2D91E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91E4u;
label_2d91e4:
    // 0x2d91e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d91e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d91e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d91ec: 0x0  nop
    ctx->pc = 0x2d91ecu;
    // NOP
    // 0x2d91f0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2d91f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2d91f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d91f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d91f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d91fc: 0x0  nop
    ctx->pc = 0x2d91fcu;
    // NOP
    // 0x2d9200: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2d9200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2d9204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d920c: 0x0  nop
    ctx->pc = 0x2d920cu;
    // NOP
    // 0x2d9210: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2d9210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2d9214: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d921c: 0x0  nop
    ctx->pc = 0x2d921cu;
    // NOP
    // 0x2d9220: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2d9220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2d9224: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d9224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d9228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d922c: 0x0  nop
    ctx->pc = 0x2d922cu;
    // NOP
    // 0x2d9230: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2d9230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2d9234: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d9234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d9238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d923c: 0x0  nop
    ctx->pc = 0x2d923cu;
    // NOP
    // 0x2d9240: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2d9240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2d9244: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d9244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d9248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d924c: 0x0  nop
    ctx->pc = 0x2d924cu;
    // NOP
    // 0x2d9250: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2d9250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2d9254: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2d9254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2d9258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d925c: 0x0  nop
    ctx->pc = 0x2d925cu;
    // NOP
    // 0x2d9260: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2d9260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2d9264: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d926c: 0x0  nop
    ctx->pc = 0x2d926cu;
    // NOP
    // 0x2d9270: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2d9270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2d9274: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d927c: 0x0  nop
    ctx->pc = 0x2d927cu;
    // NOP
    // 0x2d9280: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2d9280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2d9284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d928c: 0x0  nop
    ctx->pc = 0x2d928cu;
    // NOP
    // 0x2d9290: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2d9290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2d9294: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2d9294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2d9298: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2d9298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2d929c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d929cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d92a0: 0x0  nop
    ctx->pc = 0x2d92a0u;
    // NOP
    // 0x2d92a4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2d92a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2d92a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D92A8u;
    SET_GPR_U32(ctx, 31, 0x2D92B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D92A8u, 0x2D92B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D92B0u;
label_2d92b0:
    // 0x2d92b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d92b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d92b4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2d92b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d92b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d92bc: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D92BCu;
    {
        const bool branch_taken_0x2d92bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d92bc) {
            ctx->pc = 0x2D9334u;
            goto label_2d9334;
        }
    }
    ctx->pc = 0x2D92C4u;
    // 0x2d92c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d92c8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D92C8u;
    {
        const bool branch_taken_0x2d92c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d92c8) {
            ctx->pc = 0x2D931Cu;
            goto label_2d931c;
        }
    }
    ctx->pc = 0x2D92D0u;
    // 0x2d92d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d92d4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D92D4u;
    {
        const bool branch_taken_0x2d92d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d92d4) {
            ctx->pc = 0x2D9304u;
            goto label_2d9304;
        }
    }
    ctx->pc = 0x2D92DCu;
    // 0x2d92dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D92DCu;
    {
        const bool branch_taken_0x2d92dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92dc) {
            ctx->pc = 0x2D92ECu;
            goto label_2d92ec;
        }
    }
    ctx->pc = 0x2D92E4u;
    // 0x2d92e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D92E4u;
    {
        const bool branch_taken_0x2d92e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92e4) {
            ctx->pc = 0x2D9344u;
            goto label_2d9344;
        }
    }
    ctx->pc = 0x2D92ECu;
label_2d92ec:
    // 0x2d92ec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d92f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d92f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d92f4: 0x0  nop
    ctx->pc = 0x2d92f4u;
    // NOP
    // 0x2d92f8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d92f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2d92fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D92FCu;
    {
        const bool branch_taken_0x2d92fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d92fc) {
            ctx->pc = 0x2D9344u;
            goto label_2d9344;
        }
    }
    ctx->pc = 0x2D9304u;
label_2d9304:
    // 0x2d9304: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d9304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2d9308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d930c: 0x0  nop
    ctx->pc = 0x2d930cu;
    // NOP
    // 0x2d9310: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d9310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2d9314: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D9314u;
    {
        const bool branch_taken_0x2d9314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9314) {
            ctx->pc = 0x2D9344u;
            goto label_2d9344;
        }
    }
    ctx->pc = 0x2D931Cu;
label_2d931c:
    // 0x2d931c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2d931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2d9320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9324: 0x0  nop
    ctx->pc = 0x2d9324u;
    // NOP
    // 0x2d9328: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d9328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2d932c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D932Cu;
    {
        const bool branch_taken_0x2d932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d932c) {
            ctx->pc = 0x2D9344u;
            goto label_2d9344;
        }
    }
    ctx->pc = 0x2D9334u;
label_2d9334:
    // 0x2d9334: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2d9334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2d9338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d933c: 0x0  nop
    ctx->pc = 0x2d933cu;
    // NOP
    // 0x2d9340: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d9340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2d9344:
    // 0x2d9344: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d9344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d9348: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2D9348u;
    SET_GPR_U32(ctx, 31, 0x2D9350u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2D9348u, 0x2D9350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9350u;
label_2d9350:
    // 0x2d9350: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D9350u;
    SET_GPR_U32(ctx, 31, 0x2D9358u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D9350u, 0x2D9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9358u;
label_2d9358:
    // 0x2d9358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d935c: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2d935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2d9360: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d9360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9364: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D9364u;
    {
        const bool branch_taken_0x2d9364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9364) {
            ctx->pc = 0x2D93DCu;
            goto label_2d93dc;
        }
    }
    ctx->pc = 0x2D936Cu;
    // 0x2d936c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9370: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D9370u;
    {
        const bool branch_taken_0x2d9370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9370) {
            ctx->pc = 0x2D93C4u;
            goto label_2d93c4;
        }
    }
    ctx->pc = 0x2D9378u;
    // 0x2d9378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d937c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D937Cu;
    {
        const bool branch_taken_0x2d937c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d937c) {
            ctx->pc = 0x2D93ACu;
            goto label_2d93ac;
        }
    }
    ctx->pc = 0x2D9384u;
    // 0x2d9384: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9384u;
    {
        const bool branch_taken_0x2d9384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9384) {
            ctx->pc = 0x2D9394u;
            goto label_2d9394;
        }
    }
    ctx->pc = 0x2D938Cu;
    // 0x2d938c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D938Cu;
    {
        const bool branch_taken_0x2d938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d938c) {
            ctx->pc = 0x2D93ECu;
            goto label_2d93ec;
        }
    }
    ctx->pc = 0x2D9394u;
label_2d9394:
    // 0x2d9394: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d9394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d9398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d939c: 0x0  nop
    ctx->pc = 0x2d939cu;
    // NOP
    // 0x2d93a0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2d93a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2d93a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D93A4u;
    {
        const bool branch_taken_0x2d93a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d93a4) {
            ctx->pc = 0x2D93ECu;
            goto label_2d93ec;
        }
    }
    ctx->pc = 0x2D93ACu;
label_2d93ac:
    // 0x2d93ac: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x2d93acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x2d93b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d93b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d93b4: 0x0  nop
    ctx->pc = 0x2d93b4u;
    // NOP
    // 0x2d93b8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2d93b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2d93bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D93BCu;
    {
        const bool branch_taken_0x2d93bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d93bc) {
            ctx->pc = 0x2D93ECu;
            goto label_2d93ec;
        }
    }
    ctx->pc = 0x2D93C4u;
label_2d93c4:
    // 0x2d93c4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d93c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d93c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d93c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d93cc: 0x0  nop
    ctx->pc = 0x2d93ccu;
    // NOP
    // 0x2d93d0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2d93d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2d93d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D93D4u;
    {
        const bool branch_taken_0x2d93d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d93d4) {
            ctx->pc = 0x2D93ECu;
            goto label_2d93ec;
        }
    }
    ctx->pc = 0x2D93DCu;
label_2d93dc:
    // 0x2d93dc: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x2d93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x2d93e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d93e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d93e4: 0x0  nop
    ctx->pc = 0x2d93e4u;
    // NOP
    // 0x2d93e8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2d93e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2d93ec:
    // 0x2d93ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D93ECu;
    SET_GPR_U32(ctx, 31, 0x2D93F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D93ECu, 0x2D93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93F4u;
label_2d93f4:
    // 0x2d93f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d93f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d93f8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2d93f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d93fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9400: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D9400u;
    {
        const bool branch_taken_0x2d9400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9400) {
            ctx->pc = 0x2D9478u;
            goto label_2d9478;
        }
    }
    ctx->pc = 0x2D9408u;
    // 0x2d9408: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d9408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d940c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D940Cu;
    {
        const bool branch_taken_0x2d940c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d940c) {
            ctx->pc = 0x2D9460u;
            goto label_2d9460;
        }
    }
    ctx->pc = 0x2D9414u;
    // 0x2d9414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9418: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D9418u;
    {
        const bool branch_taken_0x2d9418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9418) {
            ctx->pc = 0x2D9448u;
            goto label_2d9448;
        }
    }
    ctx->pc = 0x2D9420u;
    // 0x2d9420: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9420u;
    {
        const bool branch_taken_0x2d9420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9420) {
            ctx->pc = 0x2D9430u;
            goto label_2d9430;
        }
    }
    ctx->pc = 0x2D9428u;
    // 0x2d9428: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D9428u;
    {
        const bool branch_taken_0x2d9428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9428) {
            ctx->pc = 0x2D9488u;
            goto label_2d9488;
        }
    }
    ctx->pc = 0x2D9430u;
label_2d9430:
    // 0x2d9430: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9438: 0x0  nop
    ctx->pc = 0x2d9438u;
    // NOP
    // 0x2d943c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d943cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2d9440: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D9440u;
    {
        const bool branch_taken_0x2d9440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9440) {
            ctx->pc = 0x2D9488u;
            goto label_2d9488;
        }
    }
    ctx->pc = 0x2D9448u;
label_2d9448:
    // 0x2d9448: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d9448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d944c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d944cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9450: 0x0  nop
    ctx->pc = 0x2d9450u;
    // NOP
    // 0x2d9454: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d9454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2d9458: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D9458u;
    {
        const bool branch_taken_0x2d9458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9458) {
            ctx->pc = 0x2D9488u;
            goto label_2d9488;
        }
    }
    ctx->pc = 0x2D9460u;
label_2d9460:
    // 0x2d9460: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d9460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d9464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9468: 0x0  nop
    ctx->pc = 0x2d9468u;
    // NOP
    // 0x2d946c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d946cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2d9470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9470u;
    {
        const bool branch_taken_0x2d9470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9470) {
            ctx->pc = 0x2D9488u;
            goto label_2d9488;
        }
    }
    ctx->pc = 0x2D9478u;
label_2d9478:
    // 0x2d9478: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2d9478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2d947c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d947cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9480: 0x0  nop
    ctx->pc = 0x2d9480u;
    // NOP
    // 0x2d9484: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d9484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2d9488:
    // 0x2d9488: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2d9488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2d948c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2d948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2d9490: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d9490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d9494: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2d9494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9498: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d9498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d949c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2d949cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d94a0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2d94a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d94a4: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2d94a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d94a8: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2d94a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d94ac: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2d94acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d94b0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x2d94b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d94b4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2D94B4u;
    SET_GPR_U32(ctx, 31, 0x2D94BCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2D94B4u, 0x2D94BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94BCu;
label_2d94bc:
    // 0x2d94bc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d94bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d94c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d94c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d94c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2d94c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d94c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D94C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D94C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D94D0u;
}
