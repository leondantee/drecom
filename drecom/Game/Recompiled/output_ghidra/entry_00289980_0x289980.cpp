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

// Function: entry_00289980
// Address: 0x289980 - 0x289a00
void entry_00289980_0x289980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289980_0x289980");
#endif

    switch (ctx->pc) {
        case 0x2899ccu: goto label_2899cc;
        default: break;
    }

    ctx->pc = 0x289980u;

    // 0x289980: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x289980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x289984: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x289984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x289988: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x289988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x28998c: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x28998cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x289990: 0x34831043  ori         $v1, $a0, 0x1043
    ctx->pc = 0x289990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4163);
    // 0x289994: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x289994u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x289998: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x289998u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x28999c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x28999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2899a0: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2899a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2899a4: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x2899a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2899a8: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x2899a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2899ac: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2899acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2899b0: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x2899b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x2899b4: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x2899b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2899b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2899b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2899bc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2899bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2899c0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2899c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2899c4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2899C4u;
    SET_GPR_U32(ctx, 31, 0x2899CCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2899C4u, 0x2899CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899CCu;
label_2899cc:
    // 0x2899cc: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x2899ccu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2899d0: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x2899d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2899d4: 0x25460010  addiu       $a2, $t2, 0x10
    ctx->pc = 0x2899d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x2899d8: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x2899d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x2899dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2899dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2899e0: 0x24675f70  addiu       $a3, $v1, 0x5F70
    ctx->pc = 0x2899e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24432));
    // 0x2899e4: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x2899e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2899e8: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x2899e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x2899ec: 0x250661b8  addiu       $a2, $t0, 0x61B8
    ctx->pc = 0x2899ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 25016));
    // 0x2899f0: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x2899f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x2899f4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2899f4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2899f8: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x2899F8u;
    {
        const bool branch_taken_0x2899f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2899f8) {
            ctx->pc = 0x28A020u;
            return;
        }
    }
    ctx->pc = 0x289A00u;
}
