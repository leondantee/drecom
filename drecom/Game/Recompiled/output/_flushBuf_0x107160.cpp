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

// Function: _flushBuf
// Address: 0x107160 - 0x107274
void _flushBuf_0x107160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_flushBuf_0x107160");
#endif

    switch (ctx->pc) {
        case 0x1071b8u: goto label_1071b8;
        case 0x1071d4u: goto label_1071d4;
        case 0x107240u: goto label_107240;
        default: break;
    }

    ctx->pc = 0x107160u;

    // 0x107160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x107160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x107164: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107168: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10716c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107170: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x107170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x107174: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x107174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x107178: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10717c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x10717cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x107180: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x107184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107188: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10718c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10718cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107194: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107194u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x107198: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x107198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10719c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10719cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1071a0: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1071A0u;
    {
        const bool branch_taken_0x1071a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1071A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071A0u;
        // 0x1071a4: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071a0) {
            ctx->pc = 0x107204u;
            goto label_107204;
        }
    }
    ctx->pc = 0x1071A8u;
    // 0x1071a8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1071a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1071ac: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x1071acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x1071b0: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1071b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1071b4: 0x0  nop
    ctx->pc = 0x1071b4u;
    // NOP
label_1071b8:
    // 0x1071b8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1071b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071bc: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1071bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1071c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1071C0u;
    {
        const bool branch_taken_0x1071c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1071C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071C0u;
        // 0x1071c4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071c0) {
            ctx->pc = 0x1071D8u;
            goto label_1071d8;
        }
    }
    ctx->pc = 0x1071C8u;
    // 0x1071c8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1071c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1071cc: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x1071CCu;
    SET_GPR_U32(ctx, 31, 0x1071D4u);
    ctx->pc = 0x1071D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071CCu;
    // 0x1071d0: 0x8c443bf4  lw          $a0, 0x3BF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x1071CCu, 0x1071D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071D4u;
label_1071d4:
    // 0x1071d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1071d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1071d8:
    // 0x1071d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1071d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1071dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1071dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1071e0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1071e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1071e4: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1071e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1071e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1071e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x1071ec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1071ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1071f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1071f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1071f4: 0x1045fff0  beq         $v0, $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1071F4u;
    {
        const bool branch_taken_0x1071f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1071F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071F4u;
        // 0x1071f8: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071f4) {
            ctx->pc = 0x1071B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1071b8;
        }
    }
    ctx->pc = 0x1071FCu;
    // 0x1071fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1071FCu;
    {
        const bool branch_taken_0x1071fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071FCu;
        // 0x107200: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071fc) {
            ctx->pc = 0x107218u;
            goto label_107218;
        }
    }
    ctx->pc = 0x107204u;
label_107204:
    // 0x107204: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107204u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107208: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x107208u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x10720c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10720cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x107210: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x107210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x107214: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x107214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_107218:
    // 0x107218: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x107218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x10721c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x10721cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x107220: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x107220u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x107224: 0x31702  srl         $v0, $v1, 28
    ctx->pc = 0x107224u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x107228: 0x26033a70  addiu       $v1, $s0, 0x3A70
    ctx->pc = 0x107228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 14960));
    // 0x10722c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10722cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x107230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x107230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x107234: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x107234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107238: 0xc041b70  jal         func_106DC0
    ctx->pc = 0x107238u;
    SET_GPR_U32(ctx, 31, 0x107240u);
    ctx->pc = 0x10723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107238u;
    // 0x10723c: 0xae643c24  sw          $a0, 0x3C24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 15396), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DC0u, 0x107238u, 0x107240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107240u;
label_107240:
    // 0x107240: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x107240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x107244: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107248: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x107248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10724c: 0xae824498  sw          $v0, 0x4498($s4)
    ctx->pc = 0x10724cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17560), GPR_U32(ctx, 2));
    // 0x107250: 0xae43449c  sw          $v1, 0x449C($s2)
    ctx->pc = 0x107250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17564), GPR_U32(ctx, 3));
    // 0x107254: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x107254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107258: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107258u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10725c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10725cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107260: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107264: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10726c: 0x3e00008  jr          $ra
    ctx->pc = 0x10726Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10726Cu;
        // 0x107270: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10726Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107274u;
}
