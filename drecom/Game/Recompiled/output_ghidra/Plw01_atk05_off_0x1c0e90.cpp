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

// Function: Plw01_atk05_off
// Address: 0x1c0e90 - 0x1c110c
void Plw01_atk05_off_0x1c0e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk05_off_0x1c0e90");
#endif

    switch (ctx->pc) {
        case 0x1c0f1cu: goto label_1c0f1c;
        case 0x1c0f44u: goto label_1c0f44;
        case 0x1c0f84u: goto label_1c0f84;
        case 0x1c0facu: goto label_1c0fac;
        case 0x1c0fccu: goto label_1c0fcc;
        case 0x1c0fdcu: goto label_1c0fdc;
        case 0x1c0ffcu: goto label_1c0ffc;
        case 0x1c1008u: goto label_1c1008;
        case 0x1c101cu: goto label_1c101c;
        case 0x1c1028u: goto label_1c1028;
        case 0x1c103cu: goto label_1c103c;
        default: break;
    }

    ctx->pc = 0x1c0e90u;

    // 0x1c0e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c0e94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c0e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c0e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0e9c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c0ea0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c0ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c0ea4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c0ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c0ea8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c0ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c0eac: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c0eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c0eb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0eb4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c0eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c0eb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ebc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c0ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0ec0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c0ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0ec4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0ec8: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C0EC8u;
    {
        const bool branch_taken_0x1c0ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0ec8) {
            ctx->pc = 0x1C0FECu;
            goto label_1c0fec;
        }
    }
    ctx->pc = 0x1C0ED0u;
    // 0x1c0ed0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ed4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C0ED4u;
    {
        const bool branch_taken_0x1c0ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0ed4) {
            ctx->pc = 0x1C0F54u;
            goto label_1c0f54;
        }
    }
    ctx->pc = 0x1C0EDCu;
    // 0x1c0edc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0EDCu;
    {
        const bool branch_taken_0x1c0edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0edc) {
            ctx->pc = 0x1C0EECu;
            goto label_1c0eec;
        }
    }
    ctx->pc = 0x1C0EE4u;
    // 0x1c0ee4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1C0EE4u;
    {
        const bool branch_taken_0x1c0ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ee4) {
            ctx->pc = 0x1C10F8u;
            goto label_1c10f8;
        }
    }
    ctx->pc = 0x1C0EECu;
label_1c0eec:
    // 0x1c0eec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c0eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0ef0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c0ef4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0EF4u;
    {
        const bool branch_taken_0x1c0ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ef4) {
            ctx->pc = 0x1C0F24u;
            goto label_1c0f24;
        }
    }
    ctx->pc = 0x1C0EFCu;
    // 0x1c0efc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f04: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0f08: 0x24061421  addiu       $a2, $zero, 0x1421
    ctx->pc = 0x1c0f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5153));
    // 0x1c0f0c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c0f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0f10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0f14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C0F14u;
    SET_GPR_U32(ctx, 31, 0x1C0F1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C0F14u, 0x1C0F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F1Cu;
label_1c0f1c:
    // 0x1c0f1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0F1Cu;
    {
        const bool branch_taken_0x1c0f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f1c) {
            ctx->pc = 0x1C0F44u;
            goto label_1c0f44;
        }
    }
    ctx->pc = 0x1C0F24u;
label_1c0f24:
    // 0x1c0f24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f2c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0f30: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x1c0f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
    // 0x1c0f34: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c0f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0f38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0f3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C0F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C0F3Cu, 0x1C0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F44u;
label_1c0f44:
    // 0x1c0f44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f48: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0f4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0f50: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0f50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c0f54:
    // 0x1c0f54: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c0f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0f58: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c0f5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0F5Cu;
    {
        const bool branch_taken_0x1c0f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f5c) {
            ctx->pc = 0x1C0F8Cu;
            goto label_1c0f8c;
        }
    }
    ctx->pc = 0x1C0F64u;
    // 0x1c0f64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f6c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0f70: 0x24061420  addiu       $a2, $zero, 0x1420
    ctx->pc = 0x1c0f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5152));
    // 0x1c0f74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0f78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0f7c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F84u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0F7Cu, 0x1C0F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F84u;
label_1c0f84:
    // 0x1c0f84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0F84u;
    {
        const bool branch_taken_0x1c0f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f84) {
            ctx->pc = 0x1C0FACu;
            goto label_1c0fac;
        }
    }
    ctx->pc = 0x1C0F8Cu;
label_1c0f8c:
    // 0x1c0f8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f94: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0f98: 0x24060a20  addiu       $a2, $zero, 0xA20
    ctx->pc = 0x1c0f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2592));
    // 0x1c0f9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0fa0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0fa4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0FA4u;
    SET_GPR_U32(ctx, 31, 0x1C0FACu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0FA4u, 0x1C0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FACu;
label_1c0fac:
    // 0x1c0fac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c0facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0fb0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c0fb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c0fb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0fb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0fbc: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c0fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0fc0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c0fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0fc4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C0FC4u;
    SET_GPR_U32(ctx, 31, 0x1C0FCCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C0FC4u, 0x1C0FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FCCu;
label_1c0fcc:
    // 0x1c0fcc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c0fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c0fd0: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c0fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0fd4: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C0FD4u;
    SET_GPR_U32(ctx, 31, 0x1C0FDCu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C0FD4u, 0x1C0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FDCu;
label_1c0fdc:
    // 0x1c0fdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0fe0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0fe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0fe8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c0fec:
    // 0x1c0fec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ff0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0ff0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0ff4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0FF4u;
    SET_GPR_U32(ctx, 31, 0x1C0FFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0FF4u, 0x1C0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FFCu;
label_1c0ffc:
    // 0x1c0ffc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1000: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C1000u;
    SET_GPR_U32(ctx, 31, 0x1C1008u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C1000u, 0x1C1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1008u;
label_1c1008:
    // 0x1c1008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c1008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c100c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1010: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1014: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C1014u;
    SET_GPR_U32(ctx, 31, 0x1C101Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C1014u, 0x1C101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C101Cu;
label_1c101c:
    // 0x1c101c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1020: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C1020u;
    SET_GPR_U32(ctx, 31, 0x1C1028u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C1020u, 0x1C1028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1028u;
label_1c1028:
    // 0x1c1028: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c102c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1030: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c1030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1034: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C1034u;
    SET_GPR_U32(ctx, 31, 0x1C103Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C1034u, 0x1C103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C103Cu;
label_1c103c:
    // 0x1c103c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C103Cu;
    {
        const bool branch_taken_0x1c103c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c103c) {
            ctx->pc = 0x1C10E0u;
            goto label_1c10e0;
        }
    }
    ctx->pc = 0x1C1044u;
    // 0x1c1044: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c1044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c1048: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c1048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c104c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C104Cu;
    {
        const bool branch_taken_0x1c104c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c104c) {
            ctx->pc = 0x1C1080u;
            goto label_1c1080;
        }
    }
    ctx->pc = 0x1C1054u;
    // 0x1c1054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1058: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c105c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c105cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c1060: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1064: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1064u;
    {
        const bool branch_taken_0x1c1064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1064) {
            ctx->pc = 0x1C1080u;
            goto label_1c1080;
        }
    }
    ctx->pc = 0x1C106Cu;
    // 0x1c106c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c106cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1070: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c1070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c1074: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c1074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1078: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c1078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c107c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c107cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c1080:
    // 0x1c1080: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1084: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1088: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c1088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c108c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c108cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1090: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1090u;
    {
        const bool branch_taken_0x1c1090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1090) {
            ctx->pc = 0x1C10B0u;
            goto label_1c10b0;
        }
    }
    ctx->pc = 0x1C1098u;
    // 0x1c1098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c109c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c10a0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c10a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c10a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c10a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c10ac: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c10acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c10b0:
    // 0x1c10b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c10b4: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c10b8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C10B8u;
    {
        const bool branch_taken_0x1c10b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c10b8) {
            ctx->pc = 0x1C10F8u;
            goto label_1c10f8;
        }
    }
    ctx->pc = 0x1C10C0u;
    // 0x1c10c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c10c8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c10c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c10cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c10ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c10d4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c10d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c10d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C10D8u;
    {
        const bool branch_taken_0x1c10d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c10d8) {
            ctx->pc = 0x1C10F8u;
            goto label_1c10f8;
        }
    }
    ctx->pc = 0x1C10E0u;
label_1c10e0:
    // 0x1c10e0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c10e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c10e4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c10e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c10e8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c10ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c10ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c10f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c10f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c10f4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c10f8:
    // 0x1c10f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c10f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c10fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c10fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1100: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c1100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c1104: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C110Cu;
}
