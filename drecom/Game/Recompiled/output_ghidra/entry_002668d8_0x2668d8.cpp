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

// Function: entry_002668d8
// Address: 0x2668d8 - 0x266948
void entry_002668d8_0x2668d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002668d8_0x2668d8");
#endif

    ctx->pc = 0x2668d8u;

    // 0x2668d8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2668d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2668dc: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2668dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2668e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2668e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2668e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2668e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2668e8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2668e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2668ec: 0x1460ff12  bnez        $v1, . + 4 + (-0xEE << 2)
    ctx->pc = 0x2668ECu;
    {
        const bool branch_taken_0x2668ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2668ec) {
            ctx->pc = 0x266538u;
            return;
        }
    }
    ctx->pc = 0x2668F4u;
    // 0x2668f4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2668f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2668f8: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2668f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2668fc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2668fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x266900: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x266900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x266904: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x266904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x266908: 0x27c40a68  addiu       $a0, $fp, 0xA68
    ctx->pc = 0x266908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 2664));
    // 0x26690c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266910: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x266910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x266914: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x266914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x266918: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x266918u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26691c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26691cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x266920: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x266920u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266924: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x266924u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266928: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x266928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26692c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26692cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26693c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x26693cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x266940: 0x3e00008  jr          $ra
    ctx->pc = 0x266940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266948u;
}
