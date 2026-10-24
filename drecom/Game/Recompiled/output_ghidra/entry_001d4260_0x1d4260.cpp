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

// Function: entry_001d4260
// Address: 0x1d4260 - 0x1d42e0
void entry_001d4260_0x1d4260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4260_0x1d4260");
#endif

    switch (ctx->pc) {
        case 0x1d4278u: goto label_1d4278;
        default: break;
    }

    ctx->pc = 0x1d4260u;

    // 0x1d4260: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d4260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d4264: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x1d4264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d4268: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d4268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d426c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d426cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4270: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4270u;
    SET_GPR_U32(ctx, 31, 0x1D4278u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4270u, 0x1D4278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4278u;
label_1d4278:
    // 0x1d4278: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1d4278u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d427c: 0x16b180  sll         $s6, $s6, 6
    ctx->pc = 0x1d427cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1d4280: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4284: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d4284u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d4288: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d428c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4290: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4294: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4298: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d4298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d429c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1d429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d42a0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d42a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d42a4: 0x1613bc  dsll32      $v0, $s6, 14
    ctx->pc = 0x1d42a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 14));
    // 0x1d42a8: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x1d42a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
    // 0x1d42ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D42ACu;
    {
        const bool branch_taken_0x1d42ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d42ac) {
            ctx->pc = 0x1D42E0u;
            return;
        }
    }
    ctx->pc = 0x1D42B4u;
    // 0x1d42b4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1d42b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d42b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d42bc: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d42c0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d42c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d42c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d42cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d42d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d42d4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1d42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d42d8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1d42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1d42dc: 0x0  nop
    ctx->pc = 0x1d42dcu;
    // NOP
    ctx->pc = 0x1d42e0u;
}
