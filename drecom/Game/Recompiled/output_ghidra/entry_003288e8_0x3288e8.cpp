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

// Function: entry_003288e8
// Address: 0x3288e8 - 0x328960
void entry_003288e8_0x3288e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003288e8_0x3288e8");
#endif

    ctx->pc = 0x3288e8u;

    // 0x3288e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3288e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3288ec: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3288ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3288f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3288f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3288f4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x3288f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3288f8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3288F8u;
    {
        const bool branch_taken_0x3288f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3288f8) {
            ctx->pc = 0x3288ACu;
            return;
        }
    }
    ctx->pc = 0x328900u;
    // 0x328900: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328904: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x328904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328908: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x328908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x32890c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x32890cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x328910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328914: 0x0  nop
    ctx->pc = 0x328914u;
    // NOP
    // 0x328918: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x328918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32891c: 0x0  nop
    ctx->pc = 0x32891cu;
    // NOP
    // 0x328920: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x328920u;
    {
        const bool branch_taken_0x328920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x328920) {
            ctx->pc = 0x32899Cu;
            return;
        }
    }
    ctx->pc = 0x328928u;
    // 0x328928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32892c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x32892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328930: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328934: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x328934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328938: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x328938u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32893c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328940: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x328940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x328944: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x328944u;
    {
        const bool branch_taken_0x328944 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x328944) {
            ctx->pc = 0x328960u;
            return;
        }
    }
    ctx->pc = 0x32894Cu;
    // 0x32894c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32894cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328950: 0x0  nop
    ctx->pc = 0x328950u;
    // NOP
    // 0x328954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x328954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x328958: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x328958u;
    {
        const bool branch_taken_0x328958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328958) {
            ctx->pc = 0x32897Cu;
            return;
        }
    }
    ctx->pc = 0x328960u;
}
