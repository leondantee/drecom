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

// Function: entry_0012e220
// Address: 0x12e220 - 0x12e270
void entry_0012e220_0x12e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e220_0x12e220");
#endif

    switch (ctx->pc) {
        case 0x12e268u: goto label_12e268;
        default: break;
    }

    ctx->pc = 0x12e220u;

    // 0x12e220: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12e220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12e224: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x12e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x12e228: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12e228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12e22c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x12e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x12e230: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e234: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12e234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12e238: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12e23c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12e23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12e240: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12E240u;
    {
        const bool branch_taken_0x12e240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e240) {
            ctx->pc = 0x12E270u;
            return;
        }
    }
    ctx->pc = 0x12E248u;
    // 0x12e248: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e24c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e250: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12e250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12e254: 0x24063c42  addiu       $a2, $zero, 0x3C42
    ctx->pc = 0x12e254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15426));
    // 0x12e258: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12e258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e25c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12e25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12e260: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12E260u;
    SET_GPR_U32(ctx, 31, 0x12E268u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12E260u, 0x12E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E268u;
label_12e268:
    // 0x12e268: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12E268u;
    {
        const bool branch_taken_0x12e268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e268) {
            ctx->pc = 0x12E290u;
            return;
        }
    }
    ctx->pc = 0x12E270u;
}
