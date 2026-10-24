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

// Function: entry_00106124
// Address: 0x106124 - 0x106180
void entry_00106124_0x106124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106124_0x106124");
#endif

    ctx->pc = 0x106124u;

    // 0x106124: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x106124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x106128: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x106128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10612c: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x10612cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x106130: 0x8c853d28  lw          $a1, 0x3D28($a0)
    ctx->pc = 0x106130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15656)));
    // 0x106134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x106138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10613c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10613cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x106140: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x106140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x106144: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x106144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x106148: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x106148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10614c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x106150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x106150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106154: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x106154u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x106158: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x106158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x10615c: 0xacc43e3c  sw          $a0, 0x3E3C($a2)
    ctx->pc = 0x10615cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15932), GPR_U32(ctx, 4));
    // 0x106160: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x106160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x106164: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x106164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x106168: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x106168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x10616c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10616cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x106170: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x106170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x106174: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x106174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x106178: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x106178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10617c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x10617cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x106180u;
}
