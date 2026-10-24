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

// Function: Load_sword
// Address: 0x143e70 - 0x14400c
void Load_sword_0x143e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Load_sword_0x143e70");
#endif

    switch (ctx->pc) {
        case 0x143eb4u: goto label_143eb4;
        case 0x143f20u: goto label_143f20;
        case 0x143f2cu: goto label_143f2c;
        case 0x143f44u: goto label_143f44;
        case 0x143f54u: goto label_143f54;
        case 0x143f64u: goto label_143f64;
        case 0x143f78u: goto label_143f78;
        case 0x143f88u: goto label_143f88;
        default: break;
    }

    ctx->pc = 0x143e70u;

    // 0x143e70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x143e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x143e74: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x143e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x143e78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x143e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x143e7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143e80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143e84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143e8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143e90: 0x24509240  addiu       $s0, $v0, -0x6DC0
    ctx->pc = 0x143e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x143e94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143e98: 0x2453dbc0  addiu       $s3, $v0, -0x2440
    ctx->pc = 0x143e98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x143e9c: 0x8e121240  lw          $s2, 0x1240($s0)
    ctx->pc = 0x143e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3EA480u));
    // 0x143ea0: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x143ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x143ea4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x143ea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x143ea8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x143ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143eac: 0xc0765a4  jal         func_1D9690
    ctx->pc = 0x143EACu;
    SET_GPR_U32(ctx, 31, 0x143EB4u);
    ctx->pc = 0x1D9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9690u, 0x143EACu, 0x143EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143EB4u;
label_143eb4:
    // 0x143eb4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x143eb4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x143eb8: 0x72408e28  paddub      $s1, $s2, $zero
    ctx->pc = 0x143eb8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x143ebc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x143ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x143ec0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x143ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x143ec4: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x143ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x143ec8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x143ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x143ecc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x143eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x143ed0: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x143ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x143ed4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x143ed8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x143ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x143edc: 0xae621368  sw          $v0, 0x1368($s3)
    ctx->pc = 0x143edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4968), GPR_U32(ctx, 2));
    // 0x143ee0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x143ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x143ee4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x143EE4u;
    {
        const bool branch_taken_0x143ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ee4) {
            ctx->pc = 0x143F00u;
            goto label_143f00;
        }
    }
    ctx->pc = 0x143EECu;
    // 0x143eec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x143eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x143ef0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x143ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x143ef4: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x143ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x143ef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143EF8u;
    {
        const bool branch_taken_0x143ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ef8) {
            ctx->pc = 0x143F04u;
            goto label_143f04;
        }
    }
    ctx->pc = 0x143F00u;
label_143f00:
    // 0x143f00: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x143f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
label_143f04:
    // 0x143f04: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x143f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x143f08: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x143f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x143f0c: 0x24062d00  addiu       $a2, $zero, 0x2D00
    ctx->pc = 0x143f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11520));
    // 0x143f10: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x143f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x143f14: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x143f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143f18: 0xc05e858  jal         func_17A160
    ctx->pc = 0x143F18u;
    SET_GPR_U32(ctx, 31, 0x143F20u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x143F18u, 0x143F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F20u;
label_143f20:
    // 0x143f20: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x143f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x143f24: 0xc05e964  jal         func_17A590
    ctx->pc = 0x143F24u;
    SET_GPR_U32(ctx, 31, 0x143F2Cu);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x143F24u, 0x143F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F2Cu;
label_143f2c:
    // 0x143f2c: 0x8e021244  lw          $v0, 0x1244($s0)
    ctx->pc = 0x143f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4676)));
    // 0x143f30: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x143f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x143f34: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x143f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x143f38: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x143f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x143f3c: 0xc0951c0  jal         func_254700
    ctx->pc = 0x143F3Cu;
    SET_GPR_U32(ctx, 31, 0x143F44u);
    ctx->pc = 0x254700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254700u, 0x143F3Cu, 0x143F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F44u;
label_143f44:
    // 0x143f44: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x143f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x143f48: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x143f48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x143f4c: 0xc096558  jal         func_259560
    ctx->pc = 0x143F4Cu;
    SET_GPR_U32(ctx, 31, 0x143F54u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x143F4Cu, 0x143F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F54u;
label_143f54:
    // 0x143f54: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x143f54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x143f58: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x143f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x143f5c: 0xc05be64  jal         func_16F990
    ctx->pc = 0x143F5Cu;
    SET_GPR_U32(ctx, 31, 0x143F64u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x143F5Cu, 0x143F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F64u;
label_143f64:
    // 0x143f64: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x143f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x143f68: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x143f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x143f6c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x143f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x143f70: 0xc095384  jal         func_254E10
    ctx->pc = 0x143F70u;
    SET_GPR_U32(ctx, 31, 0x143F78u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x143F70u, 0x143F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F78u;
label_143f78:
    // 0x143f78: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x143f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x143f7c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x143f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x143f80: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x143F80u;
    SET_GPR_U32(ctx, 31, 0x143F88u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x143F80u, 0x143F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F88u;
label_143f88:
    // 0x143f88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f8c: 0x0  nop
    ctx->pc = 0x143f8cu;
    // NOP
    // 0x143f90: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x143f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x143f94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f98: 0x0  nop
    ctx->pc = 0x143f98u;
    // NOP
    // 0x143f9c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x143f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x143fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143fa4: 0x0  nop
    ctx->pc = 0x143fa4u;
    // NOP
    // 0x143fa8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x143fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x143fac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x143facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x143fb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143fb4: 0x0  nop
    ctx->pc = 0x143fb4u;
    // NOP
    // 0x143fb8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x143fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x143fbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143fc0: 0x0  nop
    ctx->pc = 0x143fc0u;
    // NOP
    // 0x143fc4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x143fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x143fc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143fcc: 0x0  nop
    ctx->pc = 0x143fccu;
    // NOP
    // 0x143fd0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x143fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x143fd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143fd8: 0x0  nop
    ctx->pc = 0x143fd8u;
    // NOP
    // 0x143fdc: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x143fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x143fe0: 0xa66015f0  sh          $zero, 0x15F0($s3)
    ctx->pc = 0x143fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5616), (uint16_t)GPR_U32(ctx, 0));
    // 0x143fe4: 0xa66015ee  sh          $zero, 0x15EE($s3)
    ctx->pc = 0x143fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5614), (uint16_t)GPR_U32(ctx, 0));
    // 0x143fe8: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x143fe8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143fec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143fecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143ff0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143ff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144000: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x144000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x144004: 0x3e00008  jr          $ra
    ctx->pc = 0x144004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14400Cu;
}
