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

// Function: entry_00106aa8
// Address: 0x106aa8 - 0x106b3c
void entry_00106aa8_0x106aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106aa8_0x106aa8");
#endif

    switch (ctx->pc) {
        case 0x106ab4u: goto label_106ab4;
        case 0x106ae0u: goto label_106ae0;
        case 0x106ae8u: goto label_106ae8;
        default: break;
    }

    ctx->pc = 0x106aa8u;

    // 0x106aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x106aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106aac: 0xc041c9e  jal         func_107278
    ctx->pc = 0x106AACu;
    SET_GPR_U32(ctx, 31, 0x106AB4u);
    ctx->pc = 0x106AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106AACu;
    // 0x106ab0: 0x1088c0  sll         $s1, $s0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x106AACu, 0x106AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AB4u;
label_106ab4:
    // 0x106ab4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x106ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x106ab8: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x106ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x106abc: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x106abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x106ac0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x106ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ac4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x106ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x106ac8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x106ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106acc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x106accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ad0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x106ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ad4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x106ad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ad8: 0xc041aea  jal         func_106BA8
    ctx->pc = 0x106AD8u;
    SET_GPR_U32(ctx, 31, 0x106AE0u);
    ctx->pc = 0x106ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106AD8u;
    // 0x106adc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BA8u, 0x106AD8u, 0x106AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AE0u;
label_106ae0:
    // 0x106ae0: 0xc041c9e  jal         func_107278
    ctx->pc = 0x106AE0u;
    SET_GPR_U32(ctx, 31, 0x106AE8u);
    ctx->pc = 0x106AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106AE0u;
    // 0x106ae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x106AE0u, 0x106AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AE8u;
label_106ae8:
    // 0x106ae8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x106ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x106aec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x106aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x106af0: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x106af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x106af4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x106af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106af8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x106af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106afc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x106afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b00: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x106b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b04: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x106b04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b08: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x106b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106b0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x106b0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b10: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x106b10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106b14: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x106b14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106b18: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x106b18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106b1c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x106b1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106b20: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x106b20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106b24: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106b28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106b28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106b34: 0x8041aea  j           func_106BA8
    ctx->pc = 0x106B34u;
    ctx->pc = 0x106B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B34u;
    // 0x106b38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BA8u;
    _motionVector_0x106ba8(rdram, ctx, runtime); return;
    ctx->pc = 0x106B3Cu;
}
