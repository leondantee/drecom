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

// Function: entry_0032e154
// Address: 0x32e154 - 0x32e190
void entry_0032e154_0x32e154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e154_0x32e154");
#endif

    ctx->pc = 0x32e154u;

    // 0x32e154: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32e154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32e158: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e15c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32e160: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32e160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32e164: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x32e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x32e168: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32e168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32e16c: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x32e16cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x32e170: 0x92422830  lbu         $v0, 0x2830($s2)
    ctx->pc = 0x32e170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10288)));
    // 0x32e174: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E174u;
    {
        const bool branch_taken_0x32e174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e174) {
            ctx->pc = 0x32E190u;
            return;
        }
    }
    ctx->pc = 0x32E17Cu;
    // 0x32e17c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32e180: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32e180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32e184: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32e184u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32e188: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32E188u;
    SET_GPR_U32(ctx, 31, 0x32E190u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32E188u, 0x32E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E190u;
}
