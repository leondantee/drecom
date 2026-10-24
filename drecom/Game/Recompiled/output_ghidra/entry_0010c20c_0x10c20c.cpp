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

// Function: entry_0010c20c
// Address: 0x10c20c - 0x10c26c
void entry_0010c20c_0x10c20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c20c_0x10c20c");
#endif

    ctx->pc = 0x10c20cu;

    // 0x10c20c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x10c20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10c210: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x10c210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x10c214: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x10c214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10c218: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10c218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10c21c: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x10c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x10c220: 0x24423a80  addiu       $v0, $v0, 0x3A80
    ctx->pc = 0x10c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14976));
    // 0x10c224: 0x27c43990  addiu       $a0, $fp, 0x3990
    ctx->pc = 0x10c224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 14736));
    // 0x10c228: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10c228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10c22c: 0x133180  sll         $a2, $s3, 6
    ctx->pc = 0x10c22cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x10c230: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x10c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x10c234: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x10c234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x10c238: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x10c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c23c: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x10c23cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10c240: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x10c240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x10c244: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10c244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c248: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10c248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c24c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x10c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x10c250: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x10c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10c254: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x10c254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x10c258: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x10c258u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x10c25c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10c25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c260: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x10c260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x10c264: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x10c264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x10c268: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x10c26cu;
}
