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

// Function: Em05_R1_land
// Address: 0x207a30 - 0x208008
void Em05_R1_land_0x207a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_land_0x207a30");
#endif

    switch (ctx->pc) {
        case 0x207aa0u: goto label_207aa0;
        case 0x207b48u: goto label_207b48;
        case 0x207b7cu: goto label_207b7c;
        case 0x207be4u: goto label_207be4;
        case 0x207c00u: goto label_207c00;
        case 0x207c2cu: goto label_207c2c;
        case 0x207c38u: goto label_207c38;
        case 0x207cb8u: goto label_207cb8;
        case 0x207d28u: goto label_207d28;
        case 0x207d38u: goto label_207d38;
        case 0x207d60u: goto label_207d60;
        case 0x207d88u: goto label_207d88;
        case 0x207da0u: goto label_207da0;
        case 0x207dc8u: goto label_207dc8;
        case 0x207e78u: goto label_207e78;
        case 0x207eb8u: goto label_207eb8;
        case 0x207ec8u: goto label_207ec8;
        case 0x207efcu: goto label_207efc;
        case 0x207f08u: goto label_207f08;
        case 0x207f50u: goto label_207f50;
        case 0x207f80u: goto label_207f80;
        case 0x207f98u: goto label_207f98;
        case 0x207fa4u: goto label_207fa4;
        default: break;
    }

    ctx->pc = 0x207a30u;

    // 0x207a30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x207a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x207a34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x207a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x207a38: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x207a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x207a3c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207a40: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x207a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x207a44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x207a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x207a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207a4c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x207A4Cu;
    {
        const bool branch_taken_0x207a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x207a4c) {
            ctx->pc = 0x207AC0u;
            goto label_207ac0;
        }
    }
    ctx->pc = 0x207A54u;
    // 0x207a54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207A54u;
    {
        const bool branch_taken_0x207a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x207a54) {
            ctx->pc = 0x207A64u;
            goto label_207a64;
        }
    }
    ctx->pc = 0x207A5Cu;
    // 0x207a5c: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x207A5Cu;
    {
        const bool branch_taken_0x207a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207a5c) {
            ctx->pc = 0x207FF8u;
            goto label_207ff8;
        }
    }
    ctx->pc = 0x207A64u;
label_207a64:
    // 0x207a64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207a68: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207a6c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x207a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x207a70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x207a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x207a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207a78: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207a7c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x207a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x207a80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207a84: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207a88: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x207a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x207a8c: 0x2406640a  addiu       $a2, $zero, 0x640A
    ctx->pc = 0x207a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25610));
    // 0x207a90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x207a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207a94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x207a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x207a98: 0xc0965d0  jal         func_259740
    ctx->pc = 0x207A98u;
    SET_GPR_U32(ctx, 31, 0x207AA0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x207A98u, 0x207AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207AA0u;
label_207aa0:
    // 0x207aa0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207aa4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x207aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x207aa8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207aac: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x207aacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x207ab0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ab4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x207ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x207ab8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207abc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x207abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_207ac0:
    // 0x207ac0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ac4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207ac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207acc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x207accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x207ad0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x207AD0u;
    {
        const bool branch_taken_0x207ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ad0) {
            ctx->pc = 0x207CB8u;
            goto label_207cb8;
        }
    }
    ctx->pc = 0x207AD8u;
    // 0x207ad8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207adc: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x207adcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x207ae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207ae4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x207ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x207ae8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207aec: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x207aecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x207af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207af4: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x207af4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x207af8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207afc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x207afcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x207b00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x207b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207b04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x207b04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x207b08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x207b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x207b0c: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x207B0Cu;
    {
        const bool branch_taken_0x207b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x207b0c) {
            ctx->pc = 0x207CB8u;
            goto label_207cb8;
        }
    }
    ctx->pc = 0x207B14u;
    // 0x207b14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207b18: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x207b18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x207b1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207b20: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x207b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x207b24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x207b24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207b28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207b2c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x207b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x207b30: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x207b30u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x207b34: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207b38: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x207b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207b3c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x207b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x207b40: 0xc06765c  jal         func_19D970
    ctx->pc = 0x207B40u;
    SET_GPR_U32(ctx, 31, 0x207B48u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x207B40u, 0x207B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B48u;
label_207b48:
    // 0x207b48: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x207b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x207b4c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x207b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x207b50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x207b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207b54: 0x0  nop
    ctx->pc = 0x207b54u;
    // NOP
    // 0x207b58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x207b58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x207b5c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x207b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207b60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x207b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x207b64: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x207b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x207b68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207b6c: 0x24449280  addiu       $a0, $v0, -0x6D80
    ctx->pc = 0x207b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x207b70: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x207b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207b74: 0xc067844  jal         func_19E110
    ctx->pc = 0x207B74u;
    SET_GPR_U32(ctx, 31, 0x207B7Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x207B74u, 0x207B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B7Cu;
label_207b7c:
    // 0x207b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207b80: 0x0  nop
    ctx->pc = 0x207b80u;
    // NOP
    // 0x207b84: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x207b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x207b88: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x207b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x207b8c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x207b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x207b90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207b94: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x207b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x207b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207b9c: 0x0  nop
    ctx->pc = 0x207b9cu;
    // NOP
    // 0x207ba0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x207ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x207ba4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x207ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x207ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207bac: 0x0  nop
    ctx->pc = 0x207bacu;
    // NOP
    // 0x207bb0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x207bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x207bb4: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x207bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x207bb8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x207bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x207bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207bc0: 0x0  nop
    ctx->pc = 0x207bc0u;
    // NOP
    // 0x207bc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x207bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x207bc8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x207bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x207bcc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x207bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207bd0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207bd4: 0x24459280  addiu       $a1, $v0, -0x6D80
    ctx->pc = 0x207bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x207bd8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x207bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207bdc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x207BDCu;
    SET_GPR_U32(ctx, 31, 0x207BE4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x207BE4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x207BE4u) { return; }
    ctx->pc = 0x207BE4u;
label_207be4:
    // 0x207be4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207be8: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x207be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x207bec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207bf0: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x207bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x207bf4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x207bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207bf8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x207BF8u;
    SET_GPR_U32(ctx, 31, 0x207C00u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x207C00u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x207C00u) { return; }
    ctx->pc = 0x207C00u;
label_207c00:
    // 0x207c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207c04: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c08: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x207c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192C4u, _value); } while (0); }
    // 0x207c0c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207c10: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x207c10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x207c14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x207c14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x207c18: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207c1c: 0x244692c0  addiu       $a2, $v0, -0x6D40
    ctx->pc = 0x207c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x207c20: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x207c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x207c24: 0xc0bb3e8  jal         func_2ECFA0
    ctx->pc = 0x207C24u;
    SET_GPR_U32(ctx, 31, 0x207C2Cu);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x207C24u, 0x207C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C2Cu;
label_207c2c:
    // 0x207c2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x207c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x207c30: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x207C30u;
    SET_GPR_U32(ctx, 31, 0x207C38u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x207C38u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x207C38u) { return; }
    ctx->pc = 0x207C38u;
label_207c38:
    // 0x207c38: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x207c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x207c3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c40: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x207c40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x207c44: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207c48: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x207c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x207c4c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x207c4cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6192C0u));
    // 0x207c50: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207c54: 0x244292f0  addiu       $v0, $v0, -0x6D10
    ctx->pc = 0x207c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
    // 0x207c58: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x207c58u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192F0u, _value); } while (0);
    // 0x207c5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c60: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x207c60u;
    { uint32_t bits = FAST_READ32(0x6192F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207c64: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x207c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x207c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207c6c: 0x0  nop
    ctx->pc = 0x207c6cu;
    // NOP
    // 0x207c70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x207c74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c78: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x207c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x207c7c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x207c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x207c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207c84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c88: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x207c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x207c8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c90: 0xa4209304  sh          $zero, -0x6CFC($at)
    ctx->pc = 0x207c90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x207c94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c98: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x207c98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x207c9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207ca0: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x207ca0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x207ca4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ca8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207cac: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x207cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x207cb0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x207CB0u;
    SET_GPR_U32(ctx, 31, 0x207CB8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x207CB0u, 0x207CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207CB8u;
label_207cb8:
    // 0x207cb8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207cbc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207cc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207cc4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x207cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x207cc8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x207CC8u;
    {
        const bool branch_taken_0x207cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207cc8) {
            ctx->pc = 0x207E78u;
            goto label_207e78;
        }
    }
    ctx->pc = 0x207CD0u;
    // 0x207cd0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207cd4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207cd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207cdc: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x207cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x207ce0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x207CE0u;
    {
        const bool branch_taken_0x207ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ce0) {
            ctx->pc = 0x207D90u;
            goto label_207d90;
        }
    }
    ctx->pc = 0x207CE8u;
    // 0x207ce8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207cec: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x207cecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x207cf0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x207cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x207cf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207cf8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x207CF8u;
    {
        const bool branch_taken_0x207cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207cf8) {
            ctx->pc = 0x207D38u;
            goto label_207d38;
        }
    }
    ctx->pc = 0x207D00u;
    // 0x207d00: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d04: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207d08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207d0c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x207d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x207d10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207D10u;
    {
        const bool branch_taken_0x207d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d10) {
            ctx->pc = 0x207D38u;
            goto label_207d38;
        }
    }
    ctx->pc = 0x207D18u;
    // 0x207d18: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d1c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x207d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x207d20: 0xc0baf1c  jal         func_2EBC70
    ctx->pc = 0x207D20u;
    SET_GPR_U32(ctx, 31, 0x207D28u);
    ctx->pc = 0x2EBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC70u, 0x207D20u, 0x207D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D28u;
label_207d28:
    // 0x207d28: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d2c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x207d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x207d30: 0xc0baf1c  jal         func_2EBC70
    ctx->pc = 0x207D30u;
    SET_GPR_U32(ctx, 31, 0x207D38u);
    ctx->pc = 0x2EBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC70u, 0x207D30u, 0x207D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D38u;
label_207d38:
    // 0x207d38: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d3c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207d3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207d40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207d44: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x207d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x207d48: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x207D48u;
    {
        const bool branch_taken_0x207d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d48) {
            ctx->pc = 0x207E78u;
            goto label_207e78;
        }
    }
    ctx->pc = 0x207D50u;
    // 0x207d50: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d54: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x207d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x207d58: 0xc0ba6b8  jal         func_2E9AE0
    ctx->pc = 0x207D58u;
    SET_GPR_U32(ctx, 31, 0x207D60u);
    ctx->pc = 0x2E9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9AE0u, 0x207D58u, 0x207D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D60u;
label_207d60:
    // 0x207d60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207d64: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x207d64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x207d68: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x207d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x207d6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207d70: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x207D70u;
    {
        const bool branch_taken_0x207d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d70) {
            ctx->pc = 0x207E78u;
            goto label_207e78;
        }
    }
    ctx->pc = 0x207D78u;
    // 0x207d78: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d7c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x207d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x207d80: 0xc0bad88  jal         func_2EB620
    ctx->pc = 0x207D80u;
    SET_GPR_U32(ctx, 31, 0x207D88u);
    ctx->pc = 0x2EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB620u, 0x207D80u, 0x207D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D88u;
label_207d88:
    // 0x207d88: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x207D88u;
    {
        const bool branch_taken_0x207d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d88) {
            ctx->pc = 0x207E78u;
            goto label_207e78;
        }
    }
    ctx->pc = 0x207D90u;
label_207d90:
    // 0x207d90: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d94: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x207d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x207d98: 0xc0ba6b8  jal         func_2E9AE0
    ctx->pc = 0x207D98u;
    SET_GPR_U32(ctx, 31, 0x207DA0u);
    ctx->pc = 0x2E9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9AE0u, 0x207D98u, 0x207DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DA0u;
label_207da0:
    // 0x207da0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207da4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x207da4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x207da8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x207da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x207dac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207db0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207DB0u;
    {
        const bool branch_taken_0x207db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207db0) {
            ctx->pc = 0x207DC8u;
            goto label_207dc8;
        }
    }
    ctx->pc = 0x207DB8u;
    // 0x207db8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207dbc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x207dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x207dc0: 0xc0bad88  jal         func_2EB620
    ctx->pc = 0x207DC0u;
    SET_GPR_U32(ctx, 31, 0x207DC8u);
    ctx->pc = 0x2EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB620u, 0x207DC0u, 0x207DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DC8u;
label_207dc8:
    // 0x207dc8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207dcc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x207dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x207dd0: 0x244207c0  addiu       $v0, $v0, 0x7C0
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x207dd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207dd8: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x207dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x207ddc: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x207ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x207de0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x207de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x207de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207de8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207dec: 0xe42092f0  swc1        $f0, -0x6D10($at)
    ctx->pc = 0x207decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F0u, _value); } while (0); }
    // 0x207df0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207df4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x207df8: 0xc44107f4  lwc1        $f1, 0x7F4($v0)
    ctx->pc = 0x207df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207dfc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x207dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x207e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207e04: 0x0  nop
    ctx->pc = 0x207e04u;
    // NOP
    // 0x207e08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x207e0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x207e0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x207e10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e14: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x207e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x207e18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207e1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e20: 0xe42092f8  swc1        $f0, -0x6D08($at)
    ctx->pc = 0x207e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F8u, _value); } while (0); }
    // 0x207e24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x207e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x207e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207e2c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e30: 0xe42092fc  swc1        $f0, -0x6D04($at)
    ctx->pc = 0x207e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192FCu, _value); } while (0); }
    // 0x207e34: 0x3c0244da  lui         $v0, 0x44DA
    ctx->pc = 0x207e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17626 << 16));
    // 0x207e38: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x207e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x207e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207e40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e44: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x207e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x207e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e50: 0xa4229304  sh          $v0, -0x6CFC($at)
    ctx->pc = 0x207e50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x207e54: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e58: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x207e58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x207e5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e60: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x207e60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x207e64: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207e68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207e6c: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x207e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x207e70: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x207E70u;
    SET_GPR_U32(ctx, 31, 0x207E78u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x207E70u, 0x207E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E78u;
label_207e78:
    // 0x207e78: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207e7c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207e80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207e84: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x207e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x207e88: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x207E88u;
    {
        const bool branch_taken_0x207e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207e88) {
            ctx->pc = 0x207ED0u;
            goto label_207ed0;
        }
    }
    ctx->pc = 0x207E90u;
    // 0x207e90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207e94: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x207e94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x207e98: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x207e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x207e9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x207e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207ea0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207ea4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x207ea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x207ea8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x207ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x207eac: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x207eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x207eb0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x207EB0u;
    SET_GPR_U32(ctx, 31, 0x207EB8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x207EB0u, 0x207EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EB8u;
label_207eb8:
    // 0x207eb8: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x207eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x207ebc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x207ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x207ec0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x207EC0u;
    SET_GPR_U32(ctx, 31, 0x207EC8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x207EC0u, 0x207EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EC8u;
label_207ec8:
    // 0x207ec8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x207EC8u;
    {
        const bool branch_taken_0x207ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ec8) {
            ctx->pc = 0x207EECu;
            goto label_207eec;
        }
    }
    ctx->pc = 0x207ED0u;
label_207ed0:
    // 0x207ed0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207ed4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x207ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x207ed8: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x207ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x207edc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x207edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x207ee0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207ee4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207ee8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x207ee8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_207eec:
    // 0x207eec: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ef0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x207ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207ef4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x207EF4u;
    SET_GPR_U32(ctx, 31, 0x207EFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x207EF4u, 0x207EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EFCu;
label_207efc:
    // 0x207efc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f00: 0xc05cd10  jal         func_173440
    ctx->pc = 0x207F00u;
    SET_GPR_U32(ctx, 31, 0x207F08u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x207F00u, 0x207F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F08u;
label_207f08:
    // 0x207f08: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f0c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x207f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207f10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f14: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x207f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207f18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x207f18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x207f1c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x207f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x207f20: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f24: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x207f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207f28: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f2c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x207f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207f30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x207f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x207f34: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x207f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x207f38: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f3c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x207f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x207f40: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x207f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x207f44: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x207f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x207f48: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x207F48u;
    SET_GPR_U32(ctx, 31, 0x207F50u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x207F48u, 0x207F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F50u;
label_207f50:
    // 0x207f50: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f54: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x207f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207f58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207f5c: 0x0  nop
    ctx->pc = 0x207f5cu;
    // NOP
    // 0x207f60: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x207F60u;
    {
        const bool branch_taken_0x207f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207f60) {
            ctx->pc = 0x207F88u;
            goto label_207f88;
        }
    }
    ctx->pc = 0x207F68u;
    // 0x207f68: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x207f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x207f70: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x207f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x207f74: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x207f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x207f78: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x207F78u;
    SET_GPR_U32(ctx, 31, 0x207F80u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x207F78u, 0x207F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F80u;
label_207f80:
    // 0x207f80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f84: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x207f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_207f88:
    // 0x207f88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f8c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x207f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207f90: 0xc080f60  jal         func_203D80
    ctx->pc = 0x207F90u;
    SET_GPR_U32(ctx, 31, 0x207F98u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x207F90u, 0x207F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F98u;
label_207f98:
    // 0x207f98: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f9c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x207F9Cu;
    SET_GPR_U32(ctx, 31, 0x207FA4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x207F9Cu, 0x207FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FA4u;
label_207fa4:
    // 0x207fa4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fa8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x207fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x207fac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x207FACu;
    {
        const bool branch_taken_0x207fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207fac) {
            ctx->pc = 0x207FF8u;
            goto label_207ff8;
        }
    }
    ctx->pc = 0x207FB4u;
    // 0x207fb4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x207fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fb8: 0x8ca41340  lw          $a0, 0x1340($a1)
    ctx->pc = 0x207fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4928)));
    // 0x207fbc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x207fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x207fc0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x207fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x207fc4: 0xaca31340  sw          $v1, 0x1340($a1)
    ctx->pc = 0x207fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4928), GPR_U32(ctx, 3));
    // 0x207fc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207fcc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x207fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x207fd4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x207fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207fd8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fdc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x207fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x207fe0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fe4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x207fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x207fe8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x207fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x207ff0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ff4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x207ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_207ff8:
    // 0x207ff8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x207ff8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207ffc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x207ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x208000: 0x3e00008  jr          $ra
    ctx->pc = 0x208000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208008u;
}
