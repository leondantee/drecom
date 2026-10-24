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

// Function: entry_001116b0
// Address: 0x1116b0 - 0x1116e0
void entry_001116b0_0x1116b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001116b0_0x1116b0");
#endif

    ctx->pc = 0x1116b0u;

    // 0x1116b0: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x1116b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x1116b4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1116b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1116b8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1116b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1116bc: 0x5ad00  sll         $s5, $a1, 20
    ctx->pc = 0x1116bcu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
    // 0x1116c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1116c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1116c4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1116c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1116c8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1116c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1116cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1116ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1116d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1116d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1116d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116dc: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x1116dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x1116e0u;
}
