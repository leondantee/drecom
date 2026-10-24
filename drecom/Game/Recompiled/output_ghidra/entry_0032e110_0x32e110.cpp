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

// Function: entry_0032e110
// Address: 0x32e110 - 0x32e154
void entry_0032e110_0x32e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e110_0x32e110");
#endif

    ctx->pc = 0x32e110u;

    // 0x32e110: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32e110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32e114: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e118: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32e118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32e11c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32e120: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x32e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x32e124: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32e124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32e128: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x32e128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x32e12c: 0x3442080a  ori         $v0, $v0, 0x80A
    ctx->pc = 0x32e12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2058);
    // 0x32e130: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x32e130u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x32e134: 0x92422830  lbu         $v0, 0x2830($s2)
    ctx->pc = 0x32e134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10288)));
    // 0x32e138: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E138u;
    {
        const bool branch_taken_0x32e138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e138) {
            ctx->pc = 0x32E154u;
            return;
        }
    }
    ctx->pc = 0x32E140u;
    // 0x32e140: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32e144: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32e144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32e148: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32e148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32e14c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32E14Cu;
    SET_GPR_U32(ctx, 31, 0x32E154u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32E14Cu, 0x32E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E154u;
}
