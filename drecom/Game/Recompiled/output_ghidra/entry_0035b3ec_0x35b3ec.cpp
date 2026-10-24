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

// Function: entry_0035b3ec
// Address: 0x35b3ec - 0x35b418
void entry_0035b3ec_0x35b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b3ec_0x35b3ec");
#endif

    switch (ctx->pc) {
        case 0x35b40cu: goto label_35b40c;
        default: break;
    }

    ctx->pc = 0x35b3ecu;

    // 0x35b3ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b3f0: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35b3f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35b3f8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35B3F8u;
    {
        const bool branch_taken_0x35b3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b3f8) {
            ctx->pc = 0x35B418u;
            return;
        }
    }
    ctx->pc = 0x35B400u;
    // 0x35b400: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b404: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35B404u;
    SET_GPR_U32(ctx, 31, 0x35B40Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35B404u, 0x35B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B40Cu;
label_35b40c:
    // 0x35b40c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b410: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35B410u;
    SET_GPR_U32(ctx, 31, 0x35B418u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35B410u, 0x35B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B418u;
}
