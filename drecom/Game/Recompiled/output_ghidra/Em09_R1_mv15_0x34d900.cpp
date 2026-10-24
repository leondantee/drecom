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

// Function: Em09_R1_mv15
// Address: 0x34d900 - 0x34e5dc
void Em09_R1_mv15_0x34d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv15_0x34d900");
#endif

    switch (ctx->pc) {
        case 0x34d9a8u: goto label_34d9a8;
        case 0x34da40u: goto label_34da40;
        case 0x34da4cu: goto label_34da4c;
        case 0x34da9cu: goto label_34da9c;
        case 0x34daa8u: goto label_34daa8;
        case 0x34dae4u: goto label_34dae4;
        case 0x34db44u: goto label_34db44;
        case 0x34db54u: goto label_34db54;
        case 0x34db68u: goto label_34db68;
        case 0x34db7cu: goto label_34db7c;
        case 0x34dbd4u: goto label_34dbd4;
        case 0x34de0cu: goto label_34de0c;
        case 0x34de2cu: goto label_34de2c;
        case 0x34de58u: goto label_34de58;
        case 0x34de74u: goto label_34de74;
        case 0x34ded0u: goto label_34ded0;
        case 0x34dee8u: goto label_34dee8;
        case 0x34df00u: goto label_34df00;
        case 0x34e0c8u: goto label_34e0c8;
        case 0x34e1a4u: goto label_34e1a4;
        case 0x34e1b4u: goto label_34e1b4;
        case 0x34e1c8u: goto label_34e1c8;
        case 0x34e1dcu: goto label_34e1dc;
        case 0x34e4b0u: goto label_34e4b0;
        case 0x34e4d4u: goto label_34e4d4;
        case 0x34e524u: goto label_34e524;
        default: break;
    }

    ctx->pc = 0x34d900u;

    // 0x34d900: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x34d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x34d904: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x34d904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x34d908: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34d90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34d910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34d914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d91c: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x34d91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x34d920: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34d920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d924: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34d924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34d928: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34d928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34d92c: 0x2473dbc0  addiu       $s3, $v1, -0x2440
    ctx->pc = 0x34d92cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x34d930: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d934: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x34d934u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34d938: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x34d938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34d93c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34d940: 0x10830213  beq         $a0, $v1, . + 4 + (0x213 << 2)
    ctx->pc = 0x34D940u;
    {
        const bool branch_taken_0x34d940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34d940) {
            ctx->pc = 0x34E190u;
            goto label_34e190;
        }
    }
    ctx->pc = 0x34D948u;
    // 0x34d948: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34d948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34d94c: 0x108301cd  beq         $a0, $v1, . + 4 + (0x1CD << 2)
    ctx->pc = 0x34D94Cu;
    {
        const bool branch_taken_0x34d94c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34d94c) {
            ctx->pc = 0x34E084u;
            goto label_34e084;
        }
    }
    ctx->pc = 0x34D954u;
    // 0x34d954: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d958: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x34D958u;
    {
        const bool branch_taken_0x34d958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34d958) {
            ctx->pc = 0x34DAF8u;
            goto label_34daf8;
        }
    }
    ctx->pc = 0x34D960u;
    // 0x34d960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d964: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x34D964u;
    {
        const bool branch_taken_0x34d964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34d964) {
            ctx->pc = 0x34DA30u;
            goto label_34da30;
        }
    }
    ctx->pc = 0x34D96Cu;
    // 0x34d96c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D96Cu;
    {
        const bool branch_taken_0x34d96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d96c) {
            ctx->pc = 0x34D97Cu;
            goto label_34d97c;
        }
    }
    ctx->pc = 0x34D974u;
    // 0x34d974: 0x10000310  b           . + 4 + (0x310 << 2)
    ctx->pc = 0x34D974u;
    {
        const bool branch_taken_0x34d974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d974) {
            ctx->pc = 0x34E5B8u;
            goto label_34e5b8;
        }
    }
    ctx->pc = 0x34D97Cu;
label_34d97c:
    // 0x34d97c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d980: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d984: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34d984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d988: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34d988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d98c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d990: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34d990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34d994: 0x24060f30  addiu       $a2, $zero, 0xF30
    ctx->pc = 0x34d994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
    // 0x34d998: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34d998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d99c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34d99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d9a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34D9A0u;
    SET_GPR_U32(ctx, 31, 0x34D9A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34D9A0u, 0x34D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9A8u;
label_34d9a8:
    // 0x34d9a8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d9ac: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34d9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34d9b0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x34d9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34d9b4: 0x34c70001  ori         $a3, $a2, 0x1
    ctx->pc = 0x34d9b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x34d9b8: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x34d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x34d9bc: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x34d9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34d9c0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d9c4: 0xa04810a8  sb          $t0, 0x10A8($v0)
    ctx->pc = 0x34d9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 8));
    // 0x34d9c8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d9cc: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x34d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34d9d0: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34d9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34d9d4: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x34d9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34d9d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34d9dc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34d9e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d9e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x34d9e8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x34d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x34d9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d9f0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d9f4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d9f8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34d9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34d9fc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x34d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x34da00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34da00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34da04: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34da04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da08: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34da0c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34da0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x34da10: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da14: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34da18: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x34da18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34da1c: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x34da1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x34da20: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x34da20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x34da24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34da24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34da28: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da2c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34da2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_34da30:
    // 0x34da30: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34da30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34da34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34da38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34DA38u;
    SET_GPR_U32(ctx, 31, 0x34DA40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34DA38u, 0x34DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA40u;
label_34da40:
    // 0x34da40: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34da40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34DA44u;
    SET_GPR_U32(ctx, 31, 0x34DA4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34DA44u, 0x34DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA4Cu;
label_34da4c:
    // 0x34da4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34da4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34da50: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34da50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da54: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34da58: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34da5c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da60: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34da64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34da64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34da68: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34da68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34da6c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da70: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34da70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34da74: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x34da74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x34da78: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x34da78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x34da7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34da7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34da80: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x34da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34da84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34da84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34da88: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34da88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34da8c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34da90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34da94: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34DA94u;
    SET_GPR_U32(ctx, 31, 0x34DA9Cu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34DA94u, 0x34DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA9Cu;
label_34da9c:
    // 0x34da9c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34daa0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34DAA0u;
    SET_GPR_U32(ctx, 31, 0x34DAA8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34DAA0u, 0x34DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DAA8u;
label_34daa8:
    // 0x34daa8: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x34daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34daac: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x34daacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x34dab0: 0x106002c1  beqz        $v1, . + 4 + (0x2C1 << 2)
    ctx->pc = 0x34DAB0u;
    {
        const bool branch_taken_0x34dab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dab0) {
            ctx->pc = 0x34E5B8u;
            goto label_34e5b8;
        }
    }
    ctx->pc = 0x34DAB8u;
    // 0x34dab8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34dabc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dac0: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x34dac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34dac4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dac8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dacc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34daccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34dad0: 0x24060431  addiu       $a2, $zero, 0x431
    ctx->pc = 0x34dad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
    // 0x34dad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34dad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34dad8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34dad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34dadc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34DADCu;
    SET_GPR_U32(ctx, 31, 0x34DAE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34DADCu, 0x34DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DAE4u;
label_34dae4:
    // 0x34dae4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34dae4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34dae8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34daec: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x34daecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x34daf0: 0x100002b1  b           . + 4 + (0x2B1 << 2)
    ctx->pc = 0x34DAF0u;
    {
        const bool branch_taken_0x34daf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34daf0) {
            ctx->pc = 0x34E5B8u;
            goto label_34e5b8;
        }
    }
    ctx->pc = 0x34DAF8u;
label_34daf8:
    // 0x34daf8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dafc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34db00: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34db00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34db04: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db08: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34db08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34db0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34db0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34db10: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34db10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34db14: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db18: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34db18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34db1c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34db20: 0x3c024128  lui         $v0, 0x4128
    ctx->pc = 0x34db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16680 << 16));
    // 0x34db24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34db24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34db28: 0x0  nop
    ctx->pc = 0x34db28u;
    // NOP
    // 0x34db2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34db2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34db30: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34db30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34db34: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34db34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34db38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34db3c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34DB3Cu;
    SET_GPR_U32(ctx, 31, 0x34DB44u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34DB3Cu, 0x34DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DB44u;
label_34db44:
    // 0x34db44: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34db48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34db4c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34DB4Cu;
    SET_GPR_U32(ctx, 31, 0x34DB54u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34DB4Cu, 0x34DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DB54u;
label_34db54:
    // 0x34db54: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x34db58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34db5c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x34db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x34db60: 0xc040c9e  jal         func_103278
    ctx->pc = 0x34DB60u;
    SET_GPR_U32(ctx, 31, 0x34DB68u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x34DB68u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34DB68u) { return; }
    ctx->pc = 0x34DB68u;
label_34db68:
    // 0x34db68: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db6c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x34db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34db70: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x34db70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x34db74: 0xc040c9e  jal         func_103278
    ctx->pc = 0x34DB74u;
    SET_GPR_U32(ctx, 31, 0x34DB7Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x34DB7Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34DB7Cu) { return; }
    ctx->pc = 0x34DB7Cu;
label_34db7c:
    // 0x34db7c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db80: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34db80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34db84: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34db84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34db88: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34db8c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34db90: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x34db90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34db94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34db94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34db98: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x34db98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34db9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34db9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34dba0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x34dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x34dba4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x34dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dba8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x34dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x34dbac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dbb0: 0x0  nop
    ctx->pc = 0x34dbb0u;
    // NOP
    // 0x34dbb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34dbb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34dbb8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x34dbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x34dbbc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x34dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x34dbc0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x34dbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34dbc4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x34dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34dbc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x34dbc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34dbcc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x34DBCCu;
    SET_GPR_U32(ctx, 31, 0x34DBD4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x34DBCCu, 0x34DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DBD4u;
label_34dbd4:
    // 0x34dbd4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x34dbd4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34dbd8: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x34dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x34dbdc: 0x34642400  ori         $a0, $v1, 0x2400
    ctx->pc = 0x34dbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x34dbe0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34dbe0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dbe4: 0x0  nop
    ctx->pc = 0x34dbe4u;
    // NOP
    // 0x34dbe8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x34dbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x34dbec: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x34DBECu;
    {
        const bool branch_taken_0x34dbec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dbec) {
            ctx->pc = 0x34DC14u;
            goto label_34dc14;
        }
    }
    ctx->pc = 0x34DBF4u;
    // 0x34dbf4: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x34dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dbf8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x34dbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x34dbfc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x34dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dc00: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc04: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dc08: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x34dc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x34dc0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DC0Cu;
    {
        const bool branch_taken_0x34dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dc0c) {
            ctx->pc = 0x34DC2Cu;
            goto label_34dc2c;
        }
    }
    ctx->pc = 0x34DC14u;
label_34dc14:
    // 0x34dc14: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x34dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x34dc18: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x34dc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x34dc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dc20: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dc28: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x34dc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_34dc2c:
    // 0x34dc2c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc30: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x34dc30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x34dc34: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x34DC34u;
    {
        const bool branch_taken_0x34dc34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34dc34) {
            ctx->pc = 0x34DDBCu;
            goto label_34ddbc;
        }
    }
    ctx->pc = 0x34DC3Cu;
    // 0x34dc3c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc40: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dc44: 0xc4810088  lwc1        $f1, 0x88($a0)
    ctx->pc = 0x34dc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dc48: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dc50: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x34dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dc54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34dc54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34dc58: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dc60: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x34dc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dc64: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x34dc64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34dc68: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc6c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34dc70: 0xc46101f4  lwc1        $f1, 0x1F4($v1)
    ctx->pc = 0x34dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34dc74: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x34dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x34dc78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34dc78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dc7c: 0x0  nop
    ctx->pc = 0x34dc7cu;
    // NOP
    // 0x34dc80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34dc80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34dc84: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34dc84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dc88: 0x0  nop
    ctx->pc = 0x34dc88u;
    // NOP
    // 0x34dc8c: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x34DC8Cu;
    {
        const bool branch_taken_0x34dc8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34dc8c) {
            ctx->pc = 0x34DDBCu;
            goto label_34ddbc;
        }
    }
    ctx->pc = 0x34DC94u;
    // 0x34dc94: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dc98: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34dc9c: 0x24703cf0  addiu       $s0, $v1, 0x3CF0
    ctx->pc = 0x34dc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15600));
    // 0x34dca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34dca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dca4: 0x0  nop
    ctx->pc = 0x34dca4u;
    // NOP
    // 0x34dca8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34dca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34dcac: 0x3c123f00  lui         $s2, 0x3F00
    ctx->pc = 0x34dcacu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16128 << 16));
    // 0x34dcb0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x34dcb0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dcb4: 0x0  nop
    ctx->pc = 0x34dcb4u;
    // NOP
    // 0x34dcb8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34dcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34dcbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34dcbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dcc0: 0x0  nop
    ctx->pc = 0x34dcc0u;
    // NOP
    // 0x34dcc4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34dcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34dcc8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dccc: 0xc4800120  lwc1        $f0, 0x120($a0)
    ctx->pc = 0x34dcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dcd0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x34dcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x34dcd4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dcd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dcdc: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x34dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dce0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x34dce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x34dce4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dce8: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x34dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dcec: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x34dcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x34dcf0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34dcf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dcf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dcf8: 0x0  nop
    ctx->pc = 0x34dcf8u;
    // NOP
    // 0x34dcfc: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x34dcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x34dd00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34dd00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd04: 0x0  nop
    ctx->pc = 0x34dd04u;
    // NOP
    // 0x34dd08: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x34dd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x34dd0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34dd0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd10: 0x0  nop
    ctx->pc = 0x34dd10u;
    // NOP
    // 0x34dd14: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x34dd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x34dd18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34dd18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd1c: 0x0  nop
    ctx->pc = 0x34dd1cu;
    // NOP
    // 0x34dd20: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x34dd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x34dd24: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34dd2c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34dd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x34dd30: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x34dd34: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34dd38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34dd3c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34dd40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34dd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34dd44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dd44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd48: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd4c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x34dd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x34dd50: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34dd54: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34dd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd5c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd60: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x34dd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x34dd64: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34dd68: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34dd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34dd6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dd6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd70: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd74: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x34dd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x34dd78: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34dd7c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34dd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34dd80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dd80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd84: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd88: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x34dd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x34dd8c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x34dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x34dd90: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x34dd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x34dd94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dd94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dd98: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34dd9c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x34dd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x34dda0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34dda4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dda4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dda8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34ddac: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34ddacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34ddb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ddb4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ddb8: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x34ddb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_34ddbc:
    // 0x34ddbc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ddc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ddc4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ddc8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ddcc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ddd0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x34ddd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34ddd4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ddd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dddc: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x34dddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dde0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34dde0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dde4: 0x0  nop
    ctx->pc = 0x34dde4u;
    // NOP
    // 0x34dde8: 0x450101f3  bc1t        . + 4 + (0x1F3 << 2)
    ctx->pc = 0x34DDE8u;
    {
        const bool branch_taken_0x34dde8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34dde8) {
            ctx->pc = 0x34E5B8u;
            goto label_34e5b8;
        }
    }
    ctx->pc = 0x34DDF0u;
    // 0x34ddf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34ddf4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ddf8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ddf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ddfc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de00: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34de00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34de04: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34DE04u;
    SET_GPR_U32(ctx, 31, 0x34DE0Cu);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34DE04u, 0x34DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE0Cu;
label_34de0c:
    // 0x34de0c: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x34de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x34de10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34de10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34de14: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34de14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34de18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34de18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34de1c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de20: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34de24: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34DE24u;
    SET_GPR_U32(ctx, 31, 0x34DE2Cu);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34DE24u, 0x34DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE2Cu;
label_34de2c:
    // 0x34de2c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de30: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de34: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x34de34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x34de38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34de38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34de3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34de3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34de40: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34de40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34de44: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34de48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34de48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34de4c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34de4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34de50: 0xc05c848  jal         func_172120
    ctx->pc = 0x34DE50u;
    SET_GPR_U32(ctx, 31, 0x34DE58u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34DE50u, 0x34DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE58u;
label_34de58:
    // 0x34de58: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x34de58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x34de5c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de60: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34de64: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x34de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34de68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34de68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34de6c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34DE6Cu;
    SET_GPR_U32(ctx, 31, 0x34DE74u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34DE6Cu, 0x34DE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE74u;
label_34de74:
    // 0x34de74: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de78: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34de78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34de7c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x34de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x34de80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34de80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34de84: 0x0  nop
    ctx->pc = 0x34de84u;
    // NOP
    // 0x34de88: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x34de88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x34de8c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x34de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x34de90: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x34de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x34de94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34de94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34de98: 0x0  nop
    ctx->pc = 0x34de98u;
    // NOP
    // 0x34de9c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x34de9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x34dea0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x34dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x34dea4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x34dea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x34dea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34deac: 0x0  nop
    ctx->pc = 0x34deacu;
    // NOP
    // 0x34deb0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x34deb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x34deb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34deb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34deb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34debc: 0x0  nop
    ctx->pc = 0x34debcu;
    // NOP
    // 0x34dec0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x34dec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x34dec4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34dec8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x34DEC8u;
    SET_GPR_U32(ctx, 31, 0x34DED0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x34DED0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34DED0u) { return; }
    ctx->pc = 0x34DED0u;
label_34ded0:
    // 0x34ded0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ded4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34ded8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x34ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34dedc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x34dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34dee0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x34DEE0u;
    SET_GPR_U32(ctx, 31, 0x34DEE8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x34DEE8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34DEE8u) { return; }
    ctx->pc = 0x34DEE8u;
label_34dee8:
    // 0x34dee8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x34dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34deec: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34deecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34def0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x34def0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34def4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x34def4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34def8: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x34DEF8u;
    SET_GPR_U32(ctx, 31, 0x34DF00u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x34DEF8u, 0x34DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DF00u;
label_34df00:
    // 0x34df00: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x34df00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34df04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34df04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34df08: 0x0  nop
    ctx->pc = 0x34df08u;
    // NOP
    // 0x34df0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34df0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df10: 0x0  nop
    ctx->pc = 0x34df10u;
    // NOP
    // 0x34df14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34DF14u;
    {
        const bool branch_taken_0x34df14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34df14) {
            ctx->pc = 0x34DF30u;
            goto label_34df30;
        }
    }
    ctx->pc = 0x34DF1Cu;
    // 0x34df1c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x34df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x34df20: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34df20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34df24: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x34df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34df28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34df28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34df2c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x34df2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_34df30:
    // 0x34df30: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x34df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34df34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34df34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34df38: 0x0  nop
    ctx->pc = 0x34df38u;
    // NOP
    // 0x34df3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34df3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df40: 0x0  nop
    ctx->pc = 0x34df40u;
    // NOP
    // 0x34df44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34DF44u;
    {
        const bool branch_taken_0x34df44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34df44) {
            ctx->pc = 0x34DF60u;
            goto label_34df60;
        }
    }
    ctx->pc = 0x34DF4Cu;
    // 0x34df4c: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x34df4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x34df50: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x34df50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34df54: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x34df54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34df58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34df58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34df5c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x34df5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_34df60:
    // 0x34df60: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34df60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34df64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34df64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34df68: 0xa060008e  sb          $zero, 0x8E($v1)
    ctx->pc = 0x34df68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34df6c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34df70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34df70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34df74: 0xa4600090  sh          $zero, 0x90($v1)
    ctx->pc = 0x34df74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34df78: 0x3c043e19  lui         $a0, 0x3E19
    ctx->pc = 0x34df78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15897 << 16));
    // 0x34df7c: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x34df7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x34df80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34df80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34df84: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34df84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34df88: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34df8c: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x34df8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x34df90: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x34df90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x34df94: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x34df94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34df98: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34df98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34df9c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dfa0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dfa4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x34dfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x34dfa8: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x34dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x34dfac: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x34dfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x34dfb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dfb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dfb4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dfb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dfbc: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x34dfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x34dfc0: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x34dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x34dfc4: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x34dfc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34dfc8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34dfc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dfcc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dfd0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34dfd4: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x34dfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x34dfd8: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x34dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x34dfdc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34dfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34dfe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34dfe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dfe4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dfe8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dfec: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x34dfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x34dff0: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x34dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x34dff4: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x34dff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34dff8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34dff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34dffc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e000: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e004: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x34e004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x34e008: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x34e008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x34e00c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e010: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x34e010u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e014: 0x26041330  addiu       $a0, $s0, 0x1330
    ctx->pc = 0x34e014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34e018: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x34e018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x34e01c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x34e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x34e020: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x34e020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x34e024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e028: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e02c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e030: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x34e030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x34e034: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x34e034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x34e038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e03c: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x34e03cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e040: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x34e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34e044: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x34e044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x34e048: 0x8fb300f8  lw          $s3, 0xF8($sp)
    ctx->pc = 0x34e048u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e04c: 0x26631330  addiu       $v1, $s3, 0x1330
    ctx->pc = 0x34e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x34e050: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34e050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e054: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34e054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34e058: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e05c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e060: 0xa0650029  sb          $a1, 0x29($v1)
    ctx->pc = 0x34e060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 5));
    // 0x34e064: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x34e064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x34e068: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34e068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34e06c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e06cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e070: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e074: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e078: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34e078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34e07c: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x34E07Cu;
    {
        const bool branch_taken_0x34e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e07c) {
            ctx->pc = 0x34E5B8u;
            goto label_34e5b8;
        }
    }
    ctx->pc = 0x34E084u;
label_34e084:
    // 0x34e084: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e088: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e08c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x34e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34e090: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x34e090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34e094: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x34e094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x34e098: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x34e098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x34e09c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x34e09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34e0a0: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x34e0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0a4: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x34e0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x34e0a8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0ac: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34e0b4: 0x24060a32  addiu       $a2, $zero, 0xA32
    ctx->pc = 0x34e0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2610));
    // 0x34e0b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34e0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e0bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34e0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34e0c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34E0C0u;
    SET_GPR_U32(ctx, 31, 0x34E0C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34E0C0u, 0x34E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E0C8u;
label_34e0c8:
    // 0x34e0c8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x34e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x34e0cc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x34e0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34e0d4: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x34e0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0d8: 0x261110b0  addiu       $s1, $s0, 0x10B0
    ctx->pc = 0x34e0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4272));
    // 0x34e0dc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x34e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x34e0e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x34e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x34e0e4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x34e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34e0e8: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x34e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x34e0ec: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e0f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34e0f8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x34e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x34e0fc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34e100: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e104: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x34e104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x34e108: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x34e108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x34e10c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x34e10cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x34e110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e114: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e118: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x34e118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x34e11c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e120: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e124: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34e124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34e128: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e12c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e130: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34e130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e134: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x34e134u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x34e138: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e13c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e140: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34e140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e144: 0xa4620038  sh          $v0, 0x38($v1)
    ctx->pc = 0x34e144u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x34e148: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34e148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e14c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e150: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e154: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x34e154u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x34e158: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x34e158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34e15c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e160: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e164: 0xa444003c  sh          $a0, 0x3C($v0)
    ctx->pc = 0x34e164u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e168: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e16c: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x34e16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x34e170: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34e170u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e174: 0xc440128c  lwc1        $f0, 0x128C($v0)
    ctx->pc = 0x34e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e178: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34e178u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34e17c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e180: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34e180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34e184: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e188: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e18c: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x34e18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
label_34e190:
    // 0x34e190: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e194: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34e194u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e198: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34e198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34e19c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34E19Cu;
    SET_GPR_U32(ctx, 31, 0x34E1A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34E19Cu, 0x34E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1A4u;
label_34e1a4:
    // 0x34e1a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34e1a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e1a8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e1ac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34E1ACu;
    SET_GPR_U32(ctx, 31, 0x34E1B4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34E1ACu, 0x34E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1B4u;
label_34e1b4:
    // 0x34e1b4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e1b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34e1b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e1bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34e1bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34e1c0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34E1C0u;
    SET_GPR_U32(ctx, 31, 0x34E1C8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34E1C0u, 0x34E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1C8u;
label_34e1c8:
    // 0x34e1c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34e1c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e1cc: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x34e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e1d0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34e1d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34e1d4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34E1D4u;
    SET_GPR_U32(ctx, 31, 0x34E1DCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34E1D4u, 0x34E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E1DCu;
label_34e1dc:
    // 0x34e1dc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x34e1dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e1e0: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x34e1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e1e4: 0x84e81278  lh          $t0, 0x1278($a3)
    ctx->pc = 0x34e1e4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4728)));
    // 0x34e1e8: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x34e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x34e1ec: 0xa4e31278  sh          $v1, 0x1278($a3)
    ctx->pc = 0x34e1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34e1f0: 0x150000f1  bnez        $t0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x34E1F0u;
    {
        const bool branch_taken_0x34e1f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e1f0) {
            ctx->pc = 0x34E5B8u;
            goto label_34e5b8;
        }
    }
    ctx->pc = 0x34E1F8u;
    // 0x34e1f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e1fc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e200: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34e200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34e204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e208: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e20c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34e20cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34e210: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e214: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34e214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e218: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e21c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34e21cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e220: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e224: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34e224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34e228: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34e22c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e234: 0xa4440068  sh          $a0, 0x68($v0)
    ctx->pc = 0x34e234u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e238: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e23c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34e240: 0x24440960  addiu       $a0, $v0, 0x960
    ctx->pc = 0x34e240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34e244: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x34e244u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x34e248: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x34e248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34e24c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x34e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34e250: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34e250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34e254: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x34e254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x34e258: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e25c: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e260: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x34e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34e264: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34e264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34e268: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34e26c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x34e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x34e270: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e274: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e278: 0xa4400034  sh          $zero, 0x34($v0)
    ctx->pc = 0x34e278u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x34e27c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e280: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34e280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e284: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x34e284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34e288: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x34e288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34e28c: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x34e28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x34e290: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34e290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34e294: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x34e294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34e298: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e29c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x34e29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e2a0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e2a8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34e2ac: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34e2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34e2b0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34E2B0u;
    {
        const bool branch_taken_0x34e2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e2b0) {
            ctx->pc = 0x34E2ECu;
            goto label_34e2ec;
        }
    }
    ctx->pc = 0x34E2B8u;
    // 0x34e2b8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e2c0: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34e2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e2c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e2c8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e2d0: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x34e2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e2d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34e2d8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e2e0: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34e2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e2e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34E2E4u;
    {
        const bool branch_taken_0x34e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e2e4) {
            ctx->pc = 0x34E314u;
            goto label_34e314;
        }
    }
    ctx->pc = 0x34E2ECu;
label_34e2ec:
    // 0x34e2ec: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e2f4: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34e2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e2f8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e300: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34e300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e304: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34e304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34e308: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e30c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e310: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34e310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
label_34e314:
    // 0x34e314: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x34e314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e318: 0x261210b0  addiu       $s2, $s0, 0x10B0
    ctx->pc = 0x34e318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4272));
    // 0x34e31c: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x34e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x34e320: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x34e320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x34e324: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34e324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x34e328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34e328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34e32c: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x34e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x34e330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e334: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e338: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x34e338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x34e33c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e340: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e344: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x34e344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x34e348: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e34c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e350: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34e350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e354: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e358: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e35c: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x34e35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e360: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x34e360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x34e364: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34e364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34e368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e36c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e370: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e374: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34e374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34e378: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x34e378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34e37c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e380: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e384: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x34e384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e388: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x34e388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34e38c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e390: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e394: 0xa4640038  sh          $a0, 0x38($v1)
    ctx->pc = 0x34e394u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e398: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x34e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34e39c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e3a4: 0xa464003a  sh          $a0, 0x3A($v1)
    ctx->pc = 0x34e3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e3a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x34e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34e3ac: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e3b4: 0xa464003c  sh          $a0, 0x3C($v1)
    ctx->pc = 0x34e3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e3b8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3bc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e3c0: 0xa060008e  sb          $zero, 0x8E($v1)
    ctx->pc = 0x34e3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e3c4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e3cc: 0xa4600090  sh          $zero, 0x90($v1)
    ctx->pc = 0x34e3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34e3d0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34e3d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34e3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34e3d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e3d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e3dc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e3e4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x34e3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x34e3e8: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x34e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
    // 0x34e3ec: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x34e3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x34e3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e3f4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x34e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3f8: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x34e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34e3fc: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x34e3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x34e400: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34e400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34e404: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34e404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34e408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e40c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e410: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34e410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e414: 0xe4a0009c  swc1        $f0, 0x9C($a1)
    ctx->pc = 0x34e414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 156), bits); }
    // 0x34e418: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x34e418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x34e41c: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x34e41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34e420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e424: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e428: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34e428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e42c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x34e42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x34e430: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x34e430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x34e434: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x34e434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34e438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e43c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e440: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x34e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e444: 0xe4a000a4  swc1        $f0, 0xA4($a1)
    ctx->pc = 0x34e444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 164), bits); }
    // 0x34e448: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34e448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34e44c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34e44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34e450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e454: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e458: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e45c: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x34e45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x34e460: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34e460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34e464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e468: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e46c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e470: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x34e470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x34e474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34e474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34e478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e47c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e480: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x34e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e484: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x34e484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x34e488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34e488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34e48c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e490: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e494: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34e494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e498: 0xe4a000b4  swc1        $f0, 0xB4($a1)
    ctx->pc = 0x34e498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 180), bits); }
    // 0x34e49c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e4a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34e4a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e4a4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34e4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34e4a8: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34E4A8u;
    SET_GPR_U32(ctx, 31, 0x34E4B0u);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34E4A8u, 0x34E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4B0u;
label_34e4b0:
    // 0x34e4b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x34e4b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e4b4: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x34e4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x34e4b8: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x34e4b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34e4bc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34e4c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34e4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34e4c4: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e4c8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34e4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34e4cc: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34E4CCu;
    SET_GPR_U32(ctx, 31, 0x34E4D4u);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34E4CCu, 0x34E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4D4u;
label_34e4d4:
    // 0x34e4d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34e4d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e4d8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e4dc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34e4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e4e0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34e4e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e4e8: 0x0  nop
    ctx->pc = 0x34e4e8u;
    // NOP
    // 0x34e4ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34e4ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e4f0: 0x0  nop
    ctx->pc = 0x34e4f0u;
    // NOP
    // 0x34e4f4: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x34E4F4u;
    {
        const bool branch_taken_0x34e4f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e4f4) {
            ctx->pc = 0x34E59Cu;
            goto label_34e59c;
        }
    }
    ctx->pc = 0x34E4FCu;
    // 0x34e4fc: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x34e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x34e500: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x34e500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x34e504: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x34e504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34e508: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e50c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e510: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34e514: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34e518: 0x26650120  addiu       $a1, $s3, 0x120
    ctx->pc = 0x34e518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x34e51c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x34E51Cu;
    SET_GPR_U32(ctx, 31, 0x34E524u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x34E51Cu, 0x34E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E524u;
label_34e524:
    // 0x34e524: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34e524u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e528: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x34E528u;
    {
        const bool branch_taken_0x34e528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e528) {
            ctx->pc = 0x34E59Cu;
            goto label_34e59c;
        }
    }
    ctx->pc = 0x34E530u;
    // 0x34e530: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e534: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e538: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x34e538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34e53c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34E53Cu;
    {
        const bool branch_taken_0x34e53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e53c) {
            ctx->pc = 0x34E59Cu;
            goto label_34e59c;
        }
    }
    ctx->pc = 0x34E544u;
    // 0x34e544: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e548: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e54c: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x34e54cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x34e550: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34E550u;
    {
        const bool branch_taken_0x34e550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e550) {
            ctx->pc = 0x34E59Cu;
            goto label_34e59c;
        }
    }
    ctx->pc = 0x34E558u;
    // 0x34e558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e55c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e560: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34e560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e564: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34e564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34e568: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e56c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34e56cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e570: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e574: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34e574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e578: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e57c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34e57cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e580: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e584: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34e584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34e588: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e58c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e590: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34e590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34e594: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x34e594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x34e598: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x34e598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_34e59c:
    // 0x34e59c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e5a0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34e5a4: 0x24703cf0  addiu       $s0, $v1, 0x3CF0
    ctx->pc = 0x34e5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15600));
    // 0x34e5a8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34e5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34e5ac: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x34e5acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x34e5b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34e5b4: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x34e5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_34e5b8:
    // 0x34e5b8: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x34e5b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34e5bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34e5bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e5c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34e5c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e5c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34e5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e5c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e5cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e5d0: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x34e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x34e5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x34E5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E5DCu;
}
