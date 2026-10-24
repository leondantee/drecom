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

// Function: entry_002fb1c4
// Address: 0x2fb1c4 - 0x2fb30c
void entry_002fb1c4_0x2fb1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb1c4_0x2fb1c4");
#endif

    switch (ctx->pc) {
        case 0x2fb2a8u: goto label_2fb2a8;
        case 0x2fb2b4u: goto label_2fb2b4;
        default: break;
    }

    ctx->pc = 0x2fb1c4u;

    // 0x2fb1c4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb1c8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fb1c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb1cc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fb1ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fb1d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb1d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fb1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fb1d8: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x2fb1d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb1dc: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x2fb1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2fb1e0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2fb1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb1e4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb1e8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fb1e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb1ec: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fb1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fb1f0: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2fb1f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb1f4: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x2fb1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
    // 0x2fb1f8: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x2fb1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb1fc: 0xc72024  and         $a0, $a2, $a3
    ctx->pc = 0x2fb1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2fb200: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2fb200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2fb204: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2fb204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2fb208: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x2fb208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2fb20c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fb20cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb210: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fb210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fb214: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fb214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb218: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2fb218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2fb21c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fb21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb220: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2fb220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2fb224: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fb224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb228: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2fb228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2fb22c: 0x2486dbc0  addiu       $a2, $a0, -0x2440
    ctx->pc = 0x2fb22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    // 0x2fb230: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x2fb230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fb234: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fb234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fb238: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fb238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb23c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2fb23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2fb240: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x2fb240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fb244: 0xe62024  and         $a0, $a3, $a2
    ctx->pc = 0x2fb244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2fb248: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x2fb248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fb24c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fb24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fb250: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fb250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fb254: 0x24690200  addiu       $t1, $v1, 0x200
    ctx->pc = 0x2fb254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2fb258: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x2fb258u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2fb25c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2fb25cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2fb260: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb264: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x2fb264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
    // 0x2fb268: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x2fb268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fb26c: 0x1041824  and         $v1, $t0, $a0
    ctx->pc = 0x2fb26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x2fb270: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fb270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb274: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fb274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fb278: 0x8c24dcf0  lw          $a0, -0x2310($at)
    ctx->pc = 0x2fb278u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fb27c: 0x24890200  addiu       $t1, $a0, 0x200
    ctx->pc = 0x2fb27cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x2fb280: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x2fb280u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2fb284: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fb284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fb288: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2fb288u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb28c: 0x82438  dsll        $a0, $t0, 16
    ctx->pc = 0x2fb28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << 16);
    // 0x2fb290: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fb290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fb294: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x2fb294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2fb298: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x2fb298u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fb29c: 0x24041d02  addiu       $a0, $zero, 0x1D02
    ctx->pc = 0x2fb29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7426));
    // 0x2fb2a0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB2A0u;
    SET_GPR_U32(ctx, 31, 0x2FB2A8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB2A0u, 0x2FB2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2A8u;
label_2fb2a8:
    // 0x2fb2a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fb2a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb2ac: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB2ACu;
    SET_GPR_U32(ctx, 31, 0x2FB2B4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB2ACu, 0x2FB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2B4u;
label_2fb2b4:
    // 0x2fb2b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fb2b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb2b8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2fb2b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb2bc: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x2fb2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb2c0: 0x34d60011  ori         $s6, $a2, 0x11
    ctx->pc = 0x2fb2c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
    // 0x2fb2c4: 0x12360011  beq         $s1, $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FB2C4u;
    {
        const bool branch_taken_0x2fb2c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        if (branch_taken_0x2fb2c4) {
            ctx->pc = 0x2FB30Cu;
            return;
        }
    }
    ctx->pc = 0x2FB2CCu;
    // 0x2fb2cc: 0x3c054288  lui         $a1, 0x4288
    ctx->pc = 0x2fb2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb2d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2fb2d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb2d4: 0x0  nop
    ctx->pc = 0x2fb2d4u;
    // NOP
    // 0x2fb2d8: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb2dc: 0x3c044288  lui         $a0, 0x4288
    ctx->pc = 0x2fb2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb2e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb2e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb2e4: 0x0  nop
    ctx->pc = 0x2fb2e4u;
    // NOP
    // 0x2fb2e8: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb2ec: 0x3c034288  lui         $v1, 0x4288
    ctx->pc = 0x2fb2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb2f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb2f4: 0x0  nop
    ctx->pc = 0x2fb2f4u;
    // NOP
    // 0x2fb2f8: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb2fc: 0x3c1642b4  lui         $s6, 0x42B4
    ctx->pc = 0x2fb2fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17076 << 16));
    // 0x2fb300: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2fb300u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb304: 0x0  nop
    ctx->pc = 0x2fb304u;
    // NOP
    // 0x2fb308: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x2fb308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->pc = 0x2fb30cu;
}
