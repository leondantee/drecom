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

// Function: entry_00107218
// Address: 0x107218 - 0x107274
void entry_00107218_0x107218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107218_0x107218");
#endif

    switch (ctx->pc) {
        case 0x107240u: goto label_107240;
        default: break;
    }

    ctx->pc = 0x107218u;

    // 0x107218: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x107218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x10721c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x10721cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x107220: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x107220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
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
