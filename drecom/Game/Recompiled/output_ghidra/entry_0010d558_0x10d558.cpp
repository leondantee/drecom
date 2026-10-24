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

// Function: entry_0010d558
// Address: 0x10d558 - 0x10d5e0
void entry_0010d558_0x10d558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d558_0x10d558");
#endif

    ctx->pc = 0x10d558u;

    // 0x10d558: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x10d558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10d55c: 0x2411003c  addiu       $s1, $zero, 0x3C
    ctx->pc = 0x10d55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x10d560: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x10d560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10d564: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x10d564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10d568: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10d568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d56c: 0x6010  mfhi        $t4
    ctx->pc = 0x10d56cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x10d570: 0x2012  mflo        $a0
    ctx->pc = 0x10d570u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x10d574: 0x8a001a  div         $zero, $a0, $t2
    ctx->pc = 0x10d574u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10d578: 0x2012  mflo        $a0
    ctx->pc = 0x10d578u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x10d57c: 0x3010  mfhi        $a2
    ctx->pc = 0x10d57cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x10d580: 0x187001a  div         $zero, $t4, $a3
    ctx->pc = 0x10d580u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10d584: 0x4810  mfhi        $t1
    ctx->pc = 0x10d584u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x10d588: 0x1812  mflo        $v1
    ctx->pc = 0x10d588u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x10d58c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10d58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10d590: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x10d590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x10d594: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x10d594u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10d598: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x10d598u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x10d59c: 0x5810  mfhi        $t3
    ctx->pc = 0x10d59cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x10d5a0: 0x4012  mflo        $t0
    ctx->pc = 0x10d5a0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x10d5a4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x10d5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x10d5a8: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x10d5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x10d5ac: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x10d5acu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10d5b0: 0xa0a80001  sb          $t0, 0x1($a1)
    ctx->pc = 0x10d5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x10d5b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10d5b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d5b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d5bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d5c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d5c4: 0x2012  mflo        $a0
    ctx->pc = 0x10d5c4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x10d5c8: 0x6010  mfhi        $t4
    ctx->pc = 0x10d5c8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x10d5cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x10d5d0: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x10d5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x10d5d4: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x10d5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10d5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5D8u;
        // 0x10d5dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D5E0u;
}
