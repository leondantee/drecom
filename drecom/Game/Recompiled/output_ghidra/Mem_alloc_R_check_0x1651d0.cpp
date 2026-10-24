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

// Function: Mem_alloc_R_check
// Address: 0x1651d0 - 0x165264
void Mem_alloc_R_check_0x1651d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mem_alloc_R_check_0x1651d0");
#endif

    switch (ctx->pc) {
        case 0x165204u: goto label_165204;
        default: break;
    }

    ctx->pc = 0x1651d0u;

    // 0x1651d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1651d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1651d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1651d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1651d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1651d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1651dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1651dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1651e0: 0x3c0301ef  lui         $v1, 0x1EF
    ctx->pc = 0x1651e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)495 << 16));
    // 0x1651e4: 0x3471fff0  ori         $s1, $v1, 0xFFF0
    ctx->pc = 0x1651e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x1651e8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1651e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1651ec: 0x24705470  addiu       $s0, $v1, 0x5470
    ctx->pc = 0x1651ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21616));
    // 0x1651f0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1651f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F547Cu));
    // 0x1651f4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1651F4u;
    {
        const bool branch_taken_0x1651f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651f4) {
            ctx->pc = 0x165240u;
            goto label_165240;
        }
    }
    ctx->pc = 0x1651FCu;
    // 0x1651fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1651FCu;
    {
        const bool branch_taken_0x1651fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651fc) {
            ctx->pc = 0x165218u;
            goto label_165218;
        }
    }
    ctx->pc = 0x165204u;
label_165204:
    // 0x165204: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x165204u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165208: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x165208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16520c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x165210: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x165210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x165214: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x165214u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_165218:
    // 0x165218: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x165218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16521c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16521Cu;
    {
        const bool branch_taken_0x16521c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16521c) {
            ctx->pc = 0x165204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165204;
        }
    }
    ctx->pc = 0x165224u;
    // 0x165224: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x165224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165228: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x165228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16522c: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x16522cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x165230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165234: 0xac230aec  sw          $v1, 0xAEC($at)
    ctx->pc = 0x165234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AECu, _value); } while (0);
    // 0x165238: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165238u;
    {
        const bool branch_taken_0x165238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165238) {
            ctx->pc = 0x16524Cu;
            goto label_16524c;
        }
    }
    ctx->pc = 0x165240u;
label_165240:
    // 0x165240: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x165240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x165244: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165248: 0xac230aec  sw          $v1, 0xAEC($at)
    ctx->pc = 0x165248u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AECu, _value); } while (0);
label_16524c:
    // 0x16524c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16524cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165258: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x165258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16525c: 0x3e00008  jr          $ra
    ctx->pc = 0x16525Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16525Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165264u;
}
