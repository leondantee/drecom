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

// Function: entry_0018c944
// Address: 0x18c944 - 0x18cacc
void entry_0018c944_0x18c944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c944_0x18c944");
#endif

    switch (ctx->pc) {
        case 0x18c9d4u: goto label_18c9d4;
        case 0x18ca24u: goto label_18ca24;
        case 0x18ca30u: goto label_18ca30;
        case 0x18ca3cu: goto label_18ca3c;
        default: break;
    }

    ctx->pc = 0x18c944u;

    // 0x18c944: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x18c944u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18c948: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18c948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c94c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18c950: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18c954: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c958: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c95c: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x18c95cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c960: 0x1ef03f  dsra32      $fp, $fp, 0
    ctx->pc = 0x18c960u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
    // 0x18c964: 0xdfa300e0  ld          $v1, 0xE0($sp)
    ctx->pc = 0x18c964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18c968: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18c96c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18c970: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c974: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c978: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c97c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18c97cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18c980: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x18c980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x18c984: 0xdfa200e8  ld          $v0, 0xE8($sp)
    ctx->pc = 0x18c984u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x18c988: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18c988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c98c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18c990: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18c994: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c998: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c99c: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x18c99cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c9a0: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x18c9a0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x18c9a4: 0xdfa300e8  ld          $v1, 0xE8($sp)
    ctx->pc = 0x18c9a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x18c9a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18c9ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18c9b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c9b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c9b8: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x18c9b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c9bc: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x18c9bcu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x18c9c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18c9c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18c9c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18c9c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18c9c8: 0x24060380  addiu       $a2, $zero, 0x380
    ctx->pc = 0x18c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    // 0x18c9cc: 0xc046314  jal         func_118C50
    ctx->pc = 0x18C9CCu;
    SET_GPR_U32(ctx, 31, 0x18C9D4u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x18C9D4u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18C9D4u) { return; }
    ctx->pc = 0x18C9D4u;
label_18c9d4:
    // 0x18c9d4: 0xae110350  sw          $s1, 0x350($s0)
    ctx->pc = 0x18c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 17));
    // 0x18c9d8: 0xae120354  sw          $s2, 0x354($s0)
    ctx->pc = 0x18c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 18));
    // 0x18c9dc: 0xae150330  sw          $s5, 0x330($s0)
    ctx->pc = 0x18c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 21));
    // 0x18c9e0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x18c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x18c9e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c9e8: 0x0  nop
    ctx->pc = 0x18c9e8u;
    // NOP
    // 0x18c9ec: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x18c9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x18c9f0: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x18c9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x18c9f4: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x18c9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x18c9f8: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x18c9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x18c9fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18ca00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca04: 0x0  nop
    ctx->pc = 0x18ca04u;
    // NOP
    // 0x18ca08: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x18ca08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
    // 0x18ca0c: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x18ca0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x18ca10: 0xe60002e4  swc1        $f0, 0x2E4($s0)
    ctx->pc = 0x18ca10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x18ca14: 0xe60002e0  swc1        $f0, 0x2E0($s0)
    ctx->pc = 0x18ca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x18ca18: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x18ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x18ca1c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18CA1Cu;
    SET_GPR_U32(ctx, 31, 0x18CA24u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18CA1Cu, 0x18CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA24u;
label_18ca24:
    // 0x18ca24: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x18ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x18ca28: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18CA28u;
    SET_GPR_U32(ctx, 31, 0x18CA30u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18CA28u, 0x18CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA30u;
label_18ca30:
    // 0x18ca30: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x18ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x18ca34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18CA34u;
    SET_GPR_U32(ctx, 31, 0x18CA3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18CA34u, 0x18CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA3Cu;
label_18ca3c:
    // 0x18ca3c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x18ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x18ca40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca44: 0x0  nop
    ctx->pc = 0x18ca44u;
    // NOP
    // 0x18ca48: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x18ca48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x18ca4c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x18ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x18ca50: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x18ca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x18ca54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca58: 0x0  nop
    ctx->pc = 0x18ca58u;
    // NOP
    // 0x18ca5c: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x18ca5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x18ca60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ca64: 0xa2020344  sb          $v0, 0x344($s0)
    ctx->pc = 0x18ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 836), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ca68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ca6c: 0xa2020347  sb          $v0, 0x347($s0)
    ctx->pc = 0x18ca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 839), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ca70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ca74: 0xa2020348  sb          $v0, 0x348($s0)
    ctx->pc = 0x18ca74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 840), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ca78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ca7c: 0xa202034b  sb          $v0, 0x34B($s0)
    ctx->pc = 0x18ca7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 843), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ca80: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x18ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18ca84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18ca84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ca88: 0x260202b0  addiu       $v0, $s0, 0x2B0
    ctx->pc = 0x18ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x18ca8c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18ca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18ca90: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18ca94: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18ca94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ca98: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x18ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x18ca9c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18ca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18caa0: 0xae1e0328  sw          $fp, 0x328($s0)
    ctx->pc = 0x18caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 30));
    // 0x18caa4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x18caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x18caa8: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x18caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x18caac: 0xae130320  sw          $s3, 0x320($s0)
    ctx->pc = 0x18caacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 19));
    // 0x18cab0: 0xae140324  sw          $s4, 0x324($s0)
    ctx->pc = 0x18cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 20));
    // 0x18cab4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CAB4u;
    {
        const bool branch_taken_0x18cab4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cab4) {
            ctx->pc = 0x18CACCu;
            return;
        }
    }
    ctx->pc = 0x18CABCu;
    // 0x18cabc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x18cabcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cac0: 0x92020343  lbu         $v0, 0x343($s0)
    ctx->pc = 0x18cac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 835)));
    // 0x18cac4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18cac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18cac8: 0xa2020343  sb          $v0, 0x343($s0)
    ctx->pc = 0x18cac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 835), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18caccu;
}
