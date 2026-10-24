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

// Function: entry_0014e04c
// Address: 0x14e04c - 0x14e108
void entry_0014e04c_0x14e04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e04c_0x14e04c");
#endif

    switch (ctx->pc) {
        case 0x14e08cu: goto label_14e08c;
        case 0x14e0b0u: goto label_14e0b0;
        case 0x14e0e8u: goto label_14e0e8;
        default: break;
    }

    ctx->pc = 0x14e04cu;

    // 0x14e04c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e050: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e054: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14e054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x14e058: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x14E058u;
    {
        const bool branch_taken_0x14e058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e058) {
            ctx->pc = 0x14E108u;
            return;
        }
    }
    ctx->pc = 0x14E060u;
    // 0x14e060: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e064: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x14e064u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e068: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x14e068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x14e06c: 0x34627fff  ori         $v0, $v1, 0x7FFF
    ctx->pc = 0x14e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x14e070: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14e070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x14e074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e078: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14e078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14e07c: 0x920213a7  lbu         $v0, 0x13A7($s0)
    ctx->pc = 0x14e07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5031)));
    // 0x14e080: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14e080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e084: 0xc055600  jal         func_155800
    ctx->pc = 0x14E084u;
    SET_GPR_U32(ctx, 31, 0x14E08Cu);
    ctx->pc = 0x155800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155800u, 0x14E084u, 0x14E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E08Cu;
label_14e08c:
    // 0x14e08c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x14e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x14e090: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x14e090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x14e094: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x14e094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14e098: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x14e098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14e09c: 0x2404030c  addiu       $a0, $zero, 0x30C
    ctx->pc = 0x14e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    // 0x14e0a0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x14e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x14e0a4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14e0a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14e0a8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x14E0A8u;
    SET_GPR_U32(ctx, 31, 0x14E0B0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14E0A8u, 0x14E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0B0u;
label_14e0b0:
    // 0x14e0b0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x14e0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x14e0b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14e0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14e0b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14e0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14e0bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x14e0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x14e0c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14e0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14e0c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e0c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14e0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14e0cc: 0x34440312  ori         $a0, $v0, 0x312
    ctx->pc = 0x14e0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)786);
    // 0x14e0d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14e0d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14e0d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14e0d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14e0d8: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x14e0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x14e0dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x14e0dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14e0e0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x14E0E0u;
    SET_GPR_U32(ctx, 31, 0x14E0E8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x14E0E0u, 0x14E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0E8u;
label_14e0e8:
    // 0x14e0e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e0ec: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x14e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x14e0f0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x14e0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x14e0f4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x14e0f8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14e0fc: 0xa60313c0  sh          $v1, 0x13C0($s0)
    ctx->pc = 0x14e0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5056), (uint16_t)GPR_U32(ctx, 3));
    // 0x14e100: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x14e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x14e104: 0xa60213c2  sh          $v0, 0x13C2($s0)
    ctx->pc = 0x14e104u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5058), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14e108u;
}
