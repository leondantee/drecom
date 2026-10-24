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

// Function: entry_001d42e0
// Address: 0x1d42e0 - 0x1d4360
void entry_001d42e0_0x1d42e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d42e0_0x1d42e0");
#endif

    switch (ctx->pc) {
        case 0x1d42fcu: goto label_1d42fc;
        default: break;
    }

    ctx->pc = 0x1d42e0u;

    // 0x1d42e0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d42e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d42e8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d42ec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d42ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d42f0: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1d42f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d42f4: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D42F4u;
    SET_GPR_U32(ctx, 31, 0x1D42FCu);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D42F4u, 0x1D42FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42FCu;
label_1d42fc:
    // 0x1d42fc: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1d42fcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4300: 0x16b180  sll         $s6, $s6, 6
    ctx->pc = 0x1d4300u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1d4304: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4308: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1d4308u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d430c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d430cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d4310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d4314: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d4314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4318: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d431c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d4320: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1d4320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1d4324: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d4324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d4328: 0x161bbc  dsll32      $v1, $s6, 14
    ctx->pc = 0x1d4328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 14));
    // 0x1d432c: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x1d432cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
    // 0x1d4330: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4330u;
    {
        const bool branch_taken_0x1d4330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4330) {
            ctx->pc = 0x1D4360u;
            return;
        }
    }
    ctx->pc = 0x1D4338u;
    // 0x1d4338: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1d4338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d433c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4340: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1d4340u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d4344: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d4344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d4348: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d434c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d434cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4350: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4354: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d4354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d4358: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1d4358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1d435c: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1d435cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    ctx->pc = 0x1d4360u;
}
