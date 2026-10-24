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

// Function: entry_0010b55c
// Address: 0x10b55c - 0x10b5bc
void entry_0010b55c_0x10b55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b55c_0x10b55c");
#endif

    ctx->pc = 0x10b55cu;

    // 0x10b55c: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x10b55cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x10b560: 0x3c0d0038  lui         $t5, 0x38
    ctx->pc = 0x10b560u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)56 << 16));
    // 0x10b564: 0x8d853d20  lw          $a1, 0x3D20($t4)
    ctx->pc = 0x10b564u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383D20u));
    // 0x10b568: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x10b568u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x10b56c: 0x8da33d24  lw          $v1, 0x3D24($t5)
    ctx->pc = 0x10b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D24u));
    // 0x10b570: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x10b570u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x10b574: 0x8d673d38  lw          $a3, 0x3D38($t3)
    ctx->pc = 0x10b574u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x383D38u));
    // 0x10b578: 0x144480  sll         $t0, $s4, 18
    ctx->pc = 0x10b578u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 18));
    // 0x10b57c: 0x8d463d3c  lw          $a2, 0x3D3C($t2)
    ctx->pc = 0x10b57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 15676)));
    // 0x10b580: 0x104a80  sll         $t1, $s0, 10
    ctx->pc = 0x10b580u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
    // 0x10b584: 0x122300  sll         $a0, $s2, 12
    ctx->pc = 0x10b584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 12));
    // 0x10b588: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x10b588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x10b58c: 0x131300  sll         $v0, $s3, 12
    ctx->pc = 0x10b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x10b590: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x10b590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10b594: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x10b594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10b598: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10b598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10b59c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x10b59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10b5a0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x10b5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10b5a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10b5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b5a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10b5a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b5ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b5acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b5b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b5b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10b5bcu;
}
