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

// Function: entry_001f7618
// Address: 0x1f7618 - 0x1f76ac
void entry_001f7618_0x1f7618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7618_0x1f7618");
#endif

    ctx->pc = 0x1f7618u;

    // 0x1f7618: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f761c: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x1f761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7620: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x1f7620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x1f7624: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x1f7624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x1f7628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f762c: 0x0  nop
    ctx->pc = 0x1f762cu;
    // NOP
    // 0x1f7630: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f7630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f7634: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f7634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x1f7638: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f763c: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x1f763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7640: 0x3c033c0e  lui         $v1, 0x3C0E
    ctx->pc = 0x1f7640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15374 << 16));
    // 0x1f7644: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x1f7644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x1f7648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f764c: 0x0  nop
    ctx->pc = 0x1f764cu;
    // NOP
    // 0x1f7650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f7650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f7654: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1f7654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x1f7658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f765c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7660: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7664: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1f7664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1f7668: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1f7668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1f766c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f766cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7670: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7674: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f7674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7678: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1f7678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1f767c: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1f767cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1f7680: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7684: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7688: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f7688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f768c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1f768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1f7690: 0x3c054020  lui         $a1, 0x4020
    ctx->pc = 0x1f7690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16416 << 16));
    // 0x1f7694: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f7694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7698: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f769c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f76a0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f76a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f76a4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1F76A4u;
    {
        const bool branch_taken_0x1f76a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f76a4) {
            ctx->pc = 0x1F7798u;
            return;
        }
    }
    ctx->pc = 0x1F76ACu;
}
