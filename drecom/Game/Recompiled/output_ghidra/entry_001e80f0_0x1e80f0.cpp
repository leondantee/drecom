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

// Function: entry_001e80f0
// Address: 0x1e80f0 - 0x1e8178
void entry_001e80f0_0x1e80f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e80f0_0x1e80f0");
#endif

    ctx->pc = 0x1e80f0u;

    // 0x1e80f0: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x1e80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e80f4: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x1e80f4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e80f8: 0x1460fe80  bnez        $v1, . + 4 + (-0x180 << 2)
    ctx->pc = 0x1E80F8u;
    {
        const bool branch_taken_0x1e80f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e80f8) {
            ctx->pc = 0x1E7AFCu;
            return;
        }
    }
    ctx->pc = 0x1E8100u;
    // 0x1e8100: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E8100u;
    {
        const bool branch_taken_0x1e8100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8100) {
            ctx->pc = 0x1E8178u;
            return;
        }
    }
    ctx->pc = 0x1E8108u;
    // 0x1e8108: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e8108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e810c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e8110: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1e8110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e8114: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1e8114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e8118: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e8118u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e811c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e811cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8120: 0xc42825  or          $a1, $a2, $a0
    ctx->pc = 0x1e8120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1e8124: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x1e8124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e8128: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1e8128u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1e812c: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1e812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1e8130: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e8130u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e8134: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x1e8134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1e8138: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1e8138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1e813c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1e813cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e8140: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1e8140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1e8144: 0x8fa503e0  lw          $a1, 0x3E0($sp)
    ctx->pc = 0x1e8144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1e8148: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x1e8148u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x1e814c: 0x8fa303bc  lw          $v1, 0x3BC($sp)
    ctx->pc = 0x1e814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e8150: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e8150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e8154: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e8154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e8158: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e8158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e815c: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1e815cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e8160: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x1e8160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x1e8164: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x1e8164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e8168: 0x8fa503bc  lw          $a1, 0x3BC($sp)
    ctx->pc = 0x1e8168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x1e816c: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x1e816cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1e8170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8170u;
    {
        const bool branch_taken_0x1e8170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8170) {
            ctx->pc = 0x1E8194u;
            return;
        }
    }
    ctx->pc = 0x1E8178u;
}
