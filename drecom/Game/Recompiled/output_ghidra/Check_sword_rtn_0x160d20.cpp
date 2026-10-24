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

// Function: Check_sword_rtn
// Address: 0x160d20 - 0x161040
void Check_sword_rtn_0x160d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_sword_rtn_0x160d20");
#endif

    switch (ctx->pc) {
        case 0x160f18u: goto label_160f18;
        default: break;
    }

    ctx->pc = 0x160d20u;

    // 0x160d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x160d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x160d24: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x160d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x160d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160d30: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x160d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x160d34: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x160d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x160d38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x160d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x160d3c: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x160d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x160d40: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x160d40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x160d44: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x160d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x160d48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160D48u;
    {
        const bool branch_taken_0x160d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160d48) {
            ctx->pc = 0x160D5Cu;
            goto label_160d5c;
        }
    }
    ctx->pc = 0x160D50u;
    // 0x160d50: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x160d50u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160d54: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x160D54u;
    {
        const bool branch_taken_0x160d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160d54) {
            ctx->pc = 0x161028u;
            goto label_161028;
        }
    }
    ctx->pc = 0x160D5Cu;
label_160d5c:
    // 0x160d5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x160d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160d60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x160d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x160d64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x160d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x160d68: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x160d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x160d6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160d70: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x160d70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x160d74: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x160d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x160d78: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x160D78u;
    {
        const bool branch_taken_0x160d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160d78) {
            ctx->pc = 0x160DD0u;
            goto label_160dd0;
        }
    }
    ctx->pc = 0x160D80u;
    // 0x160d80: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x160d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x160d84: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x160d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160d88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160d8c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160D8Cu;
    {
        const bool branch_taken_0x160d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160d8c) {
            ctx->pc = 0x160DA8u;
            goto label_160da8;
        }
    }
    ctx->pc = 0x160D94u;
    // 0x160d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160D98u;
    {
        const bool branch_taken_0x160d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160d98) {
            ctx->pc = 0x160DA8u;
            goto label_160da8;
        }
    }
    ctx->pc = 0x160DA0u;
    // 0x160da0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x160DA0u;
    {
        const bool branch_taken_0x160da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160da0) {
            ctx->pc = 0x160DD0u;
            goto label_160dd0;
        }
    }
    ctx->pc = 0x160DA8u;
label_160da8:
    // 0x160da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160dac: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160db0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x160db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x160db4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160db4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160db8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160dbc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160dc0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160dc8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x160DC8u;
    {
        const bool branch_taken_0x160dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160dc8) {
            ctx->pc = 0x161028u;
            goto label_161028;
        }
    }
    ctx->pc = 0x160DD0u;
label_160dd0:
    // 0x160dd0: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x160dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x160dd4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x160dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160dd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160ddc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x160DDCu;
    {
        const bool branch_taken_0x160ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160ddc) {
            ctx->pc = 0x160EA8u;
            goto label_160ea8;
        }
    }
    ctx->pc = 0x160DE4u;
    // 0x160de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160de8: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x160DE8u;
    {
        const bool branch_taken_0x160de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160de8) {
            ctx->pc = 0x160EA8u;
            goto label_160ea8;
        }
    }
    ctx->pc = 0x160DF0u;
    // 0x160df0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160df4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160DF4u;
    {
        const bool branch_taken_0x160df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160df4) {
            ctx->pc = 0x160E0Cu;
            goto label_160e0c;
        }
    }
    ctx->pc = 0x160DFCu;
    // 0x160dfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160DFCu;
    {
        const bool branch_taken_0x160dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160dfc) {
            ctx->pc = 0x160E0Cu;
            goto label_160e0c;
        }
    }
    ctx->pc = 0x160E04u;
    // 0x160e04: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x160E04u;
    {
        const bool branch_taken_0x160e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e04) {
            ctx->pc = 0x161024u;
            goto label_161024;
        }
    }
    ctx->pc = 0x160E0Cu;
label_160e0c:
    // 0x160e0c: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x160e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160e10: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x160e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x160e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160e18: 0x0  nop
    ctx->pc = 0x160e18u;
    // NOP
    // 0x160e1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160e20: 0x0  nop
    ctx->pc = 0x160e20u;
    // NOP
    // 0x160e24: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x160E24u;
    {
        const bool branch_taken_0x160e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160e24) {
            ctx->pc = 0x160E58u;
            goto label_160e58;
        }
    }
    ctx->pc = 0x160E2Cu;
    // 0x160e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e30: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160e34: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x160e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x160e38: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160e38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160e3c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160e40: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160e44: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160e48: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x160e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160e4c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x160e50: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x160E50u;
    {
        const bool branch_taken_0x160e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e50) {
            ctx->pc = 0x161024u;
            goto label_161024;
        }
    }
    ctx->pc = 0x160E58u;
label_160e58:
    // 0x160e58: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x160e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x160e5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160E5Cu;
    {
        const bool branch_taken_0x160e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e5c) {
            ctx->pc = 0x160E84u;
            goto label_160e84;
        }
    }
    ctx->pc = 0x160E64u;
    // 0x160e64: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x160e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x160e68: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x160e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x160e6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160e70: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x160e70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x160e74: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x160e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x160e78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x160e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x160e7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160e80: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x160e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_160e84:
    // 0x160e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e88: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160e8c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x160e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x160e90: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160e94: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160e98: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160e9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160ea0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x160EA0u;
    {
        const bool branch_taken_0x160ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ea0) {
            ctx->pc = 0x161024u;
            goto label_161024;
        }
    }
    ctx->pc = 0x160EA8u;
label_160ea8:
    // 0x160ea8: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x160ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x160eac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160EACu;
    {
        const bool branch_taken_0x160eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160eac) {
            ctx->pc = 0x160ED4u;
            goto label_160ed4;
        }
    }
    ctx->pc = 0x160EB4u;
    // 0x160eb4: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x160eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x160eb8: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x160eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x160ebc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160ec0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x160ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x160ec4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x160ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x160ec8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x160ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x160ecc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160ed0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x160ed0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_160ed4:
    // 0x160ed4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160ed8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x160ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x160edc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x160edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x160ee0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x160EE0u;
    {
        const bool branch_taken_0x160ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ee0) {
            ctx->pc = 0x160FBCu;
            goto label_160fbc;
        }
    }
    ctx->pc = 0x160EE8u;
    // 0x160ee8: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x160ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160eec: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x160eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x160ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160ef4: 0x0  nop
    ctx->pc = 0x160ef4u;
    // NOP
    // 0x160ef8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160ef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160efc: 0x0  nop
    ctx->pc = 0x160efcu;
    // NOP
    // 0x160f00: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x160F00u;
    {
        const bool branch_taken_0x160f00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f00) {
            ctx->pc = 0x160F98u;
            goto label_160f98;
        }
    }
    ctx->pc = 0x160F08u;
    // 0x160f08: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x160f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160f0c: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x160f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160f10: 0xc058f20  jal         func_163C80
    ctx->pc = 0x160F10u;
    SET_GPR_U32(ctx, 31, 0x160F18u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x160F10u, 0x160F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F18u;
label_160f18:
    // 0x160f18: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x160f1c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160f20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f24: 0x0  nop
    ctx->pc = 0x160f24u;
    // NOP
    // 0x160f28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f2c: 0x0  nop
    ctx->pc = 0x160f2cu;
    // NOP
    // 0x160f30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x160F30u;
    {
        const bool branch_taken_0x160f30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f30) {
            ctx->pc = 0x160F4Cu;
            goto label_160f4c;
        }
    }
    ctx->pc = 0x160F38u;
    // 0x160f38: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x160f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x160f3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160f40: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x160f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160f44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x160f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x160f48: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_160f4c:
    // 0x160f4c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160f50: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x160f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x160f54: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x160f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x160f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f5c: 0x0  nop
    ctx->pc = 0x160f5cu;
    // NOP
    // 0x160f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f64: 0x0  nop
    ctx->pc = 0x160f64u;
    // NOP
    // 0x160f68: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x160F68u;
    {
        const bool branch_taken_0x160f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f68) {
            ctx->pc = 0x160F98u;
            goto label_160f98;
        }
    }
    ctx->pc = 0x160F70u;
    // 0x160f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160f74: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160f78: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x160f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x160f7c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160f80: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160f80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160f84: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160f88: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160f90: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x160F90u;
    {
        const bool branch_taken_0x160f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f90) {
            ctx->pc = 0x161028u;
            goto label_161028;
        }
    }
    ctx->pc = 0x160F98u;
label_160f98:
    // 0x160f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160f9c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160fa0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x160fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x160fa4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160fa8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160fac: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160fb0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160fb4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x160FB4u;
    {
        const bool branch_taken_0x160fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160fb4) {
            ctx->pc = 0x161024u;
            goto label_161024;
        }
    }
    ctx->pc = 0x160FBCu;
label_160fbc:
    // 0x160fbc: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x160fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160fc0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x160fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x160fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160fc8: 0x0  nop
    ctx->pc = 0x160fc8u;
    // NOP
    // 0x160fcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160fd0: 0x0  nop
    ctx->pc = 0x160fd0u;
    // NOP
    // 0x160fd4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x160FD4u;
    {
        const bool branch_taken_0x160fd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160fd4) {
            ctx->pc = 0x161008u;
            goto label_161008;
        }
    }
    ctx->pc = 0x160FDCu;
    // 0x160fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160fe0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160fe4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x160fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x160fe8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160fec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ff0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ff4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160ff8: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x160ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160ffc: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x161000: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x161000u;
    {
        const bool branch_taken_0x161000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161000) {
            ctx->pc = 0x161024u;
            goto label_161024;
        }
    }
    ctx->pc = 0x161008u;
label_161008:
    // 0x161008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16100c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16100cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161010: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x161010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x161014: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161018: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16101c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16101cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161020: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_161024:
    // 0x161024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161028:
    // 0x161028: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x161028u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16102c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16102cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161034: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x161034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161038: 0x3e00008  jr          $ra
    ctx->pc = 0x161038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161040u;
}
