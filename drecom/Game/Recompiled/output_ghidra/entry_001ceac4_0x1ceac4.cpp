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

// Function: entry_001ceac4
// Address: 0x1ceac4 - 0x1ceb30
void entry_001ceac4_0x1ceac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceac4_0x1ceac4");
#endif

    switch (ctx->pc) {
        case 0x1ceae8u: goto label_1ceae8;
        default: break;
    }

    ctx->pc = 0x1ceac4u;

    // 0x1ceac4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1ceac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceac8: 0x90a609da  lbu         $a2, 0x9DA($a1)
    ctx->pc = 0x1ceac8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2522)));
    // 0x1ceacc: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x1ceaccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1cead0: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x1cead0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1cead4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1cead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1cead8: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CEAD8u;
    {
        const bool branch_taken_0x1cead8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cead8) {
            ctx->pc = 0x1CEB30u;
            return;
        }
    }
    ctx->pc = 0x1CEAE0u;
    // 0x1ceae0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1CEAE0u;
    SET_GPR_U32(ctx, 31, 0x1CEAE8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CEAE0u, 0x1CEAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAE8u;
label_1ceae8:
    // 0x1ceae8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ceae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ceaec: 0x30650003  andi        $a1, $v1, 0x3
    ctx->pc = 0x1ceaecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ceaf0: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1ceaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ceaf4: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1ceaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1ceaf8: 0x24e89228  addiu       $t0, $a3, -0x6DD8
    ctx->pc = 0x1ceaf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939176));
    // 0x1ceafc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1ceafcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1ceb00: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x1ceb00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ceb04: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1ceb04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ceb08: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1ceb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1ceb0c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1ceb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1ceb10: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1ceb10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ceb14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceb18: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x1ceb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1ceb1c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ceb1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ceb20: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1ceb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1ceb24: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ceb24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ceb28: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CEB28u;
    SET_GPR_U32(ctx, 31, 0x1CEB30u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CEB28u, 0x1CEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB30u;
}
