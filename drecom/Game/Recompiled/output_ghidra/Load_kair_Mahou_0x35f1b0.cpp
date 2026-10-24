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

// Function: Load_kair_Mahou
// Address: 0x35f1b0 - 0x35f284
void Load_kair_Mahou_0x35f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Load_kair_Mahou_0x35f1b0");
#endif

    switch (ctx->pc) {
        case 0x35f1d8u: goto label_35f1d8;
        case 0x35f238u: goto label_35f238;
        default: break;
    }

    ctx->pc = 0x35f1b0u;

    // 0x35f1b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35f1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35f1b4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x35f1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x35f1b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35f1bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35f1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35f1c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f1c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35f1c8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x35f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35f1cc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x35f1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35f1d0: 0xc099794  jal         func_265E50
    ctx->pc = 0x35F1D0u;
    SET_GPR_U32(ctx, 31, 0x35F1D8u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x35F1D0u, 0x35F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F1D8u;
label_35f1d8:
    // 0x35f1d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x35f1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35f1dc: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x35f1dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35f1e0: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x35f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x35f1e4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x35f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x35f1e8: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x35f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x35f1ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35f1f0: 0x8c631390  lw          $v1, 0x1390($v1)
    ctx->pc = 0x35f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x35f1f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x35f1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x35f1f8: 0xac23dd6c  sw          $v1, -0x2294($at)
    ctx->pc = 0x35f1f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDD6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDD6Cu, _value); } while (0);
    // 0x35f1fc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x35f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x35f200: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x35f200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x35f204: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x35f204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x35f208: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35f208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35f20c: 0x8c721390  lw          $s2, 0x1390($v1)
    ctx->pc = 0x35f20cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x35f210: 0x8e510058  lw          $s1, 0x58($s2)
    ctx->pc = 0x35f210u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x35f214: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x35f214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35f218: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x35f218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x35f21c: 0x240300b2  addiu       $v1, $zero, 0xB2
    ctx->pc = 0x35f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x35f220: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x35f220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x35f224: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x35f224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x35f228: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x35f228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x35f22c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x35f22cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f230: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35F230u;
    {
        const bool branch_taken_0x35f230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f230) {
            ctx->pc = 0x35F258u;
            goto label_35f258;
        }
    }
    ctx->pc = 0x35F238u;
label_35f238:
    // 0x35f238: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x35f238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x35f23c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x35f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35f240: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x35f240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35f244: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x35f244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x35f248: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x35f248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35f24c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x35f24cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f250: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35f250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35f254: 0x0  nop
    ctx->pc = 0x35f254u;
    // NOP
label_35f258:
    // 0x35f258: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x35f258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x35f25c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x35F25Cu;
    {
        const bool branch_taken_0x35f25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f25c) {
            ctx->pc = 0x35F238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f238;
        }
    }
    ctx->pc = 0x35F264u;
    // 0x35f264: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x35f264u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35f268: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35f268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f26c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35f26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f278: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35f27c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F284u;
}
