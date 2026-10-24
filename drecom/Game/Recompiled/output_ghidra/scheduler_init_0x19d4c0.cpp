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

// Function: scheduler_init
// Address: 0x19d4c0 - 0x19d5e8
void scheduler_init_0x19d4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scheduler_init_0x19d4c0");
#endif

    switch (ctx->pc) {
        case 0x19d4e8u: goto label_19d4e8;
        case 0x19d5a0u: goto label_19d5a0;
        case 0x19d5ccu: goto label_19d5cc;
        default: break;
    }

    ctx->pc = 0x19d4c0u;

    // 0x19d4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d4c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x19d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x19d4c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d4cc: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x19d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x19d4d0: 0x3443e000  ori         $v1, $v0, 0xE000
    ctx->pc = 0x19d4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x19d4d4: 0x27a2002c  addiu       $v0, $sp, 0x2C
    ctx->pc = 0x19d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x19d4d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19d4dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x19d4dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19d4e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19D4E0u;
    {
        const bool branch_taken_0x19d4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d4e0) {
            ctx->pc = 0x19D570u;
            goto label_19d570;
        }
    }
    ctx->pc = 0x19D4E8u;
label_19d4e8:
    // 0x19d4e8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x19d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19d4ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19d4f0: 0x24427500  addiu       $v0, $v0, 0x7500
    ctx->pc = 0x19d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29952));
    // 0x19d4f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d4f8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x19d4f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d4fc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x19d4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d500: 0x27a3002c  addiu       $v1, $sp, 0x2C
    ctx->pc = 0x19d500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x19d504: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d508: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19d508u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19d50c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19d510: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x19d510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19d514: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19d514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19d518: 0x24427500  addiu       $v0, $v0, 0x7500
    ctx->pc = 0x19d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29952));
    // 0x19d51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d520: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x19d520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d524: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x19d524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d528: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x19d528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x19d52c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d530: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d538: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x19d538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x19d53c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x19d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x19d540: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x19d540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x19d544: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d548: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d550: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x19d550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x19d554: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x19d554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x19d558: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d55c: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d564: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x19d564u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x19d568: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19d56c: 0x0  nop
    ctx->pc = 0x19d56cu;
    // NOP
label_19d570:
    // 0x19d570: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x19d570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x19d574: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x19D574u;
    {
        const bool branch_taken_0x19d574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d574) {
            ctx->pc = 0x19D4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d4e8;
        }
    }
    ctx->pc = 0x19D57Cu;
    // 0x19d57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d584: 0xac22fbc4  sw          $v0, -0x43C($at)
    ctx->pc = 0x19d584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBC4u, _value); } while (0);
    // 0x19d588: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d58c: 0xac20fbc8  sw          $zero, -0x438($at)
    ctx->pc = 0x19d58cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CFBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBC8u, _value); } while (0);
    // 0x19d590: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d594: 0x2444fbc0  addiu       $a0, $v0, -0x440
    ctx->pc = 0x19d594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966208));
    // 0x19d598: 0xc084a88  jal         func_212A20
    ctx->pc = 0x19D598u;
    SET_GPR_U32(ctx, 31, 0x19D5A0u);
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x19D5A0u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D5A0u) { return; }
    ctx->pc = 0x19D5A0u;
label_19d5a0:
    // 0x19d5a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d5a4: 0xac22fbb8  sw          $v0, -0x448($at)
    ctx->pc = 0x19d5a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFBB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBB8u, _value); } while (0);
    // 0x19d5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d5ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d5b0: 0xac22fba4  sw          $v0, -0x45C($at)
    ctx->pc = 0x19d5b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFBA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBA4u, _value); } while (0);
    // 0x19d5b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d5b8: 0xac20fba8  sw          $zero, -0x458($at)
    ctx->pc = 0x19d5b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CFBA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBA8u, _value); } while (0);
    // 0x19d5bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d5c0: 0x2444fba0  addiu       $a0, $v0, -0x460
    ctx->pc = 0x19d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966176));
    // 0x19d5c4: 0xc084a88  jal         func_212A20
    ctx->pc = 0x19D5C4u;
    SET_GPR_U32(ctx, 31, 0x19D5CCu);
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x19D5CCu;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D5CCu) { return; }
    ctx->pc = 0x19D5CCu;
label_19d5cc:
    // 0x19d5cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d5d0: 0xac22fb98  sw          $v0, -0x468($at)
    ctx->pc = 0x19d5d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFB98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFB98u, _value); } while (0);
    // 0x19d5d4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x19d5d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d5d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d5dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19d5dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D5E8u;
}
