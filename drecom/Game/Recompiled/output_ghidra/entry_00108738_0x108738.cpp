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

// Function: entry_00108738
// Address: 0x108738 - 0x1087b4
void entry_00108738_0x108738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108738_0x108738");
#endif

    ctx->pc = 0x108738u;

    // 0x108738: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x108738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x10873c: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x10873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x108740: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x108740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x108744: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x108744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x108748: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x108748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x10874c: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x10874cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x108750: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x108750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x108754: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x108754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x108758: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x108758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10875c: 0xde840020  ld          $a0, 0x20($s4)
    ctx->pc = 0x10875cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x108760: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x108760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x108764: 0x630f8  dsll        $a2, $a2, 3
    ctx->pc = 0x108764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x108768: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x108768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x10876c: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x10876cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x108770: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x108770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x108774: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x108774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x108778: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x108778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10877c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10877cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x108780: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x108780u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x108784: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x108784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108788: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x108788u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10878c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10878cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108790: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x108790u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108794: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x108794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108798: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x108798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10879c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10879cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1087a0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1087a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1087a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1087a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1087a8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1087a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1087ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1087ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1087B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087ACu;
        // 0x1087b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1087ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1087B4u;
}
