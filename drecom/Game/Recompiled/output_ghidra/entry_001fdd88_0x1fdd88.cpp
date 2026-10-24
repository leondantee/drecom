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

// Function: entry_001fdd88
// Address: 0x1fdd88 - 0x1fde00
void entry_001fdd88_0x1fdd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdd88_0x1fdd88");
#endif

    ctx->pc = 0x1fdd88u;

    // 0x1fdd88: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdd8c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fdd8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fdd90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdd94: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fdd94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fdd98: 0x1020ffd4  beqz        $at, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1FDD98u;
    {
        const bool branch_taken_0x1fdd98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd98) {
            ctx->pc = 0x1FDCECu;
            return;
        }
    }
    ctx->pc = 0x1FDDA0u;
    // 0x1fdda0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdda4: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fdda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fdda8: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1fdda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1fddac: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1fddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1fddb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fddb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fddb4: 0x0  nop
    ctx->pc = 0x1fddb4u;
    // NOP
    // 0x1fddb8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1fddb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fddbc: 0x0  nop
    ctx->pc = 0x1fddbcu;
    // NOP
    // 0x1fddc0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1FDDC0u;
    {
        const bool branch_taken_0x1fddc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fddc0) {
            ctx->pc = 0x1FDE3Cu;
            return;
        }
    }
    ctx->pc = 0x1FDDC8u;
    // 0x1fddc8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fddcc: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fddd0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fddd4: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x1fddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fddd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fddd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fdddc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdde0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fdde0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fdde4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDDE4u;
    {
        const bool branch_taken_0x1fdde4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fdde4) {
            ctx->pc = 0x1FDE00u;
            return;
        }
    }
    ctx->pc = 0x1FDDECu;
    // 0x1fddec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fddecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fddf0: 0x0  nop
    ctx->pc = 0x1fddf0u;
    // NOP
    // 0x1fddf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fddf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fddf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDDF8u;
    {
        const bool branch_taken_0x1fddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fddf8) {
            ctx->pc = 0x1FDE1Cu;
            return;
        }
    }
    ctx->pc = 0x1FDE00u;
}
