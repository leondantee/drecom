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

// Function: entry_0029f910
// Address: 0x29f910 - 0x29f974
void entry_0029f910_0x29f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f910_0x29f910");
#endif

    switch (ctx->pc) {
        case 0x29f954u: goto label_29f954;
        default: break;
    }

    ctx->pc = 0x29f910u;

    // 0x29f910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f914: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f918: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29f918u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f91c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f920: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f924: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x29f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29f928: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29f928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29f92c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29F92Cu;
    {
        const bool branch_taken_0x29f92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f92c) {
            ctx->pc = 0x29F974u;
            return;
        }
    }
    ctx->pc = 0x29F934u;
    // 0x29f934: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f938: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f93c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f940: 0x24060208  addiu       $a2, $zero, 0x208
    ctx->pc = 0x29f940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x29f944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f948: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f94c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F94Cu;
    SET_GPR_U32(ctx, 31, 0x29F954u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F94Cu, 0x29F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F954u;
label_29f954:
    // 0x29f954: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f958: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x29f958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f95c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x29f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x29f960: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x29f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x29f964: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29f964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29f968: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x29f968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x29f96c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29F96Cu;
    {
        const bool branch_taken_0x29f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f96c) {
            ctx->pc = 0x29F994u;
            return;
        }
    }
    ctx->pc = 0x29F974u;
}
