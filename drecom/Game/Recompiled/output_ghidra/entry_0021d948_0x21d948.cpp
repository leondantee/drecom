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

// Function: entry_0021d948
// Address: 0x21d948 - 0x21da48
void entry_0021d948_0x21d948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d948_0x21d948");
#endif

    switch (ctx->pc) {
        case 0x21d97cu: goto label_21d97c;
        case 0x21d9b0u: goto label_21d9b0;
        case 0x21d9d8u: goto label_21d9d8;
        default: break;
    }

    ctx->pc = 0x21d948u;

    // 0x21d948: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x21d948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x21d94c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21d94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21d950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21d950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d954: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d958: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x21d958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x21d95c: 0x8fb10098  lw          $s1, 0x98($sp)
    ctx->pc = 0x21d95cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d960: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21d960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21d964: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d968: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x21d968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21d96c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x21D96Cu;
    {
        const bool branch_taken_0x21d96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d96c) {
            ctx->pc = 0x21DA48u;
            return;
        }
    }
    ctx->pc = 0x21D974u;
    // 0x21d974: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D974u;
    SET_GPR_U32(ctx, 31, 0x21D97Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D974u, 0x21D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D97Cu;
label_21d97c:
    // 0x21d97c: 0x3c024048  lui         $v0, 0x4048
    ctx->pc = 0x21d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16456 << 16));
    // 0x21d980: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x21d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x21d984: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d988: 0x0  nop
    ctx->pc = 0x21d988u;
    // NOP
    // 0x21d98c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21d98cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d990: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x21d990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21d994: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x21d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x21d998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21d998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d99c: 0x0  nop
    ctx->pc = 0x21d99cu;
    // NOP
    // 0x21d9a0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x21d9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x21d9a4: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x21d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21d9a8: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21D9A8u;
    SET_GPR_U32(ctx, 31, 0x21D9B0u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21D9A8u, 0x21D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9B0u;
label_21d9b0:
    // 0x21d9b0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x21d9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d9b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21d9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d9b8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d9bc: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x21d9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x21d9c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21d9c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d9c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d9c8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x21d9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x21d9cc: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x21d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21d9d0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21D9D0u;
    SET_GPR_U32(ctx, 31, 0x21D9D8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21D9D0u, 0x21D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9D8u;
label_21d9d8:
    // 0x21d9d8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x21d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d9dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21d9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d9e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d9e4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x21d9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x21d9e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d9ec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d9f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d9f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d9f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d9fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21da00: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21da00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21da04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21da04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21da08: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21da08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21da0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21da0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21da10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21da10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21da14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21da18: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21da18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21da1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21da20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21da24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21da24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21da28: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21da28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21da2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21da2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21da30: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x21da30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x21da34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21da38: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x21da38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21da3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21da3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21da40: 0x0  nop
    ctx->pc = 0x21da40u;
    // NOP
    // 0x21da44: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x21da44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->pc = 0x21da48u;
}
