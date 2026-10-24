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

// Function: entry_001ad1c8
// Address: 0x1ad1c8 - 0x1ad258
void entry_001ad1c8_0x1ad1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad1c8_0x1ad1c8");
#endif

    switch (ctx->pc) {
        case 0x1ad1d8u: goto label_1ad1d8;
        case 0x1ad210u: goto label_1ad210;
        case 0x1ad224u: goto label_1ad224;
        default: break;
    }

    ctx->pc = 0x1ad1c8u;

    // 0x1ad1c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ad1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ad1cc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ad1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad1d0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x1AD1D0u;
    SET_GPR_U32(ctx, 31, 0x1AD1D8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x1AD1D8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AD1D8u) { return; }
    ctx->pc = 0x1AD1D8u;
label_1ad1d8:
    // 0x1ad1d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1ad1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ad1dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ad1dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad1e0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1ad1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1ad1e4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1ad1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ad1e8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ad1ec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ad1ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad1f0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1ad1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1ad1f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1ad1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ad1f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ad1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad1fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1ad1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1ad200: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1ad200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1ad204: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1ad204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ad208: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1AD208u;
    SET_GPR_U32(ctx, 31, 0x1AD210u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1AD210u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AD210u) { return; }
    ctx->pc = 0x1AD210u;
label_1ad210:
    // 0x1ad210: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ad210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad214: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ad214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad218: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1ad218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ad21c: 0xc040c60  jal         func_103180
    ctx->pc = 0x1AD21Cu;
    SET_GPR_U32(ctx, 31, 0x1AD224u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1AD224u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AD224u) { return; }
    ctx->pc = 0x1AD224u;
label_1ad224:
    // 0x1ad224: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad228: 0x12620045  beq         $s3, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1AD228u;
    {
        const bool branch_taken_0x1ad228 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad228) {
            ctx->pc = 0x1AD340u;
            return;
        }
    }
    ctx->pc = 0x1AD230u;
    // 0x1ad230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad234: 0x1262002c  beq         $s3, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AD234u;
    {
        const bool branch_taken_0x1ad234 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad234) {
            ctx->pc = 0x1AD2E8u;
            return;
        }
    }
    ctx->pc = 0x1AD23Cu;
    // 0x1ad23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad240: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AD240u;
    {
        const bool branch_taken_0x1ad240 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad240) {
            ctx->pc = 0x1AD290u;
            return;
        }
    }
    ctx->pc = 0x1AD248u;
    // 0x1ad248: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD248u;
    {
        const bool branch_taken_0x1ad248 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad248) {
            ctx->pc = 0x1AD258u;
            return;
        }
    }
    ctx->pc = 0x1AD250u;
    // 0x1ad250: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1AD250u;
    {
        const bool branch_taken_0x1ad250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad250) {
            ctx->pc = 0x1AD390u;
            return;
        }
    }
    ctx->pc = 0x1AD258u;
}
