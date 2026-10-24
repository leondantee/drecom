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

// Function: Plw02_atk05_off
// Address: 0x1c3a40 - 0x1c3ca4
void Plw02_atk05_off_0x1c3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk05_off_0x1c3a40");
#endif

    switch (ctx->pc) {
        case 0x1c3accu: goto label_1c3acc;
        case 0x1c3af4u: goto label_1c3af4;
        case 0x1c3b34u: goto label_1c3b34;
        case 0x1c3b5cu: goto label_1c3b5c;
        case 0x1c3b7cu: goto label_1c3b7c;
        case 0x1c3b8cu: goto label_1c3b8c;
        case 0x1c3bacu: goto label_1c3bac;
        case 0x1c3bb8u: goto label_1c3bb8;
        case 0x1c3bccu: goto label_1c3bcc;
        case 0x1c3bd8u: goto label_1c3bd8;
        case 0x1c3becu: goto label_1c3bec;
        default: break;
    }

    ctx->pc = 0x1c3a40u;

    // 0x1c3a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3a44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c3a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c3a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3a4c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c3a50: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c3a54: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c3a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c3a58: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c3a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c3a5c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c3a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c3a60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3a64: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c3a68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3a6c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c3a6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3a70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c3a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3a74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3a78: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C3A78u;
    {
        const bool branch_taken_0x1c3a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3a78) {
            ctx->pc = 0x1C3B9Cu;
            goto label_1c3b9c;
        }
    }
    ctx->pc = 0x1C3A80u;
    // 0x1c3a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c3a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3a84: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C3A84u;
    {
        const bool branch_taken_0x1c3a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3a84) {
            ctx->pc = 0x1C3B04u;
            goto label_1c3b04;
        }
    }
    ctx->pc = 0x1C3A8Cu;
    // 0x1c3a8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3A8Cu;
    {
        const bool branch_taken_0x1c3a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a8c) {
            ctx->pc = 0x1C3A9Cu;
            goto label_1c3a9c;
        }
    }
    ctx->pc = 0x1C3A94u;
    // 0x1c3a94: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1C3A94u;
    {
        const bool branch_taken_0x1c3a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a94) {
            ctx->pc = 0x1C3C90u;
            goto label_1c3c90;
        }
    }
    ctx->pc = 0x1C3A9Cu;
label_1c3a9c:
    // 0x1c3a9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c3a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3aa0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c3aa4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3AA4u;
    {
        const bool branch_taken_0x1c3aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3aa4) {
            ctx->pc = 0x1C3AD4u;
            goto label_1c3ad4;
        }
    }
    ctx->pc = 0x1C3AACu;
    // 0x1c3aac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ab4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3ab8: 0x24061418  addiu       $a2, $zero, 0x1418
    ctx->pc = 0x1c3ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5144));
    // 0x1c3abc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3ac0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3ac4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C3AC4u;
    SET_GPR_U32(ctx, 31, 0x1C3ACCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C3AC4u, 0x1C3ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3ACCu;
label_1c3acc:
    // 0x1c3acc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3ACCu;
    {
        const bool branch_taken_0x1c3acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3acc) {
            ctx->pc = 0x1C3AF4u;
            goto label_1c3af4;
        }
    }
    ctx->pc = 0x1C3AD4u;
label_1c3ad4:
    // 0x1c3ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ad8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3adc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3ae0: 0x24060a18  addiu       $a2, $zero, 0xA18
    ctx->pc = 0x1c3ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2584));
    // 0x1c3ae4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3ae8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3aec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C3AECu;
    SET_GPR_U32(ctx, 31, 0x1C3AF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C3AECu, 0x1C3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AF4u;
label_1c3af4:
    // 0x1c3af4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3af8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c3af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3afc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3b00: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c3b00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c3b04:
    // 0x1c3b04: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c3b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3b08: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c3b0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3B0Cu;
    {
        const bool branch_taken_0x1c3b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b0c) {
            ctx->pc = 0x1C3B3Cu;
            goto label_1c3b3c;
        }
    }
    ctx->pc = 0x1C3B14u;
    // 0x1c3b14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3b18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3b1c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3b20: 0x24061417  addiu       $a2, $zero, 0x1417
    ctx->pc = 0x1c3b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5143));
    // 0x1c3b24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3b28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3b2c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C3B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B34u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C3B2Cu, 0x1C3B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B34u;
label_1c3b34:
    // 0x1c3b34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3B34u;
    {
        const bool branch_taken_0x1c3b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b34) {
            ctx->pc = 0x1C3B5Cu;
            goto label_1c3b5c;
        }
    }
    ctx->pc = 0x1C3B3Cu;
label_1c3b3c:
    // 0x1c3b3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3b40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3b44: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3b48: 0x24060a17  addiu       $a2, $zero, 0xA17
    ctx->pc = 0x1c3b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2583));
    // 0x1c3b4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3b50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3b54: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C3B54u;
    SET_GPR_U32(ctx, 31, 0x1C3B5Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C3B54u, 0x1C3B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B5Cu;
label_1c3b5c:
    // 0x1c3b5c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c3b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3b60: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c3b60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c3b64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3b68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3b6c: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c3b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3b70: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c3b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c3b74: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C3B74u;
    SET_GPR_U32(ctx, 31, 0x1C3B7Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C3B74u, 0x1C3B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B7Cu;
label_1c3b7c:
    // 0x1c3b7c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c3b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c3b80: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c3b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3b84: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C3B84u;
    SET_GPR_U32(ctx, 31, 0x1C3B8Cu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C3B84u, 0x1C3B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B8Cu;
label_1c3b8c:
    // 0x1c3b8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3b90: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c3b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3b94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3b98: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c3b98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c3b9c:
    // 0x1c3b9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ba0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3ba0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3ba4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C3BA4u;
    SET_GPR_U32(ctx, 31, 0x1C3BACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C3BA4u, 0x1C3BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BACu;
label_1c3bac:
    // 0x1c3bac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3bb0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C3BB0u;
    SET_GPR_U32(ctx, 31, 0x1C3BB8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C3BB0u, 0x1C3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BB8u;
label_1c3bb8:
    // 0x1c3bb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c3bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3bbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3bc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3bc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3bc4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C3BC4u;
    SET_GPR_U32(ctx, 31, 0x1C3BCCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C3BC4u, 0x1C3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BCCu;
label_1c3bcc:
    // 0x1c3bcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3bd0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C3BD0u;
    SET_GPR_U32(ctx, 31, 0x1C3BD8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C3BD0u, 0x1C3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BD8u;
label_1c3bd8:
    // 0x1c3bd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3bdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3be0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c3be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3be4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C3BE4u;
    SET_GPR_U32(ctx, 31, 0x1C3BECu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C3BE4u, 0x1C3BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BECu;
label_1c3bec:
    // 0x1c3bec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C3BECu;
    {
        const bool branch_taken_0x1c3bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3bec) {
            ctx->pc = 0x1C3C78u;
            goto label_1c3c78;
        }
    }
    ctx->pc = 0x1C3BF4u;
    // 0x1c3bf4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3bf8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c3bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c3bfc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3BFCu;
    {
        const bool branch_taken_0x1c3bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3bfc) {
            ctx->pc = 0x1C3C48u;
            goto label_1c3c48;
        }
    }
    ctx->pc = 0x1C3C04u;
    // 0x1c3c04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c3c0c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c3c10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3c14: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3C14u;
    {
        const bool branch_taken_0x1c3c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c14) {
            ctx->pc = 0x1C3C48u;
            goto label_1c3c48;
        }
    }
    ctx->pc = 0x1C3C1Cu;
    // 0x1c3c1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c3c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c20: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3c24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3c28: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c3c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c3c2c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c3c30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3c34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c38: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3c3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3c40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c44: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c3c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c3c48:
    // 0x1c3c48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c4c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c3c50: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C3C50u;
    {
        const bool branch_taken_0x1c3c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c50) {
            ctx->pc = 0x1C3C90u;
            goto label_1c3c90;
        }
    }
    ctx->pc = 0x1C3C58u;
    // 0x1c3c58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3c5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c60: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3c64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3c68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c6c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c3c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3c70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3C70u;
    {
        const bool branch_taken_0x1c3c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c70) {
            ctx->pc = 0x1C3C90u;
            goto label_1c3c90;
        }
    }
    ctx->pc = 0x1C3C78u;
label_1c3c78:
    // 0x1c3c78: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c3c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c7c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c3c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3c80: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3c84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3c88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3c8c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c3c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c3c90:
    // 0x1c3c90: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c3c90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3c98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c3c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c3c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3CA4u;
}
