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

// Function: entry_00264ad0
// Address: 0x264ad0 - 0x264b84
void entry_00264ad0_0x264ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264ad0_0x264ad0");
#endif

    switch (ctx->pc) {
        case 0x264b3cu: goto label_264b3c;
        case 0x264b5cu: goto label_264b5c;
        default: break;
    }

    ctx->pc = 0x264ad0u;

    // 0x264ad0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x264ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x264ad4: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x264ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x264ad8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x264ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x264adc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x264adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x264ae0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x264ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x264ae4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x264ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x264ae8: 0xac430a68  sw          $v1, 0xA68($v0)
    ctx->pc = 0x264ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2664), GPR_U32(ctx, 3));
    // 0x264aec: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x264aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x264af0: 0x8c500a68  lw          $s0, 0xA68($v0)
    ctx->pc = 0x264af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x264af4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264af8: 0x9022e650  lbu         $v0, -0x19B0($at)
    ctx->pc = 0x264af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E650u));
    // 0x264afc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x264afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x264b00: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x264b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x264b04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x264b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264b08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x264b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x264b0c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x264b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x264b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x264b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264b14: 0xac501390  sw          $s0, 0x1390($v0)
    ctx->pc = 0x264b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5008), GPR_U32(ctx, 16));
    // 0x264b18: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x264b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x264b1c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x264b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x264b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x264b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264b24: 0xac5001ac  sw          $s0, 0x1AC($v0)
    ctx->pc = 0x264b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 16));
    // 0x264b28: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x264b28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x264b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x264b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264b30: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x264b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x264b34: 0xc046314  jal         func_118C50
    ctx->pc = 0x264B34u;
    SET_GPR_U32(ctx, 31, 0x264B3Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x264B3Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x264B3Cu) { return; }
    ctx->pc = 0x264B3Cu;
label_264b3c:
    // 0x264b3c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x264b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x264b40: 0x24430a68  addiu       $v1, $v0, 0xA68
    ctx->pc = 0x264b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x264b44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264b48: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x264b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x264b4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x264b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x264b50: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x264b50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x264b54: 0xc09909c  jal         func_264270
    ctx->pc = 0x264B54u;
    SET_GPR_U32(ctx, 31, 0x264B5Cu);
    ctx->pc = 0x264270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264270u, 0x264B54u, 0x264B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264B5Cu;
label_264b5c:
    // 0x264b5c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264b60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264b64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264b68: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x264B68u;
    {
        const bool branch_taken_0x264b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x264b68) {
            ctx->pc = 0x264B84u;
            return;
        }
    }
    ctx->pc = 0x264B70u;
    // 0x264b70: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264b74: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264b78: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264b7c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x264B7Cu;
    {
        const bool branch_taken_0x264b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b7c) {
            ctx->pc = 0x264F90u;
            return;
        }
    }
    ctx->pc = 0x264B84u;
}
