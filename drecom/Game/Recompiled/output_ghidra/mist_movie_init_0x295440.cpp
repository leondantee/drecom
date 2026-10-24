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

// Function: mist_movie_init
// Address: 0x295440 - 0x295598
void mist_movie_init_0x295440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mist_movie_init_0x295440");
#endif

    switch (ctx->pc) {
        case 0x295494u: goto label_295494;
        case 0x2954a0u: goto label_2954a0;
        case 0x295504u: goto label_295504;
        case 0x295520u: goto label_295520;
        default: break;
    }

    ctx->pc = 0x295440u;

    // 0x295440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x295444: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x295444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x295448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x295448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29544c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x295450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x295454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x295458: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x295458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x29545c: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x29545cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x295460: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x295460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x295464: 0x2451e5c8  addiu       $s1, $v0, -0x1A38
    ctx->pc = 0x295464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960584));
    // 0x295468: 0x8e126864  lw          $s2, 0x6864($s0)
    ctx->pc = 0x295468u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x62C9B4u));
    // 0x29546c: 0x96020324  lhu         $v0, 0x324($s0)
    ctx->pc = 0x29546cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x626474u));
    // 0x295470: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x295470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x295474: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x295474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x295478: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x295478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29547c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x29547cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x295480: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x295480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x295484: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x295484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x295488: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x295488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29548c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x29548Cu;
    SET_GPR_U32(ctx, 31, 0x295494u);
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x29548Cu, 0x295494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295494u;
label_295494:
    // 0x295494: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x295494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x295498: 0xc0d7594  jal         func_35D650
    ctx->pc = 0x295498u;
    SET_GPR_U32(ctx, 31, 0x2954A0u);
    ctx->pc = 0x35D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D650u, 0x295498u, 0x2954A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2954A0u;
label_2954a0:
    // 0x2954a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2954a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2954a4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2954a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2954a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2954a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2954ac: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x2954acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2954b0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x2954b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2954b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2954b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2954b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2954b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2954bc: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x2954bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2954c0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2954c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2954c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2954c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2954c8: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x2954c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2954cc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2954ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2954d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2954d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2954d4: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x2954d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2954d8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2954d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2954dc: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x2954dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x2954e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2954e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2954e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2954e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2954e8: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x2954e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x2954ec: 0x96020324  lhu         $v0, 0x324($s0)
    ctx->pc = 0x2954ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x2954f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2954f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2954f4: 0x439825  or          $s3, $v0, $v1
    ctx->pc = 0x2954f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2954f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2954f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2954fc: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x2954FCu;
    SET_GPR_U32(ctx, 31, 0x295504u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x2954FCu, 0x295504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295504u;
label_295504:
    // 0x295504: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x295504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295508: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x295508u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29550c: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x29550cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x295510: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x295510u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x295514: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x295514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x295518: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x295518u;
    SET_GPR_U32(ctx, 31, 0x295520u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x295518u, 0x295520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295520u;
label_295520:
    // 0x295520: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295524: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x295524u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x295528: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x295528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x29552c: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x29552cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x295530: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x295530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x295534: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x295534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x295538: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x295538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29553c: 0x26230018  addiu       $v1, $s1, 0x18
    ctx->pc = 0x29553cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x295540: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x295540u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x295544: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x295544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x295548: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x295548u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x29554c: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x29554cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x295550: 0x96030324  lhu         $v1, 0x324($s0)
    ctx->pc = 0x295550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x295554: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x295554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x295558: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x295558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x29555c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29555cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x295560: 0xa603032c  sh          $v1, 0x32C($s0)
    ctx->pc = 0x295560u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 812), (uint16_t)GPR_U32(ctx, 3));
    // 0x295564: 0x96030326  lhu         $v1, 0x326($s0)
    ctx->pc = 0x295564u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 806)));
    // 0x295568: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x295568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29556c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x295570: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x295570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x295574: 0xa603032e  sh          $v1, 0x32E($s0)
    ctx->pc = 0x295574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 814), (uint16_t)GPR_U32(ctx, 3));
    // 0x295578: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x295578u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29557c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29557cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295580: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x295580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x295588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29558c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29558cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x295590: 0x3e00008  jr          $ra
    ctx->pc = 0x295590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295598u;
}
