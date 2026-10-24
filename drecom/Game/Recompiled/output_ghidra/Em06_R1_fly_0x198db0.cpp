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

// Function: Em06_R1_fly
// Address: 0x198db0 - 0x1990c0
void Em06_R1_fly_0x198db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_fly_0x198db0");
#endif

    switch (ctx->pc) {
        case 0x198e34u: goto label_198e34;
        case 0x198eb8u: goto label_198eb8;
        case 0x198edcu: goto label_198edc;
        case 0x198f28u: goto label_198f28;
        case 0x198f3cu: goto label_198f3c;
        case 0x198f80u: goto label_198f80;
        case 0x198f8cu: goto label_198f8c;
        case 0x1990a4u: goto label_1990a4;
        case 0x1990b0u: goto label_1990b0;
        default: break;
    }

    ctx->pc = 0x198db0u;

    // 0x198db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198db4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x198db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x198db8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x198db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x198dbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198dc0: 0x0  nop
    ctx->pc = 0x198dc0u;
    // NOP
    // 0x198dc4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x198dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x198dc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198dcc: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x198dccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x198dd0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x198dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x198dd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x198dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x198dd8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x198DD8u;
    {
        const bool branch_taken_0x198dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198dd8) {
            ctx->pc = 0x198DECu;
            goto label_198dec;
        }
    }
    ctx->pc = 0x198DE0u;
    // 0x198de0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198de4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x198de4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198de8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x198de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_198dec:
    // 0x198dec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198df0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x198df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x198df4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x198df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x198df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198dfc: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x198DFCu;
    {
        const bool branch_taken_0x198dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x198dfc) {
            ctx->pc = 0x198E6Cu;
            goto label_198e6c;
        }
    }
    ctx->pc = 0x198E04u;
    // 0x198e04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198E04u;
    {
        const bool branch_taken_0x198e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e04) {
            ctx->pc = 0x198E14u;
            goto label_198e14;
        }
    }
    ctx->pc = 0x198E0Cu;
    // 0x198e0c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x198E0Cu;
    {
        const bool branch_taken_0x198e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e0c) {
            ctx->pc = 0x1990B0u;
            goto label_1990b0;
        }
    }
    ctx->pc = 0x198E14u;
label_198e14:
    // 0x198e14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x198e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x198e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x198e20: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x198e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x198e24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x198e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198e28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x198e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x198e2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x198E2Cu;
    SET_GPR_U32(ctx, 31, 0x198E34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x198E2Cu, 0x198E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E34u;
label_198e34:
    // 0x198e34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e3c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x198e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x198e40: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x198e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x198e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e4c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x198e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x198e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e58: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x198e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x198e5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e60: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x198e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x198e64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198e68: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x198e68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_198e6c:
    // 0x198e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e74: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x198e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x198e78: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x198e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x198e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e84: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x198e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x198e88: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x198e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x198e8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x198e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e90: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x198e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e98: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x198e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x198e9c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x198e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x198ea0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x198ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x198ea4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x198ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x198ea8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x198ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198eac: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x198eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x198eb0: 0xc05c848  jal         func_172120
    ctx->pc = 0x198EB0u;
    SET_GPR_U32(ctx, 31, 0x198EB8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x198EB0u, 0x198EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198EB8u;
label_198eb8:
    // 0x198eb8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x198eb8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x198ebc: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x198ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x198ec0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x198ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x198ec4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x198ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x198ec8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198ecc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x198eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x198ed0: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x198ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x198ed4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x198ED4u;
    SET_GPR_U32(ctx, 31, 0x198EDCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x198ED4u, 0x198EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198EDCu;
label_198edc:
    // 0x198edc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198ee0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x198ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x198ee4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x198ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x198ee8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198eec: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x198eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x198ef0: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x198ef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x198ef4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x198ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x198ef8: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x198ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x198efc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x198efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f00: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x198f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f08: 0x3c023d13  lui         $v0, 0x3D13
    ctx->pc = 0x198f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15635 << 16));
    // 0x198f0c: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x198f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
    // 0x198f10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x198f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x198f14: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x198f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x198f18: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x198f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198f1c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x198f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x198f20: 0xc05c848  jal         func_172120
    ctx->pc = 0x198F20u;
    SET_GPR_U32(ctx, 31, 0x198F28u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x198F20u, 0x198F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F28u;
label_198f28:
    // 0x198f28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f2c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x198f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198f30: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x198f30u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198f34: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x198F34u;
    SET_GPR_U32(ctx, 31, 0x198F3Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x198F34u, 0x198F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F3Cu;
label_198f3c:
    // 0x198f3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f40: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x198f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x198f44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198f48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f4c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x198f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x198f50: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x198f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x198f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198f58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f5c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x198f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x198f60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x198f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f6c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x198f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x198f70: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x198f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x198f74: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x198f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198f78: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x198F78u;
    SET_GPR_U32(ctx, 31, 0x198F80u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x198F80u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x198F80u) { return; }
    ctx->pc = 0x198F80u;
label_198f80:
    // 0x198f80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x198f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198f84: 0xc05cd10  jal         func_173440
    ctx->pc = 0x198F84u;
    SET_GPR_U32(ctx, 31, 0x198F8Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x198F84u, 0x198F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F8Cu;
label_198f8c:
    // 0x198f8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198f90: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x198f94: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x198f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x198f98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x198f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x198f9c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x198F9Cu;
    {
        const bool branch_taken_0x198f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f9c) {
            ctx->pc = 0x199024u;
            goto label_199024;
        }
    }
    ctx->pc = 0x198FA4u;
    // 0x198fa4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198fa8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x198fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198fac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198fb0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x198fb0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198fb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198fb8: 0x0  nop
    ctx->pc = 0x198fb8u;
    // NOP
    // 0x198fbc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x198FBCu;
    {
        const bool branch_taken_0x198fbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198fbc) {
            ctx->pc = 0x198FE8u;
            goto label_198fe8;
        }
    }
    ctx->pc = 0x198FC4u;
    // 0x198fc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198fc8: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x198fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198fcc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x198fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x198fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198fd4: 0x0  nop
    ctx->pc = 0x198fd4u;
    // NOP
    // 0x198fd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198fdc: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x198fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x198fe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x198FE0u;
    {
        const bool branch_taken_0x198fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198fe0) {
            ctx->pc = 0x199004u;
            goto label_199004;
        }
    }
    ctx->pc = 0x198FE8u;
label_198fe8:
    // 0x198fe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198fec: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x198fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198ff0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x198ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x198ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198ff8: 0x0  nop
    ctx->pc = 0x198ff8u;
    // NOP
    // 0x198ffc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x198ffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x199000: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x199000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_199004:
    // 0x199004: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199008: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19900c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199010: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199014: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199018: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19901c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19901Cu;
    {
        const bool branch_taken_0x19901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19901c) {
            ctx->pc = 0x199094u;
            goto label_199094;
        }
    }
    ctx->pc = 0x199024u;
label_199024:
    // 0x199024: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199028: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x199028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19902c: 0x3c0245da  lui         $v0, 0x45DA
    ctx->pc = 0x19902cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17882 << 16));
    // 0x199030: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x199030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x199034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199038: 0x0  nop
    ctx->pc = 0x199038u;
    // NOP
    // 0x19903c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19903cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199040: 0x0  nop
    ctx->pc = 0x199040u;
    // NOP
    // 0x199044: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x199044u;
    {
        const bool branch_taken_0x199044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199044) {
            ctx->pc = 0x199070u;
            goto label_199070;
        }
    }
    ctx->pc = 0x19904Cu;
    // 0x19904c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199050: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x199050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199054: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x199054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x199058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19905c: 0x0  nop
    ctx->pc = 0x19905cu;
    // NOP
    // 0x199060: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x199064: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x199064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x199068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199068u;
    {
        const bool branch_taken_0x199068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199068) {
            ctx->pc = 0x19907Cu;
            goto label_19907c;
        }
    }
    ctx->pc = 0x199070u;
label_199070:
    // 0x199070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x199070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199074: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199078: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x199078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_19907c:
    // 0x19907c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199080: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199084: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199088: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19908c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19908cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199090: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_199094:
    // 0x199094: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199098: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x199098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19909c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19909Cu;
    SET_GPR_U32(ctx, 31, 0x1990A4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19909Cu, 0x1990A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990A4u;
label_1990a4:
    // 0x1990a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1990a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1990a8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x1990A8u;
    SET_GPR_U32(ctx, 31, 0x1990B0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x1990A8u, 0x1990B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990B0u;
label_1990b0:
    // 0x1990b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1990b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1990b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1990b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1990b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1990B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1990B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1990C0u;
}
