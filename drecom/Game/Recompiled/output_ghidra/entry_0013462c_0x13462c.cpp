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

// Function: entry_0013462c
// Address: 0x13462c - 0x1346a8
void entry_0013462c_0x13462c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013462c_0x13462c");
#endif

    ctx->pc = 0x13462cu;

    // 0x13462c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134630: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134634: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x134634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13463c: 0x0  nop
    ctx->pc = 0x13463cu;
    // NOP
    // 0x134640: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134644: 0x0  nop
    ctx->pc = 0x134644u;
    // NOP
    // 0x134648: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134648u;
    {
        const bool branch_taken_0x134648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134648) {
            ctx->pc = 0x1346C0u;
            return;
        }
    }
    ctx->pc = 0x134650u;
    // 0x134650: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134654: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134658: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x134658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13465c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x13465cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134660: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134668: 0x0  nop
    ctx->pc = 0x134668u;
    // NOP
    // 0x13466c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13466cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134670: 0x0  nop
    ctx->pc = 0x134670u;
    // NOP
    // 0x134674: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134674u;
    {
        const bool branch_taken_0x134674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134674) {
            ctx->pc = 0x1346A8u;
            return;
        }
    }
    ctx->pc = 0x13467Cu;
    // 0x13467c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134680: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134684: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x134684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134688: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x134688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x13468c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x13468cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134694: 0x0  nop
    ctx->pc = 0x134694u;
    // NOP
    // 0x134698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13469c: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x13469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x1346a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1346A0u;
    {
        const bool branch_taken_0x1346a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1346a0) {
            ctx->pc = 0x134728u;
            return;
        }
    }
    ctx->pc = 0x1346A8u;
}
