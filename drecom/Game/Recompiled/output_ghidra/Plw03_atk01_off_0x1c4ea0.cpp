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

// Function: Plw03_atk01_off
// Address: 0x1c4ea0 - 0x1c5104
void Plw03_atk01_off_0x1c4ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk01_off_0x1c4ea0");
#endif

    switch (ctx->pc) {
        case 0x1c4f2cu: goto label_1c4f2c;
        case 0x1c4f54u: goto label_1c4f54;
        case 0x1c4f94u: goto label_1c4f94;
        case 0x1c4fbcu: goto label_1c4fbc;
        case 0x1c4fdcu: goto label_1c4fdc;
        case 0x1c4fecu: goto label_1c4fec;
        case 0x1c500cu: goto label_1c500c;
        case 0x1c5018u: goto label_1c5018;
        case 0x1c502cu: goto label_1c502c;
        case 0x1c5038u: goto label_1c5038;
        case 0x1c504cu: goto label_1c504c;
        default: break;
    }

    ctx->pc = 0x1c4ea0u;

    // 0x1c4ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4ea4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c4ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c4ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4eac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c4eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c4eb0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c4eb4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c4eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c4eb8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c4eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c4ebc: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c4ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c4ec0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4ec4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c4ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c4ec8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4ecc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c4eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c4ed0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c4ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c4ed4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c4ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4ed8: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C4ED8u;
    {
        const bool branch_taken_0x1c4ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4ed8) {
            ctx->pc = 0x1C4FFCu;
            goto label_1c4ffc;
        }
    }
    ctx->pc = 0x1C4EE0u;
    // 0x1c4ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4ee4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C4EE4u;
    {
        const bool branch_taken_0x1c4ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4ee4) {
            ctx->pc = 0x1C4F64u;
            goto label_1c4f64;
        }
    }
    ctx->pc = 0x1C4EECu;
    // 0x1c4eec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4EECu;
    {
        const bool branch_taken_0x1c4eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4eec) {
            ctx->pc = 0x1C4EFCu;
            goto label_1c4efc;
        }
    }
    ctx->pc = 0x1C4EF4u;
    // 0x1c4ef4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1C4EF4u;
    {
        const bool branch_taken_0x1c4ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ef4) {
            ctx->pc = 0x1C50F0u;
            goto label_1c50f0;
        }
    }
    ctx->pc = 0x1C4EFCu;
label_1c4efc:
    // 0x1c4efc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c4f00: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c4f04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4F04u;
    {
        const bool branch_taken_0x1c4f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f04) {
            ctx->pc = 0x1C4F34u;
            goto label_1c4f34;
        }
    }
    ctx->pc = 0x1C4F0Cu;
    // 0x1c4f0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4f10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4f14: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4f18: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x1c4f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x1c4f1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4f20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4f24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C4F24u;
    SET_GPR_U32(ctx, 31, 0x1C4F2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C4F24u, 0x1C4F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F2Cu;
label_1c4f2c:
    // 0x1c4f2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4F2Cu;
    {
        const bool branch_taken_0x1c4f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f2c) {
            ctx->pc = 0x1C4F54u;
            goto label_1c4f54;
        }
    }
    ctx->pc = 0x1C4F34u;
label_1c4f34:
    // 0x1c4f34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4f38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4f3c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4f40: 0x24060a0a  addiu       $a2, $zero, 0xA0A
    ctx->pc = 0x1c4f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    // 0x1c4f44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4f48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4f4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C4F4Cu;
    SET_GPR_U32(ctx, 31, 0x1C4F54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C4F4Cu, 0x1C4F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F54u;
label_1c4f54:
    // 0x1c4f54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4f58: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c4f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c4f5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4f60: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c4f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c4f64:
    // 0x1c4f64: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c4f68: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c4f6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4F6Cu;
    {
        const bool branch_taken_0x1c4f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f6c) {
            ctx->pc = 0x1C4F9Cu;
            goto label_1c4f9c;
        }
    }
    ctx->pc = 0x1C4F74u;
    // 0x1c4f74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4f78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4f7c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4f80: 0x24061409  addiu       $a2, $zero, 0x1409
    ctx->pc = 0x1c4f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x1c4f84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4f88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4f88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4f8c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C4F94u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C4F8Cu, 0x1C4F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F94u;
label_1c4f94:
    // 0x1c4f94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4F94u;
    {
        const bool branch_taken_0x1c4f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f94) {
            ctx->pc = 0x1C4FBCu;
            goto label_1c4fbc;
        }
    }
    ctx->pc = 0x1C4F9Cu;
label_1c4f9c:
    // 0x1c4f9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4fa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4fa4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4fa8: 0x24060a09  addiu       $a2, $zero, 0xA09
    ctx->pc = 0x1c4fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2569));
    // 0x1c4fac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4fb0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4fb4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C4FB4u;
    SET_GPR_U32(ctx, 31, 0x1C4FBCu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C4FB4u, 0x1C4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FBCu;
label_1c4fbc:
    // 0x1c4fbc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c4fc0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c4fc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c4fc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4fc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4fcc: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c4fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4fd0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c4fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4fd4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C4FD4u;
    SET_GPR_U32(ctx, 31, 0x1C4FDCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C4FD4u, 0x1C4FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FDCu;
label_1c4fdc:
    // 0x1c4fdc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c4fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c4fe0: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c4fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4fe4: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C4FE4u;
    SET_GPR_U32(ctx, 31, 0x1C4FECu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C4FE4u, 0x1C4FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FECu;
label_1c4fec:
    // 0x1c4fec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4ff0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c4ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c4ff4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4ff8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c4ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c4ffc:
    // 0x1c4ffc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5000: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5004: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C5004u;
    SET_GPR_U32(ctx, 31, 0x1C500Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C5004u, 0x1C500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C500Cu;
label_1c500c:
    // 0x1c500c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c500cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5010: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5010u;
    SET_GPR_U32(ctx, 31, 0x1C5018u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5010u, 0x1C5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5018u;
label_1c5018:
    // 0x1c5018: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c501c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5020: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5020u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5024: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C5024u;
    SET_GPR_U32(ctx, 31, 0x1C502Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C5024u, 0x1C502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C502Cu;
label_1c502c:
    // 0x1c502c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5030: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5030u;
    SET_GPR_U32(ctx, 31, 0x1C5038u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5030u, 0x1C5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5038u;
label_1c5038:
    // 0x1c5038: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c503c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c503cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5040: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c5040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5044: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C5044u;
    SET_GPR_U32(ctx, 31, 0x1C504Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C5044u, 0x1C504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C504Cu;
label_1c504c:
    // 0x1c504c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C504Cu;
    {
        const bool branch_taken_0x1c504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c504c) {
            ctx->pc = 0x1C50D8u;
            goto label_1c50d8;
        }
    }
    ctx->pc = 0x1C5054u;
    // 0x1c5054: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c5054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c5058: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c5058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c505c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C505Cu;
    {
        const bool branch_taken_0x1c505c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c505c) {
            ctx->pc = 0x1C50A8u;
            goto label_1c50a8;
        }
    }
    ctx->pc = 0x1C5064u;
    // 0x1c5064: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5068: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c5068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c506c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c506cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c5070: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5074: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5074u;
    {
        const bool branch_taken_0x1c5074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5074) {
            ctx->pc = 0x1C50A8u;
            goto label_1c50a8;
        }
    }
    ctx->pc = 0x1C507Cu;
    // 0x1c507c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c507cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5080: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c5080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c5084: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c5084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5088: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c5088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c508c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c508cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c5090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5094: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5098: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c509c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c509cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c50a4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c50a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c50a8:
    // 0x1c50a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c50ac: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c50acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c50b0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C50B0u;
    {
        const bool branch_taken_0x1c50b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c50b0) {
            ctx->pc = 0x1C50F0u;
            goto label_1c50f0;
        }
    }
    ctx->pc = 0x1C50B8u;
    // 0x1c50b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c50b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c50c0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c50c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c50c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c50c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c50cc: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c50ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c50d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C50D0u;
    {
        const bool branch_taken_0x1c50d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c50d0) {
            ctx->pc = 0x1C50F0u;
            goto label_1c50f0;
        }
    }
    ctx->pc = 0x1C50D8u;
label_1c50d8:
    // 0x1c50d8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c50d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c50dc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c50e0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c50e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c50e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c50e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c50e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c50e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c50ec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c50ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c50f0:
    // 0x1c50f0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c50f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c50f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c50f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c50fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5104u;
}
