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

// Function: Plw03_atk04_on
// Address: 0x1c5eb0 - 0x1c6168
void Plw03_atk04_on_0x1c5eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk04_on_0x1c5eb0");
#endif

    switch (ctx->pc) {
        case 0x1c5f3cu: goto label_1c5f3c;
        case 0x1c5f64u: goto label_1c5f64;
        case 0x1c5fa4u: goto label_1c5fa4;
        case 0x1c5fccu: goto label_1c5fcc;
        case 0x1c5fecu: goto label_1c5fec;
        case 0x1c6004u: goto label_1c6004;
        case 0x1c6014u: goto label_1c6014;
        case 0x1c6034u: goto label_1c6034;
        case 0x1c6040u: goto label_1c6040;
        case 0x1c6054u: goto label_1c6054;
        case 0x1c6060u: goto label_1c6060;
        case 0x1c60b0u: goto label_1c60b0;
        default: break;
    }

    ctx->pc = 0x1c5eb0u;

    // 0x1c5eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c5eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c5eb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c5eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c5eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5ebc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c5ec0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c5ec4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c5ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c5ec8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c5ecc: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c5eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c5ed0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5ed4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c5ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c5ed8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5edc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c5edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5ee0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c5ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c5ee4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c5ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5ee8: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C5EE8u;
    {
        const bool branch_taken_0x1c5ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5ee8) {
            ctx->pc = 0x1C6024u;
            goto label_1c6024;
        }
    }
    ctx->pc = 0x1C5EF0u;
    // 0x1c5ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ef4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C5EF4u;
    {
        const bool branch_taken_0x1c5ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5ef4) {
            ctx->pc = 0x1C5F74u;
            goto label_1c5f74;
        }
    }
    ctx->pc = 0x1C5EFCu;
    // 0x1c5efc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5EFCu;
    {
        const bool branch_taken_0x1c5efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5efc) {
            ctx->pc = 0x1C5F0Cu;
            goto label_1c5f0c;
        }
    }
    ctx->pc = 0x1C5F04u;
    // 0x1c5f04: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1C5F04u;
    {
        const bool branch_taken_0x1c5f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f04) {
            ctx->pc = 0x1C6154u;
            goto label_1c6154;
        }
    }
    ctx->pc = 0x1C5F0Cu;
label_1c5f0c:
    // 0x1c5f0c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c5f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5f10: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c5f14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5F14u;
    {
        const bool branch_taken_0x1c5f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f14) {
            ctx->pc = 0x1C5F44u;
            goto label_1c5f44;
        }
    }
    ctx->pc = 0x1C5F1Cu;
    // 0x1c5f1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5f20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5f24: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5f28: 0x2406141f  addiu       $a2, $zero, 0x141F
    ctx->pc = 0x1c5f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5151));
    // 0x1c5f2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5f30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5f34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C5F34u;
    SET_GPR_U32(ctx, 31, 0x1C5F3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C5F34u, 0x1C5F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F3Cu;
label_1c5f3c:
    // 0x1c5f3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5F3Cu;
    {
        const bool branch_taken_0x1c5f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f3c) {
            ctx->pc = 0x1C5F64u;
            goto label_1c5f64;
        }
    }
    ctx->pc = 0x1C5F44u;
label_1c5f44:
    // 0x1c5f44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5f48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5f4c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5f50: 0x24060a1f  addiu       $a2, $zero, 0xA1F
    ctx->pc = 0x1c5f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2591));
    // 0x1c5f54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5f58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5f5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C5F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C5F64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C5F5Cu, 0x1C5F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F64u;
label_1c5f64:
    // 0x1c5f64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5f68: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5f6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5f70: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5f70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c5f74:
    // 0x1c5f74: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c5f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5f78: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c5f78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c5f7c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5F7Cu;
    {
        const bool branch_taken_0x1c5f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f7c) {
            ctx->pc = 0x1C5FACu;
            goto label_1c5fac;
        }
    }
    ctx->pc = 0x1C5F84u;
    // 0x1c5f84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5f88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5f8c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5f90: 0x2406141f  addiu       $a2, $zero, 0x141F
    ctx->pc = 0x1c5f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5151));
    // 0x1c5f94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5f98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5f9c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5F9Cu;
    SET_GPR_U32(ctx, 31, 0x1C5FA4u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5F9Cu, 0x1C5FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FA4u;
label_1c5fa4:
    // 0x1c5fa4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5FA4u;
    {
        const bool branch_taken_0x1c5fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5fa4) {
            ctx->pc = 0x1C5FCCu;
            goto label_1c5fcc;
        }
    }
    ctx->pc = 0x1C5FACu;
label_1c5fac:
    // 0x1c5fac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5fb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5fb4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5fb8: 0x24060a1f  addiu       $a2, $zero, 0xA1F
    ctx->pc = 0x1c5fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2591));
    // 0x1c5fbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5fc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5fc4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5FC4u;
    SET_GPR_U32(ctx, 31, 0x1C5FCCu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5FC4u, 0x1C5FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FCCu;
label_1c5fcc:
    // 0x1c5fcc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c5fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5fd0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c5fd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c5fd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5fd8: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5fdc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c5fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c5fe0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1c5fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1c5fe4: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C5FE4u;
    SET_GPR_U32(ctx, 31, 0x1C5FECu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C5FE4u, 0x1C5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FECu;
label_1c5fec:
    // 0x1c5fec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5ff0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5ff4: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c5ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5ff8: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c5ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c5ffc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C5FFCu;
    SET_GPR_U32(ctx, 31, 0x1C6004u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C5FFCu, 0x1C6004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6004u;
label_1c6004:
    // 0x1c6004: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c6004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c6008: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c6008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c600c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C600Cu;
    SET_GPR_U32(ctx, 31, 0x1C6014u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C600Cu, 0x1C6014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6014u;
label_1c6014:
    // 0x1c6014: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6018: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c6018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c601c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c6020: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c6020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c6024:
    // 0x1c6024: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6028: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6028u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c602c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C602Cu;
    SET_GPR_U32(ctx, 31, 0x1C6034u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C602Cu, 0x1C6034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6034u;
label_1c6034:
    // 0x1c6034: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6038: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C6038u;
    SET_GPR_U32(ctx, 31, 0x1C6040u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C6038u, 0x1C6040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6040u;
label_1c6040:
    // 0x1c6040: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6044: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6048: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c604c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C604Cu;
    SET_GPR_U32(ctx, 31, 0x1C6054u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C604Cu, 0x1C6054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6054u;
label_1c6054:
    // 0x1c6054: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c6054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6058: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C6058u;
    SET_GPR_U32(ctx, 31, 0x1C6060u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C6058u, 0x1C6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6060u;
label_1c6060:
    // 0x1c6060: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c6060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c6064: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c6064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c6068: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6068u;
    {
        const bool branch_taken_0x1c6068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6068) {
            ctx->pc = 0x1C609Cu;
            goto label_1c609c;
        }
    }
    ctx->pc = 0x1C6070u;
    // 0x1c6070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c6070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6074: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c6074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6078: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c6078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c607c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6080: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6080u;
    {
        const bool branch_taken_0x1c6080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6080) {
            ctx->pc = 0x1C609Cu;
            goto label_1c609c;
        }
    }
    ctx->pc = 0x1C6088u;
    // 0x1c6088: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c6088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c608c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c608cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c6090: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c6090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6094: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c6094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c6098: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c6098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c609c:
    // 0x1c609c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c60a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c60a4: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c60a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c60a8: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C60A8u;
    SET_GPR_U32(ctx, 31, 0x1C60B0u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C60A8u, 0x1C60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60B0u;
label_1c60b0:
    // 0x1c60b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C60B0u;
    {
        const bool branch_taken_0x1c60b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60b0) {
            ctx->pc = 0x1C60E4u;
            goto label_1c60e4;
        }
    }
    ctx->pc = 0x1C60B8u;
    // 0x1c60b8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c60b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c60bc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c60bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c60c0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c60c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c60c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c60c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c60c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c60c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c60cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c60ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c60d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c60d4: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c60d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c60d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c60d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c60e0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c60e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c60e4:
    // 0x1c60e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c60e8: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c60e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c60ec: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C60ECu;
    {
        const bool branch_taken_0x1c60ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60ec) {
            ctx->pc = 0x1C6154u;
            goto label_1c6154;
        }
    }
    ctx->pc = 0x1C60F4u;
    // 0x1c60f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c60f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c60f8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c60f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c60fc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C60FCu;
    {
        const bool branch_taken_0x1c60fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60fc) {
            ctx->pc = 0x1C6154u;
            goto label_1c6154;
        }
    }
    ctx->pc = 0x1C6104u;
    // 0x1c6104: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6108: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c6108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c610c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c610cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6110: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c6110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c6114: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C6114u;
    {
        const bool branch_taken_0x1c6114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6114) {
            ctx->pc = 0x1C6154u;
            goto label_1c6154;
        }
    }
    ctx->pc = 0x1C611Cu;
    // 0x1c611c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c6120: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6124: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c6124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c6128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c6128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c612c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6130: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c6130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6134: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6138: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c6138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c613c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c613cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6140: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c6140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c6144: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c6144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c6148: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c614c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c614cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c6150: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c6150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c6154:
    // 0x1c6154: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c6154u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c615c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c615cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c6160: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6168u;
}
