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

// Function: entry_0018c75c
// Address: 0x18c75c - 0x18c78c
void entry_0018c75c_0x18c75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c75c_0x18c75c");
#endif

    ctx->pc = 0x18c75cu;

    // 0x18c75c: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x18c75cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
    // 0x18c760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c764: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18c764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18c768: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18c768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x18c76c: 0x24427290  addiu       $v0, $v0, 0x7290
    ctx->pc = 0x18c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29328));
    // 0x18c770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c774: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x18c774u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c778: 0xfe0201f0  sd          $v0, 0x1F0($s0)
    ctx->pc = 0x18c778u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 496), GPR_U64(ctx, 2));
    // 0x18c77c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18c780: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x18c780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x18c784: 0xfe0201d8  sd          $v0, 0x1D8($s0)
    ctx->pc = 0x18c784u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 472), GPR_U64(ctx, 2));
    // 0x18c788: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18c788u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18c78cu;
}
