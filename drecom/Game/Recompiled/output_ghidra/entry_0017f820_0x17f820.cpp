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

// Function: entry_0017f820
// Address: 0x17f820 - 0x17f870
void entry_0017f820_0x17f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f820_0x17f820");
#endif

    switch (ctx->pc) {
        case 0x17f858u: goto label_17f858;
        default: break;
    }

    ctx->pc = 0x17f820u;

    // 0x17f820: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17f820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17f824: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x17f824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17f828: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x17f828u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x17f82c: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x17f82cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17f830: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17f830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17f834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17f838: 0x54182a  slt         $v1, $v0, $s4
    ctx->pc = 0x17f838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x17f83c: 0x1460fe95  bnez        $v1, . + 4 + (-0x16B << 2)
    ctx->pc = 0x17F83Cu;
    {
        const bool branch_taken_0x17f83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f83c) {
            ctx->pc = 0x17F294u;
            return;
        }
    }
    ctx->pc = 0x17F844u;
    // 0x17f844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f848: 0x3c01004a  lui         $at, 0x4A
    ctx->pc = 0x17f848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)74 << 16));
    // 0x17f84c: 0xa02214d2  sb          $v0, 0x14D2($at)
    ctx->pc = 0x17f84cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4A14D2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4A14D2u, _value); } while (0);
    // 0x17f850: 0xc0593e8  jal         func_164FA0
    ctx->pc = 0x17F850u;
    SET_GPR_U32(ctx, 31, 0x17F858u);
    ctx->pc = 0x164FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164FA0u, 0x17F850u, 0x17F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F858u;
label_17f858:
    // 0x17f858: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17f858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17f85c: 0xa420f138  sh          $zero, -0xEC8($at)
    ctx->pc = 0x17f85cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F138u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47F138u, _value); } while (0);
    // 0x17f860: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17f860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f864: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x17f864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x17f868: 0xac2324e8  sw          $v1, 0x24E8($at)
    ctx->pc = 0x17f868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4B24E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B24E8u, _value); } while (0);
    // 0x17f86c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x17f86cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x17f870u;
}
