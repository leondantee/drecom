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

// Function: entry_0037ca9c
// Address: 0x37ca9c - 0x37caf4
void entry_0037ca9c_0x37ca9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ca9c_0x37ca9c");
#endif

    switch (ctx->pc) {
        case 0x37cab8u: goto label_37cab8;
        case 0x37cad8u: goto label_37cad8;
        case 0x37caecu: goto label_37caec;
        default: break;
    }

    ctx->pc = 0x37ca9cu;

    // 0x37ca9c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x37ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37caa0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37caa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37caa4: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x37caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x37caa8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x37caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x37caac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x37caacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37cab0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x37CAB0u;
    SET_GPR_U32(ctx, 31, 0x37CAB8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x37CAB8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37CAB8u) { return; }
    ctx->pc = 0x37CAB8u;
label_37cab8:
    // 0x37cab8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x37cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37cabc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37CABCu;
    {
        const bool branch_taken_0x37cabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cabc) {
            ctx->pc = 0x37CAF4u;
            return;
        }
    }
    ctx->pc = 0x37CAC4u;
    // 0x37cac4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x37cac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37cac8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x37cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37cacc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x37caccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37cad0: 0xc040d62  jal         func_103588
    ctx->pc = 0x37CAD0u;
    SET_GPR_U32(ctx, 31, 0x37CAD8u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x37CAD8u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37CAD8u) { return; }
    ctx->pc = 0x37CAD8u;
label_37cad8:
    // 0x37cad8: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x37cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x37cadc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x37cadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37cae0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x37cae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37cae4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x37CAE4u;
    SET_GPR_U32(ctx, 31, 0x37CAECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x37CAECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37CAECu) { return; }
    ctx->pc = 0x37CAECu;
label_37caec:
    // 0x37caec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37CAECu;
    {
        const bool branch_taken_0x37caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37caec) {
            ctx->pc = 0x37CB04u;
            return;
        }
    }
    ctx->pc = 0x37CAF4u;
}
