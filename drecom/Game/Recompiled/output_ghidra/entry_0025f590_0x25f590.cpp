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

// Function: entry_0025f590
// Address: 0x25f590 - 0x25f5e4
void entry_0025f590_0x25f590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f590_0x25f590");
#endif

    switch (ctx->pc) {
        case 0x25f5dcu: goto label_25f5dc;
        default: break;
    }

    ctx->pc = 0x25f590u;

    // 0x25f590: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f594: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f598: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x25f598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x25f59c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x25F59Cu;
    {
        const bool branch_taken_0x25f59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f59c) {
            ctx->pc = 0x25F610u;
            return;
        }
    }
    ctx->pc = 0x25F5A4u;
    // 0x25f5a4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f5a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f5a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f5ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25f5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25f5b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F5B0u;
    {
        const bool branch_taken_0x25f5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f5b0) {
            ctx->pc = 0x25F5E4u;
            return;
        }
    }
    ctx->pc = 0x25F5B8u;
    // 0x25f5b8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f5b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f5bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f5c0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25f5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x25f5c4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F5C4u;
    {
        const bool branch_taken_0x25f5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f5c4) {
            ctx->pc = 0x25F5F8u;
            return;
        }
    }
    ctx->pc = 0x25F5CCu;
    // 0x25f5cc: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x25f5ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25f5d0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25f5d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f5d4: 0xc067634  jal         func_19D8D0
    ctx->pc = 0x25F5D4u;
    SET_GPR_U32(ctx, 31, 0x25F5DCu);
    ctx->pc = 0x19D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D8D0u, 0x25F5D4u, 0x25F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5DCu;
label_25f5dc:
    // 0x25f5dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F5DCu;
    {
        const bool branch_taken_0x25f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f5dc) {
            ctx->pc = 0x25F5F8u;
            return;
        }
    }
    ctx->pc = 0x25F5E4u;
}
