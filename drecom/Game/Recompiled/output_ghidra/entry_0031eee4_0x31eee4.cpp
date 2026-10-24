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

// Function: entry_0031eee4
// Address: 0x31eee4 - 0x31ef50
void entry_0031eee4_0x31eee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031eee4_0x31eee4");
#endif

    ctx->pc = 0x31eee4u;

    // 0x31eee4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x31eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31eee8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31eee8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31eeec: 0x260212f0  addiu       $v0, $s0, 0x12F0
    ctx->pc = 0x31eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4848));
    // 0x31eef0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31eef4: 0x97a20070  lhu         $v0, 0x70($sp)
    ctx->pc = 0x31eef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31eef8: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x31eef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31eefc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x31eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31ef00: 0xae021294  sw          $v0, 0x1294($s0)
    ctx->pc = 0x31ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4756), GPR_U32(ctx, 2));
    // 0x31ef04: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31ef08: 0xae0212a0  sw          $v0, 0x12A0($s0)
    ctx->pc = 0x31ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4768), GPR_U32(ctx, 2));
    // 0x31ef0c: 0x8e031298  lw          $v1, 0x1298($s0)
    ctx->pc = 0x31ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4760)));
    // 0x31ef10: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31ef14: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31ef14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31ef18: 0xae021298  sw          $v0, 0x1298($s0)
    ctx->pc = 0x31ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 2));
    // 0x31ef1c: 0x8e031298  lw          $v1, 0x1298($s0)
    ctx->pc = 0x31ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4760)));
    // 0x31ef20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31ef24: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31ef24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31ef28: 0xae021298  sw          $v0, 0x1298($s0)
    ctx->pc = 0x31ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 2));
    // 0x31ef2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ef30: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x31ef30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ef34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31ef34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ef38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31ef38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ef3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ef3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ef40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ef40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ef44: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x31ef44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x31ef48: 0x3e00008  jr          $ra
    ctx->pc = 0x31EF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EF50u;
}
