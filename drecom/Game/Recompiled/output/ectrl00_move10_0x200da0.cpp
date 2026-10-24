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

// Function: ectrl00_move10
// Address: 0x200da0 - 0x201154
void ectrl00_move10_0x200da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl00_move10_0x200da0");
#endif

    switch (ctx->pc) {
        case 0x200de4u: goto label_200de4;
        case 0x200e58u: goto label_200e58;
        case 0x200ea0u: goto label_200ea0;
        case 0x200ed4u: goto label_200ed4;
        case 0x200ee8u: goto label_200ee8;
        case 0x200fd8u: goto label_200fd8;
        case 0x201000u: goto label_201000;
        case 0x201010u: goto label_201010;
        case 0x20112cu: goto label_20112c;
        default: break;
    }

    ctx->pc = 0x200da0u;

    // 0x200da0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x200da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x200da4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x200da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x200da8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x200da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x200dac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x200dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x200db0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x200db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x200db4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x200db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x200dc0: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x200dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x200dc4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200dc8: 0x8c5500f4  lw          $s5, 0xF4($v0)
    ctx->pc = 0x200dc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x200dcc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200dd0: 0x8c5400c4  lw          $s4, 0xC4($v0)
    ctx->pc = 0x200dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x200dd4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200dd8: 0x8c5200f8  lw          $s2, 0xF8($v0)
    ctx->pc = 0x200dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x200ddc: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x200DDCu;
    {
        const bool branch_taken_0x200ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200ddc) {
            ctx->pc = 0x201008u;
            goto label_201008;
        }
    }
    ctx->pc = 0x200DE4u;
label_200de4:
    // 0x200de4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200de8: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x200de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200dec: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x200decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x200df0: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x200df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x200df4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200df8: 0x906200d0  lbu         $v0, 0xD0($v1)
    ctx->pc = 0x200df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x200dfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200e00: 0xa06200d0  sb          $v0, 0xD0($v1)
    ctx->pc = 0x200e00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 208), (uint8_t)GPR_U32(ctx, 2));
    // 0x200e04: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x200e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x200e08: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x200e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x200e0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x200e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200e10: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x200E10u;
    {
        const bool branch_taken_0x200e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x200e10) {
            ctx->pc = 0x200FC8u;
            goto label_200fc8;
        }
    }
    ctx->pc = 0x200E18u;
    // 0x200e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200e1c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x200E1Cu;
    {
        const bool branch_taken_0x200e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x200e1c) {
            ctx->pc = 0x200E80u;
            goto label_200e80;
        }
    }
    ctx->pc = 0x200E24u;
    // 0x200e24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x200e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x200e28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200E28u;
    {
        const bool branch_taken_0x200e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x200e28) {
            ctx->pc = 0x200E38u;
            goto label_200e38;
        }
    }
    ctx->pc = 0x200E30u;
    // 0x200e30: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x200E30u;
    {
        const bool branch_taken_0x200e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200e30) {
            ctx->pc = 0x200FC8u;
            goto label_200fc8;
        }
    }
    ctx->pc = 0x200E38u;
label_200e38:
    // 0x200e38: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200e3c: 0x8c5300f8  lw          $s3, 0xF8($v0)
    ctx->pc = 0x200e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x200e40: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200e44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x200e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x200e48: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x200e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x200e4c: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x200e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x200e50: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x200E50u;
    SET_GPR_U32(ctx, 31, 0x200E58u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x200E50u, 0x200E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E58u;
label_200e58:
    // 0x200e58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x200e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x200e5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200e60: 0x0  nop
    ctx->pc = 0x200e60u;
    // NOP
    // 0x200e64: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x200e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x200e68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200e6c: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x200e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200e70: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x200e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x200e74: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x200e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x200e78: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x200E78u;
    {
        const bool branch_taken_0x200e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200e78) {
            ctx->pc = 0x200FF8u;
            goto label_200ff8;
        }
    }
    ctx->pc = 0x200E80u;
label_200e80:
    // 0x200e80: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200e84: 0x8c5100f8  lw          $s1, 0xF8($v0)
    ctx->pc = 0x200e84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x200e88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200e8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x200e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x200e90: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x200e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x200e94: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x200e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x200e98: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x200E98u;
    SET_GPR_U32(ctx, 31, 0x200EA0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x200E98u, 0x200EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EA0u;
label_200ea0:
    // 0x200ea0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x200ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x200ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200ea8: 0x0  nop
    ctx->pc = 0x200ea8u;
    // NOP
    // 0x200eac: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x200eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x200eb0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x200eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x200eb4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x200eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x200eb8: 0x1202003d  beq         $s0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x200EB8u;
    {
        const bool branch_taken_0x200eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x200eb8) {
            ctx->pc = 0x200FB0u;
            goto label_200fb0;
        }
    }
    ctx->pc = 0x200EC0u;
    // 0x200ec0: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x200ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x200ec4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x200ec4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x200ec8: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x200ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x200ecc: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x200ECCu;
    SET_GPR_U32(ctx, 31, 0x200ED4u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x200ED4u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200ED4u) { return; }
    ctx->pc = 0x200ED4u;
label_200ed4:
    // 0x200ed4: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x200ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x200ed8: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x200ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x200edc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x200edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x200ee0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x200EE0u;
    SET_GPR_U32(ctx, 31, 0x200EE8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x200EE8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200EE8u) { return; }
    ctx->pc = 0x200EE8u;
label_200ee8:
    // 0x200ee8: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x200ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200eec: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x200eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x200ef0: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x200ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200ef4: 0xe6000228  swc1        $f0, 0x228($s0)
    ctx->pc = 0x200ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x200ef8: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x200ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200efc: 0xe600022c  swc1        $f0, 0x22C($s0)
    ctx->pc = 0x200efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    // 0x200f00: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x200f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f04: 0xe6000234  swc1        $f0, 0x234($s0)
    ctx->pc = 0x200f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
    // 0x200f08: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x200f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x200f0c: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x200f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x200f10: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x200f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f14: 0xe6000238  swc1        $f0, 0x238($s0)
    ctx->pc = 0x200f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 568), bits); }
    // 0x200f18: 0x92220084  lbu         $v0, 0x84($s1)
    ctx->pc = 0x200f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x200f1c: 0xa2020240  sb          $v0, 0x240($s0)
    ctx->pc = 0x200f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 576), (uint8_t)GPR_U32(ctx, 2));
    // 0x200f20: 0x92220086  lbu         $v0, 0x86($s1)
    ctx->pc = 0x200f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 134)));
    // 0x200f24: 0xa2020242  sb          $v0, 0x242($s0)
    ctx->pc = 0x200f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 578), (uint8_t)GPR_U32(ctx, 2));
    // 0x200f28: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x200f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f2c: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x200f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x200f30: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x200f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f34: 0xe600018c  swc1        $f0, 0x18C($s0)
    ctx->pc = 0x200f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 396), bits); }
    // 0x200f38: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x200f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f3c: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x200f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x200f40: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x200f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f44: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x200f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x200f48: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x200f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x200f4c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x200f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200f50: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x200f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x200f54: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x200f54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x200f58: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x200f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x200f5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x200f5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200f60: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x200f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x200f64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x200f64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x200f68: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x200f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x200f6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x200f6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200f70: 0x260200f0  addiu       $v0, $s0, 0xF0
    ctx->pc = 0x200f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x200f74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x200f74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x200f78: 0x26420060  addiu       $v0, $s2, 0x60
    ctx->pc = 0x200f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x200f7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x200f7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200f80: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x200f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x200f84: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x200f84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x200f88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200f8c: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x200f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x200f90: 0x960201a8  lhu         $v0, 0x1A8($s0)
    ctx->pc = 0x200f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x200f94: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x200f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x200f98: 0xa60201a8  sh          $v0, 0x1A8($s0)
    ctx->pc = 0x200f98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 424), (uint16_t)GPR_U32(ctx, 2));
    // 0x200f9c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200fa0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x200fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x200fa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200fa8: 0xac6200cc  sw          $v0, 0xCC($v1)
    ctx->pc = 0x200fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 2));
    // 0x200fac: 0x0  nop
    ctx->pc = 0x200facu;
    // NOP
label_200fb0:
    // 0x200fb0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200fb4: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x200fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200fb8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x200fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x200fbc: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x200fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x200fc0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x200FC0u;
    {
        const bool branch_taken_0x200fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200fc0) {
            ctx->pc = 0x200FF8u;
            goto label_200ff8;
        }
    }
    ctx->pc = 0x200FC8u;
label_200fc8:
    // 0x200fc8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x200fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x200fcc: 0x24440cf0  addiu       $a0, $v0, 0xCF0
    ctx->pc = 0x200fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x200fd0: 0xc046760  jal         func_119D80
    ctx->pc = 0x200FD0u;
    SET_GPR_U32(ctx, 31, 0x200FD8u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x200FD8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x200FD8u) { return; }
    ctx->pc = 0x200FD8u;
label_200fd8:
    // 0x200fd8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200fdc: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x200fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200fe0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x200fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x200fe4: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x200fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x200fe8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200fec: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x200fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200ff0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x200ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x200ff4: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x200ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
label_200ff8:
    // 0x200ff8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200ffc: 0x8c5200f8  lw          $s2, 0xF8($v0)
    ctx->pc = 0x200ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_201000:
    // 0x201000: 0x0  nop
    ctx->pc = 0x201000u;
    // NOP
    // 0x201004: 0x0  nop
    ctx->pc = 0x201004u;
    // NOP
label_201008:
    // 0x201008: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20100c: 0x904200d0  lbu         $v0, 0xD0($v0)
    ctx->pc = 0x20100cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 208)));
label_201010:
    // 0x201010: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x201010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201014: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201018: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x201018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x20101c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x201020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201024: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x201024u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x201028: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x201028u;
    {
        const bool branch_taken_0x201028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x201028) {
            ctx->pc = 0x201050u;
            goto label_201050;
        }
    }
    ctx->pc = 0x201030u;
    // 0x201030: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x201030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x201034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x201034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201038: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x201038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20103c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x20103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201040: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x201040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x201044: 0x1062ff67  beq         $v1, $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x201044u;
    {
        const bool branch_taken_0x201044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201044) {
            ctx->pc = 0x200DE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200de4;
        }
    }
    ctx->pc = 0x20104Cu;
    // 0x20104c: 0x0  nop
    ctx->pc = 0x20104cu;
    // NOP
label_201050:
    // 0x201050: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201054: 0x904200d1  lbu         $v0, 0xD1($v0)
    ctx->pc = 0x201054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 209)));
    // 0x201058: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x201058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20105c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20105Cu;
    {
        const bool branch_taken_0x20105c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20105c) {
            ctx->pc = 0x2010A4u;
            goto label_2010a4;
        }
    }
    ctx->pc = 0x201064u;
    // 0x201064: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201068: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x201068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x20106c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20106Cu;
    {
        const bool branch_taken_0x20106c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20106c) {
            ctx->pc = 0x201100u;
            goto label_201100;
        }
    }
    ctx->pc = 0x201074u;
    // 0x201074: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201078: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x201078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x20107c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x20107cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x201080: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x201080u;
    {
        const bool branch_taken_0x201080 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201080) {
            ctx->pc = 0x201100u;
            goto label_201100;
        }
    }
    ctx->pc = 0x201088u;
    // 0x201088: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20108c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201090: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x201090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x201094: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201098: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x201098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x20109c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20109Cu;
    {
        const bool branch_taken_0x20109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20109c) {
            ctx->pc = 0x201100u;
            goto label_201100;
        }
    }
    ctx->pc = 0x2010A4u;
label_2010a4:
    // 0x2010a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010a8: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x2010a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2010ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010b0: 0x904200d1  lbu         $v0, 0xD1($v0)
    ctx->pc = 0x2010b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 209)));
    // 0x2010b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2010b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2010b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2010b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2010bc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2010BCu;
    {
        const bool branch_taken_0x2010bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2010bc) {
            ctx->pc = 0x201100u;
            goto label_201100;
        }
    }
    ctx->pc = 0x2010C4u;
    // 0x2010c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010c8: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x2010c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2010cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2010ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2010d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010d4: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x2010d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
    // 0x2010d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2010d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010dc: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x2010dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x2010e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2010e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2010e4: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x2010e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x2010e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010ec: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x2010ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x2010f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010f4: 0xa04000d0  sb          $zero, 0xD0($v0)
    ctx->pc = 0x2010f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x2010f8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010fc: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x2010fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
label_201100:
    // 0x201100: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x201100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201104: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x201104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x201108: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20110c: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x20110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x201110: 0x34421415  ori         $v0, $v0, 0x1415
    ctx->pc = 0x201110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5141);
    // 0x201114: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x201114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201118: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20111c: 0x24450d08  addiu       $a1, $v0, 0xD08
    ctx->pc = 0x20111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3336));
    // 0x201120: 0x8cc600cc  lw          $a2, 0xCC($a2)
    ctx->pc = 0x201120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x201124: 0xc059b14  jal         func_166C50
    ctx->pc = 0x201124u;
    SET_GPR_U32(ctx, 31, 0x20112Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201124u, 0x20112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20112Cu;
label_20112c:
    // 0x20112c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x20112cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201130: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x201130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201134: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x201134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201138: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20113c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20113cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201148: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x201148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20114c: 0x3e00008  jr          $ra
    ctx->pc = 0x20114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201154u;
}
