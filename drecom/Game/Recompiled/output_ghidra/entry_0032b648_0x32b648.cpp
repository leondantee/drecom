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

// Function: entry_0032b648
// Address: 0x32b648 - 0x32b6a4
void entry_0032b648_0x32b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b648_0x32b648");
#endif

    switch (ctx->pc) {
        case 0x32b67cu: goto label_32b67c;
        case 0x32b69cu: goto label_32b69c;
        default: break;
    }

    ctx->pc = 0x32b648u;

    // 0x32b648: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32b648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32b64c: 0x8c221a3c  lw          $v0, 0x1A3C($at)
    ctx->pc = 0x32b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32b650: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32b650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32b654: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x32b658: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32B658u;
    {
        const bool branch_taken_0x32b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b658) {
            ctx->pc = 0x32B6A4u;
            return;
        }
    }
    ctx->pc = 0x32B660u;
    // 0x32b660: 0x92c228ba  lbu         $v0, 0x28BA($s6)
    ctx->pc = 0x32b660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32b664: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32b664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32b668: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32b668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32b66c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x32b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32b670: 0xc44c28f0  lwc1        $f12, 0x28F0($v0)
    ctx->pc = 0x32b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32b674: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32B674u;
    SET_GPR_U32(ctx, 31, 0x32B67Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32B674u, 0x32B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B67Cu;
label_32b67c:
    // 0x32b67c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x32b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x32b680: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x32b680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x32b684: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x32b684u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32b688: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x32b688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32b68c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x32b68cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x32b690: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32b690u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b694: 0xc0ca3d8  jal         func_328F60
    ctx->pc = 0x32B694u;
    SET_GPR_U32(ctx, 31, 0x32B69Cu);
    ctx->pc = 0x328F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F60u, 0x32B694u, 0x32B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B69Cu;
label_32b69c:
    // 0x32b69c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32B69Cu;
    {
        const bool branch_taken_0x32b69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b69c) {
            ctx->pc = 0x32B6E0u;
            return;
        }
    }
    ctx->pc = 0x32B6A4u;
}
