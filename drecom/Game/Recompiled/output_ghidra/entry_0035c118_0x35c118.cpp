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

// Function: entry_0035c118
// Address: 0x35c118 - 0x35c178
void entry_0035c118_0x35c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035c118_0x35c118");
#endif

    switch (ctx->pc) {
        case 0x35c150u: goto label_35c150;
        case 0x35c170u: goto label_35c170;
        default: break;
    }

    ctx->pc = 0x35c118u;

    // 0x35c118: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c11c: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35c120: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c124: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35C124u;
    {
        const bool branch_taken_0x35c124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35c124) {
            ctx->pc = 0x35C178u;
            return;
        }
    }
    ctx->pc = 0x35C12Cu;
    // 0x35c12c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c130: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35c130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35c134: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35c134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35c138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35c138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35c13c: 0x24040429  addiu       $a0, $zero, 0x429
    ctx->pc = 0x35c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
    // 0x35c140: 0x24650110  addiu       $a1, $v1, 0x110
    ctx->pc = 0x35c140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x35c144: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35c144u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c148: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35C148u;
    SET_GPR_U32(ctx, 31, 0x35C150u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35C148u, 0x35C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C150u;
label_35c150:
    // 0x35c150: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c154: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35c154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c158: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35c158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35c15c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35c15cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c160: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c164: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35c164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35c168: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35C168u;
    SET_GPR_U32(ctx, 31, 0x35C170u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35C168u, 0x35C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C170u;
label_35c170:
    // 0x35c170: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35C170u;
    {
        const bool branch_taken_0x35c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c170) {
            ctx->pc = 0x35C1ACu;
            return;
        }
    }
    ctx->pc = 0x35C178u;
}
