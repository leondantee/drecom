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

// Function: entry_001b1300
// Address: 0x1b1300 - 0x1b1350
void entry_001b1300_0x1b1300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1300_0x1b1300");
#endif

    ctx->pc = 0x1b1300u;

    // 0x1b1300: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x1b1300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1b1304: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b1308: 0xafa404a0  sw          $a0, 0x4A0($sp)
    ctx->pc = 0x1b1308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 4));
    // 0x1b130c: 0x97a304ae  lhu         $v1, 0x4AE($sp)
    ctx->pc = 0x1b130cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1198)));
    // 0x1b1310: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1314: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b1314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b1318: 0x1460ff5d  bnez        $v1, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x1B1318u;
    {
        const bool branch_taken_0x1b1318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1318) {
            ctx->pc = 0x1B1090u;
            return;
        }
    }
    ctx->pc = 0x1B1320u;
    // 0x1b1320: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b1320u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b1324: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b1324u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1328: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b1328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b132c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b132cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1330: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b1330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b133c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b133cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1344: 0x27bd04c0  addiu       $sp, $sp, 0x4C0
    ctx->pc = 0x1b1344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x1b1348: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1350u;
}
