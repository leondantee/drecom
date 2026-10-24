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

// Function: R110_soul_get_exec
// Address: 0x2783c0 - 0x2785c8
void R110_soul_get_exec_0x2783c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R110_soul_get_exec_0x2783c0");
#endif

    switch (ctx->pc) {
        case 0x278490u: goto label_278490;
        case 0x2784e0u: goto label_2784e0;
        case 0x2784ecu: goto label_2784ec;
        case 0x2784f8u: goto label_2784f8;
        case 0x278504u: goto label_278504;
        case 0x2785b0u: goto label_2785b0;
        default: break;
    }

    ctx->pc = 0x2783c0u;

    // 0x2783c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2783c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2783c4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2783c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2783c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2783c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2783cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2783ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2783d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2783d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2783d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2783d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2783d8: 0xa022d911  sb          $v0, -0x26EF($at)
    ctx->pc = 0x2783d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x2783dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2783dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2783e0: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x2783e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2783e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2783e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2783e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2783e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2783ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2783ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2783f0: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2783f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2783f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2783f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2783f8: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x2783f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2783fc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2783fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x278400: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x278400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x278404: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278408: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27840c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27840cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278410: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278414: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x278414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x278418: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x278418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27841c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27841cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278420: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278424: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278428: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278428u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27842c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x27842cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x278430: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x278430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x278434: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278438: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27843c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27843cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278440: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x278440u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278444: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x278444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x278448: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27844c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27844cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278450: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278454: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278454u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278458: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x278458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x27845c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x278460: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278464: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278468: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x278468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27846c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27846cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278470: 0x8c22d88c  lw          $v0, -0x2774($at)
    ctx->pc = 0x278470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CD88Cu));
    // 0x278474: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x278474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x278478: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x278478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27847c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x27847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x278480: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x278480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278484: 0x240600ca  addiu       $a2, $zero, 0xCA
    ctx->pc = 0x278484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x278488: 0xc065600  jal         func_195800
    ctx->pc = 0x278488u;
    SET_GPR_U32(ctx, 31, 0x278490u);
    ctx->pc = 0x195800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195800u, 0x278488u, 0x278490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278490u;
label_278490:
    // 0x278490: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x278490u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278494: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x278494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x278498: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x278498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x27849c: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27849Cu;
    {
        const bool branch_taken_0x27849c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x27849c) {
            ctx->pc = 0x2784C8u;
            goto label_2784c8;
        }
    }
    ctx->pc = 0x2784A4u;
    // 0x2784a4: 0x8e300108  lw          $s0, 0x108($s1)
    ctx->pc = 0x2784a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x2784a8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2784a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2784ac: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2784acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2784b0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2784B0u;
    {
        const bool branch_taken_0x2784b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2784b0) {
            ctx->pc = 0x2784C8u;
            goto label_2784c8;
        }
    }
    ctx->pc = 0x2784B8u;
    // 0x2784b8: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x2784b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x2784bc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2784bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2784c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2784c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2784c4: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x2784c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
label_2784c8:
    // 0x2784c8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2784c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2784cc: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x2784ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2784d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2784d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2784d4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2784d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2784d8: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x2784D8u;
    SET_GPR_U32(ctx, 31, 0x2784E0u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x2784D8u, 0x2784E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2784E0u;
label_2784e0:
    // 0x2784e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2784e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2784e4: 0xc084964  jal         func_212590
    ctx->pc = 0x2784E4u;
    SET_GPR_U32(ctx, 31, 0x2784ECu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2784E4u, 0x2784ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2784ECu;
label_2784ec:
    // 0x2784ec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2784ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2784f0: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x2784F0u;
    SET_GPR_U32(ctx, 31, 0x2784F8u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x2784F0u, 0x2784F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2784F8u;
label_2784f8:
    // 0x2784f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2784f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2784fc: 0xc084964  jal         func_212590
    ctx->pc = 0x2784FCu;
    SET_GPR_U32(ctx, 31, 0x278504u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2784FCu, 0x278504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278504u;
label_278504:
    // 0x278504: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278508: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x278508u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27850c: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x27850cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x278510: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x278510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x278514: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278518: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27851c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27851cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278520: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278524: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x278524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x278528: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x278528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27852c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27852cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278530: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278534: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278538: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27853c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27853cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278540: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x278540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x278544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x278544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x278548: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x278548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27854c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27854cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278550: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278554: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278558: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27855c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x27855cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x278560: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x278560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x278564: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x278564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278568: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27856c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27856cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278574: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278574u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278578: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x278578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27857c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x27857cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x278580: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x278580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278584: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278588: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27858c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27858cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278590: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278590u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278594: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x278594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x278598: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x278598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27859c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2785a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2785a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2785a4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2785a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2785a8: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2785A8u;
    SET_GPR_U32(ctx, 31, 0x2785B0u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2785A8u, 0x2785B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2785B0u;
label_2785b0:
    // 0x2785b0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2785b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2785b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2785b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2785b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2785b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2785bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2785bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2785c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2785C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2785C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2785C8u;
}
