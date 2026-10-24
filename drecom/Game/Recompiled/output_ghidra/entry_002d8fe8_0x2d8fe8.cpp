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

// Function: entry_002d8fe8
// Address: 0x2d8fe8 - 0x2d90f8
void entry_002d8fe8_0x2d8fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8fe8_0x2d8fe8");
#endif

    switch (ctx->pc) {
        case 0x2d9024u: goto label_2d9024;
        case 0x2d9040u: goto label_2d9040;
        case 0x2d905cu: goto label_2d905c;
        case 0x2d909cu: goto label_2d909c;
        case 0x2d90b4u: goto label_2d90b4;
        case 0x2d90f0u: goto label_2d90f0;
        default: break;
    }

    ctx->pc = 0x2d8fe8u;

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
    ctx->pc = 0x2d90f8u;
}
