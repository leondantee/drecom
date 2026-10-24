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

// Function: Plw01_atk00_on
// Address: 0x1be9d0 - 0x1bed04
void Plw01_atk00_on_0x1be9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk00_on_0x1be9d0");
#endif

    switch (ctx->pc) {
        case 0x1bea50u: goto label_1bea50;
        case 0x1bea78u: goto label_1bea78;
        case 0x1bea98u: goto label_1bea98;
        case 0x1beab0u: goto label_1beab0;
        case 0x1beac0u: goto label_1beac0;
        case 0x1beb08u: goto label_1beb08;
        case 0x1beb2cu: goto label_1beb2c;
        case 0x1beb38u: goto label_1beb38;
        case 0x1beb4cu: goto label_1beb4c;
        case 0x1beb70u: goto label_1beb70;
        case 0x1beb84u: goto label_1beb84;
        case 0x1beba0u: goto label_1beba0;
        case 0x1bebb0u: goto label_1bebb0;
        case 0x1bebbcu: goto label_1bebbc;
        case 0x1bebd0u: goto label_1bebd0;
        case 0x1bebdcu: goto label_1bebdc;
        case 0x1bebe4u: goto label_1bebe4;
        case 0x1bec3cu: goto label_1bec3c;
        default: break;
    }

    ctx->pc = 0x1be9d0u;

    // 0x1be9d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1be9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1be9d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1be9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1be9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be9dc: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1be9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1be9e0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1be9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1be9e4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1be9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1be9e8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1be9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1be9ec: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1be9ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1be9f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1be9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be9f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be9f8: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1BE9F8u;
    {
        const bool branch_taken_0x1be9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be9f8) {
            ctx->pc = 0x1BEAD0u;
            goto label_1bead0;
        }
    }
    ctx->pc = 0x1BEA00u;
    // 0x1bea00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEA00u;
    {
        const bool branch_taken_0x1bea00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea00) {
            ctx->pc = 0x1BEA10u;
            goto label_1bea10;
        }
    }
    ctx->pc = 0x1BEA08u;
    // 0x1bea08: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1BEA08u;
    {
        const bool branch_taken_0x1bea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea08) {
            ctx->pc = 0x1BECF0u;
            goto label_1becf0;
        }
    }
    ctx->pc = 0x1BEA10u;
label_1bea10:
    // 0x1bea10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea14: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1bea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bea18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea1c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bea20: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bea20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bea24: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bea24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bea28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BEA28u;
    {
        const bool branch_taken_0x1bea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea28) {
            ctx->pc = 0x1BEA58u;
            goto label_1bea58;
        }
    }
    ctx->pc = 0x1BEA30u;
    // 0x1bea30: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1bea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea34: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea38: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bea38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bea3c: 0x24061403  addiu       $a2, $zero, 0x1403
    ctx->pc = 0x1bea3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5123));
    // 0x1bea40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bea40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bea44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bea44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bea48: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BEA48u;
    SET_GPR_U32(ctx, 31, 0x1BEA50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BEA48u, 0x1BEA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA50u;
label_1bea50:
    // 0x1bea50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BEA50u;
    {
        const bool branch_taken_0x1bea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea50) {
            ctx->pc = 0x1BEA78u;
            goto label_1bea78;
        }
    }
    ctx->pc = 0x1BEA58u;
label_1bea58:
    // 0x1bea58: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1bea58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea60: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bea60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bea64: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x1bea64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1bea68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bea68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bea6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bea6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bea70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BEA70u;
    SET_GPR_U32(ctx, 31, 0x1BEA78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BEA70u, 0x1BEA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA78u;
label_1bea78:
    // 0x1bea78: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bea78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bea7c: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1bea7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1bea80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea84: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bea88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bea88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bea8c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1bea8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bea90: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BEA90u;
    SET_GPR_U32(ctx, 31, 0x1BEA98u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BEA90u, 0x1BEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA98u;
label_1bea98:
    // 0x1bea98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beaa0: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1beaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1beaa4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1beaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1beaa8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BEAA8u;
    SET_GPR_U32(ctx, 31, 0x1BEAB0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BEAA8u, 0x1BEAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAB0u;
label_1beab0:
    // 0x1beab0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1beab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1beab4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1beab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1beab8: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1BEAB8u;
    SET_GPR_U32(ctx, 31, 0x1BEAC0u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BEAB8u, 0x1BEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAC0u;
label_1beac0:
    // 0x1beac0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1beac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beac4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1beac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1beac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1beac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1beacc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1beaccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bead0:
    // 0x1bead0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bead4: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1bead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bead8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beadc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1beadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1beae0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1beae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beae4: 0x904209e6  lbu         $v0, 0x9E6($v0)
    ctx->pc = 0x1beae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2534)));
    // 0x1beae8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BEAE8u;
    {
        const bool branch_taken_0x1beae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1beae8) {
            ctx->pc = 0x1BEBA0u;
            goto label_1beba0;
        }
    }
    ctx->pc = 0x1BEAF0u;
    // 0x1beaf0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1beaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beaf4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1beaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beaf8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1beaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1beafc: 0xc44d137c  lwc1        $f13, 0x137C($v0)
    ctx->pc = 0x1beafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1beb00: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BEB00u;
    SET_GPR_U32(ctx, 31, 0x1BEB08u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BEB00u, 0x1BEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB08u;
label_1beb08:
    // 0x1beb08: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1beb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1beb0c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1beb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beb10: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1beb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1beb14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1beb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beb18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1beb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1beb1c: 0x246505f0  addiu       $a1, $v1, 0x5F0
    ctx->pc = 0x1beb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1520));
    // 0x1beb20: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1beb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1beb24: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1BEB24u;
    SET_GPR_U32(ctx, 31, 0x1BEB2Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BEB24u, 0x1BEB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB2Cu;
label_1beb2c:
    // 0x1beb2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1beb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1beb30: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1BEB30u;
    SET_GPR_U32(ctx, 31, 0x1BEB38u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1BEB38u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BEB38u) { return; }
    ctx->pc = 0x1BEB38u;
label_1beb38:
    // 0x1beb38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1beb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1beb3c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1beb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1beb40: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1beb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1beb44: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1BEB44u;
    SET_GPR_U32(ctx, 31, 0x1BEB4Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1BEB4Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BEB4Cu) { return; }
    ctx->pc = 0x1BEB4Cu;
label_1beb4c:
    // 0x1beb4c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1beb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1beb50: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1beb50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1beb54: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1beb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1beb58: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1beb58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1beb5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1beb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1beb60: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1beb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1beb64: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1beb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1beb68: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1BEB68u;
    SET_GPR_U32(ctx, 31, 0x1BEB70u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1BEB70u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BEB70u) { return; }
    ctx->pc = 0x1BEB70u;
label_1beb70:
    // 0x1beb70: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1beb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1beb74: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1beb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1beb78: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1beb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1beb7c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1BEB7Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB84u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BEB7Cu, 0x1BEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB84u;
label_1beb84:
    // 0x1beb84: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1beb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beb88: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1beb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beb8c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1beb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1beb90: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1beb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1beb94: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1beb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1beb98: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1BEB98u;
    SET_GPR_U32(ctx, 31, 0x1BEBA0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1BEB98u, 0x1BEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBA0u;
label_1beba0:
    // 0x1beba0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1beba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beba4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1beba4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1beba8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BEBA8u;
    SET_GPR_U32(ctx, 31, 0x1BEBB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BEBA8u, 0x1BEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBB0u;
label_1bebb0:
    // 0x1bebb0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1bebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bebb4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BEBB4u;
    SET_GPR_U32(ctx, 31, 0x1BEBBCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BEBB4u, 0x1BEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBBCu;
label_1bebbc:
    // 0x1bebbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bebbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bebc0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1bebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bebc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bebc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bebc8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BEBC8u;
    SET_GPR_U32(ctx, 31, 0x1BEBD0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BEBC8u, 0x1BEBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBD0u;
label_1bebd0:
    // 0x1bebd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bebd4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BEBD4u;
    SET_GPR_U32(ctx, 31, 0x1BEBDCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BEBD4u, 0x1BEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBDCu;
label_1bebdc:
    // 0x1bebdc: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1BEBDCu;
    SET_GPR_U32(ctx, 31, 0x1BEBE4u);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1BEBDCu, 0x1BEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBE4u;
label_1bebe4:
    // 0x1bebe4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1BEBE4u;
    {
        const bool branch_taken_0x1bebe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bebe4) {
            ctx->pc = 0x1BECF0u;
            goto label_1becf0;
        }
    }
    ctx->pc = 0x1BEBECu;
    // 0x1bebec: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1bebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bebf0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1bebf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1bebf4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BEBF4u;
    {
        const bool branch_taken_0x1bebf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bebf4) {
            ctx->pc = 0x1BEC28u;
            goto label_1bec28;
        }
    }
    ctx->pc = 0x1BEBFCu;
    // 0x1bebfc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bec04: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1bec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1bec08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bec0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEC0Cu;
    {
        const bool branch_taken_0x1bec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bec0c) {
            ctx->pc = 0x1BEC28u;
            goto label_1bec28;
        }
    }
    ctx->pc = 0x1BEC14u;
    // 0x1bec14: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1bec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bec1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1bec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1bec20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bec20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bec24: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bec24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1bec28:
    // 0x1bec28: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec2c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1bec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec30: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1bec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bec34: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BEC34u;
    SET_GPR_U32(ctx, 31, 0x1BEC3Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BEC34u, 0x1BEC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC3Cu;
label_1bec3c:
    // 0x1bec3c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BEC3Cu;
    {
        const bool branch_taken_0x1bec3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bec3c) {
            ctx->pc = 0x1BEC6Cu;
            goto label_1bec6c;
        }
    }
    ctx->pc = 0x1BEC44u;
    // 0x1bec44: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1bec44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec48: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bec4c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bec50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bec50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bec54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bec54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bec58: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bec58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bec5c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1bec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec60: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1bec60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bec64: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1bec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec68: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bec68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1bec6c:
    // 0x1bec6c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1bec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec70: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x1bec70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x1bec74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bec74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bec78: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bec78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bec7c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BEC7Cu;
    {
        const bool branch_taken_0x1bec7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bec7c) {
            ctx->pc = 0x1BECF0u;
            goto label_1becf0;
        }
    }
    ctx->pc = 0x1BEC84u;
    // 0x1bec84: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1bec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec88: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1bec88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1bec8c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BEC8Cu;
    {
        const bool branch_taken_0x1bec8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bec8c) {
            ctx->pc = 0x1BECF0u;
            goto label_1becf0;
        }
    }
    ctx->pc = 0x1BEC94u;
    // 0x1bec94: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1bec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec98: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bec98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bec9c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1beca0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1beca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1beca4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BECA4u;
    {
        const bool branch_taken_0x1beca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beca4) {
            ctx->pc = 0x1BECF0u;
            goto label_1becf0;
        }
    }
    ctx->pc = 0x1BECACu;
    // 0x1becac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1becacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1becb0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1becb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1becb4: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1becb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1becb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1becb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1becbc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1becbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1becc0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1becc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1becc4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1becc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1becc8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1becc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beccc: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1becccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1becd0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1becd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1becd4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1becd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1becd8: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1becd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1becdc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1becdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bece0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bece0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bece4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bece4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bece8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1becec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bececu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1becf0:
    // 0x1becf0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1becf0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1becf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1becf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1becf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1becf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1becfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BECFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BECFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BED04u;
}
