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

// Function: entry_001cd648
// Address: 0x1cd648 - 0x1cd6e0
void entry_001cd648_0x1cd648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd648_0x1cd648");
#endif

    switch (ctx->pc) {
        case 0x1cd688u: goto label_1cd688;
        case 0x1cd694u: goto label_1cd694;
        case 0x1cd6c0u: goto label_1cd6c0;
        default: break;
    }

    ctx->pc = 0x1cd648u;

    // 0x1cd648: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd64c: 0x906209db  lbu         $v0, 0x9DB($v1)
    ctx->pc = 0x1cd64cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1cd650: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cd650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cd654: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1cd654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1cd658: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1CD658u;
    {
        const bool branch_taken_0x1cd658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd658) {
            ctx->pc = 0x1CD824u;
            return;
        }
    }
    ctx->pc = 0x1CD660u;
    // 0x1cd660: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cd660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd664: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd668: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cd668u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd66c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd670: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd674: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cd674u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd678: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd67c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd680: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CD680u;
    SET_GPR_U32(ctx, 31, 0x1CD688u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CD680u, 0x1CD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD688u;
label_1cd688:
    // 0x1cd688: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1cd688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd68c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CD68Cu;
    SET_GPR_U32(ctx, 31, 0x1CD694u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CD68Cu, 0x1CD694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD694u;
label_1cd694:
    // 0x1cd694: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd698: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd69c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1cd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cd6a0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cd6a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cd6a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd6a8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1cd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd6ac: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cd6acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd6b0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1cd6b4: 0x24679208  addiu       $a3, $v1, -0x6DF8
    ctx->pc = 0x1cd6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939144));
    // 0x1cd6b8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CD6B8u;
    SET_GPR_U32(ctx, 31, 0x1CD6C0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CD6B8u, 0x1CD6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6C0u;
label_1cd6c0:
    // 0x1cd6c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD6C0u;
    {
        const bool branch_taken_0x1cd6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd6c0) {
            ctx->pc = 0x1CD6E0u;
            return;
        }
    }
    ctx->pc = 0x1CD6C8u;
    // 0x1cd6c8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1cd6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd6cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd6d0: 0xa4461278  sh          $a2, 0x1278($v0)
    ctx->pc = 0x1cd6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 6));
    // 0x1cd6d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd6d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd6dc: 0xac251a68  sw          $a1, 0x1A68($at)
    ctx->pc = 0x1cd6dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1cd6e0u;
}
