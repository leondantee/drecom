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

// Function: entry_0025c060
// Address: 0x25c060 - 0x25c0c8
void entry_0025c060_0x25c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c060_0x25c060");
#endif

    switch (ctx->pc) {
        case 0x25c0bcu: goto label_25c0bc;
        default: break;
    }

    ctx->pc = 0x25c060u;

    // 0x25c060: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25c060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25c064: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c068: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25c068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c06c: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x25c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25c070: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x25C070u;
    {
        const bool branch_taken_0x25c070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c070) {
            ctx->pc = 0x25C0C8u;
            return;
        }
    }
    ctx->pc = 0x25C078u;
    // 0x25c078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c07c: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25c07cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c080: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25c080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25c084: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25c084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c088: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x25c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25c08c: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x25c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25c090: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x25c090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x25c094: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x25c094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25c098: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25c098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25c09c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25c0a0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c0a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25c0a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25c0ac: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x25c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x25c0b0: 0x24660608  addiu       $a2, $v1, 0x608
    ctx->pc = 0x25c0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1544));
    // 0x25c0b4: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25C0B4u;
    SET_GPR_U32(ctx, 31, 0x25C0BCu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25C0B4u, 0x25C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0BCu;
label_25c0bc:
    // 0x25c0bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25c0bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c0c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25C0C0u;
    {
        const bool branch_taken_0x25c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0c0) {
            ctx->pc = 0x25C0E0u;
            return;
        }
    }
    ctx->pc = 0x25C0C8u;
}
