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

// Function: Plw01_atk02_on
// Address: 0x1bf9d0 - 0x1bfc9c
void Plw01_atk02_on_0x1bf9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk02_on_0x1bf9d0");
#endif

    switch (ctx->pc) {
        case 0x1bfa5cu: goto label_1bfa5c;
        case 0x1bfa84u: goto label_1bfa84;
        case 0x1bfac4u: goto label_1bfac4;
        case 0x1bfaecu: goto label_1bfaec;
        case 0x1bfb0cu: goto label_1bfb0c;
        case 0x1bfb24u: goto label_1bfb24;
        case 0x1bfb34u: goto label_1bfb34;
        case 0x1bfb54u: goto label_1bfb54;
        case 0x1bfb60u: goto label_1bfb60;
        case 0x1bfb74u: goto label_1bfb74;
        case 0x1bfb80u: goto label_1bfb80;
        case 0x1bfbd0u: goto label_1bfbd0;
        default: break;
    }

    ctx->pc = 0x1bf9d0u;

    // 0x1bf9d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bf9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bf9d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1bf9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1bf9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf9dc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1bf9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1bf9e0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1bf9e4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bf9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bf9e8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1bf9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1bf9ec: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1bf9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1bf9f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf9f4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1bf9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1bf9f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf9fc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bf9fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bfa00: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bfa00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bfa04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bfa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfa08: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1BFA08u;
    {
        const bool branch_taken_0x1bfa08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bfa08) {
            ctx->pc = 0x1BFB44u;
            goto label_1bfb44;
        }
    }
    ctx->pc = 0x1BFA10u;
    // 0x1bfa10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfa14: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BFA14u;
    {
        const bool branch_taken_0x1bfa14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bfa14) {
            ctx->pc = 0x1BFA94u;
            goto label_1bfa94;
        }
    }
    ctx->pc = 0x1BFA1Cu;
    // 0x1bfa1c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFA1Cu;
    {
        const bool branch_taken_0x1bfa1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa1c) {
            ctx->pc = 0x1BFA2Cu;
            goto label_1bfa2c;
        }
    }
    ctx->pc = 0x1BFA24u;
    // 0x1bfa24: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1BFA24u;
    {
        const bool branch_taken_0x1bfa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa24) {
            ctx->pc = 0x1BFC88u;
            goto label_1bfc88;
        }
    }
    ctx->pc = 0x1BFA2Cu;
label_1bfa2c:
    // 0x1bfa2c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bfa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bfa30: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bfa30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bfa34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFA34u;
    {
        const bool branch_taken_0x1bfa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa34) {
            ctx->pc = 0x1BFA64u;
            goto label_1bfa64;
        }
    }
    ctx->pc = 0x1BFA3Cu;
    // 0x1bfa3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfa40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfa44: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bfa44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfa48: 0x24061417  addiu       $a2, $zero, 0x1417
    ctx->pc = 0x1bfa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5143));
    // 0x1bfa4c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bfa4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bfa50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bfa50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bfa54: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BFA54u;
    SET_GPR_U32(ctx, 31, 0x1BFA5Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BFA54u, 0x1BFA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA5Cu;
label_1bfa5c:
    // 0x1bfa5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFA5Cu;
    {
        const bool branch_taken_0x1bfa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa5c) {
            ctx->pc = 0x1BFA84u;
            goto label_1bfa84;
        }
    }
    ctx->pc = 0x1BFA64u;
label_1bfa64:
    // 0x1bfa64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfa68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfa6c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bfa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfa70: 0x24060a17  addiu       $a2, $zero, 0xA17
    ctx->pc = 0x1bfa70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2583));
    // 0x1bfa74: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bfa74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bfa78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bfa78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bfa7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BFA7Cu;
    SET_GPR_U32(ctx, 31, 0x1BFA84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BFA7Cu, 0x1BFA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA84u;
label_1bfa84:
    // 0x1bfa84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfa88: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bfa88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bfa8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bfa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bfa90: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bfa90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bfa94:
    // 0x1bfa94: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bfa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bfa98: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bfa98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bfa9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFA9Cu;
    {
        const bool branch_taken_0x1bfa9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa9c) {
            ctx->pc = 0x1BFACCu;
            goto label_1bfacc;
        }
    }
    ctx->pc = 0x1BFAA4u;
    // 0x1bfaa4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfaa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfaac: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bfaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfab0: 0x24061417  addiu       $a2, $zero, 0x1417
    ctx->pc = 0x1bfab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5143));
    // 0x1bfab4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfab8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bfab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bfabc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BFABCu;
    SET_GPR_U32(ctx, 31, 0x1BFAC4u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BFABCu, 0x1BFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFAC4u;
label_1bfac4:
    // 0x1bfac4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFAC4u;
    {
        const bool branch_taken_0x1bfac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfac4) {
            ctx->pc = 0x1BFAECu;
            goto label_1bfaec;
        }
    }
    ctx->pc = 0x1BFACCu;
label_1bfacc:
    // 0x1bfacc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfad0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfad4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bfad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfad8: 0x24060a17  addiu       $a2, $zero, 0xA17
    ctx->pc = 0x1bfad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2583));
    // 0x1bfadc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfadcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfae0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bfae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bfae4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BFAE4u;
    SET_GPR_U32(ctx, 31, 0x1BFAECu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BFAE4u, 0x1BFAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFAECu;
label_1bfaec:
    // 0x1bfaec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bfaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bfaf0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1bfaf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1bfaf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfaf8: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bfaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfafc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1bfafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bfb00: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1bfb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1bfb04: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BFB04u;
    SET_GPR_U32(ctx, 31, 0x1BFB0Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BFB04u, 0x1BFB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB0Cu;
label_1bfb0c:
    // 0x1bfb0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb14: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bfb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfb18: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bfb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bfb1c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BFB1Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB24u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BFB1Cu, 0x1BFB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB24u;
label_1bfb24:
    // 0x1bfb24: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bfb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bfb28: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bfb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfb2c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1BFB2Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB34u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1BFB2Cu, 0x1BFB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB34u;
label_1bfb34:
    // 0x1bfb34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb38: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bfb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bfb3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bfb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bfb40: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bfb40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bfb44:
    // 0x1bfb44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bfb48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfb4c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BFB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BFB4Cu, 0x1BFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB54u;
label_1bfb54:
    // 0x1bfb54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb58: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BFB58u;
    SET_GPR_U32(ctx, 31, 0x1BFB60u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BFB58u, 0x1BFB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB60u;
label_1bfb60:
    // 0x1bfb60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bfb60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bfb64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bfb68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfb6c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB74u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BFB6Cu, 0x1BFB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB74u;
label_1bfb74:
    // 0x1bfb74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bfb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfb78: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BFB78u;
    SET_GPR_U32(ctx, 31, 0x1BFB80u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BFB78u, 0x1BFB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB80u;
label_1bfb80:
    // 0x1bfb80: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1bfb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bfb84: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1bfb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1bfb88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BFB88u;
    {
        const bool branch_taken_0x1bfb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb88) {
            ctx->pc = 0x1BFBBCu;
            goto label_1bfbbc;
        }
    }
    ctx->pc = 0x1BFB90u;
    // 0x1bfb90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb94: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bfb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bfb98: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1bfb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1bfb9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bfb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bfba0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BFBA0u;
    {
        const bool branch_taken_0x1bfba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfba0) {
            ctx->pc = 0x1BFBBCu;
            goto label_1bfbbc;
        }
    }
    ctx->pc = 0x1BFBA8u;
    // 0x1bfba8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfbac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bfbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bfbb0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1bfbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1bfbb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bfbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bfbb8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bfbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1bfbbc:
    // 0x1bfbbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfbc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfbc4: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1bfbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfbc8: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BFBC8u;
    SET_GPR_U32(ctx, 31, 0x1BFBD0u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BFBC8u, 0x1BFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBD0u;
label_1bfbd0:
    // 0x1bfbd0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BFBD0u;
    {
        const bool branch_taken_0x1bfbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfbd0) {
            ctx->pc = 0x1BFC04u;
            goto label_1bfc04;
        }
    }
    ctx->pc = 0x1BFBD8u;
    // 0x1bfbd8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bfbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfbdc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bfbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bfbe0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bfbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bfbe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bfbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bfbe8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bfbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bfbec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bfbf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfbf4: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1bfbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfbf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bfbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfbfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc00: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bfc00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bfc04:
    // 0x1bfc04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc08: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1bfc08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1bfc0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bfc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bfc10: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bfc10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bfc14: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BFC14u;
    {
        const bool branch_taken_0x1bfc14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc14) {
            ctx->pc = 0x1BFC88u;
            goto label_1bfc88;
        }
    }
    ctx->pc = 0x1BFC1Cu;
    // 0x1bfc1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc20: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1bfc20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1bfc24: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BFC24u;
    {
        const bool branch_taken_0x1bfc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc24) {
            ctx->pc = 0x1BFC88u;
            goto label_1bfc88;
        }
    }
    ctx->pc = 0x1BFC2Cu;
    // 0x1bfc2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc30: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bfc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bfc34: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bfc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bfc38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bfc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bfc3c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BFC3Cu;
    {
        const bool branch_taken_0x1bfc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc3c) {
            ctx->pc = 0x1BFC88u;
            goto label_1bfc88;
        }
    }
    ctx->pc = 0x1BFC44u;
    // 0x1bfc44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bfc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bfc48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc4c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1bfc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bfc50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bfc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfc54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc58: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bfc58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bfc5c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bfc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bfc60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc64: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1bfc64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bfc68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bfc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfc70: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bfc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc74: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bfc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bfc78: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bfc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bfc7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bfc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bfc80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bfc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bfc84: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bfc84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1bfc88:
    // 0x1bfc88: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1bfc88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfc8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfc90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bfc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bfc94: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFC9Cu;
}
