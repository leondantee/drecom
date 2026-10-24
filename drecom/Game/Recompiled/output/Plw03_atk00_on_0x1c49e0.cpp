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

// Function: Plw03_atk00_on
// Address: 0x1c49e0 - 0x1c4d00
void Plw03_atk00_on_0x1c49e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk00_on_0x1c49e0");
#endif

    switch (ctx->pc) {
        case 0x1c4a60u: goto label_1c4a60;
        case 0x1c4a88u: goto label_1c4a88;
        case 0x1c4aa8u: goto label_1c4aa8;
        case 0x1c4ac0u: goto label_1c4ac0;
        case 0x1c4ad0u: goto label_1c4ad0;
        case 0x1c4b18u: goto label_1c4b18;
        case 0x1c4b3cu: goto label_1c4b3c;
        case 0x1c4b48u: goto label_1c4b48;
        case 0x1c4b5cu: goto label_1c4b5c;
        case 0x1c4b80u: goto label_1c4b80;
        case 0x1c4b94u: goto label_1c4b94;
        case 0x1c4bb0u: goto label_1c4bb0;
        case 0x1c4bc0u: goto label_1c4bc0;
        case 0x1c4bccu: goto label_1c4bcc;
        case 0x1c4be0u: goto label_1c4be0;
        case 0x1c4becu: goto label_1c4bec;
        case 0x1c4bf4u: goto label_1c4bf4;
        case 0x1c4c4cu: goto label_1c4c4c;
        default: break;
    }

    ctx->pc = 0x1c49e0u;

    // 0x1c49e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c49e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c49e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c49e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c49e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c49e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c49ec: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1c49ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1c49f0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c49f4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c49f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c49f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c49fc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c49fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c4a00: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c4a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c4a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4a08: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C4A08u;
    {
        const bool branch_taken_0x1c4a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4a08) {
            ctx->pc = 0x1C4AE0u;
            goto label_1c4ae0;
        }
    }
    ctx->pc = 0x1C4A10u;
    // 0x1c4a10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4A10u;
    {
        const bool branch_taken_0x1c4a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a10) {
            ctx->pc = 0x1C4A20u;
            goto label_1c4a20;
        }
    }
    ctx->pc = 0x1C4A18u;
    // 0x1c4a18: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1C4A18u;
    {
        const bool branch_taken_0x1c4a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a18) {
            ctx->pc = 0x1C4CECu;
            goto label_1c4cec;
        }
    }
    ctx->pc = 0x1C4A20u;
label_1c4a20:
    // 0x1c4a20: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4a24: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c4a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4a28: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4a2c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c4a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c4a30: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c4a34: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c4a38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4A38u;
    {
        const bool branch_taken_0x1c4a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a38) {
            ctx->pc = 0x1C4A68u;
            goto label_1c4a68;
        }
    }
    ctx->pc = 0x1C4A40u;
    // 0x1c4a40: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4a44: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4a48: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4a4c: 0x24061403  addiu       $a2, $zero, 0x1403
    ctx->pc = 0x1c4a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5123));
    // 0x1c4a50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4a54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4a58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C4A58u;
    SET_GPR_U32(ctx, 31, 0x1C4A60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C4A58u, 0x1C4A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A60u;
label_1c4a60:
    // 0x1c4a60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4A60u;
    {
        const bool branch_taken_0x1c4a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a60) {
            ctx->pc = 0x1C4A88u;
            goto label_1c4a88;
        }
    }
    ctx->pc = 0x1C4A68u;
label_1c4a68:
    // 0x1c4a68: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4a6c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4a70: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4a74: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x1c4a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1c4a78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4a7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4a80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C4A80u;
    SET_GPR_U32(ctx, 31, 0x1C4A88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C4A80u, 0x1C4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A88u;
label_1c4a88:
    // 0x1c4a88: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c4a8c: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c4a8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c4a90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4a94: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c4a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4a98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c4a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4a9c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1c4a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c4aa0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C4AA0u;
    SET_GPR_U32(ctx, 31, 0x1C4AA8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C4AA0u, 0x1C4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AA8u;
label_1c4aa8:
    // 0x1c4aa8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4aac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4ab0: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c4ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4ab4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c4ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4ab8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C4AB8u;
    SET_GPR_U32(ctx, 31, 0x1C4AC0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C4AB8u, 0x1C4AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AC0u;
label_1c4ac0:
    // 0x1c4ac0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c4ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c4ac4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1c4ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4ac8: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1C4AC8u;
    SET_GPR_U32(ctx, 31, 0x1C4AD0u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1C4AC8u, 0x1C4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AD0u;
label_1c4ad0:
    // 0x1c4ad0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4ad4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c4ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c4ad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4adc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c4adcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c4ae0:
    // 0x1c4ae0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4ae4: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c4ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4ae8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4aec: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c4aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c4af0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4af4: 0x904209e6  lbu         $v0, 0x9E6($v0)
    ctx->pc = 0x1c4af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2534)));
    // 0x1c4af8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C4AF8u;
    {
        const bool branch_taken_0x1c4af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4af8) {
            ctx->pc = 0x1C4BB0u;
            goto label_1c4bb0;
        }
    }
    ctx->pc = 0x1C4B00u;
    // 0x1c4b00: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b04: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b08: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1c4b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4b0c: 0xc44d137c  lwc1        $f13, 0x137C($v0)
    ctx->pc = 0x1c4b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4b10: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C4B10u;
    SET_GPR_U32(ctx, 31, 0x1C4B18u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C4B10u, 0x1C4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B18u;
label_1c4b18:
    // 0x1c4b18: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c4b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c4b1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b20: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1c4b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1c4b24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4b2c: 0x246506f0  addiu       $a1, $v1, 0x6F0
    ctx->pc = 0x1c4b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1776));
    // 0x1c4b30: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1c4b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c4b34: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C4B34u;
    SET_GPR_U32(ctx, 31, 0x1C4B3Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C4B34u, 0x1C4B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B3Cu;
label_1c4b3c:
    // 0x1c4b3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c4b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4b40: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1C4B40u;
    SET_GPR_U32(ctx, 31, 0x1C4B48u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1C4B48u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C4B48u) { return; }
    ctx->pc = 0x1C4B48u;
label_1c4b48:
    // 0x1c4b48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4b4c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c4b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4b50: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1c4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4b54: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1C4B54u;
    SET_GPR_U32(ctx, 31, 0x1C4B5Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1C4B5Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C4B5Cu) { return; }
    ctx->pc = 0x1C4B5Cu;
label_1c4b5c:
    // 0x1c4b5c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1c4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4b60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1c4b60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4b64: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4b68: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1c4b68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1c4b6c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4b70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c4b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4b74: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c4b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4b78: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1C4B78u;
    SET_GPR_U32(ctx, 31, 0x1C4B80u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1C4B80u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C4B80u) { return; }
    ctx->pc = 0x1C4B80u;
label_1c4b80:
    // 0x1c4b80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c4b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4b84: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c4b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4b88: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c4b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4b8c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C4B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B94u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C4B8Cu, 0x1C4B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B94u;
label_1c4b94:
    // 0x1c4b94: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b9c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c4ba0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1c4ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c4ba4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c4ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4ba8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1C4BA8u;
    SET_GPR_U32(ctx, 31, 0x1C4BB0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1C4BA8u, 0x1C4BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BB0u;
label_1c4bb0:
    // 0x1c4bb0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4bb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c4bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c4bb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C4BB8u;
    SET_GPR_U32(ctx, 31, 0x1C4BC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C4BB8u, 0x1C4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BC0u;
label_1c4bc0:
    // 0x1c4bc0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4bc4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C4BC4u;
    SET_GPR_U32(ctx, 31, 0x1C4BCCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C4BC4u, 0x1C4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BCCu;
label_1c4bcc:
    // 0x1c4bcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c4bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4bd0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4bd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c4bd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c4bd8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C4BD8u;
    SET_GPR_U32(ctx, 31, 0x1C4BE0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C4BD8u, 0x1C4BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BE0u;
label_1c4be0:
    // 0x1c4be0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c4be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4be4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C4BE4u;
    SET_GPR_U32(ctx, 31, 0x1C4BECu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C4BE4u, 0x1C4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BECu;
label_1c4bec:
    // 0x1c4bec: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1C4BECu;
    SET_GPR_U32(ctx, 31, 0x1C4BF4u);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1C4BECu, 0x1C4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BF4u;
label_1c4bf4:
    // 0x1c4bf4: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C4BF4u;
    {
        const bool branch_taken_0x1c4bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4bf4) {
            ctx->pc = 0x1C4CECu;
            goto label_1c4cec;
        }
    }
    ctx->pc = 0x1C4BFCu;
    // 0x1c4bfc: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c4c00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c4c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c4c04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C4C04u;
    {
        const bool branch_taken_0x1c4c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c04) {
            ctx->pc = 0x1C4C38u;
            goto label_1c4c38;
        }
    }
    ctx->pc = 0x1C4C0Cu;
    // 0x1c4c0c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4c14: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c4c18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c4c1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4C1Cu;
    {
        const bool branch_taken_0x1c4c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c1c) {
            ctx->pc = 0x1C4C38u;
            goto label_1c4c38;
        }
    }
    ctx->pc = 0x1C4C24u;
    // 0x1c4c24: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c4c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c4c2c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c4c30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c4c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c4c34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c4c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c4c38:
    // 0x1c4c38: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c3c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c40: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c4c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4c44: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C4C44u;
    SET_GPR_U32(ctx, 31, 0x1C4C4Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C4C44u, 0x1C4C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C4Cu;
label_1c4c4c:
    // 0x1c4c4c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4C4Cu;
    {
        const bool branch_taken_0x1c4c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c4c) {
            ctx->pc = 0x1C4C7Cu;
            goto label_1c4c7c;
        }
    }
    ctx->pc = 0x1C4C54u;
    // 0x1c4c54: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1c4c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c58: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c4c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c4c5c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c4c60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c4c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c4c64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c4c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4c68: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c4c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c4c6c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c70: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c4c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4c74: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c4c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c4c7c:
    // 0x1c4c7c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c80: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x1c4c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x1c4c84: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4C84u;
    {
        const bool branch_taken_0x1c4c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c84) {
            ctx->pc = 0x1C4CECu;
            goto label_1c4cec;
        }
    }
    ctx->pc = 0x1C4C8Cu;
    // 0x1c4c8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c90: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c4c90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c4c94: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C4C94u;
    {
        const bool branch_taken_0x1c4c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c94) {
            ctx->pc = 0x1C4CECu;
            goto label_1c4cec;
        }
    }
    ctx->pc = 0x1C4C9Cu;
    // 0x1c4c9c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4ca0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c4ca4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c4ca8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c4ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4cac: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C4CACu;
    {
        const bool branch_taken_0x1c4cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4cac) {
            ctx->pc = 0x1C4CECu;
            goto label_1c4cec;
        }
    }
    ctx->pc = 0x1C4CB4u;
    // 0x1c4cb4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c4cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c4cb8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4cbc: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c4cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c4cc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c4cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4cc4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4cc8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c4cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c4ccc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4cd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c4cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4cd4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1c4cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4cd8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c4cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c4cdc: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c4ce0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c4ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c4ce4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c4ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4ce8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c4ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c4cec:
    // 0x1c4cec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c4cecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4cf4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1c4cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c4cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4D00u;
}
