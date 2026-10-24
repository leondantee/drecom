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

// Function: entry_003275e0
// Address: 0x3275e0 - 0x327658
void entry_003275e0_0x3275e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003275e0_0x3275e0");
#endif

    ctx->pc = 0x3275e0u;

    // 0x3275e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3275e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3275e4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3275e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3275e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3275e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3275ec: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x3275ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3275f0: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3275F0u;
    {
        const bool branch_taken_0x3275f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3275f0) {
            ctx->pc = 0x3275A8u;
            return;
        }
    }
    ctx->pc = 0x3275F8u;
    // 0x3275f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3275f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3275fc: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x3275fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327600: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x327600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x327604: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x327604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x327608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32760c: 0x0  nop
    ctx->pc = 0x32760cu;
    // NOP
    // 0x327610: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x327610u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327614: 0x0  nop
    ctx->pc = 0x327614u;
    // NOP
    // 0x327618: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x327618u;
    {
        const bool branch_taken_0x327618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x327618) {
            ctx->pc = 0x327694u;
            return;
        }
    }
    ctx->pc = 0x327620u;
    // 0x327620: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327624: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x327624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327628: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32762c: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x32762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327630: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x327630u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x327634: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327638: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x327638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x32763c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32763Cu;
    {
        const bool branch_taken_0x32763c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x32763c) {
            ctx->pc = 0x327658u;
            return;
        }
    }
    ctx->pc = 0x327644u;
    // 0x327644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327648: 0x0  nop
    ctx->pc = 0x327648u;
    // NOP
    // 0x32764c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32764cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x327650: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x327650u;
    {
        const bool branch_taken_0x327650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327650) {
            ctx->pc = 0x327674u;
            return;
        }
    }
    ctx->pc = 0x327658u;
}
