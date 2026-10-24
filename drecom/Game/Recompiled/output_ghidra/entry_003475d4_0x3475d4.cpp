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

// Function: entry_003475d4
// Address: 0x3475d4 - 0x34765c
void entry_003475d4_0x3475d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003475d4_0x3475d4");
#endif

    switch (ctx->pc) {
        case 0x3475f4u: goto label_3475f4;
        default: break;
    }

    ctx->pc = 0x3475d4u;

    // 0x3475d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3475d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3475d8: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x3475d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x3475dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3475dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3475e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3475e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3475e4: 0x14830178  bne         $a0, $v1, . + 4 + (0x178 << 2)
    ctx->pc = 0x3475E4u;
    {
        const bool branch_taken_0x3475e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3475e4) {
            ctx->pc = 0x347BC8u;
            return;
        }
    }
    ctx->pc = 0x3475ECu;
    // 0x3475ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3475ECu;
    SET_GPR_U32(ctx, 31, 0x3475F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3475ECu, 0x3475F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475F4u;
label_3475f4:
    // 0x3475f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3475f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3475f8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x3475f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3475fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3475fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347600: 0x14830171  bne         $a0, $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x347600u;
    {
        const bool branch_taken_0x347600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x347600) {
            ctx->pc = 0x347BC8u;
            return;
        }
    }
    ctx->pc = 0x347608u;
    // 0x347608: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34760c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x34760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347610: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x347610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x347614: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x347614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x347618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34761c: 0x0  nop
    ctx->pc = 0x34761cu;
    // NOP
    // 0x347620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347624: 0x0  nop
    ctx->pc = 0x347624u;
    // NOP
    // 0x347628: 0x45000167  bc1f        . + 4 + (0x167 << 2)
    ctx->pc = 0x347628u;
    {
        const bool branch_taken_0x347628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347628) {
            ctx->pc = 0x347BC8u;
            return;
        }
    }
    ctx->pc = 0x347630u;
    // 0x347630: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x347630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x347634: 0x2463a4e8  addiu       $v1, $v1, -0x5B18
    ctx->pc = 0x347634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943976));
    // 0x347638: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x347638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x34763c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34763cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x3AA4E8u));
    // 0x347640: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x347640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3AA4EAu));
    // 0x347644: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x347644u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x347648: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x347648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34764c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34764cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x347650: 0x2473dbc0  addiu       $s3, $v1, -0x2440
    ctx->pc = 0x347650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x347654: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x347654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347658: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x347658u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x34765cu;
}
