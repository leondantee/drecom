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

// Function: entry_002f63ac
// Address: 0x2f63ac - 0x2f6428
void entry_002f63ac_0x2f63ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f63ac_0x2f63ac");
#endif

    switch (ctx->pc) {
        case 0x2f63f4u: goto label_2f63f4;
        default: break;
    }

    ctx->pc = 0x2f63acu;

    // 0x2f63ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f63acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f63b0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f63b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f63b8: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F63B8u;
    {
        const bool branch_taken_0x2f63b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f63b8) {
            ctx->pc = 0x2F6428u;
            return;
        }
    }
    ctx->pc = 0x2F63C0u;
    // 0x2f63c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f63c4: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2f63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2f63c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f63c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f63cc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f63d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f63d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f63d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f63d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f63d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f63dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f63dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f63e0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2f63e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f63e4: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2f63e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f63e8: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x2f63e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f63ec: 0xc0c49f0  jal         func_3127C0
    ctx->pc = 0x2F63ECu;
    SET_GPR_U32(ctx, 31, 0x2F63F4u);
    ctx->pc = 0x3127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127C0u, 0x2F63ECu, 0x2F63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F63F4u;
label_2f63f4:
    // 0x2f63f4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f63f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f63f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f63f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f63fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6400: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2f6400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2f6404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f6404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6408: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f6408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f640c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f640cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6410: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f6410u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6414: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2f6414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6418: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2f6418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f641c: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x2f641cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f6420: 0xc0c49f0  jal         func_3127C0
    ctx->pc = 0x2F6420u;
    SET_GPR_U32(ctx, 31, 0x2F6428u);
    ctx->pc = 0x3127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127C0u, 0x2F6420u, 0x2F6428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6428u;
}
