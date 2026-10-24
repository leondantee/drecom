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

// Function: entry_001e5534
// Address: 0x1e5534 - 0x1e5698
void entry_001e5534_0x1e5534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5534_0x1e5534");
#endif

    ctx->pc = 0x1e5534u;

label_1e5534:
    // 0x1e5534: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1e5534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5538: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e5538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e553c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5544: 0xac4401f0  sw          $a0, 0x1F0($v0)
    ctx->pc = 0x1e5544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 496), GPR_U32(ctx, 4));
    // 0x1e5548: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e5548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e554c: 0x34430005  ori         $v1, $v0, 0x5
    ctx->pc = 0x1e554cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1e5550: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5554: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e5554u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e5558: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e555c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1e555cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1e5560: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5564: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e5564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e5568: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e5568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e556c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e556cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e5570: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e5570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e5574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5578: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e5578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e557c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5580: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e5580u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e5584: 0x3403eeee  ori         $v1, $zero, 0xEEEE
    ctx->pc = 0x1e5584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61166);
    // 0x1e5588: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e558c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e558cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e5590: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1e5590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1e5594: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5598: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x1e5598u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1e559c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e55a0: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x1e55a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
    // 0x1e55a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e55a8: 0xfc400020  sd          $zero, 0x20($v0)
    ctx->pc = 0x1e55a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
    // 0x1e55ac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e55acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e55b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e55b4: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x1e55b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1e55b8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1e55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1e55bc: 0x34431001  ori         $v1, $v0, 0x1001
    ctx->pc = 0x1e55bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x1e55c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e55c4: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x1e55c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x1e55c8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1e55c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1e55cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e55ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e55d0: 0xfc430038  sd          $v1, 0x38($v0)
    ctx->pc = 0x1e55d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x1e55d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e55d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e55d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e55dc: 0x3c021010  lui         $v0, 0x1010
    ctx->pc = 0x1e55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4112 << 16));
    // 0x1e55e0: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x1e55e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x1e55e4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e55e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e55e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e55ec: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x1e55ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x1e55f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e55f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e55f8: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x1e55f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x1e55fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5600: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1e5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1e5604: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e5604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e5608: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1e5608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1e560c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e560cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e5610: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e5610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5614: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e5614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e5618: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e561c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e561cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e5620: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1e5620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1e5624: 0x3443444e  ori         $v1, $v0, 0x444E
    ctx->pc = 0x1e5624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17486);
    // 0x1e5628: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e562c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1e562cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1e5630: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5634: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e5634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1e5638: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e563c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e5640: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e5640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e5644: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1e5644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e5648: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e5648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e564c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5650: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1e5650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e5654: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e565c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e565cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e5660: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e5660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e5664: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e5664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e5668: 0x1620ffb2  bnez        $s1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1E5668u;
    {
        const bool branch_taken_0x1e5668 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5668) {
            ctx->pc = 0x1E5534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5534;
        }
    }
    ctx->pc = 0x1E5670u;
    // 0x1e5670: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e5670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e5674: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e5674u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5678: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e567c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e567cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e568c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e568cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e5690: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5698u;
}
