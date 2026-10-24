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

// Function: caseD_2
// Address: 0x208d48 - 0x208e38
void caseD_2_0x208d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x208d48");
#endif

    switch (ctx->pc) {
        case 0x208dc0u: goto label_208dc0;
        default: break;
    }

    ctx->pc = 0x208d48u;

    // 0x208d48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208d4c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x208d4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x208d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x208d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x208d54: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x208d54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x208d58: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x208d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x208d5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x208d5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x208d60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x208d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x208d64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x208d64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x208d68: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x208d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x208d6c: 0x142001cc  bnez        $at, . + 4 + (0x1CC << 2)
    ctx->pc = 0x208D6Cu;
    {
        const bool branch_taken_0x208d6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x208d6c) {
            ctx->pc = 0x2094A0u;
            return;
        }
    }
    ctx->pc = 0x208D74u;
    // 0x208d74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x208d78: 0x24429420  addiu       $v0, $v0, -0x6BE0
    ctx->pc = 0x208d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939680));
    // 0x208d7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x208d7cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x619420u));
    // 0x208d80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208d84: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x208d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x208d88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x208d88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x208d8c: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x208d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
    // 0x208d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208d94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208d98: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x208d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x208d9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208da0: 0xc4219480  lwc1        $f1, -0x6B80($at)
    ctx->pc = 0x208da0u;
    { uint32_t bits = FAST_READ32(0x619480u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208da4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x208da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x208da8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x208da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x208dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208db0: 0x0  nop
    ctx->pc = 0x208db0u;
    // NOP
    // 0x208db4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x208db4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x208db8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x208DB8u;
    SET_GPR_U32(ctx, 31, 0x208DC0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x208DB8u, 0x208DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DC0u;
label_208dc0:
    // 0x208dc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208dc4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x208dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x208dc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208dcc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x208dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x208dd0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x208dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x208dd4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x208dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x208dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208ddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208de0: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x208de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x208de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208de8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208dec: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x208decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x208df0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208df4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208df8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x208df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x208dfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208e00: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x208e00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x208e04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x208e08: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x208e08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x208e0c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x208e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x208e10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x208e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x208e14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x208e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x208e18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x208e1c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x208e1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x208e20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x208e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208e24: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x208e24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x208e28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x208e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x208e2c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x208e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x208e30: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x208E30u;
    {
        const bool branch_taken_0x208e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e30) {
            ctx->pc = 0x2094A0u;
            return;
        }
    }
    ctx->pc = 0x208E38u;
}
