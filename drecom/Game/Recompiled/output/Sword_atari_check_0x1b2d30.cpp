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

// Function: Sword_atari_check
// Address: 0x1b2d30 - 0x1b34f4
void Sword_atari_check_0x1b2d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sword_atari_check_0x1b2d30");
#endif

    switch (ctx->pc) {
        case 0x1b2d8cu: goto label_1b2d8c;
        case 0x1b2de0u: goto label_1b2de0;
        case 0x1b2e0cu: goto label_1b2e0c;
        case 0x1b2e5cu: goto label_1b2e5c;
        case 0x1b2e80u: goto label_1b2e80;
        case 0x1b2e9cu: goto label_1b2e9c;
        case 0x1b2eb4u: goto label_1b2eb4;
        case 0x1b2ec0u: goto label_1b2ec0;
        case 0x1b2ef4u: goto label_1b2ef4;
        case 0x1b2f60u: goto label_1b2f60;
        case 0x1b2f74u: goto label_1b2f74;
        case 0x1b2f98u: goto label_1b2f98;
        case 0x1b3098u: goto label_1b3098;
        case 0x1b30bcu: goto label_1b30bc;
        case 0x1b30f8u: goto label_1b30f8;
        case 0x1b311cu: goto label_1b311c;
        case 0x1b3358u: goto label_1b3358;
        case 0x1b3368u: goto label_1b3368;
        case 0x1b33bcu: goto label_1b33bc;
        case 0x1b33d4u: goto label_1b33d4;
        default: break;
    }

    ctx->pc = 0x1b2d30u;

    // 0x1b2d30: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1b2d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1b2d34: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1b2d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1b2d38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b2d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b2d3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b2d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b2d40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b2d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b2d44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b2d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b2d48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b2d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b2d4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b2d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b2d50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b2d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b2d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b2d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b2d5c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x1b2d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x1b2d60: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x1b2d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
    // 0x1b2d64: 0xa3a60120  sb          $a2, 0x120($sp)
    ctx->pc = 0x1b2d64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b2d68: 0xa3a70128  sb          $a3, 0x128($sp)
    ctx->pc = 0x1b2d68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 296), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b2d6c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1b2d6cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b2d70: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2d74: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b2d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b2d78: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x1b2d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2d7c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1b2d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b2d80: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x1b2d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1b2d84: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1B2D84u;
    SET_GPR_U32(ctx, 31, 0x1B2D8Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1B2D84u, 0x1B2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D8Cu;
label_1b2d8c:
    // 0x1b2d8c: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1b2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x1b2d90: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1b2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1b2d94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2D94u;
    {
        const bool branch_taken_0x1b2d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d94) {
            ctx->pc = 0x1B2DA0u;
            goto label_1b2da0;
        }
    }
    ctx->pc = 0x1B2D9Cu;
    // 0x1b2d9c: 0x36730010  ori         $s3, $s3, 0x10
    ctx->pc = 0x1b2d9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16);
label_1b2da0:
    // 0x1b2da0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b2da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b2da4: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1b2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b2da8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1b2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1b2dac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1b2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b2db0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b2db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b2db4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b2db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b2db8: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x1b2db8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1b2dbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b2dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b2dc0: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1b2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b2dc4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1b2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1b2dc8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x1b2dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b2dcc: 0x93a20128  lbu         $v0, 0x128($sp)
    ctx->pc = 0x1b2dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b2dd0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1b2dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2dd4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1b2dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b2dd8: 0xc06c678  jal         func_1B19E0
    ctx->pc = 0x1B2DD8u;
    SET_GPR_U32(ctx, 31, 0x1B2DE0u);
    ctx->pc = 0x1B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19E0u, 0x1B2DD8u, 0x1B2DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DE0u;
label_1b2de0:
    // 0x1b2de0: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1b2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x1b2de4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1b2de8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2DE8u;
    {
        const bool branch_taken_0x1b2de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2de8) {
            ctx->pc = 0x1B2DFCu;
            goto label_1b2dfc;
        }
    }
    ctx->pc = 0x1B2DF0u;
    // 0x1b2df0: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x1b2df0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b2df4: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x1B2DF4u;
    {
        const bool branch_taken_0x1b2df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2df4) {
            ctx->pc = 0x1B34C0u;
            goto label_1b34c0;
        }
    }
    ctx->pc = 0x1B2DFCu;
label_1b2dfc:
    // 0x1b2dfc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b2e00: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1b2e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x1b2e04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B2E04u;
    {
        const bool branch_taken_0x1b2e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2e04) {
            ctx->pc = 0x1B2E30u;
            goto label_1b2e30;
        }
    }
    ctx->pc = 0x1B2E0Cu;
label_1b2e0c:
    // 0x1b2e0c: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b2e10: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b2e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b2e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2e18: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b2e1c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b2e20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2e24: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2e2c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b2e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b2e30:
    // 0x1b2e30: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b2e34: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1b2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b2e38: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1b2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x1b2e3c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B2E3Cu;
    {
        const bool branch_taken_0x1b2e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2e3c) {
            ctx->pc = 0x1B2E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2e0c;
        }
    }
    ctx->pc = 0x1B2E44u;
    // 0x1b2e44: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2e48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b2e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b2e4c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1b2e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b2e50: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x1b2e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2e54: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B2E54u;
    SET_GPR_U32(ctx, 31, 0x1B2E5Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B2E54u, 0x1B2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E5Cu;
label_1b2e5c:
    // 0x1b2e5c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1b2e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2e60: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1b2e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2e64: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b2e64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2e68: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1b2e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2e6c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1b2e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2e70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2e74: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b2e74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b2e78: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B2E78u;
    SET_GPR_U32(ctx, 31, 0x1B2E80u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B2E78u, 0x1B2E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E80u;
label_1b2e80:
    // 0x1b2e80: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1b2e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1b2e84: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2e88: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b2e8c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x1b2e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2e90: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1b2e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b2e94: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1B2E94u;
    SET_GPR_U32(ctx, 31, 0x1B2E9Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1B2E94u, 0x1B2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E9Cu;
label_1b2e9c:
    // 0x1b2e9c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b2ea0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2ea4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b2ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b2ea8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1b2ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b2eac: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B2EACu;
    SET_GPR_U32(ctx, 31, 0x1B2EB4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B2EB4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2EB4u) { return; }
    ctx->pc = 0x1B2EB4u;
label_1b2eb4:
    // 0x1b2eb4: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1b2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x1b2eb8: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x1B2EB8u;
    {
        const bool branch_taken_0x1b2eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2eb8) {
            ctx->pc = 0x1B34A8u;
            goto label_1b34a8;
        }
    }
    ctx->pc = 0x1B2EC0u;
label_1b2ec0:
    // 0x1b2ec0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b2ec4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2ec8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b2ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2ed0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b2ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2ed4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b2ed8: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x1b2ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x1b2edc: 0x8e16121c  lw          $s6, 0x121C($s0)
    ctx->pc = 0x1b2edcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x1b2ee0: 0x8e021228  lw          $v0, 0x1228($s0)
    ctx->pc = 0x1b2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4648)));
    // 0x1b2ee4: 0x2451ffe0  addiu       $s1, $v0, -0x20
    ctx->pc = 0x1b2ee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b2ee8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b2ee8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b2eec: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x1B2EECu;
    {
        const bool branch_taken_0x1b2eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2eec) {
            ctx->pc = 0x1B3480u;
            goto label_1b3480;
        }
    }
    ctx->pc = 0x1B2EF4u;
label_1b2ef4:
    // 0x1b2ef4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b2ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b2ef8: 0x12c00167  beqz        $s6, . + 4 + (0x167 << 2)
    ctx->pc = 0x1B2EF8u;
    {
        const bool branch_taken_0x1b2ef8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2ef8) {
            ctx->pc = 0x1B3498u;
            goto label_1b3498;
        }
    }
    ctx->pc = 0x1B2F00u;
    // 0x1b2f00: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x1b2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1b2f04: 0x2821006  srlv        $v0, $v0, $s4
    ctx->pc = 0x1b2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1b2f08: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1b2f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b2f0c: 0x1040015b  beqz        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x1B2F0Cu;
    {
        const bool branch_taken_0x1b2f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f0c) {
            ctx->pc = 0x1B347Cu;
            goto label_1b347c;
        }
    }
    ctx->pc = 0x1B2F14u;
    // 0x1b2f14: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x1b2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1b2f18: 0x401027  not         $v0, $v0
    ctx->pc = 0x1b2f18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1b2f1c: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x1b2f1cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b2f20: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b2f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b2f24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2f28: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b2f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b2f2c: 0x14400153  bnez        $v0, . + 4 + (0x153 << 2)
    ctx->pc = 0x1B2F2Cu;
    {
        const bool branch_taken_0x1b2f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f2c) {
            ctx->pc = 0x1B347Cu;
            goto label_1b347c;
        }
    }
    ctx->pc = 0x1B2F34u;
    // 0x1b2f34: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b2f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2f38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2f3c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1b2f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1b2f40: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b2f44: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b2f48: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b2f4c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b2f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2f50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b2f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b2f54: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1b2f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b2f58: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B2F58u;
    SET_GPR_U32(ctx, 31, 0x1B2F60u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B2F60u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2F60u) { return; }
    ctx->pc = 0x1B2F60u;
label_1b2f60:
    // 0x1b2f60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b2f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b2f64: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1b2f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b2f68: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x1b2f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2f6c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B2F6Cu;
    SET_GPR_U32(ctx, 31, 0x1B2F74u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B2F6Cu, 0x1B2F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F74u;
label_1b2f74:
    // 0x1b2f74: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1b2f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2f78: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1b2f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2f7c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b2f7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2f80: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1b2f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2f84: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1b2f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2f88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2f8c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b2f8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b2f90: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B2F90u;
    SET_GPR_U32(ctx, 31, 0x1B2F98u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B2F90u, 0x1B2F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F98u;
label_1b2f98:
    // 0x1b2f98: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b2f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1b2f9c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b2f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2fa0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b2fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fa4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1b2fa4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b2fa8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1b2fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2facu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2fb0: 0x0  nop
    ctx->pc = 0x1b2fb0u;
    // NOP
    // 0x1b2fb4: 0x45000131  bc1f        . + 4 + (0x131 << 2)
    ctx->pc = 0x1B2FB4u;
    {
        const bool branch_taken_0x1b2fb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2fb4) {
            ctx->pc = 0x1B347Cu;
            goto label_1b347c;
        }
    }
    ctx->pc = 0x1B2FBCu;
    // 0x1b2fbc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b2fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2fc0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1b2fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fc4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b2fc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b2fc8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2fcc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b2fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2fd4: 0x0  nop
    ctx->pc = 0x1b2fd4u;
    // NOP
    // 0x1b2fd8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B2FD8u;
    {
        const bool branch_taken_0x1b2fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2fd8) {
            ctx->pc = 0x1B300Cu;
            goto label_1b300c;
        }
    }
    ctx->pc = 0x1B2FE0u;
    // 0x1b2fe0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2fe4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1b2fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fe8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b2fe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b2fec: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b2ff0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2ff8: 0x0  nop
    ctx->pc = 0x1b2ff8u;
    // NOP
    // 0x1b2ffc: 0x4501011f  bc1t        . + 4 + (0x11F << 2)
    ctx->pc = 0x1B2FFCu;
    {
        const bool branch_taken_0x1b2ffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2ffc) {
            ctx->pc = 0x1B347Cu;
            goto label_1b347c;
        }
    }
    ctx->pc = 0x1B3004u;
    // 0x1b3004: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B3004u;
    {
        const bool branch_taken_0x1b3004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3004) {
            ctx->pc = 0x1B3058u;
            goto label_1b3058;
        }
    }
    ctx->pc = 0x1B300Cu;
label_1b300c:
    // 0x1b300c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1b300cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3010: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1b3010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3014: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b3014u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3018: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b3018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b301c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3020: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b3020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3024: 0x0  nop
    ctx->pc = 0x1b3024u;
    // NOP
    // 0x1b3028: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1B3028u;
    {
        const bool branch_taken_0x1b3028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3028) {
            ctx->pc = 0x1B3058u;
            goto label_1b3058;
        }
    }
    ctx->pc = 0x1B3030u;
    // 0x1b3030: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1b3030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3034: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1b3034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3038: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b3038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b303c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b3040: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b3040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3044: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b3044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3048: 0x0  nop
    ctx->pc = 0x1b3048u;
    // NOP
    // 0x1b304c: 0x4500010b  bc1f        . + 4 + (0x10B << 2)
    ctx->pc = 0x1B304Cu;
    {
        const bool branch_taken_0x1b304c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b304c) {
            ctx->pc = 0x1B347Cu;
            goto label_1b347c;
        }
    }
    ctx->pc = 0x1B3054u;
    // 0x1b3054: 0x0  nop
    ctx->pc = 0x1b3054u;
    // NOP
label_1b3058:
    // 0x1b3058: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1b3058u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b305c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3060: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b3060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3064: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3068: 0x0  nop
    ctx->pc = 0x1b3068u;
    // NOP
    // 0x1b306c: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x1B306Cu;
    {
        const bool branch_taken_0x1b306c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b306c) {
            ctx->pc = 0x1B3138u;
            goto label_1b3138;
        }
    }
    ctx->pc = 0x1B3074u;
    // 0x1b3074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3078: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x1b3078u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1b307c: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x1b307cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x1b3080: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b3080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b3084: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b3084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b3088: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1b3088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b308c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1b308cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b3090: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3090u;
    SET_GPR_U32(ctx, 31, 0x1B3098u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3090u, 0x1B3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3098u;
label_1b3098:
    // 0x1b3098: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1b3098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b309c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1b309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b30a0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b30a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b30a4: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1b30a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b30a8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1b30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b30ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b30acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b30b0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b30b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b30b4: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B30B4u;
    SET_GPR_U32(ctx, 31, 0x1B30BCu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B30B4u, 0x1B30BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30BCu;
label_1b30bc:
    // 0x1b30bc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b30bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1b30c0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b30c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b30c4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b30c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b30c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b30c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b30cc: 0x0  nop
    ctx->pc = 0x1b30ccu;
    // NOP
    // 0x1b30d0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1B30D0u;
    {
        const bool branch_taken_0x1b30d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b30d0) {
            ctx->pc = 0x1B3138u;
            goto label_1b3138;
        }
    }
    ctx->pc = 0x1B30D8u;
    // 0x1b30d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b30dc: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x1b30dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1b30e0: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x1b30e0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x1b30e4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b30e8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1b30e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b30ec: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1b30ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b30f0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B30F0u;
    SET_GPR_U32(ctx, 31, 0x1B30F8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B30F0u, 0x1B30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30F8u;
label_1b30f8:
    // 0x1b30f8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1b30f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b30fc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1b30fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3100: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b3100u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3104: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1b3104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3108: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1b3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b310c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b310cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3110: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b3110u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b3114: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B3114u;
    SET_GPR_U32(ctx, 31, 0x1B311Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B3114u, 0x1B311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B311Cu;
label_1b311c:
    // 0x1b311c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b311cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1b3120: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b3120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3124: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b3124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3128: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b312c: 0x0  nop
    ctx->pc = 0x1b312cu;
    // NOP
    // 0x1b3130: 0x450000d2  bc1f        . + 4 + (0xD2 << 2)
    ctx->pc = 0x1B3130u;
    {
        const bool branch_taken_0x1b3130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3130) {
            ctx->pc = 0x1B347Cu;
            goto label_1b347c;
        }
    }
    ctx->pc = 0x1B3138u;
label_1b3138:
    // 0x1b3138: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b313c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3140: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b3140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b3144: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3144u;
    {
        const bool branch_taken_0x1b3144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3144) {
            ctx->pc = 0x1B316Cu;
            goto label_1b316c;
        }
    }
    ctx->pc = 0x1B314Cu;
    // 0x1b314c: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1b314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b3150: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x1b3150u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3154: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x1b3154u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x1b3158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b315c: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x1b315cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3160: 0xa3a0010f  sb          $zero, 0x10F($sp)
    ctx->pc = 0x1b3160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3164: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B3164u;
    {
        const bool branch_taken_0x1b3164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3164) {
            ctx->pc = 0x1B31E0u;
            goto label_1b31e0;
        }
    }
    ctx->pc = 0x1B316Cu;
label_1b316c:
    // 0x1b316c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b316cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3170: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3174: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b3174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3178: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b317c: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x1b317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
    // 0x1b3180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3184: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1b3184u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3188: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x1b3188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b318c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3190: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3194: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1b3194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b3198: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1b3198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b319c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b31a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b31a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b31a4: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x1b31a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b31a8: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x1b31a8u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x1b31ac: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x1b31acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b31b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b31b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b31b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b31b8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1b31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b31bc: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1b31bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b31c0: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x1b31c0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b31c4: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x1b31c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b31c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b31c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b31cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b31d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1b31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b31d4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1b31d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1b31d8: 0xa3a2010f  sb          $v0, 0x10F($sp)
    ctx->pc = 0x1b31d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b31dc: 0x0  nop
    ctx->pc = 0x1b31dcu;
    // NOP
label_1b31e0:
    // 0x1b31e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b31e4: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b31e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b31e8: 0xa21e11ef  sb          $fp, 0x11EF($s0)
    ctx->pc = 0x1b31e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 30));
    // 0x1b31ec: 0xa61711f2  sh          $s7, 0x11F2($s0)
    ctx->pc = 0x1b31ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 23));
    // 0x1b31f0: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1b31f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x1b31f4: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b31f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b31f8: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x1b31f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b31fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b31fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3200: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1b3200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b3204: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b3208: 0x24428540  addiu       $v0, $v0, -0x7AC0
    ctx->pc = 0x1b3208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x1b320c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3210: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1b3210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3214: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b3214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3218: 0x93a2010f  lbu         $v0, 0x10F($sp)
    ctx->pc = 0x1b3218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 271)));
    // 0x1b321c: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b321cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3220: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1b3220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b3224: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b3224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b3228: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b3228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b322c: 0x9022f136  lbu         $v0, -0xECA($at)
    ctx->pc = 0x1b322cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EF136u));
    // 0x1b3230: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b3230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3234: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1b3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b3238: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3238u;
    {
        const bool branch_taken_0x1b3238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3238) {
            ctx->pc = 0x1B3258u;
            goto label_1b3258;
        }
    }
    ctx->pc = 0x1B3240u;
    // 0x1b3240: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b3240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b3244: 0x9022f136  lbu         $v0, -0xECA($at)
    ctx->pc = 0x1b3244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EF136u));
    // 0x1b3248: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b3248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b324c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b3250: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B3250u;
    {
        const bool branch_taken_0x1b3250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b3250) {
            ctx->pc = 0x1B32E0u;
            goto label_1b32e0;
        }
    }
    ctx->pc = 0x1B3258u;
label_1b3258:
    // 0x1b3258: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b3258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b325c: 0xc421ee44  lwc1        $f1, -0x11BC($at)
    ctx->pc = 0x1b325cu;
    { uint32_t bits = FAST_READ32(0x3EEE44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3260: 0x3c02c307  lui         $v0, 0xC307
    ctx->pc = 0x1b3260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49927 << 16));
    // 0x1b3264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3268: 0x0  nop
    ctx->pc = 0x1b3268u;
    // NOP
    // 0x1b326c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b326cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3270: 0x0  nop
    ctx->pc = 0x1b3270u;
    // NOP
    // 0x1b3274: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1B3274u;
    {
        const bool branch_taken_0x1b3274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3274) {
            ctx->pc = 0x1B32E0u;
            goto label_1b32e0;
        }
    }
    ctx->pc = 0x1B327Cu;
    // 0x1b327c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b327cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b3280: 0xc421ee44  lwc1        $f1, -0x11BC($at)
    ctx->pc = 0x1b3280u;
    { uint32_t bits = FAST_READ32(0x3EEE44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3284: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1b3284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1b3288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b328c: 0x0  nop
    ctx->pc = 0x1b328cu;
    // NOP
    // 0x1b3290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3294: 0x0  nop
    ctx->pc = 0x1b3294u;
    // NOP
    // 0x1b3298: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3298u;
    {
        const bool branch_taken_0x1b3298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3298) {
            ctx->pc = 0x1B32B8u;
            goto label_1b32b8;
        }
    }
    ctx->pc = 0x1B32A0u;
    // 0x1b32a0: 0x860311f2  lh          $v1, 0x11F2($s0)
    ctx->pc = 0x1b32a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4594)));
    // 0x1b32a4: 0x860211f2  lh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b32a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4594)));
    // 0x1b32a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b32ac: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b32acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b32b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B32B0u;
    {
        const bool branch_taken_0x1b32b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b32b0) {
            ctx->pc = 0x1B32E0u;
            goto label_1b32e0;
        }
    }
    ctx->pc = 0x1B32B8u;
label_1b32b8:
    // 0x1b32b8: 0x860211f2  lh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b32b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4594)));
    // 0x1b32bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1b32bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b32c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b32c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b32c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b32c8: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1b32c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b32cc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1b32ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b32d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b32d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b32d4: 0x860211f2  lh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b32d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4594)));
    // 0x1b32d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b32dc: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b32dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
label_1b32e0:
    // 0x1b32e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b32e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b32e4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b32e8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b32e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b32ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B32ECu;
    {
        const bool branch_taken_0x1b32ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b32ec) {
            ctx->pc = 0x1B3338u;
            goto label_1b3338;
        }
    }
    ctx->pc = 0x1B32F4u;
    // 0x1b32f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b32f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b32f8: 0x9022ef66  lbu         $v0, -0x109A($at)
    ctx->pc = 0x1b32f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEF66u));
    // 0x1b32fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b32fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3304: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3304u;
    {
        const bool branch_taken_0x1b3304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3304) {
            ctx->pc = 0x1B332Cu;
            goto label_1b332c;
        }
    }
    ctx->pc = 0x1B330Cu;
    // 0x1b330c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B330Cu;
    {
        const bool branch_taken_0x1b330c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b330c) {
            ctx->pc = 0x1B331Cu;
            goto label_1b331c;
        }
    }
    ctx->pc = 0x1B3314u;
    // 0x1b3314: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3314u;
    {
        const bool branch_taken_0x1b3314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3314) {
            ctx->pc = 0x1B3338u;
            goto label_1b3338;
        }
    }
    ctx->pc = 0x1B331Cu;
label_1b331c:
    // 0x1b331c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b3320: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b3320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3324: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3324u;
    {
        const bool branch_taken_0x1b3324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3324) {
            ctx->pc = 0x1B3338u;
            goto label_1b3338;
        }
    }
    ctx->pc = 0x1B332Cu;
label_1b332c:
    // 0x1b332c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3330: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b3330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3334: 0x0  nop
    ctx->pc = 0x1b3334u;
    // NOP
label_1b3338:
    // 0x1b3338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b333c: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x1b333cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3340: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1b3340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b3344: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b3344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b3348: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1b3348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b334c: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1b334cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b3350: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3350u;
    SET_GPR_U32(ctx, 31, 0x1B3358u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3350u, 0x1B3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3358u;
label_1b3358:
    // 0x1b3358: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1b3358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b335c: 0xc7ad00c8  lwc1        $f13, 0xC8($sp)
    ctx->pc = 0x1b335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b3360: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B3360u;
    SET_GPR_U32(ctx, 31, 0x1B3368u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B3360u, 0x1B3368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3368u;
label_1b3368:
    // 0x1b3368: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b3368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b336c: 0x121e3c  dsll32      $v1, $s2, 24
    ctx->pc = 0x1b336cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
    // 0x1b3370: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1b3370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1b3374: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b3374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3378: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B3378u;
    {
        const bool branch_taken_0x1b3378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3378) {
            ctx->pc = 0x1B33C4u;
            goto label_1b33c4;
        }
    }
    ctx->pc = 0x1B3380u;
    // 0x1b3380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3384: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3384u;
    {
        const bool branch_taken_0x1b3384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3384) {
            ctx->pc = 0x1B339Cu;
            goto label_1b339c;
        }
    }
    ctx->pc = 0x1B338Cu;
    // 0x1b338c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B338Cu;
    {
        const bool branch_taken_0x1b338c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b338c) {
            ctx->pc = 0x1B339Cu;
            goto label_1b339c;
        }
    }
    ctx->pc = 0x1B3394u;
    // 0x1b3394: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B3394u;
    {
        const bool branch_taken_0x1b3394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3394) {
            ctx->pc = 0x1B33D8u;
            goto label_1b33d8;
        }
    }
    ctx->pc = 0x1B339Cu;
label_1b339c:
    // 0x1b339c: 0x12163c  dsll32      $v0, $s2, 24
    ctx->pc = 0x1b339cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 24));
    // 0x1b33a0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1b33a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1b33a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b33a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b33a8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b33ac: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b33acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b33b0: 0x26041200  addiu       $a0, $s0, 0x1200
    ctx->pc = 0x1b33b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x1b33b4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B33B4u;
    SET_GPR_U32(ctx, 31, 0x1B33BCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B33BCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B33BCu) { return; }
    ctx->pc = 0x1B33BCu;
label_1b33bc:
    // 0x1b33bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B33BCu;
    {
        const bool branch_taken_0x1b33bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b33bc) {
            ctx->pc = 0x1B33D8u;
            goto label_1b33d8;
        }
    }
    ctx->pc = 0x1B33C4u;
label_1b33c4:
    // 0x1b33c4: 0x26041200  addiu       $a0, $s0, 0x1200
    ctx->pc = 0x1b33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x1b33c8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1b33c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b33cc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B33CCu;
    SET_GPR_U32(ctx, 31, 0x1B33D4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B33D4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B33D4u) { return; }
    ctx->pc = 0x1B33D4u;
label_1b33d4:
    // 0x1b33d4: 0x0  nop
    ctx->pc = 0x1b33d4u;
    // NOP
label_1b33d8:
    // 0x1b33d8: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x1b33d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
    // 0x1b33dc: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b33dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b33e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b33e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b33e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b33e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b33e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B33E8u;
    {
        const bool branch_taken_0x1b33e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b33e8) {
            ctx->pc = 0x1B3450u;
            goto label_1b3450;
        }
    }
    ctx->pc = 0x1B33F0u;
    // 0x1b33f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b33f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b33f4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b33f8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b33f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b33fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B33FCu;
    {
        const bool branch_taken_0x1b33fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b33fc) {
            ctx->pc = 0x1B3410u;
            goto label_1b3410;
        }
    }
    ctx->pc = 0x1B3404u;
    // 0x1b3404: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x1b3404u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
    // 0x1b3408: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3408u;
    {
        const bool branch_taken_0x1b3408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3408) {
            ctx->pc = 0x1B3450u;
            goto label_1b3450;
        }
    }
    ctx->pc = 0x1B3410u;
label_1b3410:
    // 0x1b3410: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3414: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3418: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1b3418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b341c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B341Cu;
    {
        const bool branch_taken_0x1b341c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b341c) {
            ctx->pc = 0x1B3450u;
            goto label_1b3450;
        }
    }
    ctx->pc = 0x1B3424u;
    // 0x1b3424: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3428: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b342c: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x1b342cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1b3430: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3430u;
    {
        const bool branch_taken_0x1b3430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3430) {
            ctx->pc = 0x1B3450u;
            goto label_1b3450;
        }
    }
    ctx->pc = 0x1B3438u;
    // 0x1b3438: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b3438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b343c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1b343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1b3440: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b3440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b3444: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3444u;
    {
        const bool branch_taken_0x1b3444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3444) {
            ctx->pc = 0x1B3450u;
            goto label_1b3450;
        }
    }
    ctx->pc = 0x1B344Cu;
    // 0x1b344c: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x1b344cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
label_1b3450:
    // 0x1b3450: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3454: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3458: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b3458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b345c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B345Cu;
    {
        const bool branch_taken_0x1b345c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b345c) {
            ctx->pc = 0x1B3468u;
            goto label_1b3468;
        }
    }
    ctx->pc = 0x1B3464u;
    // 0x1b3464: 0x36730008  ori         $s3, $s3, 0x8
    ctx->pc = 0x1b3464u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
label_1b3468:
    // 0x1b3468: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b346c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b346cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b3470: 0xac221a68  sw          $v0, 0x1A68($at)
    ctx->pc = 0x1b3470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    // 0x1b3474: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3474u;
    {
        const bool branch_taken_0x1b3474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3474) {
            ctx->pc = 0x1B3498u;
            goto label_1b3498;
        }
    }
    ctx->pc = 0x1B347Cu;
label_1b347c:
    // 0x1b347c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b347cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b3480:
    // 0x1b3480: 0x92021219  lbu         $v0, 0x1219($s0)
    ctx->pc = 0x1b3480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4633)));
    // 0x1b3484: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3488: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b3488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b348c: 0x1440fe99  bnez        $v0, . + 4 + (-0x167 << 2)
    ctx->pc = 0x1B348Cu;
    {
        const bool branch_taken_0x1b348c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b348c) {
            ctx->pc = 0x1B2EF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2ef4;
        }
    }
    ctx->pc = 0x1B3494u;
    // 0x1b3494: 0x0  nop
    ctx->pc = 0x1b3494u;
    // NOP
label_1b3498:
    // 0x1b3498: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b3498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b349c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b34a0: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1b34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x1b34a4: 0x0  nop
    ctx->pc = 0x1b34a4u;
    // NOP
label_1b34a8:
    // 0x1b34a8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1b34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b34ac: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b34acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1b34b0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b34b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b34b4: 0x1440fe82  bnez        $v0, . + 4 + (-0x17E << 2)
    ctx->pc = 0x1B34B4u;
    {
        const bool branch_taken_0x1b34b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b34b4) {
            ctx->pc = 0x1B2EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2ec0;
        }
    }
    ctx->pc = 0x1B34BCu;
    // 0x1b34bc: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x1b34bcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1b34c0:
    // 0x1b34c0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b34c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b34c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b34c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b34c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b34c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b34cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b34ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b34d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b34d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b34d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b34d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b34d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b34d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b34dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b34dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b34e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b34e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b34e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b34e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b34e8: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x1b34e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1b34ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B34ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B34ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B34F4u;
}
