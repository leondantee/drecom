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

// Function: entry_00291690
// Address: 0x291690 - 0x2916e8
void entry_00291690_0x291690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291690_0x291690");
#endif

    switch (ctx->pc) {
        case 0x2916e0u: goto label_2916e0;
        default: break;
    }

    ctx->pc = 0x291690u;

    // 0x291690: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x291690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x291694: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x291694u;
    {
        const bool branch_taken_0x291694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291694) {
            ctx->pc = 0x2916E8u;
            return;
        }
    }
    ctx->pc = 0x29169Cu;
    // 0x29169c: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x29169cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916a0: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x2916a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916a4: 0x8fa80200  lw          $t0, 0x200($sp)
    ctx->pc = 0x2916a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916a8: 0x8fa90200  lw          $t1, 0x200($sp)
    ctx->pc = 0x2916a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916ac: 0x8faa0200  lw          $t2, 0x200($sp)
    ctx->pc = 0x2916acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916b0: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x2916b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916b4: 0xc7ac01e8  lwc1        $f12, 0x1E8($sp)
    ctx->pc = 0x2916b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2916b8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2916b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2916bc: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x2916bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x2916c0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2916c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2916c4: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x2916c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2916c8: 0x25080044  addiu       $t0, $t0, 0x44
    ctx->pc = 0x2916c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
    // 0x2916cc: 0x25290084  addiu       $t1, $t1, 0x84
    ctx->pc = 0x2916ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 132));
    // 0x2916d0: 0x254a00c4  addiu       $t2, $t2, 0xC4
    ctx->pc = 0x2916d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 196));
    // 0x2916d4: 0x246b0104  addiu       $t3, $v1, 0x104
    ctx->pc = 0x2916d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x2916d8: 0xc0a4450  jal         func_291140
    ctx->pc = 0x2916D8u;
    SET_GPR_U32(ctx, 31, 0x2916E0u);
    ctx->pc = 0x291140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291140u, 0x2916D8u, 0x2916E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2916E0u;
label_2916e0:
    // 0x2916e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2916E0u;
    {
        const bool branch_taken_0x2916e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2916e0) {
            ctx->pc = 0x291708u;
            return;
        }
    }
    ctx->pc = 0x2916E8u;
}
