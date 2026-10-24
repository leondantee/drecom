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

// Function: entry_0016aa84
// Address: 0x16aa84 - 0x16aaf4
void entry_0016aa84_0x16aa84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aa84_0x16aa84");
#endif

    switch (ctx->pc) {
        case 0x16aa9cu: goto label_16aa9c;
        case 0x16aab8u: goto label_16aab8;
        case 0x16aac8u: goto label_16aac8;
        default: break;
    }

    ctx->pc = 0x16aa84u;

    // 0x16aa84: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16aa88: 0x2444aaf0  addiu       $a0, $v0, -0x5510
    ctx->pc = 0x16aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16aa8c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x16aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16aa90: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x16aa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16aa94: 0xc040c80  jal         func_103200
    ctx->pc = 0x16AA94u;
    SET_GPR_U32(ctx, 31, 0x16AA9Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16AA9Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16AA9Cu) { return; }
    ctx->pc = 0x16AA9Cu;
label_16aa9c:
    // 0x16aa9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16aa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16aaa0: 0x8c330df0  lw          $s3, 0xDF0($at)
    ctx->pc = 0x16aaa0u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5D0DF0u));
    // 0x16aaa4: 0x26740010  addiu       $s4, $s3, 0x10
    ctx->pc = 0x16aaa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x16aaa8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16aaac: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x16aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16aab0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16AAB0u;
    SET_GPR_U32(ctx, 31, 0x16AAB8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16AAB8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16AAB8u) { return; }
    ctx->pc = 0x16AAB8u;
label_16aab8:
    // 0x16aab8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16aabc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x16aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16aac0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16AAC0u;
    SET_GPR_U32(ctx, 31, 0x16AAC8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16AAC8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16AAC8u) { return; }
    ctx->pc = 0x16AAC8u;
label_16aac8:
    // 0x16aac8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16aacc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16aad0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aad4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AAD4u;
    {
        const bool branch_taken_0x16aad4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16aad4) {
            ctx->pc = 0x16AAF4u;
            return;
        }
    }
    ctx->pc = 0x16AADCu;
    // 0x16aadc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16aae0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16aae4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aae8: 0x28023  negu        $s0, $v0
    ctx->pc = 0x16aae8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x16aaec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AAECu;
    {
        const bool branch_taken_0x16aaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aaec) {
            ctx->pc = 0x16AB00u;
            return;
        }
    }
    ctx->pc = 0x16AAF4u;
}
