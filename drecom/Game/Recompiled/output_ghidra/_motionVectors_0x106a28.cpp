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

// Function: _motionVectors
// Address: 0x106a28 - 0x106ba4
void _motionVectors_0x106a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionVectors_0x106a28");
#endif

    switch (ctx->pc) {
        case 0x106a94u: goto label_106a94;
        case 0x106ab4u: goto label_106ab4;
        case 0x106ae0u: goto label_106ae0;
        case 0x106ae8u: goto label_106ae8;
        case 0x106b64u: goto label_106b64;
        default: break;
    }

    ctx->pc = 0x106a28u;

    // 0x106a28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x106a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x106a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106a30: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x106a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x106a34: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x106a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x106a38: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x106a38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a3c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x106a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x106a40: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x106a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x106a44: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x106a44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x106a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x106a4c: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x106a4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a50: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x106a54: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x106a54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106a5c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x106a5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106a64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x106a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x106a68: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x106a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106a70: 0x8fb200a0  lw          $s2, 0xA0($sp)
    ctx->pc = 0x106a70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106a74: 0x1502000c  bne         $t0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x106A74u;
    {
        const bool branch_taken_0x106a74 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x106A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A74u;
        // 0x106a78: 0x8fb700a8  lw          $s7, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a74) {
            ctx->pc = 0x106AA8u;
            goto label_106aa8;
        }
    }
    ctx->pc = 0x106A7Cu;
    // 0x106a7c: 0x55200030  bnel        $t1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x106A7Cu;
    {
        const bool branch_taken_0x106a7c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x106a7c) {
            ctx->pc = 0x106A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106A7Cu;
            // 0x106a80: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106B40u;
            goto label_106b40;
        }
    }
    ctx->pc = 0x106A84u;
    // 0x106a84: 0x5640002e  bnel        $s2, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x106A84u;
    {
        const bool branch_taken_0x106a84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x106a84) {
            ctx->pc = 0x106A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106A84u;
            // 0x106a88: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106B40u;
            goto label_106b40;
        }
    }
    ctx->pc = 0x106A8Cu;
    // 0x106a8c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x106A8Cu;
    SET_GPR_U32(ctx, 31, 0x106A94u);
    ctx->pc = 0x106A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A8Cu;
    // 0x106a90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x106A8Cu, 0x106A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A94u;
label_106a94:
    // 0x106a94: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x106a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x106a98: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x106a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x106a9c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x106a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x106aa0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x106AA0u;
    {
        const bool branch_taken_0x106aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AA0u;
        // 0x106aa4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106aa0) {
            ctx->pc = 0x106B3Cu;
            goto label_106b3c;
        }
    }
    ctx->pc = 0x106AA8u;
label_106aa8:
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
label_106b3c:
    // 0x106b3c: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x106b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_106b40:
    // 0x106b40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x106b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b44: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x106b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x106b48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x106b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b4c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x106b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b50: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x106b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b54: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x106b54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b5c: 0xc041aea  jal         func_106BA8
    ctx->pc = 0x106B5Cu;
    SET_GPR_U32(ctx, 31, 0x106B64u);
    ctx->pc = 0x106B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B5Cu;
    // 0x106b60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BA8u, 0x106B5Cu, 0x106B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B64u;
label_106b64:
    // 0x106b64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x106b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106b68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x106b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x106b6c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x106b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x106b70: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x106b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x106b74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x106b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106b78: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x106b78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106b7c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x106b7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106b80: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x106b80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106b84: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x106b84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106b88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x106b88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106b8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106b8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106b90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x106B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B9Cu;
        // 0x106ba0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106BA4u;
}
