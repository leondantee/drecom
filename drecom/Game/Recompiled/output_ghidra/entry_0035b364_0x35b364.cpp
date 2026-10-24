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

// Function: entry_0035b364
// Address: 0x35b364 - 0x35b3bc
void entry_0035b364_0x35b364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b364_0x35b364");
#endif

    switch (ctx->pc) {
        case 0x35b388u: goto label_35b388;
        default: break;
    }

    ctx->pc = 0x35b364u;

    // 0x35b364: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35b364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35b368: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35b368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35b36c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35b36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35b370: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b374: 0x2404042f  addiu       $a0, $zero, 0x42F
    ctx->pc = 0x35b374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1071));
    // 0x35b378: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x35b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x35b37c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35b37cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35b380: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35B380u;
    SET_GPR_U32(ctx, 31, 0x35B388u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35B380u, 0x35B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B388u;
label_35b388:
    // 0x35b388: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b38c: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35b390: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35b394: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35B394u;
    {
        const bool branch_taken_0x35b394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b394) {
            ctx->pc = 0x35B3BCu;
            return;
        }
    }
    ctx->pc = 0x35B39Cu;
    // 0x35b39c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b3a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b3a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35b3a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35b3a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35b3ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35b3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b3b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35b3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35b3b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35B3B4u;
    SET_GPR_U32(ctx, 31, 0x35B3BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35B3B4u, 0x35B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B3BCu;
}
