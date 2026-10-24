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

// Function: Em0c_R1_mv05
// Address: 0x226c70 - 0x2270a8
void Em0c_R1_mv05_0x226c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv05_0x226c70");
#endif

    switch (ctx->pc) {
        case 0x226ce4u: goto label_226ce4;
        case 0x226d38u: goto label_226d38;
        case 0x226d6cu: goto label_226d6c;
        case 0x226d98u: goto label_226d98;
        case 0x226e6cu: goto label_226e6c;
        case 0x226e88u: goto label_226e88;
        case 0x226ea0u: goto label_226ea0;
        case 0x226eacu: goto label_226eac;
        case 0x226f50u: goto label_226f50;
        case 0x226f74u: goto label_226f74;
        default: break;
    }

    ctx->pc = 0x226c70u;

    // 0x226c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x226c74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x226c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x226c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x226c7c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x226c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x226c80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226c84: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x226c84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x226c88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x226c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x226c8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226c90: 0x1083006b  beq         $a0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x226C90u;
    {
        const bool branch_taken_0x226c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x226c90) {
            ctx->pc = 0x226E40u;
            goto label_226e40;
        }
    }
    ctx->pc = 0x226C98u;
    // 0x226c98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226C98u;
    {
        const bool branch_taken_0x226c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c98) {
            ctx->pc = 0x226CA8u;
            goto label_226ca8;
        }
    }
    ctx->pc = 0x226CA0u;
    // 0x226ca0: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x226CA0u;
    {
        const bool branch_taken_0x226ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226ca0) {
            ctx->pc = 0x226F94u;
            goto label_226f94;
        }
    }
    ctx->pc = 0x226CA8u;
label_226ca8:
    // 0x226ca8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226cac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x226cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x226cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x226cb4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x226cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x226cb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226cbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226cc0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x226cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x226cc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226cc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x226cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226ccc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x226cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x226cd0: 0x2406781e  addiu       $a2, $zero, 0x781E
    ctx->pc = 0x226cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30750));
    // 0x226cd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x226cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226cd8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x226cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x226cdc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x226CDCu;
    SET_GPR_U32(ctx, 31, 0x226CE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x226CDCu, 0x226CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CE4u;
label_226ce4:
    // 0x226ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ce8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226cec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226cf0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x226cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x226cf4: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x226cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x226cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226cfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226d00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226d04: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x226d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x226d08: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x226d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x226d0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226d10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226d14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226d18: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x226d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x226d1c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x226d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x226d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226d24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226d28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226d2c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x226d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x226d30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226D30u;
    SET_GPR_U32(ctx, 31, 0x226D38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226D30u, 0x226D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D38u;
label_226d38:
    // 0x226d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x226d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226d3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x226d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226d40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x226D40u;
    {
        const bool branch_taken_0x226d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226d40) {
            ctx->pc = 0x226D74u;
            goto label_226d74;
        }
    }
    ctx->pc = 0x226D48u;
    // 0x226d48: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x226d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x226d4c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x226d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x226d50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x226d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226d54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226d58: 0x24040516  addiu       $a0, $zero, 0x516
    ctx->pc = 0x226d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
    // 0x226d5c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x226d60: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x226d60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226d64: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x226D64u;
    SET_GPR_U32(ctx, 31, 0x226D6Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x226D64u, 0x226D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D6Cu;
label_226d6c:
    // 0x226d6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x226D6Cu;
    {
        const bool branch_taken_0x226d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226d6c) {
            ctx->pc = 0x226D98u;
            goto label_226d98;
        }
    }
    ctx->pc = 0x226D74u;
label_226d74:
    // 0x226d74: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x226d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x226d78: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x226d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x226d7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x226d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226d80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226d84: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x226d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x226d88: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x226d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x226d8c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x226d8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226d90: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x226D90u;
    SET_GPR_U32(ctx, 31, 0x226D98u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x226D90u, 0x226D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D98u;
label_226d98:
    // 0x226d98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226d9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226da0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226da4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x226da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x226da8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226dac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226db0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226db4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x226db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x226db8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226dbc: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x226dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x226dc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x226dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x226dc4: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x226dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x226dc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x226dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x226dcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x226dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x226dd0: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x226dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x226dd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226dd8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x226dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226ddc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x226ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x226de0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x226de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x226de4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x226de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x226de8: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x226de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x226dec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226df0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226df4: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x226df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x226df8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x226df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x226dfc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x226dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x226e00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x226E00u;
    {
        const bool branch_taken_0x226e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226e00) {
            ctx->pc = 0x226E40u;
            goto label_226e40;
        }
    }
    ctx->pc = 0x226E08u;
    // 0x226e08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e0c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x226e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226e10: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x226e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x226e14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226e18: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x226e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226e1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x226e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x226e20: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x226e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x226e24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e28: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x226e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226e2c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x226e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x226e30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226e34: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x226e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226e38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x226e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x226e3c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x226e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_226e40:
    // 0x226e40: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x226e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x226e44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x226e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x226e48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x226e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x226e4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e54: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x226e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x226e58: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x226e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226e5c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x226e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x226e60: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x226e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x226e64: 0xc05c848  jal         func_172120
    ctx->pc = 0x226E64u;
    SET_GPR_U32(ctx, 31, 0x226E6Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x226E64u, 0x226E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E6Cu;
label_226e6c:
    // 0x226e6c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x226e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x226e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e74: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x226e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226e78: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x226e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226e7c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x226e7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226e80: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x226E80u;
    SET_GPR_U32(ctx, 31, 0x226E88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x226E80u, 0x226E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E88u;
label_226e88:
    // 0x226e88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e8c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x226e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x226e90: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x226e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x226e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x226e98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x226E98u;
    SET_GPR_U32(ctx, 31, 0x226EA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x226E98u, 0x226EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EA0u;
label_226ea0:
    // 0x226ea0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x226ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226ea4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x226EA4u;
    SET_GPR_U32(ctx, 31, 0x226EACu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x226EA4u, 0x226EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EACu;
label_226eac:
    // 0x226eac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226eb0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x226eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x226eb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x226eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x226eb8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x226eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x226ebc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x226EBCu;
    {
        const bool branch_taken_0x226ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226ebc) {
            ctx->pc = 0x226F08u;
            goto label_226f08;
        }
    }
    ctx->pc = 0x226EC4u;
    // 0x226ec4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226ec8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x226ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x226ecc: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x226eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x226ed0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x226ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x226ed4: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x226ed4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x226ed8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x226ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x226edc: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x226edcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x226ee0: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x226ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x226ee4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x226ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x226ee8: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x226ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x226eec: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x226eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x226ef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ef4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x226ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x226ef8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x226ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x226efc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226f00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f04: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x226f04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_226f08:
    // 0x226f08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f0c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x226f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x226f10: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x226F10u;
    {
        const bool branch_taken_0x226f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226f10) {
            ctx->pc = 0x226F94u;
            goto label_226f94;
        }
    }
    ctx->pc = 0x226F18u;
    // 0x226f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226f1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x226f20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x226f24: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x226f28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f2c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x226f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x226f30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f34: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x226f34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226f38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f3c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x226f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x226f40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x226f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x226f48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226F48u;
    SET_GPR_U32(ctx, 31, 0x226F50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226F48u, 0x226F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F50u;
label_226f50:
    // 0x226f50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x226f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226f54: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x226f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x226f58: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x226f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x226f5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226f60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226f60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226f64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f68: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x226f68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x226f6c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226F6Cu;
    SET_GPR_U32(ctx, 31, 0x226F74u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226F6Cu, 0x226F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F74u;
label_226f74:
    // 0x226f74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226f78: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x226f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x226f7c: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x226f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x226f80: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x226f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x226f84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x226f84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x226f88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226f90: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x226f90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_226f94:
    // 0x226f94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226f9c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226fa4: 0x0  nop
    ctx->pc = 0x226fa4u;
    // NOP
    // 0x226fa8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x226fa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226fac: 0x0  nop
    ctx->pc = 0x226facu;
    // NOP
    // 0x226fb0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x226FB0u;
    {
        const bool branch_taken_0x226fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226fb0) {
            ctx->pc = 0x227094u;
            goto label_227094;
        }
    }
    ctx->pc = 0x226FB8u;
    // 0x226fb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226fbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226fc0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226fc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226fc8: 0x0  nop
    ctx->pc = 0x226fc8u;
    // NOP
    // 0x226fcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226fd0: 0x0  nop
    ctx->pc = 0x226fd0u;
    // NOP
    // 0x226fd4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x226FD4u;
    {
        const bool branch_taken_0x226fd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226fd4) {
            ctx->pc = 0x22703Cu;
            goto label_22703c;
        }
    }
    ctx->pc = 0x226FDCu;
    // 0x226fdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226fe0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x226fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226fe4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x226fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226fe8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x226fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x226fec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x226fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x226ff0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ff4: 0x0  nop
    ctx->pc = 0x226ff4u;
    // NOP
    // 0x226ff8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226ffc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x226ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x227000: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x227000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x227004: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227008: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x227008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22700c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22700cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227010: 0x0  nop
    ctx->pc = 0x227010u;
    // NOP
    // 0x227014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x227014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227018: 0x0  nop
    ctx->pc = 0x227018u;
    // NOP
    // 0x22701c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22701Cu;
    {
        const bool branch_taken_0x22701c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22701c) {
            ctx->pc = 0x227094u;
            goto label_227094;
        }
    }
    ctx->pc = 0x227024u;
    // 0x227024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227028: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x227028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22702c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227030: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x227030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x227034: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x227034u;
    {
        const bool branch_taken_0x227034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227034) {
            ctx->pc = 0x227094u;
            goto label_227094;
        }
    }
    ctx->pc = 0x22703Cu;
label_22703c:
    // 0x22703c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x227040: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227044: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x227044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227048: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x227048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22704c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22704cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x227050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227054: 0x0  nop
    ctx->pc = 0x227054u;
    // NOP
    // 0x227058: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x227058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22705c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22705cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x227060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x227060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x227064: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227068: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x227068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22706c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22706cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227070: 0x0  nop
    ctx->pc = 0x227070u;
    // NOP
    // 0x227074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227078: 0x0  nop
    ctx->pc = 0x227078u;
    // NOP
    // 0x22707c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22707Cu;
    {
        const bool branch_taken_0x22707c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22707c) {
            ctx->pc = 0x227094u;
            goto label_227094;
        }
    }
    ctx->pc = 0x227084u;
    // 0x227084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227088: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x227088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22708c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227090: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x227090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_227094:
    // 0x227094: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x227094u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22709c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22709cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2270a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2270A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2270A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2270A8u;
}
