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

// Function: entry_0019e65c
// Address: 0x19e65c - 0x19e6cc
void entry_0019e65c_0x19e65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e65c_0x19e65c");
#endif

    ctx->pc = 0x19e65cu;

    // 0x19e65c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e660: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19e660u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19e664: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x19e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x19e668: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x19e668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19e66c: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x19e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19e670: 0x3c02b60b  lui         $v0, 0xB60B
    ctx->pc = 0x19e670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46603 << 16));
    // 0x19e674: 0x344260b7  ori         $v0, $v0, 0x60B7
    ctx->pc = 0x19e674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24759);
    // 0x19e678: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x19e678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e67c: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x19e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x19e680: 0x0  nop
    ctx->pc = 0x19e680u;
    // NOP
    // 0x19e684: 0x1010  mfhi        $v0
    ctx->pc = 0x19e684u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19e688: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19e68c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x19e68cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x19e690: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19e690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e694: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e698: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e698u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e69c: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x19e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x19e6a0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6a4: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6a8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x19e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x19e6ac: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x19e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x19e6b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e6b4: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x19e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x19e6b8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6bc: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6c0: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x19e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x19e6c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19e6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19e6c8: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x19e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    ctx->pc = 0x19e6ccu;
}
