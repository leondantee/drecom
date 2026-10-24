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

// Function: sub_003ACE10
// Address: 0x3ace10 - 0x3ace40
void sub_003ACE10_0x3ace10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACE10_0x3ace10");
#endif

    ctx->pc = 0x3ace10u;

    // 0x3ace10: 0x6b736944  ldl         $s3, 0x6944($k1)
    ctx->pc = 0x3ace10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x3ace14: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x3ace14u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
    // 0x3ace18: 0xa302079  j           func_8C081E4
    ctx->pc = 0x3ACE18u;
    ctx->pc = 0x8C081E4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8C081E4u, 0x3ACE18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ACE20u;
    // 0x3ace20: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x3ace20u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x3ace24: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3ace24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ace28: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x3ace28u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
    // 0x3ace2c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3ace2cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3ace30: 0x44644320  .word       0x44644320                   # INVALID     $v1, $a0, 0x4320 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3ace30u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x20 at 0x3ACE30 raw=0x44644320");
    // 0x3ace34: 0x526b7369  beql        $s3, $t3, . + 4 + (0x7369 << 2)
    ctx->pc = 0x3ACE34u;
    {
        const bool branch_taken_0x3ace34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 11));
        if (branch_taken_0x3ace34) {
            ctx->pc = 0x3ACE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACE34u;
            // 0x3ace38: 0x79646165  lq          $a0, 0x6165($t3) (Delay Slot)
            SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 24933)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9BDCu;
            return;
        }
    }
    ctx->pc = 0x3ACE3Cu;
    // 0x3ace3c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3ace3cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->pc = 0x3ace40u;
}
