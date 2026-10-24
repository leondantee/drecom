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

// Function: entry_0016a644
// Address: 0x16a644 - 0x16a694
void entry_0016a644_0x16a644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a644_0x16a644");
#endif

    switch (ctx->pc) {
        case 0x16a678u: goto label_16a678;
        case 0x16a68cu: goto label_16a68c;
        default: break;
    }

    ctx->pc = 0x16a644u;

    // 0x16a644: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x16a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a648: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a64c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16a64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a650: 0x0  nop
    ctx->pc = 0x16a650u;
    // NOP
    // 0x16a654: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a658: 0x0  nop
    ctx->pc = 0x16a658u;
    // NOP
    // 0x16a65c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x16A65Cu;
    {
        const bool branch_taken_0x16a65c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a65c) {
            ctx->pc = 0x16A694u;
            return;
        }
    }
    ctx->pc = 0x16A664u;
    // 0x16a664: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16a664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a668: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16a668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a66c: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x16a66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a670: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16A670u;
    SET_GPR_U32(ctx, 31, 0x16A678u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16A678u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A678u) { return; }
    ctx->pc = 0x16A678u;
label_16a678:
    // 0x16a678: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a67c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x16a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a680: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x16a680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a684: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16A684u;
    SET_GPR_U32(ctx, 31, 0x16A68Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16A68Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A68Cu) { return; }
    ctx->pc = 0x16A68Cu;
label_16a68c:
    // 0x16a68c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A68Cu;
    {
        const bool branch_taken_0x16a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a68c) {
            ctx->pc = 0x16A6A8u;
            return;
        }
    }
    ctx->pc = 0x16A694u;
}
