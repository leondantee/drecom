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

// Function: SndBgmFadeSet
// Address: 0x19f3f0 - 0x19f4b4
void SndBgmFadeSet_0x19f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndBgmFadeSet_0x19f3f0");
#endif

    ctx->pc = 0x19f3f0u;

    // 0x19f3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f3f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f3f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19f3fc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x19f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x19f400: 0xa3a60020  sb          $a2, 0x20($sp)
    ctx->pc = 0x19f400u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x19f404: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x19f404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x19f408: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x19f408u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f40c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f410: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19f410u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19f414: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19f414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f418: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19f418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f41c: 0xa0650008  sb          $a1, 0x8($v1)
    ctx->pc = 0x19f41cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x19f420: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f424: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19f424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f428: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f42c: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19f430: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f434: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x19f434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x19f438: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x19f438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f43c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19f440: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x19f440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x19f444: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19f444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19f448: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19f448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19f44c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19f44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f450: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19f450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f454: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19f454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19f458: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x19f458u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19f45c: 0x0  nop
    ctx->pc = 0x19f45cu;
    // NOP
    // 0x19f460: 0x0  nop
    ctx->pc = 0x19f460u;
    // NOP
    // 0x19f464: 0x8012  mflo        $s0
    ctx->pc = 0x19f464u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x19f468: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f46c: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19f470: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f474: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x19f474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f478: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f47c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19f47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19f480: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x19f480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19f484: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19f484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19f488: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x19f488u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19f48c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f490: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19f490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f494: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f498: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19f498u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19f49c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f4a0: 0xac70002c  sw          $s0, 0x2C($v1)
    ctx->pc = 0x19f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
    // 0x19f4a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f4a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19f4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19f4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19F4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F4B4u;
}
