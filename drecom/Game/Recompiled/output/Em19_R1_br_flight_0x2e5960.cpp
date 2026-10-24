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

// Function: Em19_R1_br_flight
// Address: 0x2e5960 - 0x2e5adc
void Em19_R1_br_flight_0x2e5960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_br_flight_0x2e5960");
#endif

    switch (ctx->pc) {
        case 0x2e59dcu: goto label_2e59dc;
        case 0x2e5a48u: goto label_2e5a48;
        case 0x2e5a6cu: goto label_2e5a6c;
        default: break;
    }

    ctx->pc = 0x2e5960u;

    // 0x2e5960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e5960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e5964: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e5964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e5968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e596c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2e596cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2e5970: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5974: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e5974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e5978: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e597c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e597cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e5980: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E5980u;
    {
        const bool branch_taken_0x2e5980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5980) {
            ctx->pc = 0x2E5AC8u;
            goto label_2e5ac8;
        }
    }
    ctx->pc = 0x2E5988u;
    // 0x2e5988: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e5988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e598c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e598cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e5990: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x2e5990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e5994: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2E5994u;
    {
        const bool branch_taken_0x2e5994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5994) {
            ctx->pc = 0x2E59D4u;
            goto label_2e59d4;
        }
    }
    ctx->pc = 0x2E599Cu;
    // 0x2e599c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e59a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e59a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e59a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e59a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e59a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e59ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e59acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e59b0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e59b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e59b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e59b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e59b8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e59b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e59bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e59c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e59c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e59c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e59c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e59cc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2E59CCu;
    {
        const bool branch_taken_0x2e59cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e59cc) {
            ctx->pc = 0x2E5AC8u;
            goto label_2e5ac8;
        }
    }
    ctx->pc = 0x2E59D4u;
label_2e59d4:
    // 0x2e59d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E59D4u;
    SET_GPR_U32(ctx, 31, 0x2E59DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E59D4u, 0x2E59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59DCu;
label_2e59dc:
    // 0x2e59dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e59dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e59e0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2e59e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2e59e4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E59E4u;
    {
        const bool branch_taken_0x2e59e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e59e4) {
            ctx->pc = 0x2E5A24u;
            goto label_2e5a24;
        }
    }
    ctx->pc = 0x2E59ECu;
    // 0x2e59ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e59f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e59f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e59f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e59f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e59fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a00: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e5a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5a04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5a0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e5a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5a14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e5a1c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2E5A1Cu;
    {
        const bool branch_taken_0x2e5a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5a1c) {
            ctx->pc = 0x2E5AC8u;
            goto label_2e5ac8;
        }
    }
    ctx->pc = 0x2E5A24u;
label_2e5a24:
    // 0x2e5a24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e5a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e5a28: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2e5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2e5a2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a30: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e5a34: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e5a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e5a38: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2e5a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2e5a3c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x2e5a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2e5a40: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2E5A40u;
    SET_GPR_U32(ctx, 31, 0x2E5A48u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2E5A40u, 0x2E5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A48u;
label_2e5a48:
    // 0x2e5a48: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2e5a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5a4c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2e5a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5a50: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2e5a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5a54: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2e5a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5a58: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2e5a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5a5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5a60: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2e5a60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2e5a64: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x2E5A64u;
    SET_GPR_U32(ctx, 31, 0x2E5A6Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x2E5A64u, 0x2E5A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A6Cu;
label_2e5a6c:
    // 0x2e5a6c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e5a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e5a70: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2e5a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5a74: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x2e5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x2e5a78: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2e5a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2e5a7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5a80: 0x0  nop
    ctx->pc = 0x2e5a80u;
    // NOP
    // 0x2e5a84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5a88: 0x0  nop
    ctx->pc = 0x2e5a88u;
    // NOP
    // 0x2e5a8c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2E5A8Cu;
    {
        const bool branch_taken_0x2e5a8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5a8c) {
            ctx->pc = 0x2E5AC8u;
            goto label_2e5ac8;
        }
    }
    ctx->pc = 0x2E5A94u;
    // 0x2e5a94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5a98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e5a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5aa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5aa4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e5aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5aa8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5aac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5ab0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5ab4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e5ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5ab8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5abc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e5ac0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5AC0u;
    {
        const bool branch_taken_0x2e5ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ac0) {
            ctx->pc = 0x2E5AC8u;
            goto label_2e5ac8;
        }
    }
    ctx->pc = 0x2E5AC8u;
label_2e5ac8:
    // 0x2e5ac8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e5ac8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5ad0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e5ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e5ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5ADCu;
}
